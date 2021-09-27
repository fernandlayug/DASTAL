#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node *nextptr;
}*structnode;
int main()
{
    int n, num;
    printf ("Input the number of nodes : ");
    scanf("%d", &n);
    createNodeList(n);
    printf("\n Data entered in the list are : \n");
    displayList();
    printf("\n Input data to insert at the end of the list :");
    scanf("%d", &num);
    NodeInsertatEnd(num);
    printf("\n Data, after inserted in the list are: \n");
    displayList();
    return 0;


}
void createNodeList(int n)
{
    struct node * lastnode, *tmp;
    int num, i;
    structnode = (struct node *)malloc(sizeof(struct node));
    if (structnode == NULL)
    {
        printf("Memory can not be allocated");
    }
    else
    {
        printf("Input data for node 1: ");
        scanf("%d", &num);
        structnode-> num = num;
        structnode-> nextptr = NULL;
        tmp = structnode;
        for (i=2; i<=n; i++)
        {
            lastnode = (struct node *)malloc(sizeof(struct node));
            if (lastnode == NULL)
            {
                printf ("Memory can not be allocated");
                break;
            }
            else
            {
                printf("Input data for node %d :", i);
                scanf(" %d", &num);
                lastnode->num = num;
                lastnode->nextptr = NULL;
                tmp->nextptr = lastnode;
                tmp= tmp->nextptr;
            }
        }
    }
}

void displayList()
{
    struct node *tmp;
    if(structnode == NULL)
    {
        printf("No data found in the empty list.");

    }
    else
    {
        tmp = structnode;
        while(tmp != NULL)
        {
            printf("Data = %d\n", tmp->num);
            tmp = tmp->nextptr;
        }
    }
}

void NodeInsertatEnd(int num)
{
    struct node *lastnode, *tmp;
    lastnode = (struct node*)malloc(sizeof(struct node));
    if (lastnode == NULL)
    {
        printf("Memory can not be allocated.");
    }
    else
    {
        lastnode->num = num;
        lastnode->nextptr = NULL;
        tmp = structnode;
        while(tmp->nextptr != NULL)
        tmp = tmp->nextptr;
        tmp->nextptr = lastnode;
    }

}