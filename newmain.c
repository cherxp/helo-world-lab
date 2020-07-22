#include <xc.h>
#include <stdio.h>
#include <stdlib.h>

volatile int r;
struct var{
    int x : 5;
    int y : 3;
    char c : 8;
};

int fun (int x,int y)
{
    return x+y;
}

void main() 
{
    struct var v;
    
    r=0;
    v.x=25;
    v.y=6;
    v.c='a';
    
    int v1 = sizeof(v);
    int x=1;
    int y=2;
    int z=fun(x,y);
    
    for(x=1;x<100;++x)
    {
        z++;
    }
          
    while(1)
    {
        v.x=25;
        v.y=6;
        v.c='a';
    }

    return;
}