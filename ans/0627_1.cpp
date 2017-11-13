#include < stdio.h >

void main(void)
{
	int num;
	int bitloc;
	int bitcount=0;
	int check;
	int mask;

	printf("Input a num:");
	scanf("%d",&num);
	
	// 迴圈按照31, 30 .... 1, 0的排列來執行
	for ( bitloc=31; bitloc>=0; bitloc-- )
	{
		mask=1 << bitloc;
		check = mask & num;
		// bitcount用來計算2進位數字中有幾個bit是1
		if ( check )
			bitcount++;
		// 第1個"1"出現之後, 就開始印數值
		if ( bitcount>0 )
		{
			if ( check )
				putchar('1');
			else
				putchar('0');
		}
	}
	putchar('\n');
}

