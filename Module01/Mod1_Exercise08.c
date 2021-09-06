#include <stdio.h>
#include<conio.h>
int main()
{
    //1st Array
    int arr1[10], arr2[10], arr3[20];
    int i, n1, n2, m, index=0;
    int index_first = 0, index_second = 0;

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
    //Merge and Evaluate the elements
    m = n1 + n2;
    while(index_first < n1 && index_second < n2)
    {
        if (arr1[index_first]<arr2[index_second])
    {
    arr3[index] = arr1[index_first];
    index_first++;
    }   
else
{
    arr3[index] = arr2[index_second];
    index_second++;
}
index++;
}
// if elements of the first array are over 
if(index_first==n1)
{
    while(index_second<n2)
    {
        arr3[index = arr2[index_second]];
        index_second++;
        index++;
    }
}

//if the elements of the second array is over
else if(index_first <n1)
{
    while(index_first<n1)
    {
        arr3[index] = arr1[index_first];
        index_first++;
        index++;
    }
}

//display the result
printf ("\n\n The merge array is");
for(i=0;i<m; i++)
printf("\n arr[%d] = %d", i, arr3[i]);
getch();
return 0;
}