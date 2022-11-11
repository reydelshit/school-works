#include <stdio.h>

int main () {

    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 13 && age <= 19){
        printf("You are a teenager");
    } else if(age >= 60){
        printf("You are a senior citizen");
    } else {
        printf("I love Programming");
    }
}