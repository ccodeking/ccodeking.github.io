#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(void)
{
	double a,b,c;
	double d;
	double r1, r2;
	double i1, i2;

	printf("Input a,b,c of aX^2+bX+c=0\n");
	scanf("%lf %lf %lf", &a, &b, &c );
	
	d=b*b-4*a*c;

	// 兩個實數解
	if ( d>0 )
	{
		r1=(-b+sqrt(d))/(2*a);
		r2=(-b-sqrt(d))/(2*a);
		printf(" r1=%f, r2=%f\n", r1, r2);
	}
	// 虛數解
	else if ( d<0 )
	{
		r1=r2=-b/(2*a);
		i1=sqrt(-d)/(2*a);
		i2=-sqrt(-d)/(2*a);
		char sign1, sign2;
		sign1 = ( i1>=0 ) ? '+':'-';
		sign2 = ( i2>=0 ) ? '+':'-';
		printf(" r1=%f%c%fi, r2=%f%c%fi\n", r1, sign1, fabs(i1), r2, sign2, fabs(i2) );
	}
	// if ( d==0 ), 一個實數解
	else
	{
		r1=-b/(2*a);
		printf(" r1=r2=%f\n", r1);
	}
}

