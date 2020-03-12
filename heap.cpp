#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int heapsize=0;
void minheapify(int i){
//	if(i>heapsize)
//	return;
    int l=2*i;
    int r=(2*i)+1;
    int min,t;
    if(l<=heapsize&&A[l]<A[i])
        min=l;
    else {
    min=i;
    }
    if(r<=heapsize&&A[r]<A[min])
      min=r; 	cout<<"erty\n";	
   if(min!=i){
       t=A[i];
       A[i]=A[min];
       A[min]=t;
       minheapify(min);  
   }
   
   cout<<"hjkl\n";  
}
void build(){
	for(int i=(A.size())/2;i<=1;i--)
	minheapify(i);
}
void pa(){
	int i;
	build();
	for (i=0; i< A.size();i++) 
        cout <<A[i] << " ";
		cout<<endl; 
}
void add(int key){
    heapsize++;cout<<"lklk\n";
    A.push_back(key);
    pa();
    cout<<"vector"<<A[heapsize-1]<<endl;
    minheapify(0);
    cout<<"lklklk\n";
}
void print(){
    cout<<A[1]<<endl;
}
void del(int key){
    int j=0;
    cout<<key<<"oioi"<<endl;
    for( j=0;j<heapsize;j++){
        if(key==A[j])
        break;
    }
    cout<<j;
    A[j]=A[A.size()-1];
    A.pop_back();
    heapsize--;
    minheapify(0);
    cout<<"jkljkl";
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
   vector<int> A;
	int q,n,key,d;
    cin>>q;
    while (q!=0) {
       cin>>n;
      if(n==1) {
      		cout<<"no dal\n";
          cin>>key;
          add(key);
          pa();
      }
      if(n==2){cout<<"no.dal\n";
            cin>>d;
            del(d);
            pa();
      }
      if(n==3)
      print();
     q--; 
    }  
    return 0;
}

