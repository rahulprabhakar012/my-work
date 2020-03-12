#include<stdio.h>
int main()
{char name[][10]={"rahul",
				"omprakash",
				"migthy",
				"gaurav",
				"abhinav"};
	int	*s[10],temp;
	for(int i=0;i<5;i++)
	{s[i]='name[i]';
	}		
	for(i=0;i<4;i++)
	{for(int j=0;j<4-i;j++)
	if(s[j]>s[j+1]])
	{temp=s[j];
	s[j]=s[j+1];
	s[j+1]=temp;
	}
	}
for(i=0;i<5;i++)
printf("%c\t",*s[i]);
return 0;
}
