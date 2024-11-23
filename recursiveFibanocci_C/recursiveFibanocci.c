#include <stdio.h>

// Fibonacci say�s�n� hesaplamak i�in �zyinelemeli fonksiyon
int fibonacci(int n) {
    if (n <= 1)  // Temel durum, fibonacci(0) = 0 ve fibonacci(1) = 1
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);  // �zyinelemeli �a�r�
}

int main() {
    int n, i;

    // Kullan�c�dan dizinin ka� terimini yazd�rmak istedi�ini al
    printf("Fibonacci dizisinin kac terimini gormek istersiniz? ");
    scanf("%d", &n);

    // Fibonacci dizisinin ilk n terimini yazd�r
    printf("Fibonacci Dizisi: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}

