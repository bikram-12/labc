#include <stdio.h>
int main(){
    

    float radious,length, width,  base, height,cArea,rArea, tArea;
    int option;
   


   
    printf(" Choose 1 to find the area of Circle \n");
    printf(" Choose 2 to find the area of Rectangle\n ");
    printf(" Choose 3 to find the area of Triangle\n");
    printf("Your options:");
    scanf("%d",&option);

     switch(option){
         case 1:
         printf("Enter the radius");
         scanf("%f", &radious);
         cArea=3.14*radious*radious;
         printf("The area of Circle is: %f ",cArea);
         break;

         case 2:
         printf("Enter the length");
         scanf("%f", &length);
         printf("Enter the width");
         scanf("%f", &width);
         rArea=length*width;
         printf(" The Area of Rectangle is : %f",rArea);
         break;

         case 3:
         printf("Enter the height");
         scanf("%f", &height);
         printf("Enter the base");
         scanf("%f", &base);

         tArea=0.5*height*base;
         printf("The Area of Triangle is : %f", tArea);
         break;

         default:
         printf("Your option doesn't exist in Our Program");

     }
     return 0;




}