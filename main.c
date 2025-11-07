#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(void) {
    float a, b, res;
    char op;
    bool running = true;

    while (running) {
        if (scanf("%f %c %f", &a, &op, &b) != 3) {
            printf("Invalid input!\n");
            while (getchar() != '\n');
            continue;
        }

        if (a == 0 && b == 0 && op == 'q') {
            running = false;
            break;
        }

        switch (op) {
            case '+':
                res = a + b;
                break;
            case '-':
                res = a - b;
                break;
            case '*':
                res = a * b;
                break;
            case 'x':
                res = pow(a, b);
                break;
            case '/':
                if (b != 0)
                    res = a / b;
                else {
                    printf("Error: Division by zero!\n");
                    continue;
                }
                break;
            default:
                printf("Error: Unknown operator '%c'!\n", op);
                continue;
        }

        printf("Result: %.2f\n", res);
    }

    printf("Exiting program.\n");
    return 0;
}