#include <stdio.h>
#include <math.h>
#include <time.h>

int main() {
    const int n = 10;  // розмір масиву
    int a[n];
    srand(time(NULL));  // ініціалізуємо генератор псевдовипадкових чисел
    // заповнюємо масив випадковими числами з відрізка [-100, 100]
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 201 - 100;
        printf("%d ", a[i]); // виведення числа у консоль
    }
    printf("\n"); // перехід на новий рядок після виведення масиву
    // знаходимо суму елементів масиву з непарними номерами
    int sum = 0;
    for (int i = 1; i < n; i += 2) {
        sum += a[i];
    }
    printf("Сума елементів з непарними номерами: %d\n", sum);
    // знаходимо добуток елементів масиву, розташованих між першим і останнім від'ємними елементами
    int first_negative = -1, last_negative = -1, product = 1;
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            if (first_negative == -1) {
                first_negative = i;
            } else {
                last_negative = i;
            }
        }
    }
    if (first_negative != -1 && last_negative != -1) {
        for (int i = first_negative + 1; i < last_negative; i++) {
            product *= a[i];
        }
        printf("Добуток елементів між першим і останнім від'ємними: %d\n", product);
    } else {
        printf("У масиві відсутні від'ємні елементи.\n");
    }
    return 0;
}