#include<iostream>
using namespace std;

void countSort(int a[], int n,int exp){
	int output[n];
	int i,count[10]={0};
	
	for(i=0;i<n;i++){
		count[(a[i]/exp)%10]++;
	}
	for(i=1;i<10;i++){
	   count[i] += count[i-1];
	}
	for(int i=n-1;i>=0;i--){
		output[count[(a[i]/exp)%10]-1]  = a[i];
		count[ (a[i]/exp)%10 ]--;
	}
	for(int i=0;i<n;i++){
		a[i]  = output[i];
	}
}

void radixSort(int a[],int n){
	int max = a[0];
	//find the maximum element of array to find the number of the digits of largest number in array
	for(int i=0;i<n;i++){
		if(max<a[i]){
			max = a[i];
		}
	}
	for(int exp = 1;max/exp>0;exp*=10){
		countSort(a,n,exp);
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
     radixSort(a,9);
     cout<<"Array After Sorting"<<endl;
     display(a,9);
     
}
