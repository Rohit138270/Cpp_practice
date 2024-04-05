#include<iostream>
#include<string.h>
using namespace std;

int main()  
{ 

{
	
	string str = "hii";
	cout<<"String size is :"<<str.size()<<endl;
	cout<<"String length is :"<<str.length()<<endl;
	cout<<"String capacity is :"<<str.capacity()<<endl;
	
}
cout<<"-------------------------------------------------------"<<endl;
{
	string str1 = "hii";
	string str2 = "byee";
	cout<<"After append : "<<str1.append(str2)<<endl;;
}
cout<<"-------------------------------------------------------"<<endl;
{
	string str1 = "hii";
	string str2 = "byee";
	if(str1.compare(str2)){
		cout<<"str1 is smaller than str2 : "<<endl;	
	}
	
}
cout<<"-------------------------------------------------------"<<endl;
{
	string str1 = "substr";
	cout<<"Substring  : "<<str1.substr(2,3)<<endl;
}
cout<<"-------------------------------------------------------"<<endl;
{
	string str1 = "replace";
	cout<<"replace  : "<<str1.replace(0,5,"this")<<endl;
}


}
