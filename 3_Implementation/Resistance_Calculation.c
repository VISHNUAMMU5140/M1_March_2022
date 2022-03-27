#include "stdio.h"
float series_resistance(int res1[],int num1)
    { 
        int Rs=0;
        for (int i=0; i<num1 ; i++)
        {
        Rs = Rs + res1[i];
        }
        return Rs;
    }

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
int main()
{   
    int x;   
    float ans; 
    printf("Press 1 for Series and 2 for parallel : ");
    scanf("%d",&x);

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
    printf("The total resistance is: %.6f\n",ans);
    
}
else
printf("Invalid input");
return 0;
}
