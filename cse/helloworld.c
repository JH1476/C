#include <stdio.h>

int main() {

printf("char -> int 변환\n ");
char c = 'A'; // ASCII 65
int i = c; // char를 int로 변환

printf("char c = %c\n", c);
printf("c -> int형 = %d\n\n", i);

printf("int -> char 변환\n");
int num = 98; // ASCII 'b'
char ch = num; // int를 char로 변환

printf("int num = %d\n", num);
printf("num -> char형 = %c\n\n", ch);

printf("float -> int 변환\n");
float f = 3.14;
int fi = f; // float를 int로 변환

printf("float f = %f\n", f);
printf("f -> int형 = %d\n\n", fi);

printf("int -> float 변환\n");
int n = 42;
float fn = n; // int를 float로 변환

printf("int n = %d\n", n);
printf("n -> float형 = %f\n\n", fn);

int si = 10;
unsigned int ui = si; // signed를 unsigned로 변환

printf("signed -> unsigned 변환\n");
printf("int si = %d\n", si);
printf("si -> unsigned int형 = %u\n\n", ui);

// 6. unsigned -> signed 변환

printf("unsigned -> signed 변환\n");
unsigned int u = 4294967286; // -10과 같은 비트 패턴
int s = u; // unsigned를 signed로 변환

printf("unsigned int u = %u\n", u);
printf("u -> signed int형 = %d\n\n", s);

return 0;
}
