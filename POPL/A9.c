#include <stdio.h>
#include <stdbool.h>
struct complex{
    float real;
    float img;
}c[5];
int read(){
    int n;
    printf("Which number you want to enter (i.e 1st,2nd..)?? ");
    scanf("%d",&n);
    printf("Enter the real part: ");
    scanf("%f",&c[n].real);
    printf("Enter the imaginary part: ");
    scanf("%f",&c[n].img);
    printf("\n");
}
int write(){
    int n;
    printf("Which number you want to see?? ");
    scanf("%d",&n);
    printf("%.3f+ %.3f i",c[n].real,c[n].img);
    printf("\n");
}

int add(){
    int n,m;
    printf("Enter the numbers you want to add(mention the index): ");
    scanf("%d %d",&n,&m);
    printf("The two numbers are: %.3f + %.3f and %.3f + %.3f i\nThere sum will be %.3f + %.3fi",c[n].real,c[n].img,c[m].real,c[m].img,(c[n].real+c[m].real),(c[n].img+c[m].img));
    printf("\n");
}

int multiply(){
    int n,m;
    printf("Enter the numbers you want to add(mention the index): ");
    scanf("%d %d",&n,&m);
    float mul,mul2;
    mul=(c[n].real*c[m].real)-(c[n].img*c[m].img);
    mul2=(c[n].real*c[m].img)+(c[m].real*c[n].img);
    printf("The two numbers are: %.3f + %.3fi and %.3f + %.3fi\nThere multiplication will be %.3f + %.3fi",c[n].real,c[n].img,c[m].real,c[m].img,mul,mul2);
    printf("\n");
}
int main()
{
    bool cont=true;
    int ch;
    do{
        printf("\nChoose what you want to do:\n1.READ A COMPLEX NUMBER\n2.WRITE A COMPLEX NUMBER\n3.ADD TWO COMPLEX NUMBERS\n4.MULTIPLY TWO COMPLEX NUMBERS\n5.EXIT\n");
        scanf("%d",&ch);
        switch(ch){
            case(1):
                read();
                break;
            case(2):
                write();
                break;
            case(3):
                add();
                break;
            case(4):
                multiply();
                break;
            case(5):
                cont=false;
                break;
            default:
                printf("Enter a valid option");
        }
    }while(cont==true);
   
    printf("THANK YOU");
    return 0;
}

