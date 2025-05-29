#include <stdio.h>

int my_atoi(char *S) {

    int x = 0, i = 0;

    while(*(S+i) != '\0') {
        if(*(S+i) >= 48 && *(S+i) <= 57) {
        x = (x * 10) + (*(S+i) - '0');
        }
        else {
            return 0;
        }
        i++;
    }
        return x;
}

int main() {
	char S[1024] = {0};
    scanf("%s", S);

    int result = my_atoi(S);
    printf("%d\n", result);
}
