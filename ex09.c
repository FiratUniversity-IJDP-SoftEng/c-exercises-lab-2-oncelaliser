#include <stdio.h>

int main() {
    int a;
    int sum = 0;
    int count = 0;
    float average;

    do {
        printf("Enter a number: ");
        scanf("%d", &a);

        if (a != -1) {
            count++;
            sum += a;
        }

    } while (a != -1);

    if (count > 0) {
        average = (float)sum / count;
        printf("Count = %d\n", count);
        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", average);
    }
    else {
        printf("You haven't entered any numbers.\n");
    }

    return 0;
}
