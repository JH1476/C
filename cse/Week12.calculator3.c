#include <stdio.h>

typedef struct expression {
    int value1;
    int value2;
    char operator;
} Expression;

int calculator(Expression e) {
    
    int result = 0;

    switch (e.operator) {
        case '+':
            result = e.value1 + e.value2;
            break;
        case '-':
            result = e.value1 - e.value2;
            break;
        case '*':
            result = e.value1 * e.value2;
            break;
        case '/':
            result = e.value1 / e.value2;
            break;
    }

    return result;
}

int main() {
    
    int N = 0;
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) { 
        Expression e;
        scanf("%d %c %d", &(e.value1), &(e.operator), &(e.value2));
        printf("%d\n", calculator(e));
    }

    return 0;
}

