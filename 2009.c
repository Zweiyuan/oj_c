#include<stdio.h>
#include<math.h>
int main()
{
	int m,n;
	float n1 = 0.0,sum=0.0;
	while(scanf("%d%d",&n,&m) != EOF){
		n1 = n;
		sum=0;
		for(int i=1;i<=m;i++)
		{
			sum+=n1;
			n1=sqrt(n1);
		}
		printf("%.2f\n",sum);
		
	}
	return 0;
}
