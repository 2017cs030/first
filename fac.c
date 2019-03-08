#include<stdio.h>
int n;
int fac(int a);

int main(){
	int i=0;
	scanf("%d",&n);
	
	printf("%d",fac(n));
	return 0;
}
int fac(int a){
	if(a==0)
		return 1;
		
	else if(a==1)
		return 1;
	else 
		return (a*fac(a-1));	
}
