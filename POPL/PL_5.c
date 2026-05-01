#include<stdio.h>

void main(){
int count = 0;

int column;
int row;

int column2;
int row2;

do{

printf("Enter dimensions of matrix 1\n");
printf("column :\n");
scanf("%d",&column);
printf("rows :\n");
scanf("%d",&row);

printf("\n");
printf("Enter dimensions of matrix 2\n");
printf("column :\n");
scanf("%d",&column2);
printf("rows :\n");
scanf("%d",&row2);


if(column != row2){
printf("In valid dimensions\n");
count = count + 1;
}
printf("\n");
printf("Enter valid dimensions\n");
}while(count == 1);

int w[column][row];
int q[column2][row2];

printf("\n");

printf("Enter 1st matrix\n");
for(int y = 0; y< row;y++){

for(int z = 0; z< column;z++){

printf("Enter %d,%d matrix element\n",z,y);
getchar();
scanf("%d",&w[z][y]);

}
printf("\n");

}
printf("\n");

for(int y = 0; y< row;y++){

for(int z = 0; z< column;z++){

printf("%d\t",w[z][y]);

}

printf("\n");

}


printf("Enter 2nd matrix");
for(int y = 0; y< row2;y++){

for(int z = 0; z< column2;z++){

printf("Enter %d,%d matrix element\n",z,y);
getchar();
scanf("%d",&q[z][y]);
}
printf("\n");
}

printf("\n");
for(int y = 0; y< row2;y++){

for(int z = 0; z< column2;z++){

printf("%d\t",q[z][y]);

}

printf("\n");

}


printf("\n");

printf("Multiplication of two matrix is ");
for(int y = 0; y< row;y++){


for(int z = 0; z< column2;z++){
int sum = 0;

for(int m = 0;m < column;m++){

sum += w[m][y]*q[z][m];

}
printf("%d\t",sum);
}

printf("\n");

}

}


