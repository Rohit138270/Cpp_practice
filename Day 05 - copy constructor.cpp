#include<iostream>
#include<string.h>

using namespace std;

class CopyConst{
	int len;
	char* str;
	
	public:
		CopyConst(char *c)
		{
			str=c;
		}
		CopyConst(CopyConst& c){
		//	len = strlen(c);
			this->len = len;
			this->str = new char[len+1];
			strcpy(str,c.str);	
		}
		void show(){
			cout<<str<<endl;
		}
};
int main(){
	
	CopyConst s1("Rohit");
	s1.show();
	CopyConst s2(s1);
	s2.show();
	
}
