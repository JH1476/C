#include <stdio.h>
#include <string.h>

int main() {

    int T, i;
    scanf("%d", &T);
    char a[101];
    while(i < T) {
    scanf("%s", a);
    printf("%c%c\n",a[0], a[strlen(a)-1]);
    i++;
    }
    return 0;
}
