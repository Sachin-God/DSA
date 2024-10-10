#include <stdio.h>
#include <stdlib.h> 

struct Node {
    int data;
    struct Node* next;
};

int main() {
    // Allocate memory for the nodes
    struct Node *p = (struct Node*)malloc(sizeof(struct Node));
    struct Node *q = (struct Node*)malloc(sizeof(struct Node));
    struct Node *r = (struct Node*)malloc(sizeof(struct Node));

    // Assign data to the nodes
    p->data = 1;
    q->data = 2;
    r->data = 3;

    // Link the nodes
    p->next = q;
    q->next = r;
    r->next = NULL;

    // Traverse and print the linked list
    struct Node *head = p;
    while (head) {
        printf("%d ", head->data);
        head = head->next;
    }

    // Free allocated memory
    free(p);
    free(q);
    free(r);

    return 0;
}
