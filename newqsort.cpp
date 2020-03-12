#include<stdio.h>
void quick_sort(int a[50],int p,int r);
int partition(int a[50],int p,int r);

void quick_sort(int a[50],int p,int r)
{
    int q;
    if(p<r)
    {
        q=partition(a,p,r);
        quick_sort(a,p,q-1);
        quick_sort(a,q+1,r);

    }
}

int partition(int a[50],int p,int r)
{
    int i,j,temp;
    i=p-1;
    for(j=p;j<=r-1;j++)
    {
        if(a[j]<=a[r])
        {
            i++;
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
        temp=a[i+1];
        a[i+1]=a[r];
        a[r]=temp;
        return i+1;
}


int main()
{
    int n=5;
    int a[50]={10,8,2,1,5};
    quick_sort(a,0,n-1);
    printf("final sorted array\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
