#include <stdio.h>
int prime(int num, int div);

int main() {
    int number;
    scanf("%d", &number);
    if (prime(number, number-1)==1)
        printf("Liczba pierwsza!");
    else
        printf("Liczba nie jest pierwsza!");
    return 0;
}

int prime(int num, int div) {
    if (num==0 || num==1)
        return 0;
    else if (div==1)
        return 1;
    else if ((num%div)==0)
        return 0;
    else
        return prime(num, div-1);
}
