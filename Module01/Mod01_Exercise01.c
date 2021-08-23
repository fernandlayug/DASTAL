#include <stdio.h>
int main()
{

int marks[10] = {0,1,2,3,4,5,6,7,8,9};

int i;
for (i = 0; i <10; i++) {
    printf("Elements at marks %d is %d\n", i, marks[i]);
}
return 0;

}