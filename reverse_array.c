#include <stdio.h>
#include <assert.h>

void reverse(int list[], int rev_array[], int n)
{
    assert(n > 0);
    
    for (int i = 0 ; i < n ; i++)
     {
        rev_array[n - i - 1] = list[i]; 
     }
    for(int i = 0 ; i < n ; i++)
        printf("%d ", rev_array[i]);
}
/*
int main(void)
{
    int list[10];
    int reverse_list[10];

    for(int i = 0 ; i < 10 ; i++)
    {
        scanf("%d", &list[i]);
    }
    reverse(list, reverse_list, 10);
}
*/
