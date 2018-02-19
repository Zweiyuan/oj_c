#include<stdio.h>
int main()
{
	int m,n,d,i;
	double sum;
	while(scanf("%d",&n) != EOF)
	{
		for(int k=1;k<=n;k++)
		{
			scanf("%d",&m);
			sum = 1;
			for(i=2;i<=m;i++)
				{
					if(i%2==0)
						sum=sum-1.0/i;
					else 
						sum=sum+1.0/i;
				}
			printf("%.2lf\n",sum);
		}
	}
	return 0;
}
