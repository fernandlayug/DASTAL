#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int num;                    //Data of the node
    struct node *nextptr;       //Address of the node
}*structnode;

void createNodeList(int n);     //function to create the list
void NodeInsertatEnd(int num);	//function to insert node at the end
void displayList();             //function to display the list
 
int main()
{
    int n,num;

    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    createNodeList(n);
    printf("\n Data entered in the list are : \n");		
    displayList();
    printf("\n Input data to insert at the end of the list : ");
    scanf("%d", &num);
    NodeInsertatEnd(num);
    printf("\n Data, after inserted in the list are : \n");		
    displayList();
    return 0;
}

void createNodeList(int n)
{
    struct node *lastnode, *tmp;
    int num, i;
    structnode = (struct node *)malloc(sizeof(struct node));
    if(structnode == NULL) //check whether the structnode is NULL and if so no memory allocation
    {
        printf(" Memory can not be allocated.");
    }
    else
    {
// reads data for the node through keyboard
        printf(" Input data for node 1 : ");
        scanf("%d", &num);
 
        structnode-> num = num;      
        structnode-> nextptr = NULL; //Links the address field to NULL
        tmp = structnode;
//Creates n nodes and adds to linked list
        for(i=2; i<=n; i++)
        {
            lastnode = (struct node *)malloc(sizeof(struct node));
            if(lastnode == NULL) //check whether the lastnode is NULL and if so no memory allocation
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node %d : ", i);
                scanf(" %d", &num);
                lastnode->num = num;      // links the num field of lastnode with num
                lastnode->nextptr = NULL; // links the address field of lastnode with NULL
                tmp->nextptr = lastnode; // links previous node i.e. tmp to the lastnode
                tmp = tmp->nextptr;
            }
        }
    }
} 

void NodeInsertatEnd(int num)
{
    struct node *lastnode, *tmp;
    lastnode = (struct node*)malloc(sizeof(struct node));
    if(lastnode == NULL)
    {
        printf(" Memory can not be allocated.");
    }
    else
    {
        lastnode->num = num;     //Links the data part
        lastnode->nextptr = NULL; 
        tmp = structnode;
        while(tmp->nextptr != NULL)
            tmp = tmp->nextptr;
        tmp->nextptr = lastnode;  //Links the address part
    }
}

void displayList()
{
    struct node *tmp;
    if(structnode == NULL)
    {
        printf(" No data found in the empty list.");
    }
    else
    {
        tmp = structnode;
        while(tmp != NULL)
        {
            printf(" Data = %d\n", tmp->num);   // prints the data of current node
            tmp = tmp->nextptr;                 // advances the position of current node
        }
    }
}