#include<bits/stdc++.h>
using namespace std;

struct process{
	int id;
	int at,bt,ct,wt,tat,flag=0;
}P[100];

void sortarival(int n){
	struct process t;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(P[j].at>P[j+1].at){
				t=P[j];
				P[j]=P[j+1];
				P[j+1]=t;
			}	
		}
	}
}
int main(){
	 priority_queue <int, vector<int>, greater<int> > pq;
	 cout<<"enter no of process\n";
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"enter id ,at and bt\n";
		cin>>P[i].id>>P[i].at>>P[i].bt;
	}
	sortarival(n);
	 int i=0;
	int time=0;
	bool done[n];
	for(int i=0;i<n;i++)
		done[i]=false;
	while(i<n)
	{
		if(P[i].at<=time){
			int j=i;
			while(P[j].at<=time)
			{if(done[j]==false)
				pq.push(P[j].bt);
				j++;
			}
			time+=pq.top();
			while(pq.empty()==false)
			pq.pop();
		}
		done[i]=true;
		//time +=P[i].bt;
		P[i].ct=time;
		P[i].tat=P[i].ct-P[i].at;
		P[i].wt=P[i].tat-P[i].bt;
		i++;	
	}
	cout<<"p id\tat\tbt\tct\ttat\twt\n";
	for(int i=0;i<n;i++){
		cout<<P[i].id<<"\t"<<P[i].at<<"\t"<<P[i].bt<<"\t"<<P[i].ct<<"\t"<<P[i].tat<<"\t"<<P[i].wt<<endl;
	}
}
