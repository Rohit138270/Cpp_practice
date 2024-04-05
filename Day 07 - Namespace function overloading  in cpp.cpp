#include<iostream>
using namespace std;
namespace first{
	void show(){
		cout<<"first show"<<endl;
	}
}

namespace second{
	void show(){
		cout<<"second show"<<endl;
	}
}

using namespace first;
using namespace second;

int main(){
	show();
}
