#include<stdio.h>
int main()
{


    int marks[1000];
    int gender;
    int sum;
    int i,t;
    while(t--){
        scanf("%d", &i);
        scanf("%d", &marks[i]);
        marks[i]+=0;
        printf("%d", marks[i]);
    }
}