#include<iostream>

using namespace std;

class DescCheck{
	private:
		static int cnt1;
		static int cnt2;
	public:
		
		static int getcnt(){
			return cnt1;
		}
		
		DescCheck(){
			cnt1++;
			cout<<this<<endl;
			cout<<"constructor call \t"<<endl;
		}
		~DescCheck(){
			cout<<this<<endl;
			cout<<"destructor call  "<<++cnt2<<endl;
		}
};

int DescCheck::cnt1=0;
int DescCheck::cnt2=0;

int main(){
	DescCheck dc;
	cout<<&dc<<endl;
	
	cout<<"No of times cons call "<<DescCheck::getcnt()<<endl;
	
}
