#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

typedef struct Node
{
    int data;
    struct Node* next;
} Node;

int CountElements(Node* head)
{
    int count = 0;
    Node* current = head;

    while (current != NULL)
    {
        count++;
        current = current->next;
    }

    return count;
}

void InsertElement(Node** head, int data)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        Node* current = *head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode;
    }
}

void PrintList(Node* head)
{
    Node* current = head;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main()
{
    Node* head = NULL;

    InsertElement(&head, 1);
    InsertElement(&head, 2);
    InsertElement(&head, 3);
    InsertElement(&head, 4);
    InsertElement(&head, 5);

    printf("Bağlı liste: ");
    PrintList(head);

    int count = CountElements(head);
    printf("Eleman sayısı: %d\n", count);

    return 0;
}
