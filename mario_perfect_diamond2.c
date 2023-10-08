#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("\n\n\n");
    printf("***THIS IS MARIO GAME, WELCOME***\n\n\n");
    char exit;
    do
    {
        int n;
        do
        {
            n = get_int("What is the size (height) of your diamond? The smallest size is the doubled size of one symbol or letter or figure: ");
            printf("\n\n\n");
            if (n > 8)
                printf("The size should be > 0 and <= 15!\n\n\n");
            else
                printf("Right choice! Your number is in the right diapason!\n\n\n");
        }
        while (n < 1 || n > 15);
        string a = get_string("If you want your picture was created from particular symbols, type one or several letters or symbols or figures: ");
        printf("\n\n\n");

        // Print grid of bricks
        for(int i = 0; i < n; i++) // loop for height
        {
            for(int j = 0; j < n - i; j++) // loop for hashes on left pyramid
            {
                printf("%s", a);
            }
            for (int h = 0; h < 2; h ++)
            {
                printf(" ");
            }
            for(int k = 0; k < i + 1; k ++)
            {
                printf("%s", a);
            }
            for(int m = 0; m < i; m ++)
            {
                printf("%s", a);
            }
            for(int g = 0; g < 2; g ++)
            {
                printf(" ");
            }
            for(int v = 0; v < n - i; v ++)
            {
                printf("%s", a);
            }
            printf("\n");
        }
        for(int i = 1; i < n; i ++)
        {
            for(int j = 0; j < i + 1; j ++)
            {
                printf("%s", a);
            }
            for(int k = 0; k < 2; k ++)
            {
                printf(" ");
            }
            for(int v = 0; v < n - i; v ++)
            {
                printf("%s", a);
            }
            for(int c = 0; c < n - i - 1; c ++)
            {
                printf("%s", a);
            }
            for(int j = 0; j < 2; j ++)
            {
                printf(" ");
            }
            for(int k = 0; k < i + 1; k ++)
            {
                printf("%s", a);
            }
            printf("\n");
        }
        printf("\n\n\n");
        exit = get_char("Want to exit? y = yes or n = no? : ");
        if (exit == 'y')
        {
            exit = 1;
        }
        else if (exit == 'n')
        {
            exit = 0;
        }
        printf("\n\n");
    }
    while (exit != 1);
}

