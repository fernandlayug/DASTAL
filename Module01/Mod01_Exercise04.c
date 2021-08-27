#include <stdio.h>
#include<conio.h>

int main()
{

int i, n, arr[20];

printf("Enter the number15 of elements in the array: ");
scanf("%d", &n);
for(i=0; i < n; i++)
{
    printf("arr[%d] = ", i);
    scanf("%d", &arr[i]);
}
 
 printf("The array elements are ");
 for(i=0; i < n; i++)
 printf("%d", arr[i]);
 return 0;

}