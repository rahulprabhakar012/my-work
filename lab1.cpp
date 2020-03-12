#include<bits/stdc++.h>
using namespace std;
void bubble(vector<int> v){
	int i,j,t;
	int sel=0;
	for(i=0;i<v.size()-1;i++){
		for(j=0;j<v.size()-1-i;j++){
			if(v[j]>v[j+1]){
				t=v[j];
				v[j]=v[j+1];
				v[j+1]=t;
				sel=1;
			}
		}
		//if(sel==0)
		//break;
	}
	cout<<"bubble\n";
	//for(int j=0;j<v.size();j++)
	 //cout<<v[j]<<" ";
	 //cout<<endl;
}
void sel(vector<int> v){
	int i,j,t;
	for(i=0;i<v.size()-1;i++){
		for(j=i;j<v.size()-1;j++){
			if(v[i]>v[j+1]){
				t=v[i];
				v[i]=v[j+1];
				v[j+1]=t;
			}
		}
	}
	cout<<"selection\n";
	for(int j=0;j<v.size();j++)
	 cout<<v[j]<<" ";
	 cout<<endl;
}
void ins(vector<int> v){
	int i,j,k,t;
	for(i=1;i<=v.size()-1;i++){
		for(j=0;j<i;j++){
			if(v[j]>v[i]){
				t=v[j];
				v[j]=v[i];
				for(k=i;k>j;k--)
				v[k]=v[k-1];
				v[k+1]=t;
			}
		}
	}
	cout<<"insertion\n";
	for(int j=0;j<v.size();j++)
	 cout<<v[j]<<" ";
	 cout<<endl;
}
int par(int a[],int p,int r)
{
	int x=a[r],i,j,t;
	j=p-1;
	for (int i =p; i <=r-1; ++i)
	{
		if(a[i]<=x){
			j++;
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	t=a[j+1];
	a[j+1]=a[r];
	a[r]=t;
	return j+1;
}
void qs(int a[],int p ,int r){
	if(p<r){
		int q=par(a,p,r);
		qs(a,p,q-1);
		qs(a,q+1,r);
	}
}

int par(vector<int> a,int p,int r)
{
	int x=a[r],i,j,t;
	j=p-1;
	for (int i =p; i <=r-1; ++i)
	{
		if(a[i]<=x){
			j++;
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	t=a[j+1];
	a[j+1]=a[r];
	a[r]=t;
	return j+1;
}
void qs(vector<int> a,int p ,int r){
	if(p<r){
		int q=par(a,p,r);
		qs(a,p,q-1);
		qs(a,q+1,r);
	}
	//return a;	
	for(int j=0;j<a.size();j++)
	 cout<<a[j]<<" ";
	 cout<<endl;
	
}


	  
void merge(vector<int> a, const int low, const int mid, const int high)  
{  
    // Variables declaration.   
    int * b = new int[high+1-low];  
    int h,i,j,k;  
    h=low;  
    i=0;  
    j=mid+1;  
    // Merges the two array's into b[] until the first one is finish  
    while((h<=mid)&&(j<=high))  
    {  
        if(a[h]<=a[j])  
        {  
            b[i]=a[h];  
            h++;  
        }  
        else  
        {  
            b[i]=a[j];  
            j++;  
        }  
        i++;  
    }  
    // Completes the array filling in it the missing values  
    if(h>mid)  
    {  
        for(k=j;k<=high;k++)  
        {  
            b[i]=a[k];  
            i++;  
        }  
    }  
    else  
    {  
        for(k=h;k<=mid;k++)  
        {  
            b[i]=a[k];  
            i++;  
        }  
    }  
    // Prints into the original array  
    for(k=0;k<=high-low;k++)   
    {  
        a[k+low]=b[k];  
    }  
    delete[] b;  
}  
  
vector<int> merge_sort(vector<int> a, const int low, const int high)     // Recursive sort ...  
{  
    int mid;  
    if(low<high)  
    {  
        mid=(low+high)/2;  
        merge_sort(a, low,mid);  
        merge_sort(a, mid+1,high);  
        merge(a, low,mid,high);  
    }  
    return a;
}  
 
 int main(){
 	 
 	vector<int> a;
 	long int n;
 	int t;
 	cin>>n;
 	//srand((unsigned)time(0));
 	for(int i=0;i<n;i++){
	 	//cin>>t;
 		a.push_back((rand()%100)+1);
		 }	 
 	//for(int j=0;j<a.size();j++)
	 //cout<<a[j]<<" ";
	cout<<"\nsort"<<endl;
	
	clock_t start, end; 
 	 start = clock(); 	
	//sel(a);
	 //ins(a);
	// qs(a,0,a.size()-1);
	 bubble(a);
	  end = clock(); 
	  double time_taken = double(end - start) / double(CLOCKS_PER_SEC); 
	 cout << "Time taken by program is : " << fixed  
         << time_taken << setprecision(5); 
    cout << " sec " << endl; 
    return 0; 
	 
 }




