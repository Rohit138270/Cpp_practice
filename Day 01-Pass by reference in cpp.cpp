#include<iostream>
using namespace std;

class Classes{

	public:
		void for_Loop(){
			for (int i=0;i<5;i++){
				cout<<"for loop execution :"<<i<<endl;
			}
			cout<<"\n\n\n";
		}
		
		void while_Loop(){
			int i=0;
			while(i<5){
				cout<<"while loop execution :"<<i<<endl;
				i++;
			}
			cout<<"\n\n\n";
		}
		
		void doWhile_Loop(){
			int i=0;
			do{
				cout<<"do-while loop execution :"<<i<<endl;
				i++;
			}while(i<5);
			cout<<"\n\n\n";
		}
};


int main(){
	
	Classes obj;
	obj.for_Loop();
	obj.doWhile_Loop();
	obj.while_Loop();
	
	
}


