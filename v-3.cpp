#include<stdio.h>

enum months

{
	sunday,monday,tuesday,wednesday,thursday,friday,saturday
};

int main()
{
	int a,n,i;
	for(i=sunday;i<=saturday;i++)
	{
		printf("%d",i);
	}
}
