<h1>Домашняя работа к лабораторной №8</h1>
<h2>Выполнил: Бондарев Н.Р.</h2
<h2> Вариант 2</h2>
<h3>Условие задачи</h3>
<p>Написать программу, выводящую на экран заданную
геометрическую фигуру, нарисованную с помощью заданного с клавиатуры
символа, условие заполнения фигуры и задаваемые параметры фигуры в
таблице</p>
<h2> Алгоритм </h2>

1)Начало

2)Создаем переменные char symbol; height, width; continueFlag; 


3) Просим пользователя ввести числа и символ

4)строим фигуру по заданным точкам

5)конец                    

<h2>Код программы</h2>

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
<h2>Схема</h2>

<img width="593" height="759" alt="image" src="https://github.com/user-attachments/assets/7a1be7fa-37f0-4ef3-8f4d-5fe57c502601" />




<h2>Консоль</h2>

<img width="527" height="303" alt="image" src="https://github.com/user-attachments/assets/4b5c8ca3-83aa-4479-b514-795c2f6dedbf" />



