#include<iostream.h>
#include<stdio.h>
#include<conio.h>

void swap(int *x,int *y)
{
int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void bubble_sort(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<(n-i-1);j++)
		{
			if(arr[j]>arr[j+1])
				{
				swap(&arr[j],&arr[j+1]);
				}
		}
	}
}

void print(int arr[],int n)
{
	for(int i=0;i<n;i++)
		cout<<"arr [ "<<i<<" ] : " <<arr[i]<<endl;
}

void main()
{
int size,arr[10];
	cout<<"Enter size of the array";
	cin>>size;
	cout<<"Eneter elemnets of the array";
		for(int i=0;i<size;i++)
		{
		cin>>arr[i];
		}
bubble_sort(arr,size);
print(arr,size);

getch();
}
