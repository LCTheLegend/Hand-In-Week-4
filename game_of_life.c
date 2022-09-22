#include <stdio.h>

void game_of_life(int test1[10][10])
{

int temp[10][10];

int count1 = 0;

for(int i = 0 ; i < 10 ; i++)
{
    for(int j = 0 ; j < 10 ; j++)
    {
        for(int k = (i - 1) ; k <= (i + 1) ; k++)
        {
            for(int l = (j - 1) ; l <= (j + 1) ; l++)
            {
                
                if (l < 0 || k < 0 || k > 9 || l > 9)
                    count1 += 0;
                else if (test1[k][l] == 1)
                    count1++;
            }
        }
        if(test1[i][j] == 1)
            count1--;

        //printf("%d ", count1);

        if(test1[i][j] == 1 && count1 > 3)
            temp[i][j] = 0;

        else if(test1[i][j] == 0 && count1 == 3)
            temp[i][j] = 1;

        else if(test1[i][j] == 1 && (count1 == 2 || count1 == 3))
            temp[i][j] = 1;
        else
            temp[i][j] = 0;
        
        count1 = 0;
    }

}

for(int i = 0 ; i < 10 ; i++)
{
    for(int j = 0 ; j < 10 ; j++)
    {
        test1[i][j] = temp[i][j];
    }
}

printf("\n");
for(int i = 0 ; i < 10 ; i++)
{
    for(int j = 0 ; j < 10 ; j++)
    {
        printf("%d ", test1[i][j]);
        if (j == 9)
            printf("\n");
    }
}
};

int main(void)
{

int generations = 10;

int test1[10][10] = 
{
{0,0,0,1,0,0,0,0,0,0},
{1,1,0,1,1,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0},
{0,0,0,1,1,0,0,0,0,0},
{1,0,0,0,1,0,0,0,0,0},
{0,0,0,0,0,1,0,0,0,0},
{0,0,0,0,1,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0},
{1,1,0,1,0,0,0,0,0,0},
{1,0,0,0,0,0,0,0,0,0}
};

printf("Generation 0: \n");
for(int i = 0 ; i < 10 ; i++)
{
    for(int j = 0 ; j < 10 ; j++)
    {
        printf("%d ", test1[i][j]);
        if (j == 9)
            printf("\n");
    }
}

for(int i = 1 ; i <= generations ;  i++)
{
    printf("\nGeneration %d:", i);
    game_of_life(test1);
}
return 0;
}