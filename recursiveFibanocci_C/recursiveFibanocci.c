#include <stdio.h>

// Fibonacci sayýsýný hesaplamak için özyinelemeli fonksiyon
int fibonacci(int n) {
    if (n <= 1)  // Temel durum, fibonacci(0) = 0 ve fibonacci(1) = 1
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);  // Özyinelemeli çaðrý
}

int main() {
    int n, i;

    // Kullanýcýdan dizinin kaç terimini yazdýrmak istediðini al
    printf("Fibonacci dizisinin kac terimini gormek istersiniz? ");
    scanf("%d", &n);

    // Fibonacci dizisinin ilk n terimini yazdýr
    printf("Fibonacci Dizisi: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}

