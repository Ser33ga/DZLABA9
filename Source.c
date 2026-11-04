#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "RUS");

	char ch;
	int h;
	int cont;
	int i, j;

	do {
		printf("Введите символ из которого будет строиться фигура:\n");
		scanf(" %c", &ch);

		printf("Введите высоту треугольника h:\n");
		scanf("%d", &h);

		if (h <= 0) {
			printf("Ошибка: некорректный размер фигуры (высота должна быть больше нуля).\n");
		}
		else {
			printf("Равнобедренный треугольник (фигура из ДЗ 6):\n");
			for (i = 0; i < h; i++) {
				for (j = 0; j < h + i; j++) {
					if (j < h - 1 - i) {
						printf(" ");
					}
					else {
						printf("%c", ch);
					}
				}
				printf("\n");
			}
		}

		printf("Продолжить ? (Да - введите любое число, Нет - введите 0)\n");
		scanf("%d", &cont);
	} while (cont != 0);
}
