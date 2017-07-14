#include <iostream>
using namespace std;
    int main() {
    	// printf("Berapa kota yang anda kunjungi ?");
	      int h,m,x,a,b; // variabel h = untuk jam, m = menit, x = jumlah kota a = var temp untuk jam, b var temp utk = menit
		 	   int i = 1;
		 	   cin>>x; // untuk masukkan jumlah perulangan
		 	 // printf("Masukkan waktu sahur :"); // mencetak

		 	   while(x--){
		 		   cin>>h>>m;
		 		   b=m-45;
		 		   if(b<0){
		 			   a=h-1;
		 			   if(a<0){

		 				   cout<<"Case #  "<<i++<<":"<<24-1<<" "<<60+b<<endl;

		 			   }else{
		 				   cout<<"Case # "<<i++<<":"<<a<<" "<<60+b<<endl;
		 			   }

		 		   }else{
		 			       cout<<"Case # "<<i++<<":"<<h<<" "<<b<<endl;
		 		   }
//		 		   if(i == x){
//		 			   break;
//		 		   }
		 	   }


    	}
