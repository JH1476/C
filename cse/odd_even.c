        #include <stdio.h>
        #include <string.h>

        void odd(int *odd) {
            
            int print = 0;

            for(int i = 0; i < 10; i++) {
                if (odd[i]%2==1) {
                    printf("%d ", odd[i]);
                    print = 1;
                }
            }

        if(print) {
            printf("\n");
        }
    }

        void even(int *even) {

            int print = 0;

            for(int i = 0; i < 10; i++) {
                if (even[i]%2==0) {
                    printf("%d ", even[i]);
                    print = 1;
                }
            }

        if(print) {
            printf("\n");
            }
        }

        int main() {
            int a[10];
            for(int i = 0; i < 10; i++) {
                scanf("%d", &a[i]);
            }
            
            odd(a);
            even(a);

            return 0;
}
