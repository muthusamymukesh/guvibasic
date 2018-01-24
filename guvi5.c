
#include<stdio.h>
void main()
{
	int i,j,k;
	scanf("%d%d%d",&i,&j,&k);
	if(i>j)
		{
		if(k>i)
		printf("%d",k);
		else
		printf("%d",i);
		}
	else
		{
		if(j>k)
			printf("%d",j);
		else
		printf("%d",k);	
		}
}
