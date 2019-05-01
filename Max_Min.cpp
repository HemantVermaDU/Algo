#include<iostream>
#include<vector>
using namespace std;

vector<int> max_min(int a[],int n){
	int max = a[0] , min=a[0];
	for(int i=0;i<n;i++){
		if(max<a[i]){
			max = a[i];
		}
		if(min>a[i]){
			min = a[i];
		}
	}
	vector<int> res;
	res.push_back(max);
	res.push_back(min);
	return res;
}
int main(){
      int a[] = {1,7,4,5,9,2,6,3,8};
      vector<int> r = max_min(a,9);
	  cout<<"Maximum : "<<r[0]<<"  \nMinimum : "<<r[1];	
}
