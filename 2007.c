#include <stdio.h>
int main()
{
	int i,n,m,sum2,sum3;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		if(n>m) 
		{
			n=n+m;
			m=n-m;
			n=n-m;
		}
		sum2=sum3=0;
		if(n%2==0)
		{
			for(i=n;i<=m;i+=2)
				sum2 += i*i;
			for(i=n+1;i<=m;i+=2)
				sum3 += i*i*i;
		}
		else
		{
			for(i=n+1;i<=m;i+=2)
				sum2 += i*i;
			for(i=n;i<=m;i+=2)
				sum3 += i*i*i;
		}
		printf("%d %d",sum2,sum3);
		printf("\n");
	}
	return 0;
}
