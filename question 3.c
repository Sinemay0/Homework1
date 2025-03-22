#include <stdio.h>
#include <math.h>

int main(void)
{
     int popularity,size,house_value;
     
     printf("Enter the popularity:");
     scanf("%d",&popularity);
     
     printf("Enter the size of the house:");
     scanf("%d",&size);
     
     house_value=(pow(popularity,3)+pow(size,2))*1000;
     
     printf("The price of house is: %d",house_value);
     
     return(0);
     
     
     
}