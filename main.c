#include <stdio.h>

int sum(int, int);

int sub(int, int);

int mult(int, int);

float div(int, float);

void input();

int main() {
    input();
}

int sum(int x, int y) {

    return x + y;
}

int sub(int x, int y) {
    return x - y;
}

int mult(int x, int y) {
    return x * y;
}

float div(int x, float y) {
    return x / y;
}

void input() {
    char operator;
    float x, y;
    float z;
    int executer;
    do {
        executer = 0;
        printf("choose operator ( +, -, *, / )\n");
        scanf("%c", &operator);
        printf("input x and y\n");
        scanf("%f%f", &x, &y);
        switch (operator) {
            case '+':
                z = sum(x, y);
                break;
            case '-':
                z = sub(x, y);
                break;

            case '/':
                z = div(x, y);
                break;

            case '*':
                z = mult(x, y);
                break;
            default:
                executer = 1;
        }


    } while (executer);
    printf("%.2f", z);
}