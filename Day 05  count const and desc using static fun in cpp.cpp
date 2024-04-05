#include<iostream>

using namespace std;

class Count{
	
	private:
		static int cnt1;
		static int cnt2;
	public:
		
		static int getcnt1(){
			return cnt1;
		}
		
		static int getcnt2(){
			return cnt2;
		}
		Count(){
			cnt1++;
			cout<<this<<endl;
			cout<<"Counstructor call"<<endl;
		}
		~Count(){
			cnt2++;
			cout<<this<<endl;
			cout<<"Destructor call"<<endl;
			
		}
	
};

int Count::cnt1=0;
int Count::cnt2=0;
int main(){
	Count ct;
	cout<<&ct<<endl;
	
	Count ct1;
	cout<<&ct1<<endl;
	
	cout<<"No of times Cons call"<<Count::getcnt1()<<endl; //count 2
	cout<<"No of times Desc call"<<Count::getcnt2()<<endl; //count 0
	
}
