#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, i,j;
    FILE *file = fopen ("primes.txt", "w");
    if(file == NULL){
        return 1;
    }

    printf("Въведи число: ");
    scanf("%d", &n);

    printf("Постите числа до %d ca:\n"), n);
    fprintf(file,"Простите числа", n);

    for (i = 2; i <=n; i++){
        bool isPrime = true;
        for(j = 2; j * j<= i; j++) {
            if (i % j == 0){
                isPrime = false;
                break;
            }
        }
        if (isPrime){
            printf("%d", i);
            fprintf(file, "%d", i);
        }
    }
    printf("\n");
    fprintf(file, "\n");
    fclose(file);
    printf("Простите числа са запазени");
    return EXIT_SUCCESS;
}