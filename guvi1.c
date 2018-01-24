#include<stdio.h>
void main()
{
	long int i;
	scanf("%ld",&i);
	if(i>0)
	printf("POSITIVE");
	else if(i<0)
	printf("NEGATIVE");
	else
	printf("ZERO");
}