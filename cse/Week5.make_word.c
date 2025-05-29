#include <stdio.h>

int main() {
    char a[1001];
    char b[1001];
    int alpabet_a[26];
    int alpabet_b[26];

    for (int j = 0; j < 26; j++) {
       *(alpabet_a+j) = 0;
       *(alpabet_b+j) = 0; 
    }

    scanf("%s %s", a, b);

    char * ptr_a = a;
    char * ptr_b = b;
    
    while (*ptr_a != '\0') {
        *(alpabet_a + (*ptr_a - 'a')) += 1;
        ptr_a++;
        }

    while (*ptr_b != '\0') {
        *(alpabet_b + (*ptr_b - 'a')) += 1;
        ptr_b++;
        }

    for (int j = 0; j < 26; j++) {
        if (*(alpabet_a+j) < *(alpabet_b+j)) {
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");

    return 0;
}
