#include <stdio.h>
#include <assert.h>

int longest_seq(int list[], int n)
{
    assert(n > 0);
    int start, end;
    int final_start = - 1;
    int length = 0;
    int new_start = 0;
    for(new_start ; new_start < n ; new_start++)
    {
        if(list[new_start] == 0)
        {
            start = new_start;
            for(int i = start ; i < n ; i++)
            {
                if (list[i] != 0)
                {
                    end = i;
                    break;
                }
            }
            if (length < (end - start))
            {
                length = end - start;
                final_start = start;
            }
            new_start = end;
        }
    }
    return final_start;
}

/*
int main(void)
{
    int list[10];
    for(int i = 0 ; i < 10 ; i++)
        scanf("%d", &list[i]);
    
    printf("\n The longest sequence of zeros start at index %d", longest_seq(list, 10));
}
*/