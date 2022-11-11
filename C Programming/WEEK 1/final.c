#include <stdio.h>

int main()
{

    int amount;
    int choose;
    float rate;
    float converted;

    printf("Convert PHP to AUD\n \n Press 1 or 2 \n\n 1. PHP to AUD\n 2. AUD to PHP\n \n\n");
    scanf("%d", &choose);

    if (choose == 1)
    {
        printf("Enter the amount of PHP you want to convert: ");
        scanf("%d", &amount);

        rate = 0.0265;
        converted = amount * rate;

        printf("%d PHP is %.2f AUD", amount, converted);
    }
    else
    {

        printf("Enter the amount of AUD you want to convert: ");
        scanf("%d", &amount);

        rate = 37.7392;
        converted = amount * rate;

        printf("%d AUD is %.2f PHP", amount, converted);
    }

    return 0;
}
