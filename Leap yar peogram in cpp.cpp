 #include<iostream>
 
 using namespace std;
 
 int main(){
 	
 	int y;
 	cout<<"Enter the year:"<<endl;
 	cin>>y;
 	
 	if(y%100!=0 && y%4==0)
 	{
 		cout<<"its a leap year";
 		
	 }else{
	 	cout<<"its not a leap yaer";
	 }
 }
