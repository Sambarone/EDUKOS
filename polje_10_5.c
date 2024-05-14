#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int broj_elemenata = 10;
    int brojevi[broj_elemenata];
    int zbrojevi[5];

    printf("Unesite 10 brojeva:\n");
    for (i = 0; i < broj_elemenata; i++) {
        scanf("%d", &brojevi[i]);
    }

    for (i = 0; i < 5; i++) {
        zbrojevi[i] = brojevi[i] + brojevi[broj_elemenata - 1 - i];
    }

    printf("Zbrojevi iz drugog polja su:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", zbrojevi[i]);
    }
    printf("\n");
	
	
	return 0;
}
