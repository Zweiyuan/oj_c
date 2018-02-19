#include<stdio.h>
int main()
{
	int n,i,max,min;
	double sum,ave;
	int s[100];
	while(scanf("%d",&n) != EOF)
	{
		sum = 0.0;
		ave = 0.0;
		if(n<=2 || n>100)
		{
			printf("error input");
			continue;
		}
		for(i=0; i<n; i++)
		{
			scanf("%d",&s[i]);
			sum += s[i];
		}
		max = s[0];
		min = s[0];
		for(i=0; i<n; i++)
		{
			if(max < s[i])
				max = s[i];
			if(min > s[i])
				min = s[i];
		}
		ave = (sum-max-min)/(n-2);
		printf("%.2lf",ave);
		printf("\n");
	}
	return 0;
}
