/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x=0;
    char choice;
    do {
        printf("Enter the number and press enter: \n");
        scanf("%d" ,&x);
        if(x % 2 == 0) {
            printf("%d this is even number. \n");
        }
        else {
            printf("%d this is odd number. \n");
            
        }
        printf("If you want to continue select: (y/n) \n");
        scanf(" %c" ,&choice);
    
    } while(choice == 'y');
    

    return 0;
}
