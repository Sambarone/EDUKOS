#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    if (num == 2 || num == 3) {
        return true;
    }

    int i;
    for (i = 1; i < num; i++) {
        if (6 * i + 1 == num) return true;
        else if (6 * i - 1 == num) return true;
    }
    return false;
}

int main() {
    int num;
    scanf("%d", &num);

    bool prime = isPrime(num);
    if (prime) printf("Broj je prost");
    else printf("Broj nije prost");
}
