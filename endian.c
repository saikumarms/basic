#include <stdio.h>
#include <stdlib.h>
#include<stdint.h>

int main()
{
    int a=0x1a135f,a1,a2;
    a1=a;
    uint8_t b;
    char *p;
    p=(char *)&a;
    b=a;
    if(b==*p)
        printf("System is Little Endian\n");
    else
        printf("System is Big Endian\n");
    printf("%x%x%x\n",*p,*(p+1),*(p+2));
    a2=a1>>16;
    b=a2;
    *p=b;
    a2=a1>>8;
    b=a2;
    *(p+1)=b;
    b=a1;
    *(p+2)=b;
    printf("Big Endian Conversion %x%x%x",*p,*(p+1),*(p+2));
    return 0;

}
