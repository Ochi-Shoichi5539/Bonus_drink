#include <stdio.h>

int Bonus_drink(int buy_drink) {
    int total = 0;
    int quotient, remainder, tmp;
    int division = 3;
    quotient = buy_drink / division;
    remainder = buy_drink % division;
    total = buy_drink;
    while (1) {
        tmp = quotient + remainder; //tmpは、buy_drinkを3で割った余りと商の和
        total += quotient;
        quotient = tmp / division;
        // printf("商は%d\n", quotient);
        remainder = tmp % division;
        // printf("あまりは%d\n", remainder);
        if (quotient == 0) {
            break;
        }
    }
    return total;
}

int main(void) {
    printf("合計本数は%d", Bonus_drink(100));
    return 0;
}

