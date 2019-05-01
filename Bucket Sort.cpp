#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

void bucketSort(int a[],int n){
	
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
     bucketSort(a,9);
     cout<<"Array After Sorting"<<endl;
     display(a,9);
}
