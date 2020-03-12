#include <stdio.h>
#define max 5
int q[max],f=-1,r=-1;
void enq(int val){
	if((r+1)%max==f){
		printf("overflow\n");
		return;
	}
	r=(r+1)%max;
	q[r]=val;
	if (f==-1)
	{
		f=0;
	}
}
int deq(){
	if (f==-1)
	{
		printf("underflow\n");
		return -1;
	}
	int r=q[f];
	f=(f+1)%max;
	if(f==(r+1)%max)
		f=r=-1;
	return r;
}
void print(){
	if(f==-1){
		printf("underflow\n");
		return;
	}
	int fu=f;
	do{
		printf("%d\t",q[fu]);
		fu=(fu+1)%max;
	}
	while(fu!=(r+1)%max);
	printf("\n");
}
int main(){
	enq(23);
	enq(21);
	enq(22);
	deq();
	print();
}
