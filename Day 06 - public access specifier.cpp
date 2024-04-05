#include<iostream>

using namespace std;

class Publicacc{
	private:
		
		double raduis;
		
		public:
		double calculate(int r){
			raduis=r;
			return 3.14 * raduis * raduis;
		}
};
int main(){
	Publicacc obj;
//	obj.raduis = 4.2;
//	cout<<"Radius : "<<obj.raduis<<endl;
	cout<<"Area : "<<obj.calculate(4);
	
}
