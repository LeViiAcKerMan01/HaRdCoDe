#include<stdio.h>
#include<math.h>
void update(int *a, int *b){
    *a+=*b;
    printf("%d\n", *a);

    if(*b>*a){
        *b-=*a;
        printf("%d", *b);
        
    }
    else{
        int diff=*a-=*b;
        printf("%d", diff);
    }
    }


int main()

{
    int a, b;
    int *pa=&a;
    int *pb=&b;
    scanf("%d %d", &a, &b);
    update(pa, pb);
    
    return 0;
    

}