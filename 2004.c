#include<stdio.h>
int main()
{
	int t;
	while(scanf("%d",&t)!=EOF)
	{
		if(t>100||t<0) printf("Score is error!");	
		if(t>=0&&t<=59) printf("E");
		if(t>=60&&t<=69) printf("D");
		if(t>=70&&t<=79) printf("C");
		if(t>=80&&t<=89) printf("B");
		if(t>=90&&t<=100) printf("A");
		printf("\n");
	}
	return 0;
 } 
