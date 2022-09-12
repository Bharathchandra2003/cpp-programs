#include<stdio.h>
int main(){
	int num,r,sum=0,t;
	printf("input a number:");
	scanf("%d",&num);
	for(t=num;num!=0;num=num/10){
		r=num%10;
		sum=sum*10+r;
	}
	printf("the number in reverse order is:%d",sum);
}
