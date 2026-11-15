#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

}


int main(void)
{
    int i;
    int grade[5];

    for(i=0;i<5;i++)
    {
        printf("grade[%i]= ", i);
        scanf("%d", &grade[i]);
    }

    int sum = 0;
    for(i=0;i<5;i++)
    {
        printf("grade[%i] = %i\n", i, *(grade+i));
        sum = sum + *(grade+i);
    }

    printf("Average: %i\n", sum/5);
    return 0;
}
