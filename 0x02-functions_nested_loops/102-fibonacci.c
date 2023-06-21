#include <stdio.h>

/**
 * main - Prints the first 10 Fibonacci numbers
 *
 */

int main()
{
    int n = 10;
    int a = 0, b = 1;
    

    printf("%d, %d, ",a,b);
    
    int nextnumbers;
    
    
    for(int i = 2; i < 50; i++){
        nextnumbers = a + b;
        a = b;
        b = nextnumbers;
        
        printf("%d, ",nextnumbers);
    }

    return 0;
}
