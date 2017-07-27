#include <iostream>
#include <cstdio>

using namespace std;

void doPrint() {
  std::cout << "Hello Iam function for print" << '\n';
}

int count(){

  return 5;
}

int getValueFromUser() {
  int x;
  std::cout << "Input number ";
  std::cin >> x;

  return x;
}

int add (int x,int y){
  return x + y;
}



int main () {
   int x = getValueFromUser();
   int y = getValueFromUser();

   std::cout << x << " + " << y << " = "<< add(x,y) <<std::endl;

}
