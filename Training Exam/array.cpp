#include<cstdio>
#include<vector>

using namespace std;

int main(){
  int arr[5] = {1,2,3,4,5};
  vector<int>v(5,10);

  printf("arr[1]=%d and v[1]=%d",arr[1],v[1]);

  for(int i = 0; i < 5; i++){
    arr[i] = i;
    v[i] = i;


  }

  printf("arr[3]=%d and v=[3]=%d \n",arr[3],v[3] );

}
