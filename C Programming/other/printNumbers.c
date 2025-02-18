#include <stdint.h>
#include <stdio.h>
void printBinary(uint32_t bin)
{
	char OutputBuffer[33];
	int index;
	OutputBuffer[32]=0;
	for (index=31;index>=0;index--)
	{
		if (bin & 1)
		{
			OutputBuffer[index]='1';
		}
		else
		{
			OutputBuffer[index]='0';
		}
		bin = bin / 2;
	}
	puts(OutputBuffer);
}
void printDecimal(uint32_t dec)
{
	char OutputBuffer[11];
	int index;
	OutputBuffer[10]=0;
	for(index=9;index>=0;index--)
	{
		int digit=dec % 10;
		digit = digit + 48;
		OutputBuffer[index]=digit;
		dec = dec / 10;
	}
	puts(OutputBuffer);

}
void printHex(uint32_t hex)
{
	char OutputBuffer[11];
	int index;
	OutputBuffer[10]=0;
	for(index=9;index>=0;index--)
	{
		int digit=hex % 16;
		if(digit<10)
		{
			digit = digit + 48;
		}
		else
		{
			digit = digit + 55;
		}
		OutputBuffer[index]=digit;
		hex = hex / 16;
	}
	puts(OutputBuffer);
}

int main()
{
	printHex(253);
}
