#include <iostream>
#include<valarray>


using namespace std;

// valarray<int> varr,a1;

int main(){
	 valarray<int> varr,a1;
	 //valarray<int>::iterator i,j;
    int size,rot,i=0,a;
    cin>>size;
    cout<<"\n";
    cin>>rot;
     cout<<"\n";
	whlie(size!=0){
		cin>>a;
		varr[i]=a;
		i++;
		size--;
	}
    a1=varr.cshift(rot);
    for(int &j:a1)
    cout<<*j<<" ";
    return 0;
}

