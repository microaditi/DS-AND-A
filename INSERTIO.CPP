#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void insertion_sort(int arr[],int n)
{

	int i,j,key;
	for(i = 1;i<n;i++)
	{
	   key = arr[i];
	   j=i-1;
	   while(j>=0 && arr[j]>key)
	   {
		arr[j+1]=arr[j];
		j=j-1;
	   }
	   arr[j+1]=key;
	}
}
void print(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
	cout<<" arr [ "<<i<<" ] : "<<arr[i]<<endl;
	}
}

void main()
{
int n,arr[10];

cout<<"Enter size of array";
cin>>n;
cout<<"ENtre elements of unsorted array";
	for(int i=0;i<n;i++)
	cin>>arr[i];

insertion_sort(arr,n);
print(arr,n);
getch();
}
