#include <stdio.h>
#include <stdlib.h>

void count_1_to_20(int a[100][150], int count[20])
{
    for(int i = 0; i < 100 ; i++)
    {
        for (int j = 0; j < 150; j++)
        {
            for(int k = 0; k < 20; k++)
            {
                if (a[i][j] == k + 1)
                    count[k]++;
            }
        }
    }
}

/*
int main(void)
{
    int a[100][150];
    int count[20];

    for(int i = 0; i < 100 ; i++)
    {
        for (int j = 0; j < 150; j++)
        {
           a[i][j] = rand() % 101;
        }
    }
    count_1_to_20(a, count);

    for(int i = 0 ; i < 20 ; i++)
        printf("Number of %d's is %d \n", i + 1, count[i]);
}
*/