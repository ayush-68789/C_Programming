
#include<stdio.h>
int main()
{
	int years;
	scanf("%d",&years);
	for(int i=0;i<=years;i++)
	{
		if((i%4==0 && i%100!=0) || (i%400==0))
		{
		printf("%d ",i);
	    }
	}
}
