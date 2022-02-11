#include<stdio.h>
int pall(int n){
	int rev=0,r,temp;
	
	while(n>0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	return rev;

}
int main(){
	int i,a,b;
	scanf("%d%d",&a,&b);
	for(i=a;i<b;i++)
	{
		int v=pall(i);
		if(v==i){
			printf("%d ",v);
		}
	}
}