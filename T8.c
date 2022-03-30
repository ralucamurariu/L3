#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#pragma warning(disable : 4996)

int main()
{
	int x, i, j, p = 0;
	printf("Introduceti numarul:");
	scanf("%d", &x);
	for (i = 31; i >= 0; i--)
		if ((x >> i) & 1)
			for (j = 31; j >= 0; j--)
				if ((x >> j) & 1)
					p = p + pow(2, i)*pow(2, j);
	printf("Patratul numarului este: %d\n", p);
	system("pause");
	return 0;
}