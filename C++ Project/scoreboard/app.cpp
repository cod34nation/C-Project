#include<algorithm>


namespace std;

int fibo(int n){
  printf("fibo(%d) and this function
  recur: %d \n", n,counter++);
   if (n==0) {
     return 0;

   }
   if (n==1) {
     return 1;
   }

   return (fibo(n-2)+fibo(n-1));

}
int main () {

int number ,n=5;
number = fibo(n);
printf("Soulution of the Problem %d",number );
return 0;

}
