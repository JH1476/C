#include <stdio.h>

int main() {
    char arr[101];
    scanf("%s", arr);

    char * start_a = arr;
    char * compare_a = arr;

        while(*start_a != '\0') {
            int count = 0;

            while(*compare_a != '\0' && *start_a == *compare_a) {
                count++;
                compare_a++;
            }

            printf("%c%d", *start_a, count);
            start_a = compare_a;
        }

        return 0;

    }
