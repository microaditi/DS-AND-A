#include<iostream>
using namespace std;

int three_max(int a, int b, int c)
{
	if(a<b && b<c){
		return c;
	}
	else if(a<c && c<b){
			return b;
			}
	
	else if(b<a && a<c){
		return c;
	}
	else if(b<c && c<a)
	{
		return a;
	}
	else if(c<a && a<b)
	{
		return b;
	}
	else if(c<b && b<a)
	{
		return a;
	}

	
}


int main(){
	int size, arr[6][3];
	cout<<"size : ";
	cin>>size;
	cout<<"Enter value a, b, c for first set";
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<3;j++)
		{
		cin>>arr[i][j];
		}
	}
	cout<<"OUTPUT";
	for(int i=0;i<size;i++){
		cout<<three_max(arr[i][0],arr[i][1],arr[i][2])<<endl;
	}	
	return 0;
}
