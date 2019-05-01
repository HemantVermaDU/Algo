#include<iostream>
using namespace std;

bool linear_search(int a[],int n,int k){
	int res;
	for(int i=0;i<n;i++){
		if(a[i]==k){
			return true;
		}
	}
	return false;
}

int main(){
	int a[] = {1,2,3,4,5,6,7,8,6,5};
	if(linear_search(a,10,7)){
		cout<<"Found";
	}else{
		cout<<"Not Found";
	}
}
