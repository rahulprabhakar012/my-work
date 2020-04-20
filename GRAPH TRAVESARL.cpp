#include<bits/stdc++.h>
#include<iostream>
#include<list>
#define MAX 1001
using namespace std;
list <int>adj[MAX];
list<int>::iterator it;
bool visited[MAX];
int dist[MAX];
void init(int n)
{
for(int i=0;i<=n;i++)
    {
    visited[i]=false;
    dist[i]=0;
    //adj[i].clear();
   }
}
void addEdge(int u,int v)
{
    adj[u].push_back(v);
    //adj[v].push_back(u);
}
void bfs(int src)
{
    queue<int>q;
    q.push(src);
    visited[src]=true;
    while(!q.empty())
    {
    int s=q.front();
      cout<<s<<" ";
        q.pop();
        for(it=adj[s].begin();it!=adj[s].end();++it)
           {
                if(!visited[*it])
                {
                    visited[*it]=true;
                    dist[*it]=dist[s]+1;
                   // cout<<"dist for source "<<s<<" was= "<<dist[s]<<" ";
                   // cout<<" dist"<<*it<<"="<<dist[*it]<<endl;
                    q.push(*it);
                }
           }
    }
}

void dfs(int src){
	stack<int> s;
	s.push(src);
	visited[src]=true;
	while(!s.empty()){
	int v=s.top();
	cout<<v<<" ";
	s.pop();
		for(it=adj[v].begin();it!=adj[v].end();++it){
		if(!visited[*it]){
			s.push(*it);
			visited[*it]=true;
			
		}
	}	
	}
}
int main()
{  int qs;
   cin>>qs;
   init(qs);
   int t=1;
   while(1)
   {
    int u,v,j;
    cin>>u>>v;  
    addEdge(u, v);
	cout<<"want to add more edge\n0\n1\n";
    cin>>j;
    if(j==0)
    break;
    } 
    int s;
    cin>>s;
    //bfs(s);
    dfs(s);
    cout<<endl;
    //following code prints shortest distance of each reachable node from source
    for(int i=0;i<=qs;i++)
       cout<<dist[i]<<" ";
     cout<<endl;   
    return 0;
}
