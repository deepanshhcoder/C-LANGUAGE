#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int basicsal;
    float da,hra,total;
    scanf("%d",&basicsal);
    if(basicsal<=2000)
    {
        da=0.1*basicsal;
     hra=0.2*basicsal;
    }
    else if (basicsal>2000 && basicsal<=5000)
    {
        da=0.2*basicsal;
        hra=0.3*basicsal;
        
    }
    else if(basicsal>5000 && basicsal<=10000)
    {
        da=0.3*basicsal;
            hra=0.4*basicsal;
    }
    else if(basicsal>10000)
    {
        da=0.5*basicsal;
        hra=0.5*basicsal;
        
    }
    total=basicsal+da+hra;
    printf("%.2f",total);
    return 0;
}