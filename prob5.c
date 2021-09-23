//https://dimikoj.com/problems/5/52-problem-book-box-1-by-dimik-computing
#include<stdio.h>
int main(){
    int T,N;
    scanf("%d",&T);
    for (int i = 1; i <= T; i++)
    {
        scanf("%d",&N);
        for (int j = 1; j <=N; j++)
        {
            for ( int l = 1; l <= N; l++){
                printf("* ");
            }printf("\n");
            
        }printf("\n");
        
    }
    

    return 0;
}