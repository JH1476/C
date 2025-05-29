#include <stdio.h>
#include <stdlib.h>

int main() {
    int D_i = 0;
    int size = 0;
    int capacity = 1;

    int *dynamicArray = NULL;
    int *ptr = NULL;

    dynamicArray = (int*)malloc(sizeof(int)*capacity);
    if (dynamicArray == NULL) {
        return 1;
    }

    while (1) {

        scanf("%d", &D_i);

        if (D_i == 0) {
            break;
        }

        dynamicArray[size] = D_i;
        size++;

        if (size > capacity) {

            capacity *= 2;

            int *tempArray = (int *)malloc(sizeof(int)*capacity);

            if (dynamicArray == NULL) {
                free(dynamicArray);
                return 1;
            }

            for (int i = 0; i < size; i++) {
                *(tempArray+i) = *(dynamicArray+i);
            }

            free(dynamicArray);   
            dynamicArray = tempArray; 
    }
}

    ptr = dynamicArray+size-1;
    for (int i = 0; i < size; i++) {
        printf("%d ", *ptr);
        ptr--;
        printf("\n");
    }

    free(dynamicArray);
    return 0;
}
