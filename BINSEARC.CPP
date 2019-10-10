#include<iostream.h>
#include<conio.h>
#include<process.h>
int bsearch(int arr[],int size,int item);

int main()
{
clrscr();
int arr[20],item,size,index;
cout<<"ENTER SIZE OF ARRAY";
cin>>size;
cout<<"ENTER ELEMENTS OF ARRAY";
for(int i=0;i<size;i++)
cin>>arr[i];
cout<<"ENTER ELEMENT TO BE SEARCHED";
cin>>item;

index=bsearch(arr,size,item);

if(index==-1)
	cout<<"ELEMENT NOT FOUND";
else
	cout<<"ELEMENT FOUND AT INDEX  "<<index<<"   POSITION "<<(index+1)<<endl;
getch();
return 0;

}


int bsearch(int arr[],int size,int item)
{
int beg,last,mid;
beg=0; last=size-1;

while(beg<=last)
{
	mid=(int)((beg+last)/2);

	if(item==arr[mid])
	return mid;

	else if(item>arr[mid])
	beg=mid+1;

	else
	last=mid-1;
}
return -1;
}
