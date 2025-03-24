#include <stdio.h>
#include <math.h>

    double root_a(int a, int b, int c) {

        double discriminant = (b*b)-(4*a*c);
        double denominator = 2*a;

        if (a == 0 || discriminant < 0) {
            return 0;
        }
            else {
                return (-b+sqrt(discriminant)) / denominator;
        }
    }

    double root_b(int a, int b, int c) {
        
        double discriminant = (b*b)-(4*a*c);
        double denominator = 2*a;

        if (a == 0 || discriminant < 0) {
            return 0;
        }
            else {
                return (-b-sqrt(discriminant)) / denominator;
        }
    }

    int main() {

        int N;
        scanf("%d", &N);

        int a[N];
        int b[N];
        int c[N];

        for(int i = 0; i < N; i++) {
            scanf("%d %d %d", &a[i], &b[i], &c[i]); 
        }

        for(int j = 0; j < N; j++) {

            double ra = root_a(a[j], b[j], c[j]);
            double rb = root_b(a[j], b[j], c[j]);

            if(ra != 0 && rb != 0) {
                if(ra > rb) {
                    printf("%.2lf %.2lf\n", ra, rb);
                }
                else {
                    printf("%.2lf %.2lf\n", rb, ra);
                }
            }
            else {
                printf("error\n");
            }
        }

        return 0;
}
