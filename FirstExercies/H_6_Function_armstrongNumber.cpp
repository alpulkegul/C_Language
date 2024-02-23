//Project Name: Function - Armstrong Number

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

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if(isArmstrong(num) == 1)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}
