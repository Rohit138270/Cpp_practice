#include<iostream>

using namespace std;

int main(){
	int no1 = 0,no2 = 1,no3;
	
	for(int i=2;i<=5;++i){
		no3 = no1 + no2;
		cout<<no3<<endl;
		no1 = no2;
		no2 = no3;
	}
}
