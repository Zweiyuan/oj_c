#include<stdio.h>
int main()
{
	int j,n;
	int a[100];
	while(scanf("%d",&n)!=EOF)
	{
		j=1;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]%2!=0)
				j*=a[i];
		}
		printf("%d\n",j);
	}
	return 0;
 } 
