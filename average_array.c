#include <stdio.h>

double average(int list[], int n)
{
    int sum = 0;
    double average;
    for(int i = 0 ; i < n ; i++)
    {
        sum += list[i];
    }
    printf("sum is %d", sum);
    average = sum / n;
    return average;
}

/*
int main(void)
{
    int list[10];
    for(int i = 0 ; i < 10 ; i++)
        scanf("%d", &list[i]);
    
    printf("\n average is %lf", average(list, 10));
}
*/