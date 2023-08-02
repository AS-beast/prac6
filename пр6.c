#include <stdio.h>
#include <math.h>

double calculate(int x1, int y1, int x2, int y2) {    /* Функція для обчислення довжини вектора */
    int X = x2 - x1;
    int Y = y2 - y1;
    double length = sqrt(pow(X,2) + pow(Y,2)); /* Обчислення квадрату різниці по кожній осі */
}

int main() {
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);  /* Введення координат початку вектора */
    
    double vectorLength = calculate(x1, y1, x2, y2);  /* Обчислення довжини вектора за допомогою функції calculate */
    
    printf("%f\n", vectorLength);  /* Виведення результату */
    
    return 0;
}