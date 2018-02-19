#include<stdio.h>
int main()
{
	int n,i;
	int sum;
	while(scanf("%d",&n) != EOF)
	{
		sum = 1;
		if (n>=30 || n<=1)
			{
				printf("error input!");
				continue;
			}
		for(i=n-1;i>=1;i--)
		{
			sum=(sum+1)*2;
		}
		printf("%d",sum);
		printf("\n");
	}
	return 0;
}
