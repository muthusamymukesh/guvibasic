#include<stdio.h>
#include<math.h>
void main()
{
	int i,j,k=0,x;
	scanf("%d",&i);
	j=i;
	while(i!=0)
	{
		x=i%10;
		i=i/10;
		k=k*10+x;
	}
	if (k==j)
	printf("yes");
	else
	printf("no");
}
