#include <stdio.h>

int main() {
        unsigned int a = 0, b = 0, c = 0, d = 0;
        scanf("%u %u %u %u", &a, &b, &c, &d);

        unsigned char * ptr_a = (unsigned char*)&a;
        unsigned char * ptr_b = (unsigned char*)&b;
        unsigned char * ptr_c = (unsigned char*)&c;
        unsigned char * ptr_d = (unsigned char*)&d;

        unsigned int x = 0;
        unsigned char * ptr_x = (unsigned char*)&x;
        
        *(ptr_x) = *(ptr_d);
        *(ptr_x+1) = *(ptr_c+1);
        *(ptr_x+2) = *(ptr_b+2);
        *(ptr_x+3) = *(ptr_a+3);

        printf("%u\n", x);

    return 0;
}
