#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node* addElement(struct node *llp, int element) {
    if (llp == NULL) {
        struct node *newNode = malloc(sizeof(struct node));
        newNode->data = element;
        newNode->next = NULL;
        return newNode;
    } else {
        struct node *current = llp;
        while (current->next != NULL) {
            current = current->next;
        }
        struct node *newNode = malloc(sizeof(struct node));
        newNode->data = element;
        newNode->next = NULL;
        current->next = newNode;
        return llp;
    }
}

int main() {
    struct node *llp = NULL;

    llp = addElement(llp, 5);
    llp = addElement(llp, 7);
    llp = addElement(llp, 10);
    llp = addElement(llp, 12);

    struct node *current = llp;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
}