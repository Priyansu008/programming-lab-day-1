#include<iostream>
using namespace std;
void bubblesort(int n,int arr[])
{
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
			    arr[j]=arr[j+1];
			    arr[j+1]=temp;
			}
		}
	}
}
void printarray(int n,int arr[])
{
	for(int i=0;i<n;i++)
	cout<<arr[i]<<endl;
}
int main(){
	int n,arr[100];
	cout<<"Enter the no of elements in array :"<<endl;
	cin>>arr[n];
	cout<<"Enter the elements :";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	bubblesort(n,arr);
	for(int i=0;i<n;i++)
	cout<<arr[i]<<endl;
}
