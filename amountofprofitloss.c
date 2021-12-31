#include<stdio.h>
void main()
{
	int cp ,sp,x,y,a,b;
	scanf("%d%d",&cp,&sp);
  
		if(cp>sp)
{
		printf("loss");
	x=cp-sp;

		printf("\namount of loss=%d",x);
	y=x*100/cp;

		printf("\n percentage of loss=%d",y);
		}
	else if (sp>cp)
	{
			printf("profit");
		
		a=sp-cp;
		printf("\n amount of profit=%d",a);
		
		b=a*100/cp;
		printf("\npercentage of profit=%d",b);
		}
}


