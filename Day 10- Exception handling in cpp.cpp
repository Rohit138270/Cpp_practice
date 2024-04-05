 #include<iostream>
 
 using namespace std;
 
 class Demo{
     	int num=5,den=0;
 			int result=0;
 	public:
 		void exceptionCheck(){
 			result=0;
 		
 				try{
 			    	if(den==0)
 			    	{
 			    		 throw num;
					}
 			    	  
 			      	result=num/den;
 			        cout<<result<<endl;
		    	 }
			 catch(int e){
			 	cout<<"Error aa gya!!!"<<e;
			 	throw e;
			 }
 			
		 }
 	
 	
 };
 
 int main(){
 	Demo d;
 //	d.exceptionCheck();
// 	
	
 			
 		try
 		{
 			d.exceptionCheck();
		 }
		 catch(int a)
		 {
		 	cout<<endl<<"itne se ke lye aa gaye";
		 }
 }
