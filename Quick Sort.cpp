#include<iostream>
using namespace std;

int partition(int a[],int low, int high){
	int pivot = a[high];
	int i = low-1;
	
	for(int j=low;j<=high-1;j++){
		if(a[j] <= pivot){
			i++;
			int t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
	}
	int t = a[i+1];
	a[i+1] = a[high];
	a[high] = t;
	
	return (i+1);
}

void quickSort(int a[],int low,int high){
	if(low<high){
		int pi = partition(a,low,high);
		quickSort(a,low,pi-1);
		quickSort(a,pi+1,high);
	}
}

void display(int a[] , int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int main(){
     int a[] = {1,7,4,5,9,2,6,3,8};
     cout<<"Array Before Sorting"<<endl;
     display(a,9);
     quickSort(a,0,8);
     cout<<"Array After Sorting"<<endl;
     display(a,9);
     
}
