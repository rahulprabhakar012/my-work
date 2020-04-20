#include<bits/stdc++.h>
#include<iostream>
#include<list>
#define MAX 1001
using namespace std;
list <pair<int,int> >adj[MAX];
list<pair<int,int> >::iterator it;
bool visited[MAX];

void addedge(int u,int v,int w){
	adj[u].push_back(make_pair(v,w));
	//adj[v].push_back(make_pair(u,w));
}
void dij(int n,int s){
		priority_queue <pair<int,int>, vector<pair<int,int> >, greater<pair<int,int> > > q;
		int dist[n];
		bool f[n];
		for(int i=0;i<=n;i++){
			dist[i]=32667;
			f[i]=false;
		}
		q.push(make_pair(0,s));
		dist[s]=0;
		while(!q.empty()){
			int u=q.top().second;
			q.pop();
			f[u]=false;
			for(it=adj[u].begin();it!=adj[u].end();++it){
				int v=(*it).first;
				int wt=(*it).second;
				if(f[v]==false&&dist[v]>dist[u]+wt){
					dist[v]=dist[u]+wt;
					q.push(make_pair(dist[v],v));
				}
			}
		}
		for(int i=0;i<=n;i++){
			cout<<"shortest dist. source to "<<i<<" is "<<dist[i]<<endl;
		}
}

int main(){
	int n;
	cin>>n;
	while(1){
		int u,v,w;
		cin>>u>>v>>w;
		addedge(u,v,w);
		cout<<"want more edge  0  or 1\n";
		int j;
		cin>>j;
		if(j==0)
		break;
	}
	cout<<"enter source\n";
	int r;
	cin>>r;
	dij(n,r);
}
