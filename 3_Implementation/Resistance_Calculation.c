#include "stdio.h"

// Function to calculate the series resistance based on the formula Rs= R1+R2+...+Rn
 float series_resistance(int res1[],int num1) 
    {   
        int Rs=0;
        for (int i=0; i<num1 ; i++)
        {
        Rs = Rs + res1[i];
        }
        return Rs;
    }

// static has been added in order to store temporary values
// Function to calculate parallel resistance based on the formula Rp= (1)/((1/R1)+(1/R2)+(1/R3)+...+(1/Rn))
static float parallel_resistance(int res2[],int num2)
    {   
        float Rp;
        static float temp;
        for (int i = 0; i < num2; i++)
        {
        Rp = Rp + (1.0 / res2[i]);
        temp = Rp; 
        }
    temp = 1/temp;
    return temp;
    }

//Test function for series resistance
void test_series_resistance()
{  
    int arr[2];
    arr[0]=0;
    arr[1]=0;
    if(0 == series_resistance(arr,2))
        printf("Series resistance function works for null value");
    else
        printf("Series resistance function has some issue for null value");

    int arr1[2];
    arr1[0]=1;
    arr1[1]=1;
    if (2 == series_resistance(arr1,2))
        printf("Series resistance works for positive numbers");
    else
        printf("Series resistance function has some issue for positive values");
           
}

// Test function for parallel resistance
void test_parallel_resistance()
{   
    int arr2[2];
    arr2[0]=0;
    arr2[1]=0;
    if(0 == parallel_resistance(arr2,2))
        printf("Parallel resistance function works for null value");
    else
        printf("Parallel resistance function has some issue for null value");
    //
    //int arr3 = {1,1};
    //if (0.500 == parallel_resistance(arr3,2))
      //  printf("Parallel resistance works for positive numbers");
    //else
      //  printf("Parallel resistance function has some issue for positive values");
     //      
}

// main function
int main()
{   
    int x;   
    float ans;
    void test_series_resistance() ;
    printf("Series function works for all values\n");
    void test_parallel_resistance();
    printf("Parallel function works for all values\n");
    printf("Press 1 for Series and 2 for parallel : ");
    scanf("%d",&x);

// case 1 for getting user input and calling series function
if(x==1)
{   
    
    int r1[10], n1, i, Rs = 0;
        printf("Enter the number of Resistances :  ");
    scanf("%d", &n1);
    printf("\nEnter Value of Each Resistance : ");
    for (i = 0; i < n1; i++) 
    {
        printf("\nR%d : ", i + 1);
        scanf("%d", &r1[i]);
    }
    ans=series_resistance(r1,n1);
    printf("The total resistance is: %.3f\n",ans);
    
}
//  case 2 for getting user input and calling parallel function
else if (x==2)
{
   
    int r2[10], n2, i;
    float Rp;
    printf("Enter the number of Resistances : ");
    scanf("%d", &n2);
    printf("\nEnter Value of Each Resistance : ");
    for (i = 0; i < n2; i++) 
    {
        printf("\nR%d : ", i + 1);
        scanf("%d", &r2[i]);
    }
    ans=parallel_resistance(r2,n2);
    printf("The total resistance is: %.3f\n",ans);
    
}
// default case to produce invalid output
else
printf("Invalid input");
return 0;
}

