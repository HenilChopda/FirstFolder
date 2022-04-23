//P V R T M
#include<stdio.h>
int main()
{
    //float m,p,v,t,r=287;
    float t1=315.0,p2=2.0,p1=10.0,y=1.4,t2;
   // printf("enter p, v ,t");
    //scanf("%f %f %f",&p,&v,&t);

    //m=(p*v)/(r*t);
    //printf("%f",m);


    t2=t1*(p2/p1)^((y-1.0)/y);
    printf("%f",t2);
return 0;
}
