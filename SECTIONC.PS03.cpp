#include <stdio.h>

int main() {

    int a = 20, b = 10;

    printf("===== Arithmetic Operators =====\n");
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);
    printf("Modulus: %d\n\n", a % b);

    printf("===== Relational Operators =====\n");
    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
    printf("a > b  : %d\n", a > b);
    printf("a < b  : %d\n", a < b);
    printf("a >= b : %d\n", a >= b);
    printf("a <= b : %d\n\n", a <= b);

    int x = 1, y = 0;

    printf("===== Logical Operators =====\n");
    printf("x && y : %d\n", x && y);
    printf("x || y : %d\n", x || y);
    printf("!x     : %d\n\n", !x);

    int p = 5, q = 3;

    printf("===== Bitwise Operators =====\n");
    printf("p & q  : %d\n", p & q);
    printf("p | q  : %d\n", p | q);
    printf("p ^ q  : %d\n", p ^ q);
    printf("~p     : %d\n", ~p);
    printf("p << 1 : %d\n", p << 1);
    printf("p >> 1 : %d\n\n", p >> 1);

    int num = 10;

    printf("===== Assignment Operators =====\n");

    num += 5;
    printf("num += 5 : %d\n", num);

    num -= 3;
    printf("num -= 3 : %d\n", num);

    num *= 2;
    printf("num *= 2 : %d\n", num);

    num /= 4;
    printf("num /= 4 : %d\n", num);

    num %= 3;
    printf("num %%= 3 : %d\n\n", num);

    printf("===== sizeof Operator =====\n");
    printf("Size of int   : %lu bytes\n", sizeof(int));
    printf("Size of float : %lu bytes\n", sizeof(float));
    printf("Size of char  : %lu bytes\n\n", sizeof(char));

    int m, n;

    printf("===== Comma Operator =====\n");

    m = (n = 5, n + 10);

    printf("Value of n : %d\n", n);
    printf("Value of m : %d\n\n", m);

    int age = 18;

    printf("===== Conditional Operator =====\n");

    (age >= 18) ? printf("Adult\n\n") : printf("Minor\n\n");

    int binary, decimal = 0, base = 1, remainder;

    printf("===== Binary to Decimal Conversion =====\n");

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while (binary > 0) {
        remainder = binary % 10;
        decimal = decimal + remainder * base;
        binary = binary / 10;
        base = base * 2;
    }

    printf("Decimal value = %d\n", decimal);

    return 0;
}