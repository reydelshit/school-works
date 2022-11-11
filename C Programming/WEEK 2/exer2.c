#include <stdio.h>

char storeArray[100];

void binary(int number){
    if(number < 1){
        printf("%s\n", storeArray);
     } else {
        storeArray[number - 1 ] = '0';
        binary(number - 1);
        storeArray[number - 1] = '1';
        binary(number - 1);
    }
}

int main() {

    int number;
    printf("Enter the number of bits: ");
    scanf("%d", &number);

    binary(number);

    return 0;
}