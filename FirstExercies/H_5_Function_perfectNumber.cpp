//Project Name: Function - Perfect Number

#include <stdio.h>

int isPerfect(int num) {
    int sum = 0;

    for(int i = 1; i < num; i++) {
        if(num % i == 0)
            sum += i;
    }

    if(sum == num)
        return 1;
    else
        return 0;
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if(isPerfect(num) == 1)
        printf("%d is a perfect number.", num);
    else
        printf("%d is not a perfect number.", num);

    return 0;
}

