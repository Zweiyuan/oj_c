#include<stdio.h>
int main()
{
	int year,month,day;
	int n=0;
	scanf("%d/%d/%d",&year,&month,&day);
	if((year%4==0&&year%100!=0)||year%400==0)
	{
		switch(month)
		{
			case 1: n=day; break;
			case 2: n=31+day; break;
			case 3: n=31+29+day; break;
			case 4: n=31+29+31+day; break;
			case 5: n=31+29+31+30+day; break;
			case 6: n=31+29+31+30+31+day; break;
			case 7: n=31+29+31+30+31+30+day; break;
			case 8: n=31+29+31+30+31+30+31+day; break;
			case 9: n=31+29+31+30+31+30+31+31+day; break;
			case 10: n=31+29+31+30+31+30+31+31+30+day; break;
			case 11: n=31+29+31+30+31+30+31+31+30+31+day; break;
			case 12: n=31+29+31+30+31+30+31+31+30+31+30+day; break;
			break;
		}
		
	}
	else
		{
			switch(month)
		{
			case 1: n=day; break;
			case 2: n=31+day; break;
			case 3: n=31+28+day; break;
			case 4: n=31+28+31+day; break;
			case 5: n=31+28+31+30+day; break;
			case 6: n=31+28+31+30+31+day; break;
			case 7: n=31+28+31+30+31+30+day; break;
			case 8: n=31+28+31+30+31+30+31+day; break;
			case 9: n=31+28+31+30+31+30+31+31+day; break;
			case 10: n=31+28+31+30+31+30+31+31+30+day; break;
			case 11: n=31+28+31+30+31+30+31+31+30+31+day; break;
			case 12: n=31+28+31+30+31+30+31+31+30+31+30+day; break;
			break;
		}
		}
	printf("%d",n);
	return 0;
}
