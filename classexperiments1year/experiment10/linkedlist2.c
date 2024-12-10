#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data;
    struct Node* next;
};

struct Node* createNode(int data) 
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void printList(struct Node* head) 
{
    struct Node* temp = head;
    while (temp != NULL) 
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void insertMiddle(struct Node** head, int data, int position) 
{
    struct Node* newNode = createNode(data);
    if (position == 1) {
        newNode->next = *head;
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Position out of range\n");
        free(newNode);
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

int main() 
{
    struct Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(4);

    insertMiddle(&head, 3, 3);

    printList(head);

    return 0;
}