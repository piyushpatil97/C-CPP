#include<stdio.h>

void main(){

	int x=18;
	int y=25;
	int ans=0;

	ans = x&y;
	printf("%d\n",ans);

	ans = x|y;
        
	printf("%d\n",ans);
        
	ans= x^y;

	printf("%d\n",ans);
}
