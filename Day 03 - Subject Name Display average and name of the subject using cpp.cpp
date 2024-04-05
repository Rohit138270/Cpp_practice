#include<iostream>

using namespace std;

class Subject{
	
	public:
	int n;
	int avg;
	string students_name;
	int no_of_students;
	
/*	Subject(){
		
	}*/
	
	
	
	void accept(){
		
	cout<<"Enter No. of students : ";
	cin>>no_of_students;
	
	for(int i=0;i<no_of_students;i++){
		
		avg=0;
		string* students_name = new string[10];
		cout<<"\nEnter student "<<i+1<< " name :";
		cin>>students_name[i];
		
		cout<<"Enter number of subject : ";
		cin>>n;
		int* marks = new int[n];
		string* subject = new string[10];
	
		for(int i=0;i<=n-1;i++){
			cout<<"subject & Marks :";
			cin>>subject[i];
			cin>>marks[i];
			avg=avg+marks[i];

		}
		
		for(int i=0;i<=n-1;i++){
			cout<<subject[i]<<"  ";
			cout<<marks[i]<<"  ";
			cout<<"\n";
			
			//void display();
	
		}
		cout<<*students_name<<"your average marks is:"<<avg/n<<endl;
		
	}
		
	
	}
	
	void display(){
		cout<<"\n"<<"Average marks "<<students_name << " you got is :"<<avg/n;
	}
};

int main(){
	Subject student;
	student.accept();
	//student.display();
	return 0;
}
