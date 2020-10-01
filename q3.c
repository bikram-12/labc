#include <stdio.h>
int main(){
    int x, sum;
    printf("Sum of even numbers from o To 20\n");
    for(x=0;x<=20;x++){
        if(x%2==0){
            sum =sum + x;
            continue;
        }
        
    }
    printf("%d\n",sum);
    return 0;
    
}