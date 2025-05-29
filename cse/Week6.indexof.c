#include <stdio.h>

int indexof(char *s1,char *s2) {
    int i = 0;
    while(*(s1+i) != '\0') {
        int j = 0;
        while(*(s2+j) != '\0') {

            if(*(s1+i+j) == '\0' || *(s2+j) != *(s1+i+j)) {
                break;
            }
            j++;
        }

        if(*(s2+j) == '\0') {
                return i;
        }
        i++;
    }
    return -1;
}

int main() {
    char s1[1024];
    char s2[1024];
    scanf("%s", s1);
    scanf("%s", s2);

    int result = 0;
    result = indexof(s1,s2);
    printf("%d\n", result);
    return 0;
}
