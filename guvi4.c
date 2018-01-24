
#include<stdio.h>
void main()
{
	char i;
	scanf("%c",&i);
	if((i>='a' && i<='z')||(i>='A' && i<='Z'))
	printf("ALPHABET");
	else
	printf("NOT ALPHABET");
}
