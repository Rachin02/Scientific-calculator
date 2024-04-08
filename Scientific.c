#include <stdio.h>
#include <math.h>
// =========================Developed by Rachin ==========================//
void basicCalculations();
void scientificCalculations();

void basicCalculations() {

    double num1, num2, result;
    char op;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        default:
            printf("Invalid operator!\n");
    }
}

void equation(){
    double a, b, c;
    double discriminant, root1, root2;

    printf("Enter the coefficients of the quadratic equation (ax^2 + bx + c = 0):\n");
    printf("Enter a: ");
    scanf("%lf", &a);
    printf("Enter b: ");
    scanf("%lf", &b);
    printf("Enter c: ");
    scanf("%lf", &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different:\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    } else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and same:\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different:\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
    }
}

void logarithm(){
        double num, result;

        printf("Enter a number: ");
        scanf("%lf", &num);
        result = log10(num);
        printf("Logarithm: %.2lf\n", result);
}

void trigonometry(){
        double num, result;

        printf("Enter a number: ");
        scanf("%lf", &num);
        printf("sin: %.2lf\n", sin(num));
        printf("cos: %.2lf\n", cos(num));
        printf("tan: %.2lf\n", tan(num));
}
void square(){
        double num, result;

        printf("Enter a number: ");
        scanf("%lf", &num);
        result = pow(num, 2);
        printf("Square: %.2lf\n", result);
}

void squareRoot(){
        double num, result;

        printf("Enter a number: ");
        scanf("%lf", &num);
        if (num >= 0) {
            result = sqrt(num);
            printf("Square Root: %.2lf\n", result);
        } else {
            printf("Error: Square root of a negative number is not real!\n");
        }
}
void scientificCalculations() {
    int choice;
    double num, result;

    printf("\n=== Scientific Calculations ===\n");
    printf("1. Logarithm\n");
    printf("2. Trigonometry (sin, cos, tan)\n");
    printf("3. Square\n");
    printf("4. Square Root\n");
    printf("5. Equation Solver\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            logarithm() ;
            break;
        case 2:
           trigonometry() ;
            break;
        case 3:
           square() ;
            break;
        case 4:
           squareRoot() ;
            break;
        case 5:
             equation() ;
            break;
        default:
            printf("Invalid choice!\n");
    }
}


int main() {
    int choice;

    do {
        printf("\n\t\t======= Scientific Calculator =======\n");
        printf("1. Basic Calculations\n");
        printf("2. Scientific Calculations\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                basicCalculations();
                break;
            case 2:
                scientificCalculations();
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please enter again.\n");
        }
    } while (choice != 3);

    printf("Exited.\n") ;
    printf("\t\t==================================================\n");

    return 0;
}


