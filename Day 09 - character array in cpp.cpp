#include<iostream>

using namespace std;

int main(){
	char names[4][8] = {"Rohit","Arayman","Rahul","Ashwin"};
	
	for(int i=0;i<4;i++){
		cout<<names[i]<<endl;
		cout<<*(names+i)<<endl;
	//	cout<<*((names+2)+1)<<endl;		
	}
	
/*	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<names[i][j];
		}
	}*/
	
//	for(int i=0;i<4;i++){
//		for(int j=0;j<4;j++){
//			cout<<((names+i)+j)<<endl;
//		}
//	}
}
