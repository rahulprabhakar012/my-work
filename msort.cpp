#include<stdio.h>

void merge(int a[20],int p,int q,int r){
	int n1=q-p+1;
	int n2=r-q;
	int i,j,k,L[10],R[10];
	for(i=1;i<=n1;i++)
		L[i]=a[p+i-1];
	for(j=1;j<=n2;j++)
		R[j]=a[q+j];
	//L[n1+1]=32767;R[n2+1]=32767;
	i=j=1;
	for(k=p;k<=r;k++){
		if(L[i]<=R[j]){
			a[k]=L[i];
			i=i+1;
		}
		else{
			a[k]=R[j];
			j=j+1;
		}
	}
}
void ms(int a[20],int p,int r){
	if(p<r){
		int q=(p+r)/2;
		ms(a,p,q);
		ms(a,q+1,r);
		merge(a,p,q,r);
	}
}
int main(){
	int a[]={2,4,3,2,4,5};
	int i,n=6,p=0,r=n-1;
	ms(a,p,r);
	for (int i = 0; i < n; ++i)
	{
		printf("%d\t",a[i]);
	}
}
