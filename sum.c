#include <stdio.h>
#define DZI 10
int sum(int n, int m);
int main() {
    printf("%d", sum(2137, DZI));
    return 0;
}

int sum(int n, int m) {
    if ((n%m)==n)
        return (n%m - n%(m/10))/(m/10);
    else if (m==10)
        return n%m + sum(n, m*10);
    else
        return (n%m - n%(m/10))/(m/10) + sum(n, m*10);
}
