#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
};

struct Node *head = NULL;

struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->prev = NULL;
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
};

void insertAtBeginning(int data)
{
    struct Node *temp = createNode(data);
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
};

void insertAtEnd(int data)
{
    struct Node *temp = createNode(data);

    if (head == NULL)
    {
        head = temp;
        return;
    }

    struct Node *current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }

    current->next = temp;
    temp->prev = current;
}

void deleteAtEnd()
{
    if (head == NULL)
    {
        printf("List is empty. Nothing to delete.\n");
    }

    if (head->next == NULL)
    {
        free(head);
    }

    struct Node *current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }

    current->prev->next = NULL;

    free(current);

};

void printList()
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    insertAtBeginning(10);
    insertAtBeginning(20);

    insertAtEnd(30);

    printList();

    deleteAtEnd();

    printList();

    deleteAtEnd();

    printList();

    return 0;
}
