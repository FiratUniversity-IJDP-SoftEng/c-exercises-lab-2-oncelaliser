#include <stdio.h>

int main() {
    int array[10];
    int i;
    printf("Enter the numbers :");
    for (i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }
    printf("\nYou have entered these elements \n");
    for (i = 0; i < 10; i++) {
        printf("%d \n", array[i]);
    }
    int sum = 0;
    for (i = 0; i < 10; i++) {
        sum += array[i];
    }
    printf("Sum is %d", sum);
    double avarage = 0;
    avarage = sum / 10;
    printf("\n Avarage is %lf", avarage);

    return 0;

}
