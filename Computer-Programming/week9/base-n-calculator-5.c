#include <stdio.h>

int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int isValidBaseN(char *num, int n) {
    int length = 0;
    while (num[length] != '\0') {
        length++;
    }
    
    for (int i = 0; i < length; i++) {
        if (!((num[i] >= '0' && num[i] <= '0' + n - 1) || (num[i] >= 'a' && num[i] <= 'a' + n - 11))) {
            return 0;
        }
    }
    return 1;
}

int isValidN(int n) {
    return n >= 2 && n <= 16;
}

int convertToDecimal(char *num, int n) {
    int decimal = 0;
    int length = 0;
    while (num[length] != '\0') {
        length++;
    }
    for (int i = length - 1; i >= 0; i--) {
        int digit = (num[i] >= '0' && num[i] <= '9') ? num[i] - '0' : num[i] - 'a' + 10;
        decimal += digit * power(n, length - 1 - i);
    }
    return decimal;
}

int main() {
    char num1[100], num2[100];
    int n, decimal1, decimal2;
    
    printf(" *** Base n Calculator ***\nEnter num1 num2 n : ");
    scanf("%s %s %d", num1, num2, &n);
    
    if (!isValidN(n)) {
        printf("base_n(%d) is NOT valid.\n", n);
    }
    
    else if (!isValidBaseN(num1, n)) {
        printf("%s is NOT valid.\n", num1);
    }
    
    else if (!isValidBaseN(num2, n)) {
        printf("%s is NOT valid.\n", num2);
    }
    else {
    decimal1 = convertToDecimal(num1, n);
    decimal2 = convertToDecimal(num2, n);
    printf("%s + %s (%d) = %d + %d (decimal) = %d (decimal)\n",
           num1, num2, n, decimal1, decimal2, decimal1 + decimal2);
    }
    return 0;
}