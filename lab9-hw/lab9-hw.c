#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");

    char symbol;
    int height, width;
    int continueFlag;

    do {
        printf("Введите символ из которого будет строиться фигура:\n");
        scanf(" %c", &symbol);

        printf("Введите высоту:\n");
        scanf("%d", &height);

        printf("Введите ширину:\n");
        scanf("%d", &width);

        printf("Пустой прямоугольник внутри:\n\n");

        for (int i = 1; i <= height; i++) {
            for (int j = 1; j <= width; j++) {
                if (i == 1 || i == height || j == 1 || j == width) {
                    printf("%c", symbol);
                }
                else {
                    printf(" ");
                }
            }
            printf("\n"); 
        }

        printf("\nПродолжить? <Да - введите любое число. Нет - введите 0>\n");
        scanf("%d", &continueFlag);

    } while (continueFlag != 0);

    return 0;
}