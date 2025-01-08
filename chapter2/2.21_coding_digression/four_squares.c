/******************************************************************************
 * C language code for Sum four squares, 2.2.1 Coding Digression              *
 * sum_4squares is the number we are investingating will count how often      *
 * sum_4squares = a^2 + b^2 + c^2 + d^2 with a <= b <= c <= d                 * 
 *                                                                            *
 * If you find hard to solve, try to think an easy way,                       *
 * like in two squares's situation. After this, you can it do better          *
 ******************************************************************************/
#include <stdio.h>

unsigned int sum_4squares; // the number as a sum of four squres
unsigned int a;            // four integers
unsigned int b;
unsigned int c;
unsigned int d;
unsigned int diff;         // check equation

int main(void)
{
    printf("Please input an integer number (I guess your\n*lucky number* is much lesser than 20000): ");
	scanf("%d", &sum_4squares);

    for (a = 1; a * a < sum_4squares; a++)
	    for (b = a; b * b <= sum_4squares - a * a; b++)
		   for (c = b; c * c <= (sum_4squares - a * a - b * b); c++)
		       for (d = c; d * d <= (sum_4squares - a * a - b * b - c * c); d++)
	           {    
	            diff = sum_4squares - a * a - b * b - c * c - d * d;
		        if (diff == 0)
		            printf("%d = %d^2 + %d^2 + %d^2 + %d^2\n", sum_4squares, a, b, c, d);
               }
    printf("\n");
    return 0;
}
