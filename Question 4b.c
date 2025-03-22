#include <stdio.h>
#include <math.h>


    void compute_home_value (void);
    
    int main(void)
    
{
        compute_home_value();
        
        return(0);
}
     
     void compute_home_value(void)
    { 
     int popularity,size,house_value;
     
     
     printf("Enter the popularity");
     scanf("%d",&popularity);
     
      printf("Enter the size of house");
     scanf("%d",&size);
     
     house_value=(pow(popularity,3)+pow(size,2))*1000;
     printf("The house price is:%d",house_value);
     
    }
     