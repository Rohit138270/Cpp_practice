#include<iostream>

using namespace std;

int main(){

int a[10], b[10],n,k=0;
int i,j;

cout<<"Enter size of array : "<<endl;
cin>>n;

cout<<"Enter array elements : "<<endl;

for( i=0;i<n;i++){
	cin>>a[i];
}

for(i=0;i<n;i++){
	for(j=0;j<k;j++){
		if(a[i]==b[j]){
			break;
		}
	}
		if(j==k){
			b[k]=a[i];
			k++;
		}
	
}

cout<<"Your array after removing duplicates elements :"<<endl;
for(i=0;i<k;i++){
	
	cout<<b[i]<<" ";
}

}


