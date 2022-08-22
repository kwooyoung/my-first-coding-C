#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int result[6] = { 0,0,0,0,0,0 };
	int num;
	int same = 0;

	srand(time(NULL));

	for (int i = 0; i < 6; i++)
	{
		num = rand() % 45 + 1;
		same = 0;
		for (int j = 0; j < i; j++)
		{
			if (result[j] == num) {
				same = 1;
				break;
			}
			if (!same) result[i] = num;
			else i--;
		}
		for (int i = 0; i < 6; i++)
			printf("%d\n", result[i]);
	}
	return 0;

}