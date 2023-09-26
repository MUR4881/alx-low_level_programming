#include <stdio.h>
/**
 * get_endianness - of the machine it is compiled and ran on
 * endianess is a way in which bits are stored in the memory.
 * Endianness is a term that describes the order in which a seq of bytes is
 * stored in computer memory. Endianness can be either big or small,
 * with the adjectives referring to which value is stored first.
 * Big-endian is an order in which the "big end" (most significant value in the
 * sequence) is stored 1st, at the lowest storage address. Little-endian is an
 * order in which the "little end" (least significant value in the sequence) is
 * stored first.
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	 unsigned short byte = 0x4F52;
	 unsigned char *bp __attribute__((unused));
	 unsigned char char1, char2;

	 char1 = byte>>8;
	 char2 = (byte<<8)>>8;
	 printf("which is greater %d or %d\n", char1, char2);
	 if (byte>>8 > (byte<<8)>>8)
		 return (0);
	 return (1);
	/*bp = (unsigned char *) &byte;*/

/*	printf("size of short %lu\n", sizeof(unsigned short));
	printf("%d (@%p) > %d (@%p)\n", *bp, bp,  *(bp + 1), bp + 1);
	return ((*bp < *(bp + 1)));
	returns 0  if false express  (big endian)*/
}
