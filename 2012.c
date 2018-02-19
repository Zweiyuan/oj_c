#include<stdio.h>
int main()
{
	int x,y,i,n,w,temp;
	while(scanf("%d%d",&x,&y)!=EOF)
	{
		temp = 0;
		if((x > 50 || x <- 39)||(y > 50 || y < -39))
			printf("error input");
			//continue;
		if(x > y)
			{
				x = x + y;
				y = x - y;
				x = x + y;
			}
		if((x==0) && (y==0))
			continue;
		
		for(n=x; n<=y; n++)//ËØÊýÅÐ¶¨ 
		{
			w = n*n+n+41;
			for(i=2; i<w; i++)
			{
				if(w % i == 0)
					temp++;
			}
		}
		if(temp == 0)
			printf("OK");
		else
			printf("Sorry");
		printf("\n");
	}
	return 0;
}
