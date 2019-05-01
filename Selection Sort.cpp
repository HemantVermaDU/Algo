#include<iostream>
using namespace std;

void selectionSort(int a[] , int n){
	int i,j,min_index;
	for(i=0;i<n;i++){
		min_index = i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[min_index]){
				min_index = j;
			}
		}
		int t = a[i];
		a[i] = a[min_index];
		a[min_index] = t;
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
     selectionSort(a,9);
     cout<<"Array After Sorting"<<endl;
     display(a,9);
     
}
