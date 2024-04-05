#include<iostream>

using namespace std;

class Shape{
	public:
		
				
		/*Shape(int id)
		{
		
		
		}
		*/
		virtual int get_area()
		{
			return 0;
			
		}
		
	
};

class Reactangle:public Shape{
	public:
		int length;
		int breath;
		
		Reactangle(int length=0, int breath=0):Shape(){
			
			length=length;
			breath=breath;
			
			
		}
		
		int get_area(){
			int cal=breath+length;
		
			cout<<cal<<endl;
		
		}
		
};

class Square:public Shape{
	public:
		int length;
	
		
		Square(int radius=0):Shape(){
			length=length;
			
		}
			
		
		int get_area(){
			int cal=length*length;
			cout<<cal<<endl;
		
		}
		
};

class Circle:public Shape{
	public:
		int radius;
		
		
		Circle(int radius):Shape(){
			radius=radius;
			
		}
			
		
		int get_area(){
			int cal=0;
			cal=3*radius*radius;
			cout<<cal<<endl;
		
		}
		
};

int main(){
	
	Shape* ptr = new Shape();
	ptr->get_area();
	
	ptr = new Reactangle(4,5);
	ptr->get_area();
	
	ptr = new Square(4);
	ptr->get_area();
	
	ptr = new Circle(4);
	ptr->get_area();
	
	
}
