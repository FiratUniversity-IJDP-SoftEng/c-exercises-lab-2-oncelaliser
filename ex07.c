#include <stdio.h>

int main(){
    for(int i = 1; i < 10; i++){
        int column1 = i*5;
        int column2 = 100 - (i*10 - 9);
        int column3 = i;
        printf("%d \n", column1);
        printf("\t %d \n", column2);
        printf("\t \t %d \n", column3);
    }
    
    
    return 0;
}
