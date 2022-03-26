//This is a program to find series and parallel resistance

#include <stdio.h>

// Function to calculate series resistance
float series_resistance(int res1[],int num1)
    { 
        int Rs=0;
        for (int i=0; i<num1 ; i++)
        {
        Rs = Rs + res1[i];
        }
        return Rs;
    }
// Function to calculate parallel resistance
float parallel_resistance(int res2[],int num2)
    {   
        int Rp=0;
        for (int i = 0; i < num2; i++)
        {
            Rp = (Rp + (1.0 / res2[i]));
        }
    Rp=1/Rp;
    return Rp;
    } 
int main()
{   
    int x;   // declaring the variable for switch case
    float ans; // variable to return the total resistance value
    printf("Press 1 for Series and 2 for parallel : ");
    scanf("%d",&x);

if(x==1)
{   
    // series case
    int r1[10], n1, i, Rs = 0;
    printf("Enter the number of Resistances : ");
    scanf("%d", &n1);
    printf("\nEnter Value of Each Resistance : n");
    for (i = 0; i < n1; i++) 
    {
        printf("\nR%d : ", i + 1);
        scanf("%d", &r1[i]);
    }
    ans=series_resistance(r1,n1);
    printf("The total resistance is: %.3f",ans);
    
}
else if (x==2)
{
    //parallel case
    int r2[10], n2, i, Rp = 0;
    printf("Enter the number of Resistances : ");
    scanf("%d", &n2);
    printf("\nEnter Value of Each Resistance : n");
    for (i = 0; i < n2; i++) 
    {
        printf("\nR%d : ", i + 1);
        scanf("%d", &r2[i]);
    }
    ans=parallel_resistance(r2,n2);
    printf("The total resistance is: %.6f",ans);
    
}
else
printf("Invalid input");
return 0;
}

void test_