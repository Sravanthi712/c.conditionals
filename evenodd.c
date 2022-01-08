#include<stdio.h>
void main()
{

int n,r,edc=0,odc=0,zero=0;
scanf("%d",&n);
while(n>0)
{
	r=n%10;
	n=n/10;
	}
	if(r==0);
{
zero++
}
	elseif(r%2==0);
	{
	edc++
	}
	else
	{
		odc++
	}
printf("%d%d%d",edc,odc,zero);
}
