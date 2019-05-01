#include<iostream>
using namespace std;

void countingSort(int a[],int n){
	int max = a[0];
	for(int i=0;i<n;i++){
		if(max<a[i]){
			max = a[i];
		}
	}
	//declare a bucket of size equals to one more than maximum element of the array
	int bucket[max+1];
	//initialize buckets with zero
	for(int i=0;i<max+1;i++){
		bucket[i] = 0;
	}
	
	for(int i=0;i<n;i++){
		bucket[a[i]]++;
	}
	int k=0;
	for(int i=0;i<max+1;i++){
		for(int j=bucket[i];j>0;j--){
			a[k]=i;
			k++;
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
     countingSort(a,9);
     cout<<"Array After Sorting"<<endl;
     display(a,9);
     
}
