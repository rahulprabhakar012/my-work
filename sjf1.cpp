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
			if(P[j].bt>P[j+1].bt){
				t=P[j];
				P[j]=P[j+1];
				P[j+1]=t;
			}	
		}
	}
}
int main(){
	// priority_queue <int, vector<int>, greater<int> > pq;
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
	int min=32667;
	for(int i=0;i<n;i++){
		if(P[i].at<min)
		min=P[i].at;
	}
	time=min;
	while(i<n)
	{	if(P[i].flag==0){
		for(int j=0;j<n;j++){
			if(P[j].at<=time&&P[j].flag==0){
			
			time+=P[j].bt;
			P[j].flag=1;	
			P[j].ct=time;
			P[j].tat=P[j].ct-P[j].at;
			P[j].wt=P[j].tat-P[j].bt;
			break;
			}
		}
	}
		i++;	
	}
	cout<<"p id\tat\tbt\tct\ttat\twt\n";
	for(int i=0;i<n;i++){
		cout<<P[i].id<<"\t"<<P[i].at<<"\t"<<P[i].bt<<"\t"<<P[i].ct<<"\t"<<P[i].tat<<"\t"<<P[i].wt<<endl;
	}
}
