#include<stdio.h>
int main()
{
	float a[100];
	int z,f,o,n,i;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0) continue;
		z=f=o=0;
		for(i=0;i<n;i++)
			{
				scanf("%f",&a[i]);
				if(a[i]>0) z++;
				if(a[i]<0) f++;
				if(a[i]==0) o++;
			}
		printf("%d %d %d\n",f,o,z);
	}
	return 0;
}
