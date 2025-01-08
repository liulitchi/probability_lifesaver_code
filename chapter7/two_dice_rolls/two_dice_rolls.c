#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dice1;     // dice 1 value we rolled
int dice2;     // dice 2 value we rolled
// sum of two dices's points, do not set sum_dice = 2 * dice1
int sum_dice;
// rolled times we choose, can change this number as you wish
unsigned long count = 100000;
// make a score points from 2 to 12, with 11 possible
int points[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
// with two dices, rolled 36 times
int predicts[11] = {1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1};

int main(void)
{
	srand((unsigned) time(NULL));
	for (unsigned long t = 0; t < count; t++)
	{
		dice1 = rand() % 6 + 1;
		dice2 = rand() % 6 + 1;
		sum_dice = dice1 + dice2;
		points[sum_dice - 2]++;
	}
	for (int i = 0; i < 11; i++)
		printf("Percent of time rolled %d is %.2f%%, and theory predicts %.2f%%.\n", 
		       i + 2, 100.0f * points[i] / count, predicts[i] * 100.0f / 36.0f);

	return 0;
}
