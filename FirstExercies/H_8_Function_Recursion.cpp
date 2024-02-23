//Project Name: Recursion

#include <stdio.h>

int factorial(int n) {
    if(n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Factorial of %d = %d", num, factorial(num));

    return 0;
}
