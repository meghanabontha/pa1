/******************************************************************************

N stairs problem : Meghana Priyanka Bontha

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int NumberofWays(int n) 
{
    //printf("Here");
    if(n==1)
        return 1;
    else if(n==2)
        return 2;
    else if(n==3)
        return 4;
    else
        return NumberofWays(n-1)+NumberofWays(n-2)+NumberofWays(n-3);
    
}

int main()
{
    int n =5;
   // NumberofWays(4);
    printf("%d", NumberofWays(n));
}
