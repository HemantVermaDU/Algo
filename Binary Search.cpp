#include<iostream>
using namespace std;

bool bin_search(int a[] , int l,int r,int k){
   int mid;
   while(l<r){
   	  mid = (l+(r-1))/2;
   	  if(a[mid]==k){
   	    return true;	
	  }
	  if(a[mid]>k){
	     r = mid-1;
	  }else{
	     l = mid+1;
	  }
   }

return false;
}

int main(){
	int a[] = {1,2,3,4,5,6,7,8,9};
	if(bin_search(a,0,9,9)){
		cout<<"Found";
	}else{
		cout<<"Not Found";
	}
}
