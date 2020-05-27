#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n1,n2;
    float m1,m2;
	scanf("%d %d",&n1,&n2);
    scanf("%f %f",&m1,&m2);
    int s1=n1+n2;
    int s2=n1-n2;
    int t1=m1+m2;
    int t2=m1-m2;
    printf("\n%d %d\n%.1f %.1f",s1,s2,t1,t2);
    
    return 0;
}
