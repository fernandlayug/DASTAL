#include <stdio.h>
#include<conio.h>
int main()
{
    //1st Array
    int arr1[10], arr2[10], arr3[20];
    int i, n1, n2, m, index=0;
    printf("\n Enter the number of elements in array1 :");
    scanf("%d", &n1);
    printf("\n\n Enter the elements of the first array");
    for (i=0; i<n1; i++)
    {
        printf("\n arr1[%d]= ", i);
        scanf("%d", &arr1[i]);
    }

    //2nd Array
    printf("\n Enter the number of elements in array2 :");
    scanf("%d", &n2);
    printf("\n\n Enter the elements of the second array");
    for (i=0; i<n2; i++)
    {
        printf("\n arr2[%d]= ", i);
        scanf("%d", &arr2[i]);
    }

    //Merging two unsorted array
    m = n1 + n2;
    for(i=0;i<n1; i++)
    {
        arr3[index] = arr1[i];
        index++;
    }
    for(i=0;i<n2;i++)
    {
        arr3[index] = arr2[i];
        index++;
    }
    // Display the result
    printf("\n\n THe merged array is");
    for (i=0;i<m;i++)
    printf("\n arr[%d] = %d", i, arr3[i]);
    getch();
    return 0;
}