/*
 * Author : Yusuf Sakr 
 *
 * GitHUB : github.com/yusufsakr
 *
 * Date   : 4, March 2024 
 */

//---------------------------------------------------------------------------------------------------

//Included Headers
#include <stdio.h>
#include <math.h>
#include "./includes/addition.h"
#include "./includes/subtraction.h"
#include "./includes/division.h"
#include "./includes/modulus.h"
#include "./includes/multiplication.h"


int main() {
    char operator;
    float num1, num2;
    double result;

    printf("Enter operator (+, -, *, /, %%):\n");
    scanf("%c", &operator);

    printf("Enter two numbers:\n");
    scanf("%f %f", &num1, &num2);

    switch(operator) {
        case '+':     // Addition Process
            result = add(num1,num2);
            break;
		
        case '-':     // Subtraction Process
            result = sub(num1,num2);
            break;

        case '*':     // Multiplication Process
            result = multiplication (num1, num2);
            break;

        case '/':     // Division Process
            result = division (num1, num2);
            break;

        case '%':     // Returning Remainder
            result = modulus (num1, num2);
            break;

	default:
            printf("Error! Invalid operator.\n");
            return 1; 
    }

    printf("Result: %.2lf\n", result);
    
    return 0;
}
