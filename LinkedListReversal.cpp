#include<iostream>
#include<cstdlib>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void LinkedListTraversal(struct Node *ptr)
{
    while(ptr != NULL)
    {
        cout<<"Element : "<<ptr->data<<endl;
        ptr = ptr->next;
    }
}

// LINKED LIST REVERSAL

struct Node * Linked_List_Reversal(struct Node *head)
{
    struct Node *current = head;
    struct Node *previous = NULL;
    while(current != NULL)
    {
        struct Node *temp = current->next;
        current->next = previous;
        previous = current;
        current = temp;
    }
    return previous;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *forth;
    struct Node *fifth;
    struct Node *sixth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    forth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));
    sixth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 3;
    second->next = third;

    third->data = 6;
    third->next = forth;

    forth->data = 88;
    forth->next = fifth;

    fifth->data = 22;
    fifth->next = sixth;

    sixth->data = 99;
    sixth->next = NULL;

    cout<<"Linked List before Reversal : "<<endl;
    LinkedListTraversal(head);

    head = Linked_List_Reversal(head);
    cout<<"Linked List after Reversal : "<<endl;
    LinkedListTraversal(head);


    return 0;
}