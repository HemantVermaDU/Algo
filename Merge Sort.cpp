#include<iostream>
using namespace std;

void merge(int a[] , int l,int mid,int r){
	int i,j,k;
	int n1 = mid-l+1;
	int n2 = r-mid;
	int L[n1] , R[n2];
	
	for(i=0;i<n1;i++){
		L[i]  =a[i+l];
	}
	for(j=0;j<n2;j++){
		R[j] = a[mid+j+1];
	}
	
	i=0;
	j=0;
	k=l;
	while(i<n1 && j<n2){
		if(L[i]<=R[j]){
			a[k] = L[i];
			i++;
		}else{
			a[k] = R[j];
			j++;
		}
		k++;
	}
	
	while(i<n1){
		a[k] = L[i];
		i++;
		k++;
	}
	
	while(j<n2){
		a[k] = R[j];
		j++;
		k++; 
	}
}

void mergeSort(int a[],int l,int r){
	if(l<r){
		int mid = l+r/2;

		mergeSort(a,l,mid);
		mergeSort(a,mid+1,r);
		
		merge(a,l,mid,r);
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
     mergeSort(a,0,8);
     cout<<"Array After Sorting"<<endl;
     display(a,9);
}
