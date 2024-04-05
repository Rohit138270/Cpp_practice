 #include<iostream>
 using namespace std;
 
 class long_name_class{
 	
 	public :
 		typedef unsigned x;
 		void show(){
 			x y=10;	
 			cout<< y<<endl;
 			cout<<"using typedef !!!";
 			
		 }
 	
 };
 
 
 int main(){
 	typedef long_name_class lnc;
 	lnc obj;
 	obj.show();
 	
 	
 	
 	
 }
