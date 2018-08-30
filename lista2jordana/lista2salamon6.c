
#include <stdio.h>
#include <math.h>


int main ()
{
    float a, b, S1, S2, S3;
    a = b = 1;
    S1 = S2 = S3 = 0;
    puts("SOMA NUMERO 1");
    while (b<=50) {
        S1 = (a/b) + S1;
        printf("Cada termo:\t%.2f\n", a/b);
        a = a + 2;
        b = b + 1;
    }
    printf("Soma 1 Total:\t%.2f\n", S1);
    printf("-----------------------\n");
    a = 1;
    puts("SOMA NUMERO 2");
    while (b>=1) {
        S2 = (pow(2, a))/b + S2;
        printf("Cada termo:\t%.2f\n", (pow(2, a))/b);
        b = b - 1;
        a = a + 1; 
    }
    printf("Soma 2 Total:\t%.2f\n", S2);
    printf("-----------------------\n");
    printf("SOMA NUMERO 3\n");
    b = 1;
    while (b<=10) {
        S3 = S3 + (b/ (pow(b, 2)));
        b = b + 1;
        printf("Cada termo:\t%.2f\n", b/(pow(b,2)));
        S3 = S3 - (b/ (pow(b, 2)));
        b = b + 1;
        printf("Cada termo:\t%.2f\n", b/(pow(b,2)));
    }
    printf("SOMA 3 Total: \t%.2f\n", S3);
}