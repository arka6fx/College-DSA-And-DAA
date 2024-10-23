#include <stdio.h>
#include <stdlib.h>
struct node
{
    int num;
    struct node *nextptr;
} *stnode;
void createNodeList(int);
int countList();
void displayList();
void insertAtBeg();
void insertAtEnd();
void insertAtSpecificPos(int);
void deleteAtBeg();
void deleteAtEnd();
void deleteAtSpecificPos(int);
void reverseList();
int main()
{
    int n, choice, c, pos;
    printf("\n\n Linked List : To create and display Singly Linked List :\n");
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
void createNodeList(int n)
{
    struct node *fnNode, *tmp;
    int num, i;
    stnode = (struct node *)malloc(sizeof(struct node));
    if (stnode == NULL)
    {
        printf(" Memory can not be allocated.");
    }
    else
    {
        printf(" Input data for node 1 : ");
        scanf("%d", &num);
        stnode->num = num;
        stnode->nextptr = NULL;
        tmp = stnode;
        for (i = 2; i <= n; i++)
        {
            fnNode = (struct node *)malloc(sizeof(struct node));
            if (fnNode == NULL)
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node %d : ", i);
                scanf(" %d", &num);
                fnNode->num = num;
                fnNode->nextptr = NULL;
                tmp->nextptr = fnNode;
                tmp = tmp->nextptr;
            }
        }
    }
}

void insertAtBeg()
{
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the value to insert:");
    scanf("%d", &newNode->num);
    if (stnode == NULL)
    {
        stnode = newNode;
        newNode->nextptr = NULL;
    }
    else
    {
        newNode->nextptr = stnode;
        stnode = newNode;
    }
}
void insertAtEnd()
{
    struct node *newNode, *temp;
    newNode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the value to insert:");
    scanf("%d", &newNode->num);
    newNode->nextptr = NULL;
    if (stnode == NULL)
    { // stnode = head
        stnode = newNode;
        newNode->nextptr = NULL;
    }

    else
    {
        temp = stnode;
        while (temp->nextptr != 0)
        {
            temp = temp->nextptr;
        }
        temp->nextptr = newNode;
    }
}
void insertAtSpecificPos(int pos)
{
    struct node *newNode, *temp;
    newNode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the value to insert:");
    scanf("%d", &newNode->num);
    newNode->nextptr = NULL;
    if (stnode == NULL)
    { // stnode = head
        stnode = newNode;
        newNode->nextptr = NULL;
    }
    else
    {
        temp = stnode;
        int cnt = 1;
        while (cnt < pos - 1)
        {
            temp = temp->nextptr;
            cnt++;
        }
        newNode->nextptr = temp->nextptr;
        temp->nextptr = newNode;
    }
}

void deleteAtBeg()
{
    struct node *temp;
    if (stnode == NULL)
    {
        printf(" List is empty.");
    }
    else
    {

        temp = stnode;
        stnode = stnode->nextptr;
        free(temp);
    }
}

void deleteAtEnd()
{
    struct node *temp, *prevNode;
    if (stnode == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        while (temp->nextptr != NULL)
        {
            prevNode = temp;
            temp = temp->nextptr;
        }
        prevNode->nextptr = NULL;
        free(temp);
    }
}
void deleteAtSpecificPos(int pos)
{
    struct node *newNode, *temp, *nextNode;
    if (stnode == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        temp = stnode;
        int cnt = 1;
        while (cnt < pos - 1)
        {
            temp = temp->nextptr;
            cnt++;
        }
        nextNode = temp->nextptr;
        temp->nextptr = nextNode->nextptr;
        free(nextNode);
    }
}

int countList()
{
    int ctr = 0;
    struct node *tmp;
    tmp = stnode;
    // Counting the nodes by traversing the linked list
    while (tmp != NULL)
    {
        ctr++;
        tmp = tmp->nextptr;
    }
    return ctr;
}
void displayList()
{
    struct node *tmp;
    if (stnode == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        tmp = stnode;
        printf("Linked List :\n");
        while (tmp != NULL)
        {
            printf("%d-->", tmp->num);
            tmp = tmp->nextptr;
        }
    }
    printf("NULL");
}

void reverseList()
{
    struct node *prevNode, *currNode, *nextNode;
    prevNode = NULL;
    currNode = nextNode = stnode;
    while (currNode != NULL)
    {
        nextNode = currNode->nextptr;
        currNode->nextptr = prevNode;
        prevNode = currNode;
        currNode = nextNode;
    }
    stnode = prevNode;
}