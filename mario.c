#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    int width;
    do
    {
        height = get_int("height: ");
    }
    while (height < 1 || height > 8);

    //Height
    for (int i = 0; i < height; i++)
    {
        //Leaves a space for the first #
        width = height - 1;

        //Creates the spaces
        for (int k = width; k > i ; k--)
        {
            printf(" ");
        }

        //Creates the #'s
        for (int j = 0; j <= i ; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}


//creates right side of staircase
// for (int j = 0; j <= i ; j++)
//         {
//             printf("#");
//         }