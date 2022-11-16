#include <stdio.h>

int main(){
    int x, y; // Changed ti integer beacuse floats can do the the modulus operation
    char op;

    printf("Enter number1, the operator and number2 (example 3+7):\n");
    scanf("%d%c%d",&x,&op,&y);

    if (op == '+'){
        printf("Result is %d", x+y);
    }
    else if (op == '-'){
        printf("Result is %d", x-y);
    }
    else if (op == '*'){
        printf("Result is df", x*y);
    }
    else if (op == '/'){
        if (y == 0 ){
            printf("Division by zero is not possible!\n\n");
            main();
        }
        else{
            printf("Result is %d", x/y);
        }
    }
    else if (op == '%'){
        int z = x % y;
        printf("Result is %d", z);
    }
    else {
        printf("No such operation!\n\n");
        main();
    }
    return 0;
}