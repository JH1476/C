#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

int main() {
    Node *head = NULL;
    int value = 0;

    while (scanf("%d", &value) == 1) {

        if (value == 0) {
            break;
        }

        if (value > 0) {
            Node *N = (Node *)malloc(sizeof(Node));
            if (N == NULL) {
                return 1; 
            }
            (*N).data = value;
            (*N).next = head;
            head = N;
        }
    }

    Node *curr = head;
    while (curr != NULL) {
        printf("%d\n", (*curr).data);
        curr = (*curr).next;
    }

    curr = head;
    while (curr != NULL) {
        Node *temp = curr;
        curr = (*curr).next;
        free(temp);
    }

    return 0;
}
