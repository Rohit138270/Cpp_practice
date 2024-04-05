#include<iostream>
#include<string.h>

using namespace std;

class Student{
	int rno;
	char name[20];
	
	public:
		void display();
		Student(int,char*);
};


Student::Student(int r,char* ch){
	rno=r;
	strcpy(name,ch);
}
void Student::display(){
	cout<<"Student Details : "<<"Roll-NO "<<rno<<"Name "<<name<<endl;
}

int main(){
	Student *ptr = new Student(1,"RA");
	ptr->display();
}
