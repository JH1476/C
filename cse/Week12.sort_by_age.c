#include <stdio.h>

typedef struct {
    int age;
    char name[21];
    int id;
} Person;

int main() {
    int N = 0;
    scanf("%d", &N);

    if (N <= 0) {
        return 1;
    }

    Person arr[N];

    for (int i = 0; i < N; i++) {
        scanf("%20s %d", arr[i].name, &arr[i].age); 
        arr[i].id = i+1;

        if (arr[i].age < 0 || arr[i].age > 150) {
            return 1;
        }
    }

    for (int i = 0; i < N-1; i++) {
        for (int j = 0; j < N-1-i; j++) {
            if ((arr[j].age > arr[j+1].age) || 
                (arr[j].age == arr[j+1].age && arr[j].id > arr[j+1].id)) {
                Person temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        printf("%s %d %d\n", arr[i].name, arr[i].age, arr[i].id);
    }

    return 0;
}
