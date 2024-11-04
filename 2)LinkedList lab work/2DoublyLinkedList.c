#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
} *head, *tail;

void createNodeList(int n)
{
    int i;
    struct node *newNode;
    for (i = 1; i <= n; i++)
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        printf(" Enter the data for node %d:", i);
        scanf("%d", &newNode->data);
        newNode->next = NULL;
        newNode->prev = NULL;
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }
}

void insertAtBeg()
{
    struct node *newNode; 
    newNode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the value to insert:");
    scanf("%d", &newNode->data);
    newNode->next = NULL;
    newNode->prev = NULL;
    if (head = NULL)
    {
        head = tail = newNode;
    }
    else
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void insertAtEnd()
{
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the value to insert:");
    scanf("%d", &newNode->data);
    newNode->next = NULL;
    newNode->prev = NULL;
    if (head = NULL)
    {
        head = tail = newNode;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void insertAtSpecificPos(int pos)
{
    struct node *newNode, *currNode, *nextNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the value to insert:");
    scanf("%d", &newNode->data);
    newNode->next = NULL;
    newNode->prev = NULL;
    if (head = NULL)
    {
        head = tail = newNode;
    }
    else
    {

        currNode = head;
        int cnt = 1;
        while (cnt < pos - 1)
        {
            currNode = currNode->next;
            cnt++;
        }
        nextNode = currNode->next;
        newNode->prev = currNode;
        newNode->next = nextNode;
        currNode->next = newNode;
        nextNode->prev = newNode;
    }
}

void deleteAtBeg()
{
    struct node *temp;
    if (head == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        temp = head;
        head = head->next;
        head->prev = NULL;
        free(temp);
    }
}
void deleteAtEnd()
{
    struct node *temp;
    if (head == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        temp=tail;
        tail=tail->prev;
        free(temp);
    }
}

void deleteAtSpecificPos(int pos)
{
    struct node *currNode, *nextNode;
    if (head == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        currNode = head;
        int cnt = 1;
        while (cnt < pos - 1)
        {
            currNode = currNode->next;
            cnt++;
        }
        nextNode = currNode->next;
        currNode->next = nextNode->next;
        nextNode->next->prev = currNode;
        free(nextNode);
    }
}

int countList()
{
    int ctr = 0;
    struct node *tmp;
    tmp = head;
    // Counting the nodes by traversing the linked list
    while (tmp != NULL)
    {
        ctr++;
        tmp = tmp->next;
    }
    return ctr;
}

void displayList()
{
    struct node *tmp;
    if (head == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        tmp = head;
        printf("Linked List :\n");
        while (tmp != NULL)
        {
            printf("%d<-->", tmp->data);
            tmp = tmp->next;
        }
    }
    printf("NULL");
}

void reverseList(){
    struct node *currNode,*nextNode,*temp;
    currNode=head;
    while(currNode!=NULL){
       nextNode=currNode->next;
       currNode->next=currNode->prev;
       currNode->prev=nextNode;
       currNode=nextNode;
    }
    temp=head;
    head=tail;
    tail=temp;
}

int main()
{
    int n, choice, c, pos;
    printf("\n\n Linked List : To create and display Doubly Linked List :\n");
    printf("-------------------------------------------------------------\n");
    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    createNodeList(n);

    while (1)
    {
        printf("\nMenu: \n");
        printf("1.insertAtBeg\n");
        printf("2.insertAtEnd\n");
        printf("3.insertAtSpecificPos\n");
        printf("4.deleteAtBeg\n");
        printf("5.deleteAtEnd\n");
        printf("6.deleteAtSpecificPos\n");
        printf("7.displayList\n");
        printf("8.countList\n");
        printf("9.reverseList\n");
        printf("10.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insertAtBeg();
            break;
        case 2:
            insertAtEnd();
            break;
        case 3:
            printf("Enter the position of insertion of the node:");
            scanf("%d", &pos);
            insertAtSpecificPos(pos);
            break;
        case 4:
            deleteAtBeg();
            break;
        case 5:
            deleteAtEnd();
            break;
        case 6:
            printf("Enter the position of deletion of the node:");
            scanf("%d", &pos);
            deleteAtSpecificPos(pos);
            break;
        case 7:
            printf("\nData entered in the list : \n");
            displayList();
            break;
        case 8:
            c = countList();
            printf("\nNumber of nodes : %d\n", c);
            break;
        case 9:
            reverseList();
            break;
        case 10:
            printf("Exiting!");
            return 0;

        default:
            printf("Invalid choice!");
            break;
        }
    }
}