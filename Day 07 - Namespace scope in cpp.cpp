#include<iostream>

using namespace std;

namespace first{
	int val = 600;
}

int val = 200;

int main(){
	int val = 100;
	
	cout<<first::val<<endl;
	cout<<val;
}
