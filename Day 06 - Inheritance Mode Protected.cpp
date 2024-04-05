#include <iostream> 
using namespace std; 
  class Parent { 
private: 
    int pvt = 1; 
protected: 
    int prot = 2; 
 public: 
    int pub = 3; 
  
 
    int getPVT() { 
	return pvt; 
	} 
}; 
  
class Child : protected Parent { 
public: 
    
    int getProt() {
	 return prot;
	  } 
    int getPub() {
    	return pub;
	}
}; 
 int main() 
{ 
    Child object1; 
    cout <<object1.getPVT() << endl; 
    cout << object1.getProt() << endl; 
    cout <<object1.pub << endl; 
    return 0; 
}

