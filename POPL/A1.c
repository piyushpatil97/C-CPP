#include <stdio.h>
int main(){
int a,b,c,d,e,f,g;
a=1;
while(a<2){

	printf("enter the marks of %d  student \n ",a);

printf("enter the marks of phy subject = ");

scanf("%d",&b);

printf("enter the marks of chem = ");
scanf("%d",&c);
printf("enter the marks of MC  = ");
scanf("%d",&d);
printf("enter the marks of PPL  = ");
scanf("%d",&e);
printf("enter the marks of WDL  = ");
scanf("%d",&f);
g=(b+c+d+e+f)/5;
printf(" the percentage of %d  student is %d \n ",a,g);
if(e>40 && b>40 && c>40 && d>40 && e>40){
    if(g>=75){
printf("grade of %d student is o grade \n ",a);
}else if(g>=60 && g<75){
printf("grade of %d student is a \n",a);
}else if(g>40 && g<50){
printf("grade of %d student is b \n",a);
}else{
printf(" %d student is fail \n",a);
}

a++;
}else{
    printf("you are fail \n");
    a++;
}
}
}

