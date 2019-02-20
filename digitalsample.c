#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a2;
    int array[]={1,0,1,1,0,0,1,1,1,0,1,0,0,1,1,1,0,1,1,1,1,0,0,1,1,1,0,0,0,1,0,0,1,0,1,0,1,0,0,1,1,0,1,0,0,1,1,1,0,1},a,b,i,f=0,r=0,l=0;
    printf("Sample number:%d   ",0);
    printf("Voltage Level:%d   \n",array[0]);
    for(i=1;i<50;i++)
    {
         a=array[i-1];
         b=array[i];
         printf("Sample number:%d   ",i);
         printf("Voltage Level:%d   ",array[i]);
         if(a>b)
         {
             printf("Falling Edge Detected\n");
             f++;
         }
         else if(a<b)
                 {
                     printf("Rising Edge Detected\n");
                     r++;
                 }
         else
            {
                 printf("Same Level\n");
                 l++;
            }

    }
    printf("Total Falling Edges:%d\nTotal Rising edges:%d\nSame level:%d\n",f,r,l);
}

