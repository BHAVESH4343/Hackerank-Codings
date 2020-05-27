#include <stdio.h>
int max(int a,int b,int c,int d);
/*
Aidd `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a=3, b=4, c=6, d=5;
    
    int ans=max(a,b,c,d);
    printf("%d",ans);
    
    return 0;
}
int max(int a,int b,int c,int d)
{
    int arr[4]={a,b,c,d};
    int i,max;
    max=0;
    for(i=0;i<4;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
