#include <stdio.h>
#include <math.h>
int main() {
    int n, count = 0; // n - розмір масиву, count - кількість пар з протилежним знаком
    printf("Введіть розмір масиву: ");
    scanf("%d", &n);
    int a[n];
    printf("Введіть елементи масиву: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(int i = 1; i < n-1; i++) {
        if(a[i] * a[i+1] < 0) // Якщо добуток значень сусідніх елементів менше нуля, то це означає, що вони мають протилежні знаки і збільшуються на 1
        {
            count++;
        }
    }
    printf("Кількість пар із протилежними знаками дорівнює %d\n", count);
    return 0;
}
