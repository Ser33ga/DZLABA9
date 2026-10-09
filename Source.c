#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "RUS");

	char ch;
	int a, b, c;
	int cont;
	int i, j;
	int total_rows, total_cols;
	int max_j;

	do {
		printf("Введите символ из которого будет строиться фигура:\n");
		scanf(" %c", &ch);

		printf("Введите сторону 1:\n");
		scanf("%d", &a);

		printf("Введите сторону 2:\n");
		scanf("%d", &b);

		printf("Введите сторону 3:\n");
		scanf("%d", &c);

		if (a <= 0 || b <= 0 || c <= 0 || b >= a || b >= c) {
			printf("Ошибка: некорректные размеры фигуры.\n");
		}
		else {
			total_rows = a + c - b;
			total_cols = a + c - b;

			printf("Два квадрата:\n");
			for (i = 0; i < total_rows; i++) {
				max_j = (i < a - b) ? a : total_cols;
				for (j = 0; j < max_j; j++) {
					int in_sq1 = (i < a && j < a);
					int in_sq2 = (i >= a - b && i < total_rows && j >= a - b && j < total_cols);

					if ((in_sq1 || in_sq2) && !(in_sq1 && in_sq2)) {
						printf("%c", ch);
					}
					else {
						printf(" ");
					}
				}
				printf("\n");
			}
		}

		printf("Продолжить ? (Да - введите любое число, Нет - введите 0)\n");
		scanf("%d", &cont);
	} while (cont != 0);
}
