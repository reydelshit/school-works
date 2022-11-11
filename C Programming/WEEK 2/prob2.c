#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main(){

     // (x!-y!)/(x+y)!, where x=8,y=2, (x && y)> 0.

    int x = 8, y = 2, xfact, yfact, sum, diff, div;

    if (x > 0 && y > 0) {

        xfact = factorial(x);

        yfact = factorial(y);

        printf("%d %d \n", xfact, yfact);

        diff = xfact - yfact;

        printf("%d \n", diff);

        sum = xfact + yfact;

        printf("%d \n", sum);

        div = diff / sum;

        printf("Div is %d", div);

    }

    return 0;
}