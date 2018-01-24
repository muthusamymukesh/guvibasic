#include<stdio.h>
#include<math.h>
void main()
{
	int i,j,k=0,x;
	scanf("%d",&i);
	j=i;
	for(j=2;j<i/2;j++)
	{
	if(j%i==0)
	k=1;
	}
	if(k==1)
	printf("NO");
	else
	printf("YES");
}
