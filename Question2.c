// // Calculator using else-if
// #include<stdio.h>
// int main(){
//     char ch;
//     printf("Enter the operator : "); //+,-,*,/,%
//     scanf("%c",&ch);

//     int a;
//     printf("enter a :");
//     scanf("%d",&a);
//     int b;
//     printf("enter b :");
//     scanf("%d",&b);

//     if(ch=='+') {
//         printf("Addition = %d\n",a+b); }
//     else if (ch=='-') {
//         printf("Subraction = %d\n",a-b); }
//     else if(ch=='*') {
//         printf("Multiplication = %d\n",a*b); }
//     else if(ch=='/') {
//         printf("Division = %d\n",a/b); }
//     else if(ch=='%') {
//         printf("Moduolo = %d\n",a%b); }
//     else{
//         printf("Another operator :");
//     }    
    
//     return 0;

// }

// calucator using do-while loop
#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    do {
        // Display menu
        printf("Choose an operation (+, -, *, /) or 'q' to quit: ");
        scanf(" %c", &operator);

        // Check for exit condition
        if (operator == 'q' || operator == 'Q') {
            break;
        }

        // Get user input
        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);

        // Perform calculation based on the operator
        switch (operator) {
            case '+':
                result = num1 + num2;
                printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '-':
                result = num1 - num2;
                printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '*':
                result = num1 * num2;
                printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
                } else {
                    printf("Error: Division by zero is undefined.\n");
                }
                break;
            default:
                printf("Error: Invalid operator. Please try again.\n");
        }

    } while (1); // Infinite loop, exit using 'q' or 'Q'

    printf("Calculator program terminated.\n");

    return 0;
}
