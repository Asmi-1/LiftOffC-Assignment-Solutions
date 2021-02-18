// Write a C program to print the sum of all the even elements and even position elements in an array.

#include<stdio.h>

int main()

{
    int array[100], R, O, EVEN = 0, ODD = 0;

    printf("ENTER THE NUMBER OF ELEMENTS: ");

    scanf("%d", &O);

    printf("ENTER THE NUMBERS:");
    
    for (R = 0; R < O; R++)

        scanf("%d", &array[R]);

    for (R = 0; R < O; R++)

    {

        if (array[R] % 2 == 0)
        
            EVEN = EVEN + array[R];

        else

            ODD = ODD + array[R];
    }

    printf("EVEN: %d", EVEN);

    printf("\nODD: %d\n\n", ODD);

}
