//https://dimikoj.com/problems/6/52-problem-book-find-the-sum-by-dimik-computing
#include<stdio.h>

int main(){
    int T;
    //how many times one can input
    scanf("%d",&T);
    for (int i = 1; i <= T; i++)
    {
        int num,sum;
        sum=0;
        scanf("%d",&num);//the number
        //mode the number with 10 to get the last number
        sum+=num%10;
        // to get the 1st number like:12345/10000
        sum=sum + num/10000;
        printf("Sum = %d\n",sum);
    }
    return 0;
}