#include <stdio.h>

int main(){

    char exp[100];
    int i = 0;
    int stack[100];
    int top = -1;
    int op1, op2;
    int result;

    printf("Enter the expression: ");
    scanf("%s", exp);

    while(exp[i] != '\0'){
        if(exp[i] >= '0' && exp[i] <= '9'){
            top++;
            stack[top] = exp[i] - '0';
        }
        else{
            op2 = stack[top];
            top--;
            op1 = stack[top];
            top--;
            switch(exp[i]){
                case '+':
                    result = op1 + op2;
                    break;
                case '-':
                    result = op1 - op2;
                    break;
                case '*':
                    result = op1 * op2;
                    break;
                case '/':
                    result = op1 / op2;
                    break;
            }
            top++;
            stack[top] = result;
        }
        i++;
    }

    printf("Result: %d", stack[top]);

    return 0;
}