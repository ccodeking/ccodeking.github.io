#include <stdio.h>

#define NUM 10

void main(void)
{
	double element=1;
	double sum=1;
	int i;
	for ( i=1; i<=NUM; i++ )
	{
		element*=1.0/(double)i;
		sum+=element;
	}
	printf("1+1/1!+1/2!+1/3!+....+1/%d!=%lf\n",NUM,sum);
}