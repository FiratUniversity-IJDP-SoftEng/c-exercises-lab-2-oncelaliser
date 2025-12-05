#include <stdio.h>

int main() {
    int i;
    int j;
    int c;

    
    int a = 5;  
    c = a * 2;  

   
    for (i = 0; i < 2 * a - 1; i++) {
        
        
        for (j = 0; j < 2 * a - 1; j++) {
            

            if (j == i || j == 2 * a - 2 - i)
                printf("*");  
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
