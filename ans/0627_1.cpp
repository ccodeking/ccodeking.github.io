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
	
	// �j�����31, 30 .... 1, 0���ƦC�Ӱ���
	for ( bitloc=31; bitloc>=0; bitloc-- )
	{
		mask=1 << bitloc;
		check = mask & num;
		// bitcount�Ψӭp��2�i��Ʀr�����X��bit�O1
		if ( check )
			bitcount++;
		// ��1��"1"�X�{����, �N�}�l�L�ƭ�
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

