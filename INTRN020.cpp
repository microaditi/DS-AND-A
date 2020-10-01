#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	int arr[20];
	int k=0;
	int flag;
	
	cout<<"Enter size of array";
	cin>>n;    // n=3
	
	while(k!=n){
	for(i=1;i<100;i++){        
		if(i==1||i==0){
			continue;
		}
		flag = 1;
		for(j=2;j<=i/2;j++){            
			if(i%j==0){
				flag=0;
				break;
			}
		}
		
		arr[k] = i;
		k++;
	}
}
	for(k=0;k<n;k++){
		cout<<" at k :"<<k<<" value is : "<<arr[k]<<endl;
	}
	return 0;
}
