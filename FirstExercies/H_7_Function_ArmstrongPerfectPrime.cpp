//Project Name: Armstrong, Perfect, Prime Number

#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int originalNum, remainder, n = 0;
    float result = 0.0;

    originalNum = num;

    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum%10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    if((int)result == num)
        return 1;
    else
        return 0;
}

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

int isPrime(int num) {
    if (num <= 1)
        return 0;
    if (num % 2 == 0 && num > 2) 
        return 0;
    for(int i = 3; i <= sqrt(num); i+= 2) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if(isArmstrong(num) == 1)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    if(isPerfect(num) == 1)
        printf("%d is a perfect number.\n", num);
    else
        printf("%d is not a perfect number.\n", num);

    if(isPrime(num) == 1)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}

