//2007
#include <stdio.h>
int main()
{
	int x,y,i,t;
	int a,b;
	while(scanf("%d%d",&x,&y)!=EOF)
	{
		a=0,b=0;
		
		
		if(x>y)				//注意输入的两个数要比较大小，否则就会wa 
		{
			t=x;
			x=y;
			y=t;
		} 				//注意输入的两个数要比较大小，否则就会wa 
		
		
		if(x%2==0)
		{
			for(i=x;i<=y;i=i+2)
				a+=i*i;
			for(i=x+1;i<=y;i=i+2)
				b+=i*i*i;
		
		}
		else
		{
			for(i=x;i<=y;i=i+2)
				b+=i*i*i;
			for(i=x+1;i<=y;i=i+2)
				a+=i*i;
		
		}
		printf("%d %d\n",a,b);
	}
	return 0;
}

