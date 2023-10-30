#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int a;
    scanf("%d", &a);
    if(a==10000){
        printf("%d", 1);
    }
    else if(a==99999){
        printf("%d", 45);
    }
    else{
        int b,c,d,e,f,g,h,i,X;
        b=a/10000;
        c=a%10000;
        d=c/1000;
        e=c%1000;
        f=e/100;
        g=e%100;
        h=g/10;
        i=g%10;
        X=b+d+f+h+i;
        printf("%d", X);
        return 0;
        
    }
    //Complete the code to calculate the sum of the five digits on n.
    return 0;
}