#include <stdio.h>

int main() {

    int N, M;
    scanf("%d %d",&N, &M);
    int a[N];
    int temp = 0;

    for(int i = 0; i < N; i++) {
        a[i] = i+1;
    }

    for (int k = 0; k < M; k++) {
        int left,right;
        scanf("%d %d", &left, &right);
        while (right > 0 && left < right) {
            temp = a[left-1];
            a[left-1] = a[right-1];
            a[right-1] = temp;
            left++;
            right--;
        }
    }

    for(int n = 0; n < N; n++) {
        printf("%d ",a[n]);
    }
    
    return 0;
}
