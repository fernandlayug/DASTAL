#include<stdio.h>
#include<conio.h>

int a[5], top=-1;

void push(int value)
{
 if(top==4)
 {
     printf("Stack is Full");
    
 }
 else{
     top=top+1;
     a[top]=value;
 }
}


void pop()
{
    if(top==-1)
    {
        printf("Stack is Empty");
    }
    else
    {
        top=top-1;
    }

}

void display()
{
int i;
if(top==-1)
{
    printf("\nThere is Noting to Display");
    
}
else
{
    printf("\n Stack are: ");\
    for(i=0;i<=top; i++)
    {
        printf("%d ", a[i]);
    }
}
}

void main()
{
int choice, value;
do{
    printf("\n1. Push");
    printf("\n2. Pop");
    printf("\n3. Display");
    printf("\n4. Exit");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if(choice==1)
    {
        printf("\nEnter value to be inserted: ");
        scanf("%d", &value);
        push(value);
    }
    if(choice==2)
    {
        pop();
    }
    if (choice==3)
    {
        display();
    }
    }while (choice!=4);
    getch();
}