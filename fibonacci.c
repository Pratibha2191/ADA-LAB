#include<stdio.h>
#include<math.h>
int fib(int n)
{
if(n==0)return 0;
if(n==1)return 1;
return fib(n-1)+fib(n-2);
}
int main(){
int i,n;
printf("enter n=");
scanf("%d",&n);
printf("%d fib number are=",n);
for(i=0;i<n;i++){
printf("fib(%d)=%d\n",i,fib(i));
}
}
