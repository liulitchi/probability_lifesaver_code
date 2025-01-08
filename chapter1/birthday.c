/********************************************************
 * C language code to compute birthday probabilities    *
 * Book: The probability lifesaver by Steven J. Miller  *
 * Chapter 1, Figure 1-2                                *
 *                                                      *
 * now 365 - (n - 1) equals 366 - n                     *
 ********************************************************/

#include <stdio.h>

int main(void)
{
    float noshare = 1.0f;  // at start 100% chance don’t share a birthday
    float share;           // at start 0% chance share a birthday
    int n;                 // how many people

	for (n = 2; n < 51; n++)
	{
	    noshare *= (366 - n) / 365.0f;
	    share = 1.0f - noshare;

	    printf("p(%d) = %6.2f%%\n", n, share * 100.0f);	    
	}
	return 0;
}
