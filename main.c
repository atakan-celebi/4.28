#include <stdio.h>

int main(void) {
    int i, n , max, counter;
    max=0;
    counter=1;
    for (i=0;i<10;i++) {
        printf("(%d/10) inserisci un numero:", counter);
        scanf("%d", &n);
        if (n > max) {
            max=n;
        }
        counter++;
    }
    printf("il numero piu grande e':%d",max);
}
