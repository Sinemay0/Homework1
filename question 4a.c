#include <stdio.h>
#include <math.h>


     int compute_home_value(int popularity,int size);
     int main(void)
{
     int popularity,size,house_value;
     
     printf("Enter the popularity");
     scanf("%d",&popularity);
     
     
      
     printf("Enter the size of house ");;
     scanf("%d",&size);
     
     house_value=compute_home_value(popularity,size);
     printf("The house price is %d",house_value);
     
     return(0);
     
}
   
     int compute_home_value(int popularity,int size)
     {
         int price;
         price=(pow(popularity,3)+pow(size,2))*1000;
     }
     
     