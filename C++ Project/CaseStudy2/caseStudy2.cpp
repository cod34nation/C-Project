#include <iostream>
using namespace std;

   int main() {
	 int n,c;
	 int i =1;
	 cin >>n;

	 while(n!=0){
		c = n+10;
		cout<<"Case#"<<i++<<":"<<c<<endl;
		cin>>n;
	}
	return 0;
}
