#include<stdio.h>
#include<math.h>
int main (){
    int a,b,c,d,e,f,g,i,o;
    float x,y;
   
    do{
    printf("enter the of operation that you want to do \n ");
    printf("1. roots of QE \n 2.power of no. \n 3.area of tringle \n 4.exit \n");
    scanf("%d",&g);
    switch(g){
    case 1 :
    printf("let's your eqn is ax^2+bx+c=0 \n ");
    printf("enter the value of a : \n  ");
    scanf("%d",&a);
    printf("enter the value of b :");
    scanf("%d",&b);
    printf("enter the value of c :");
    scanf("%d",&c);
    o=(b*b-4*a*c);
    i = sqrt(o);
    e=((-b+i)/(2*a));
    f=((-b-i)/(2*a));
    printf("roots of eqn is %d %d \n ",e,f);
    break ;
    case 2 :
    g=1;
    printf("enter the number ");
    scanf("%d",&b);
    printf("enter the power of no. ");
    scanf("%d",&c);
    for(d=0;d<c;d++){
    f=f*b;
}
printf("ans : %d \n ",f);
break ;

       case 3 :
    printf("enter the value of base : ");
    scanf("%f",&x);
    printf("enter the value of heigth : ");
    scanf("%f",&y);
    printf("area of tringle is : %f \n ",0.5*x*y);
    break ;
    case 4:
    break ;
    default :
    printf("invalid input \n ");
    break ;
}
}while(g!=4);
}
