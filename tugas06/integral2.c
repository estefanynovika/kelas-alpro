#include <stdio.h>


float fungsi(float x) {
    
    return 6 * x * x + 5;
}

float trapezoid(float a, float b, int n) {
    float h = (b - a) / n;
    float integral = (fungsi(a) + fungsi(b)) / 2.0;

    for (int i = 1; i < n; i++) {
        float x = a + i * h;
        integral += fungsi(x);
              
    }
    
    return h* integral;
}

int main() {
    float a, b;
    int n;
    printf("Masukkan batas bawah a: ");
    scanf("%f", &a);
    printf("Masukkan batas atas b: ");
    scanf("%f", &b);
    printf("Masukkan jumlah subinterval n: ");
    scanf("%d", &n);
    
    float result = trapezoid(a, b, n);
    printf("Hasil integral adalah: %f\n", result);

    return 0;
}