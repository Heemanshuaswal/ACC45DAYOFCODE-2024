
#include<stdio.h>
int main()
{
    int score;
    printf("hello sir\n");
    printf("enter score of your team(1-20):\n");
    scanf("%d",&score);
    if(score<12){
        printf("sorry sir for team is disqualify");
    }
    else if(score>11&&score<=20){
        printf("congratulations sir your team is selected for next stage");
    }
    else{
        printf("invaild");
    }
    return 0;
}