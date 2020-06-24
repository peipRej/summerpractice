#include <stdio.h>
#include <stdlib.h>
#include "hello.h"
void hinfo()
{
	printf("            Hello!\n   This is my practice project.\n   The condition of my assignment is:\n"
		"   2 ^ 15 = 32768, the sum of the digits of this number is 3 + 2 + 7 + 6 + 8 = 26.\n" 
		"   What is the sum of the digits of 2 ^ 1000?\n"
		"   Develop a program to calculate the specified amount.\n");

	int h;

	printf("\n  Tap 1 to start calcuate:");
	scanf_s("%d", &h);

	if (h == 1)
	{
		int main();
	}
	else
	{
		printf("\n  Unknown operation.\n \n  Stop program.\n");
		exit(1);
	}
}