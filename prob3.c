//https://dimikoj.com/problems/3/52-problem-book-decreasing-numbers-by-dimik-computing
#include<stdio.h>

int main(){

    for (int i = 1000;i >= 1;i--){
        printf("%d\t",i);
        if ((i-1)%5==0)//to take a new line.
        {
            printf("\n");
        }
    }
    return 0;
}