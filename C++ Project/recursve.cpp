#include<algorithm>
#include<cstring>
#include<iostream>
#include<cstdio>
#include<sstream>


using namespace std;
int memo [1000];
int counter =0;

int fibo(int n){
  int ans;
  printf("fibo(%d) and this function recur: %d \n",n,counter++);
  if (memo[n]!=-1) return memo[n];


   else if (n==0)
     return 0;


   else if (n==1)
     return 1;

else
ans  = fibo(n-2)+fibo(n-1);
return (memo[n]=ans);

}
int main () {

int number ,n=5;
memset(memo,-1,sizeof memo);

number = fibo(n);
printf("Soulution of the Problem %d",number );
return 0;

}
