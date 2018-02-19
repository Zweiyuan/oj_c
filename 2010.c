#include<stdio.h>
int main()
{
	int a,b,c;
	int x,y,n;
	while(scanf("%d %d",&x,&y)!=EOF)
	{
		n=0;
		for(x;x<=y;x++)
		{
			a=x/100;
			b=(x%100)/10;
			c=(x%100)%10;
		
			if(a*a*a+b*b*b+c*c*c==x)
				{	if(n>0) printf(" ");
					printf("%d",x);
					n=1;}
		}
		if(n==0) printf("no");
		printf("\n");
	}
	return 0;
 } 
