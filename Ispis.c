#include <stdio.h>
#include <math.h>
int i;



int main() {
    int broj;
    
    printf("Unesite prirodan broj: ");
    scanf("%d", &broj);
    
    if (provjeriProst(broj)) {
        printf("%d je prost broj.\n", broj);
    } else {
        printf("%d nije prost broj.\n", broj);
    }
    return 0;
}

int provjeriProst(int n) {
    if (n <= 1) {
        return 0;
    }
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1; 
}
