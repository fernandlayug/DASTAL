#include <stdio.h>
#include <stdlib.h>

struct node {
    int num;
    struct node * previousptr;
    struct node * nextptr;
}*startnode, *endnode;
 

void DoublyListcreation(int n);
void DoublylListDeleteLastartnode();
void displayDlList(int a);

int main()
{
    int n,num1,a,insPlc;
    startnode = NULL;
    endnode = NULL;
   	
    printf(" Input the number of nodes (3 or more ): ");
    scanf("%d", &n);
    DoublyListcreation(n); 
    a=1;
    displayDlList(a);
    DoublylListDeleteLastartnode();
        a=2;
    displayDlList(a);
    return 0;
}
 
void DoublyListcreation(int n)
{
    int i, num;
    struct node *fnNode;
 
    if(n >= 1)
    {
        startnode = (struct node *)malloc(sizeof(struct node));
        if(startnode != NULL)
        {
            printf(" Input data for node 1 : "); // assigning data in the first node
            scanf("%d", &num);
            startnode->num = num;
            startnode->previousptr = NULL;
            startnode->nextptr = NULL;
            endnode = startnode;
            for(i=2; i<=n; i++)
            {
                fnNode = (struct node *)malloc(sizeof(struct node));
                if(fnNode != NULL)
                {
                    printf(" Input data for node %d : ", i);
                    scanf("%d", &num);
                    fnNode->num = num;
                    fnNode->previousptr = endnode;    // new node is linking with the previous node
                    fnNode->nextptr = NULL;     // set next address of fnnode is NULL
                    endnode->nextptr = fnNode;   // previous node is linking with the new node
                    endnode = fnNode;            // assign new node as last node
                }
                else
                {
                    printf(" Memory can not be allocated.");
                    break;
                }
            }
        }
        else
        {
            printf(" Memory can not be allocated.");
        }
    }
}

void DoublylListDeleteLastartnode()
{
    struct node * NodeToDel;
 
    if(endnode == NULL)
    {
        printf(" Delete is not possible. No data in the list.\n");
    }
    else
    {
        NodeToDel = endnode;
        endnode = endnode->previousptr;    // move the previous address of the last node to 2nd last node
        endnode->nextptr = NULL;     // set the next address of last node to NULL
        free(NodeToDel);            // delete the last node
    }
}

void displayDlList(int m)
{
    struct node * tmp;
    int n = 1;
    if(startnode == NULL)
    {
        printf(" No data found in the List yet.");
    }
    else
    {
        tmp = startnode;
        if (m==1)
        {
        printf("\n Data entered in the list are :\n");
        }
        else
        {
         printf("\n After deletion the new list are :\n");   
        }
        while(tmp != NULL)
        {
            printf(" node %d : %d\n", n, tmp->num);
            n++;
            tmp = tmp->nextptr; // current pointer moves to the next node
        }
    }
}