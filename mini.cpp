#include<vector>
#include<iostream>
using namespace std;
int max(int a,int b){
	return a>b?a:b;
}
int op(int a, int b){
 
 
	int c=((a&b) ^ (a|b) & (a^b));
	cout<<c<<"op"<<endl;
	return c;
}
int printSubArrays(vector<int> arr, int start, int end,int s) 
{   
    // Stop if we have reached the end of the array      
    if (end == arr.size())  
        return s ; 
        
    // Increment the end point and start from 0  
    else if (start > end)  
        printSubArrays(arr, 0, end + 1,s); 
            
    // Print the subarray and increment the starting point  
    else
    { 
        cout << "["; 
        int m1=arr[start],m2=arr[start];
        for (int i = start; i <=end; i++){ 
            cout << arr[i] << ", ";
				if(arr[i]<m1){
				m2=m1;
				m1=arr[i];
				}
				else if(arr[i]<m2 && arr[i]!=m1)
				m2=arr[i]; 
        } 
        if(m1!=m2){
        	s=max(s,op(m1,m2));
        	cout<<s<<"SSSSS"<<endl;
        	
		}
          
        cout << arr[end] << "]" << endl; 
        cout<<m1<<" jnfdsdno"<<m2<<endl;
        printSubArrays(arr, start + 1, end,s); 
        
    } 
   
	   cout<<s<<"SSSSS2222222222"<<endl; 
    	return ;
     	
} 
int main(){
	vector<int> a;
	a.push_back(9);
	a.push_back(6);
	a.push_back(3);
	a.push_back(5);
	a.push_back(2);
	int s=0;
	printSubArrays(a,0,0,s); 
	//cout<<	printSubArrays(a,0,0,s)<<"final";
	}
