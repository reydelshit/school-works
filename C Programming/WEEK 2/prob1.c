#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main(){

    // x!+y!, where x=5,y=3, (x && y) > 0. 

    int x = 5, y = 3, xfact, yfact, sum;

    if (x > 0 && y > 0) {

        xfact = factorial(x);
        printf("%d \n", xfact);

        yfact = factorial(y);
        printf("%d \n", yfact);

        sum = xfact + yfact;

        printf("Sum is %d", sum);

    }


    return 0;
}