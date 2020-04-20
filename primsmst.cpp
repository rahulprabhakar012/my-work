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
	adj[v].push_back(make_pair(u,w));
}
void pmst(int r,int n){
	int key[n];
	int parent[n];
	bool inmst[n];
	for(int i=0;i<=n;i++){
		key[i]=32676;
		parent[i]=-1;
		inmst[i]=false;
	}	
	key[r]=0;
	priority_queue <pair<int,int>, vector<pair<int,int> >, greater<pair<int,int> > > q;
	 q.push(make_pair(0,r));
	 while(!q.empty()){
	 	int u=q.top().second;
	 	q.pop();
	 	inmst[u]=true;
	 	for(it=adj[u].begin();it!=adj[u].end();++it){
	 		int v=(*it).first;
	 		int wt=(*it).second;
	 		if(inmst[v]==false&&key[v]>wt){
	 			key[v]=wt;
	 			parent[v]=u;
	 			q.push(make_pair(key[v],v));
			 }
		 }
	 }
	 
	 for(int i=0;i<=n;i++){
	 	cout<<"parent of "<<i<<"="<<parent[i]<<"with wt"<<key[i]<<endl;
	
	
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
	cout<<"enter root\n";
	int r;
	cin>>r;
	pmst(r,n);
}
