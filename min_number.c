#include <stdio.h>
#include <assert.h>

int get_min( int list[], int n)
{
    assert(n >= 0);
    int min;
    
    for (int count = 0; count < n ; count++)
    {
        if (list[count] < list[count + 1])
            min = list[count];
    }
    return min;
}

/*
int main(void)
{
    int list[10];

    for(int i = 0 ; i < 10 ; i++)
        scanf("%d", &list[i]);
    
    printf("\n %d", get_min(list, 10));
}
*/