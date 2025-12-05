#include <stdio.h>

int fact(int a){
    if(a == 1){
        return 1;
    }
    else if(a > 0 && a < 50){
        return(a * fact(a - 1));
    }
    else{
        return -1;
    }
}

int main(){
    int a;
    printf("Enter a number for factorial:");
    scanf("%d", &a);
    printf("%d", fact(a));
    
}
