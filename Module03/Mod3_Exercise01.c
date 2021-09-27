#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

void Insert(int x);
void Print();

struct node
{
	int data;
	struct node *next;
}*temp, *head;

void main()
{
	int n, i, x;

	printf("How many elements?: ");
	scanf("%d",&n);
	for(i=0; i<n;i++)
	{
		printf("Enter the value: ");
		scanf("%d",&x);
		Insert(x);
		Print();
	}


getch();
}

void Insert(int x)
{
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = x;
	temp->next = head;
	head = temp;

}

void Print()
{
	temp = head;
	printf("The element/s in the list are: ");
	while(temp != NULL)
	{
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
	

}


