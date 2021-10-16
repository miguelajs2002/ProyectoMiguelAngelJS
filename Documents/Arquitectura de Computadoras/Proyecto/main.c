#include <stdio.h>

int v[] = {1, 2, 4, 3, 2};

double mean(int *v, int len)
{
	int sum = 0;
	int i;
	for (i = 0; i < len; i++)
		sum += v[i];
	return sum / len;
}
 
int main(void)
{
	int i, len;
	for (len = 5; len >= 0; len--) {
		for (i = 0; i < len; i++)
 
	return 0;
}