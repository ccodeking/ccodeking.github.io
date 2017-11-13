#include < stdio.h >
#include < stdlib.h >

#define LINES 20

void main(void)
{
	for ( int i=0; i<LINES; i++ )
	{
		for ( int j=0; j<i; j++ )
			putchar(' ');
		putchar('A'+i);
		putchar('\n');
	}
}