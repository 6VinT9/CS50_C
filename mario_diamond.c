#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("What is the Size?: ");
     //   printf("The size should be > 0 than and < than 8\n");
    }
    while (n < 1 || n > 8);

    // Print grid of bricks
    for(int i = 0; i < n; i++) // loop for height
    {
        for(int j = 0; j < n - i; j++) // loop for hashes on left pyramid
        {
            printf("#");
        }
        for (int h = 0; h < 2; h ++)
        {
            printf(" ");
        }
        for(int k = 0; k < i + 1; k ++)
        {
            printf("#");
        }
        for(int m = 0; m < i; m ++)
        {
            printf("#");
        }
        for(int g = 0; g < 2; g ++)
        {
            printf(" ");
        }
        for(int v = 0; v < n - i; v ++)
        {
            printf("#");
        }
        printf("\n");
    }
    for(int i = 0; i < n; i ++)
    {
        for(int j = 0; j < i + 1; j ++)
        {
            printf("#");
        }
        for(int k = 0; k < 2; k ++)
        {
            printf(" ");
        }
        for(int v = 0; v < n - i; v ++)
        {
            printf("#");
        }
        for(int c = 0; c < n - i - 1; c ++)
        {
            printf("#");
        }
        for(int j = 0; j < 2; j ++)
        {
            printf(" ");
        }
        for(int k = 0; k < i + 1; k ++)
        {
            printf("#");
        }
        printf("\n");
    }
}

