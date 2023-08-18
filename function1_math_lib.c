// 2023.08.18
// function library: math.h
// ax^2 + bx + c = 0

#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    double r1, r2;

    printf("輸入一元二次方程式 ax^2 + bx + c = 0 的係數 a, b, c:\n");
    printf("a = ");
    scanf("%lf", &a);
    printf("b = ");
    scanf("%lf", &b);
    printf("c = ");
    scanf("%lf", &c);

    r1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    r2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

    printf("ax^2 + bx + c = 0 的兩個解為: %lf, %lf\n", r1, r2);

    return 0;
}
