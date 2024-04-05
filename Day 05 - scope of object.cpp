#include<iostream>

using namespace std;

class ScopeObj{
	public:
		ScopeObj(){
			cout<<"Const call"<<endl;
		}
		~ScopeObj(){
			cout<<"Desc call"<<endl;
		}
};
ScopeObj s1;
int main(){
	cout<<"Main begin"<<endl;
	
	ScopeObj s2;
	{
		cout<<"block bigins"<<endl;
		ScopeObj s3;
		cout<<"block end"<<endl;
	}
	cout<<"main end"<<endl;
}
