#include <stdio.h> 
struct student { 

    int sub1[5]; 

    int per; 

    char name[50]; 

}; 
int main() { 

    int a, b, c, d, e; 
    c = 0; 

    d = 0; 

    e = 0; 

    struct student s[10]; 

    for (a = 0; a < 10; a++) { 

        printf("enter the name of %d student : ", a); 

        scanf("%s", &s[a].name); 

        for (b = 0; b < 5; b++) { 

            printf("enter marks of sub%d : ", b + 1); 

            scanf("%d", &s[a].sub1[b]); 

        } 

       s[a].per = (s[a].sub1[0] + s[a].sub1[2] + 

                    s[a].sub1[3] + s[a].sub1[4] + 

                    s[a].sub1[1]) / 5; 

    } 
	 for (a = 0; a < 10; a++) { 

        printf("percentage of %s is %d \n", s[a].name, s[a].per); 

        if (s[a].per >= 40 && 

            s[a].sub1[0] > 40 && s[a].sub1[2] > 40 && 

            s[a].sub1[3] > 40 && s[a].sub1[4] > 40 && 

            s[a].sub1[1]) { 

            c++; 
        } 
		if (s[a].sub1[0] < 40 || s[a].sub1[2] < 40 || 

            s[a].sub1[3] < 40 || s[a].sub1[4] < 40 || 

            s[a].sub1[1] < 40) { 

            d++; 
	 } 

  	if (s[a].per >= 90 && 

            s[a].sub1[0] > 40 && s[a].sub1[2] > 40 && 

            s[a].sub1[3] > 40 && s[a].sub1[4] > 40 && 

            s[a].sub1[1]) { 

       	e++; 

      } 

    } 

    printf("total no of pass student is : %d \n ", c); 

    printf("total no of student fail in one subject : %d \n ", d); 

    printf("Total number of distinctions in the class :%d \n", e); 

}

