#include<iostream>
using namespace std;
namespace first_nm{
	
	
	int a=10;
	void show(){
		cout<<a<<endl;
		cout<<"inside first namespace";	
		
	}	
	
	class inside_first_nm{
		public:
			void display1(){
				cout<<"inside first nm class"<<endl;
			}
	};
	
	
	namespace second_nm{
	
		class inside_second_nm{
		public:
			void display(){
				cout<<"Inside second nm class"<<endl;
			}
		};
	}
		

		
	
	
}



using namespace first_nm;
using namespace first_nm::second_nm;  
int main(){
	
	inside_first_nm obj;
	obj.display1();
	
	inside_second_nm obj2;
	obj2.display();
	
	first_nm::show();
}

