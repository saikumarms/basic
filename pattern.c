#include <stdio.h>
#include <stdlib.h>
int myfunc1();
void myfunc2(int**);

int main()
{
    int **ptr,array[10][5];
    ptr=myfunc1();
    printf("Stack\n");
  //  printf("%d",*(*(ptr+9)+4));
    for(int l=0;l<10;l++)
    {
        for(int m=0;m<5;m++)
        {
            array[l][m]=*(*(ptr+l)+m);
            printf("%d  ",array[l][m]);
        }
        printf("\n");
    }
    myfunc2(ptr);

    return 0;
}

int myfunc1()
{
    int **p;
    printf("Heap\n");
    p=malloc(10*sizeof(int));
    for(int i=0;i<10;i++)
        p[i]=malloc(5*sizeof(int));
    for(int j=0;j<10;j++)
    {
        for(int k=0;k<5;k++)
        {
            *(p[j]+k)=j+1;
            printf("%d  ",*(p[j]+k));
        }
        printf("\n");
    }
    return p;
}

void myfunc2(int **ptr)
{
   // printf("%d",**ptr);
    for(int o=0;o<5;o++)
    {
        for(int p=0;p<*(*(ptr+o)+0);p++)
        {
          printf("* ");
        }
        printf("\n");
    }
    for(int o=4;o>0;o--)
    {
        for(int p=*(*(ptr+o)+0);p>1;p--)
        {
          printf("* ");
        }
        printf("\n");
    }
}
