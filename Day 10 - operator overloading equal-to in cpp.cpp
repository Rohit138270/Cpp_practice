#include<iostream>
#include<string.h>

using namespace std;

class String1{
	int len;
	char * ptr;
	
	public:
		void display();
		String1(char*);
		void operator=(String1&);
		
		String1(String1&){
			cout<<"Copy constructor call"<<endl;
		}
		
		~String1(){
			cout<<"desstructor call"<<endl;
			if(ptr)
			delete []ptr;
		}
};

void String1::display(){
	cout<<"Length is : "<<len<<endl;
    cout<<"String is : "<<ptr<<endl;	
	
}

void String1::operator=(String1& s){
	cout<<"Assignment operator is called"<<endl;
	delete[]ptr;
	
	len = s.len;
	ptr = new char[len+1];
	strcpy(ptr,s.ptr);
	
}
String1 :: String1(char * sptr){
	cout<<this<<endl;
	len=strlen(sptr);
	ptr=new char[len+1];
	strcpy(ptr,sptr);
	
}

int main(){
	String1 s1("rohit");
	String1 s2("abc");
	
	s2=s1;
	//s1.display();
	s2.display();
	
}
