#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[5]={1,2,4,3,5};
	int *arr;
	arr=(int*)calloc(5,2);
	arr=&a[0];
	
	free(arr);
	printf("%d",*(arr+3));
return 0;	
}
