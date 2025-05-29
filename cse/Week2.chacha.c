#include <stdio.h>

int main() {

    int grade = 0;

    scanf("%d", &grade);

    if(grade>0 && grade<130) {

    if(grade%3==0) {
        printf("%d", grade/3);
    } 

    else if(grade%3==1 || grade%3==2) {
        printf("%d", ((int)grade/3)+1);
    }

    else {
        printf("%d", 1);
    }
}

    return 0;
}
