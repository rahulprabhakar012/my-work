#include<stdio.h>
int merge(int a[],int p,int q,int r);

void merge_sort(int a[50],int p,int r)
{
    int q;
    if(p<r)
    {
        q=(p+r)/2;
        merge_sort(a,p,q);
        merge_sort(a,q+1,r);
        merge(a,p,q,r);
    }
}

int merge(int a[50],int p,int q,int r)
{
    int i,j,k;
    int n1=q-p+1;
    int n2=r-q;
    int L[n1+1];
    int R[n2+1];
    for(i=1;i<=n1;i++)
    {
        L[i]=a[p+i-1];
    }
    for(j=1;j<=n2;j++)
    {
        R[j]=a[q+j];
    }
   // L[n1+1]=9999;
   // R[n2+1]=9999;
   i=j=1;
    for(k=p;k<=r;k++)
    {
        if(L[i]<=R[j])
        {
            a[k]=L[i];
            i++;
        }
        else
        {
            a[k]=R[j];
             j++;
        }
    }
    return 0;
}

int main()
{
    int n=5;
    int a[50]={1,12,5,8,10};
    merge_sort(a,0,n-1);
    printf("final sorted array\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
return 0;
}
