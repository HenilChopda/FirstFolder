#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    float v1,v2,p1,p2,t1,t2,n,mass,dw,du,dq,q,R,gamma,cv;

    v1=0.6,v2=0.18,p1=100000,p2=500000,t1=363,R=0.294,gamma=1.4;

    printf("polytropic process:");

    mass=(100*v1)/(R*t1);

    printf("\nmass is : %f",mass);

    printf("\ncalculate value of index n for compression");

    n=log(5)/log(0.6/0.18);

    printf("\n value of n is  :%f",n);

        printf("\n calculating final temprature of gas");

t2=t1*pow(3.33,0.33);
    printf("\nvalue of t2 is:%f",t2);


        printf("\ncalculation for cv");

    cv=R/(gamma-1);
    printf("\nvalue of cv is=%f ",cv);

    printf("\nchanges in internal energy");

    du=mass*cv*(t2-t1);
    printf("\ninternal energy is :%f",du);

    printf("\ncalculate work done:");

    dw=mass*R*(t1-t2)/(n-1);


    printf("\nwork done is:%f",dw);


    printf("\nheat transffered:");

    dq=dw*(gamma-n)/(gamma-1);

    printf("\n heat transffered value =%f",dq);







}
