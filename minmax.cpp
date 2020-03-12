#include<bits/stdc++.h>
using namespace std;




int max(int a,int b){
    if(a>b)
    return a;
    else {
    return b;
    }
}
int min(int a,int b){
    if(a<b)
    return a;
    else {
    return b;
    }
}

// Complete the miniMaxSum function below.
void miniMaxSum(vector<int> arr) {
    int s=0,t=0;
    int maxs=-32665,mins=32667;
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr.size();j++){
            if(t==j)
            continue;
            s+=arr[j];
        }
        t++;
        maxs=max(maxs,s);
        mins=min(mins,s);
    }
    cout<<mins<<" "<<maxs;

}
int main(){
	vector<int> a;
	int n;
	for(int i=0;i<5;i++){
		cin>>n;
		a.push_back(n);
	}
	miniMaxSum(a);
}














