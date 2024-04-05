#include<iostream>

using namespace std;

static int count = 0;
class CountCheck{
	public:
		CountCheck(){
			count++;
			cout<<"No of times constructor call"<<count<<endl;
		}
		~CountCheck(){
			cout<<"No of times destructor call"<<count<<endl;
			count--;
		}
	
};
int main(){
	CountCheck ct,ct1,ct2; //3 times call cons and desc 
	
}
