#include <stdio.h>

int main() {
    int pin = 1111;   // set your pin
    int user_pin;
    int count = 0;

    while (count < 3) {
        printf("Enter PIN: ");
        scanf("%d", &user_pin);

        if (user_pin == pin) {
            printf("Welcome!\n");
            return 0;
        } else {
            count++;
            printf("Wrong PIN. Try left: %d\n", 3 - count);
        }
    }

    printf("Card blocked!\n");

    return 0;
}
