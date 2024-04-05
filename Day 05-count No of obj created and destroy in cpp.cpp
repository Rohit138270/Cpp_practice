#include<iostream>

using namespace std;

static int count = 0;
class CountObj{
	public:
		CountObj(){
			cout<<"\t"<<this<<endl;
			count++;
			cout<<"No of times object is created \t"<<count<<endl;
		}
		~CountObj(){
			cout<<"\t"<<this<<endl;
			cout<<"No of times object is destroy \t"<<count<<endl;
			count--;
		}
	
};

int main(){
	CountObj co1;
	cout<<&co1<<endl;
	
	CountObj co2;
	cout<<&co2<<endl;
	
	CountObj co3;
	cout<<&co3<<endl;
	
}
