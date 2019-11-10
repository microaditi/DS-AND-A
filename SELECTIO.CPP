#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void swap(int x,int y)
{
int temp;
	 temp=x;
	 x=y;
	 y=temp;
}

void selection_sort(int arr[],int size)
{
int i,j,min_index;
  for(i=0;i<size-1;i++)
  {
  min_index=i;
  cout<<"check 1 : "<<min_index;
	for(j=i+1;j<size;j++)
	{
	if(arr[j]<arr[min_index])
	{
	min_index = j;
	cout<<"check 2 : "<<arr[min_index]<<" min_index :  "<<min_index;
	}
	}
	swap(arr[min_index],arr[i]);
	cout<<" check 3 :"<<arr[min_index]<<"  min_index : "<<min_index<<"  arr[ "<<i<<" ] : "<<arr[i];
  }
}
void print(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
	cout<<arr[i];
	cout<<endl;
	}
}
void main()
{
clrscr();
int arr[10],size;
cout<<"Enter size of the array";
cin>>size;
cout<<"Enter elements of the unsorted array";
for(int i=0;i<size;i++)
{
	cin>>arr[i];
}

selection_sort(arr,size);
clrscr();
cout<<" check 4 : printing list ";
print(arr,size);
getch();
}