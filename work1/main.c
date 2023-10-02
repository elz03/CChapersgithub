#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int ai;
    char symbol;
    srand(time (NULL) );
    printf("Enter rock (r), paper (p) or scissors (s)");
    scanf("%c", &symbol);
    ai = rand() % 3;
    // 1 = rock
    // 2 = paper
    // 3 = scissors

    if (symbol = 'r'&& ai == 1)
    {
        printf("Draw");
    }
    else if (symbol = 'r'&& ai == 2)
    {
        printf("You lose");
    }
    else if (symbol = 'r'&& ai == 3)
    {
        printf("You win");
    }
    else if (symbol = 'p'&& ai == 1)
    {
        printf("You win");
    }
    else if (symbol = 'p'&& ai == 2)
    {
        printf("Draw");
    }
    else if (symbol = 'p'&& ai == 3)
    {
        printf("You lose");
    }
    else if (symbol = 's'&& ai == 1)
    {
        printf("You lose");
    }
    else if (symbol = 's'&& ai == 2)
    {
        printf("You win");
    }
    else if (symbol = 's'&& ai == 3)
    {
        printf("Draw");
    }








}
