#include <stdio.h>
int main(){
    int x,y,w;
    printf("Prime ranging from 2 to 200 \n");
    for(y=2; y<=200;y++){
        w=0;
        for(x=2;x<=y/2;x++){
            if(y%x==0){
                w++;
                break;
            }
           

        }
        if(w==0 && y !=1){
        printf("\n %d",y);
    }
    
    }
    return 0;
}