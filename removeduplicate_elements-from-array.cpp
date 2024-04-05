#include<iostream>
#include<string.h>

using namespace std;

int main(){
	int arr[]={1,2,3,4,5,2,6};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<n<<endl;
	
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
}
