#include<iostream>
using namespace std;

class UserCopy{
	int dd,mm,yy;
	
	public:
		UserCopy (int d,int m,int y){
			dd=d;
			mm=m;
			yy=y;
		}
		UserCopy(UserCopy& c){
			this->dd = c.dd;
			this->mm = c.mm;
			this->yy = c.yy;
		}
		
		void show(){
			cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
		}
};

int main(){
	UserCopy obj1(27,03,2024);
	obj1.show();
	
	UserCopy obj2(obj1);//copy const
	obj2.show();
	
	
}
