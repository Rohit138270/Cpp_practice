#include<iostream>
#include<string.h>

using namespace std;

class Descheap{
	public:
		char* s;
		int size;
		
	Descheap(char* c){
		size = strlen(c);
	    s= new char[size+1];
		strcpy(s,c);
		cout<<"const"<<endl;
	}
	~Descheap(){
		cout<<"delete destructor"<<endl;
		delete[] s;
		cout<<s<<endl; //print garbaje value.
	}
};

int main(){
	Descheap dh("Check this");
	
}
