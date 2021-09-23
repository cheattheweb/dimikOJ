#include<stdio.h>

int main(){
    for ( int i = 1,j = 1000; i <= 1000; i++,j--)
    {
        printf("%d\t",j);
        if (i%5 == 0)
        {
            printf("\n");
        }
        
    }
    
    return 0;
}