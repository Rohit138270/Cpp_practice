 #include<iostream>
 using namespace std;
 
 class long_name_class{
 	
 	public :
 		void show(){
 			
 			cout<<"using typedef !!!";
 			
		 }
 	
 };
 
 
 int main(){
 	typedef long_name_class lnc;
 	lnc obj;
 	obj.show();
 	
 	
 }
