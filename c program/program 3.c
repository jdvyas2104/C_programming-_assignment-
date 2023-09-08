#include <stdio.h>

int main() 
{
    float area;
    
    /*Area of circle*/
    float r,pie=3.14;
   
    printf("Enter radius--");
    scanf("%f",&r);
    area=pie*r*r;
    printf("Area of circle is %f\n",area);
    
/*Area of rectangle*/
    float l,b;
   
    printf("Enter lenghth "); scanf("%f",&l);  printf("Enter base "); scanf("%f",&b); 
    
    area=l*b;
    printf("Area of rectangle is %f\n",area);
    
/*Area of triangle*/
    float h,b2;
   
    printf("Enter height "); scanf("%f",&h);  printf("Enter base "); scanf("%f",&b2); 
    
    area=0.5*h*b;
    printf("Area of triangle is %f\n",area);
    

    return 0;
}
