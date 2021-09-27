#include <stdio.h>
#include <stdlib.h>

struct node {
    int num;
    struct node * previousptr;
    struct node * nextptr;
}*startnode, *endnode;
 

void DoublyListCreation(int n);
void DoublyDeleteFirstStartNode();
void displayDlList(int a);

int main()
{
    int n,num1,a,insPlc;
    startnode = NULL;
    endnode = NULL;
    
    printf(" Input the number of nodes (3 or more ): ");
    scanf("%d", &n);
    DoublyListCreation(n); 
    a=1;
    displayDlList(a);
    DoublyDeleteFirstStartNode();
        a=2;
    displayDlList(a);
    return 0;
}
 
void DoublyListCreation(int n)
{
    int i, num;
    struct node *fnNode;
 
    if(n >= 1)
    {
        startnode = (struct node *)malloc(sizeof(struct node));
        if(startnode != NULL)
        {
            printf(" Input data for node 1 : "); 
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
                    fnNode->previousptr = endnode;    
                    fnNode->nextptr = NULL;     
                    endnode->nextptr = fnNode;   
                    endnode = fnNode;            
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

void DoublyDeleteFirstStartNode()
{
    struct node * NodeToDel;
    if(startnode == NULL)
    {
        printf(" Delete is not possible. No data in the list.\n");
    }
    else
    {
        NodeToDel = startnode;
        startnode = startnode->nextptr;   
        startnode->previousptr = NULL;      
        free(NodeToDel);            
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
            tmp = tmp->nextptr; 
        }
    }
}
