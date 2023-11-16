#include <stdio.h>
#include <stdlib.h>

int main() {

    double parniNum = 0;
    double parniSum = 0;
    double neparniNum = 0;
    double neparniSum = 0;

    int input;
    do {
        scanf("%d", &input);
        if (input == 0) {
            break;
        }
        if (input % 2 == 0) {
            parniNum += 1;
            parniSum += input;
        } else {
            neparniNum += 1;
            neparniSum += input;
        }

    } while (input != 0);

    double parniAvg = parniSum / parniNum;
    double neparniAvg = neparniSum / neparniNum;
    printf("Parna sredina: %f\n", parniAvg);
    printf("Neparna sredina: %f", neparniAvg);

    return 0;
}
