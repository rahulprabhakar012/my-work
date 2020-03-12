
#include<iostream>
#include<vector>
using namespace std;
int max(int a,int b){
    if(a>b)
    return a;
    else {
    return b;
    }
}
int op(int a, int b){
 
 
	int c=((a&b) ^ (a|b) & (a^b));
	cout<<c<<"op";
	return c;
	
}
int louda(vector<int> a,int j,int k){
	int m1,m2;
	m1=m2=32667;
	int s=0;
	for(int i=k;i<=j;i++){
			cout<<a[i]<<" ";
				if(a[i]<m1){
				m2=m1;
				m1=a[i];
				}
				else if(a[i]<m2 && a[i]!=m1)
				m2=a[i];
				
			}
			cout<<endl;
			cout<<m1<<" "<<m2<<endl;
				s=max(s,op(m1,m2));
		return s;			
}
int main(){
	vector<int> a;
	int m1=32667,m2=32667,i=0,s=0;
	a.push_back(9);
	a.push_back(6);
	a.push_back(3);
	a.push_back(5);
	a.push_back(2);
	for(int k=0;k<a.size();k++){
	
		for(int j=k;j<a.size();j++){
			s=louda(a,j,k);
			}
	}
	cout<<s<<endl;
	cout<<m1<<" "<<m2;
	
}
