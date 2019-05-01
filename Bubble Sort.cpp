#include<iostream>
using namespace std;

void bubbleSort(int a[] , int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				int t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
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
     bubbleSort(a,9);
     cout<<"Array After Sorting"<<endl;
     display(a,9);
     
}
