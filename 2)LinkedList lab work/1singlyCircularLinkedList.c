#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
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
        if (head == NULL)
        {
            head = tail = newNode;
            tail->next = head;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
            tail->next = head;
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
    if (head = NULL)
    {
        head = tail = newNode;
        tail->next = head;
    }
    else
    {

        newNode->next = head;
        head = newNode;
        tail->next = head;
    }
}

void insertAtEnd()
{
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the value to insert:");
    scanf("%d", &newNode->data);
    newNode->next = NULL;
    if (head = NULL)
    {
        head = tail = newNode;
        tail->next = head;
    }
    else
    {

        tail->next = newNode;
        tail = newNode;
        tail->next = head;
    }
}

void insertAtSpecificPos(int pos)
{
    struct node *newNode, *temp;
    newNode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the value to insert:");
    scanf("%d", &newNode->data);
    newNode->next = NULL;
    if (head = NULL)
    {
        head = tail = newNode;
        tail->next = head;
    }
    else
    {

        temp = head;
        int cnt = 1;
        while (cnt < pos - 1)
        {
            temp = temp->next;
            cnt++;
        }
        newNode->next = temp->next;
        temp->next = newNode;
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
        tail->next = head;
        free(temp);
    }
}

void deleteAtEnd()
{
    struct node *currNode, *prevNode;
    if (head == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        currNode = head;
        while (currNode->next != head)
        {
            prevNode = currNode;
            currNode = currNode->next;
        }
        prevNode->next = head;
        free(currNode);
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
        free(nextNode);
    }
}

int countList()
{
    int ctr = 0;
    struct node *tmp;
    tmp = head;
    // Counting the nodes by traversing the linked list
    do
    {
        ctr++;
        tmp = tmp->next;
    } while (tmp != head);
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
        while (tmp->next != head)
        {
            printf("%d-->", tmp->data);
            tmp = tmp->next;
        }
        printf("%d", tmp->data);
    }
}

void reverseList()
{
    struct node *prevNode = tail, *currNode = head, *nextNode;
    if (head == NULL || head == tail)
    {
        return;
    }
    do
    {
        nextNode = currNode->next;
        currNode->next = prevNode;
        prevNode = currNode;
        currNode = nextNode;
    } while (currNode != head);

    tail = head;
    head = prevNode;

    tail->next = head;
}

int main()
{
    int n, choice, c, pos;
    printf("\n\n Linked List : To create and display Singly Circular Linked List :\n");
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