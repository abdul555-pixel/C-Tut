#include <stdio.h>

int main(){
    char operator;
    double num1;
    double num2;
    double result;

    printf("Simple Calculator");
    printf("Choose the operation (* / + / - / /) : ");
    scanf("%c", &operator);

    printf("Enter the two numbers seperated by space : ");
    if(scanf("%lf %lf", &num1, &num2) != 2){
        printf("Invalid input");
        return 1;
    }


    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("Result : %.2lf + %.2lf = %.2lf", num1, num2, result);
        break;
    case '-':
        result = num1 - num2;
        printf("Result : %.2lf - %.2lf = %.2lf", num1, num2, result);
        break;
    case '*':
        result = num1 * num2;
        printf("Result : %.2lf * %.2lf = %.2lf", num1, num2, result);
        break;
    case '/':
        if(num2 == 0){
            printf("The number is invalid");
        }else{
            result = num1 / num2;
            printf("Result : %.2lf / %.2lf = %.2lf", num1, num2, result);
            break;
        }
    default:
    printf("Invalid operator, Please use (+ / - / * / /)");
    return 1;
    }

    return 0;
}
