#include <iostream>
#include<algorithm>

using namespace std;

bool check(int mid, int arr[], int c, int size_arr){
	
	int cows = 1, pos = arr[0];
	for(int i = 1; i < size_arr; i++){
		if(arr[i]-pos >= mid){
		    
			pos = arr[i];
			cows++;
			if(cows == c){
				return true;
			}
		}
	}
	return false;
}

int main() {
	// your code goes here
	int n,c;
	cin>>n>>c;
	
	int arr[n];
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
// 	cout<<endl;
	sort(arr, arr+n);
	
	int start = 0, end = arr[n-1], max_len = -1;
	
	while(start < end){
	    
		int mid = (start+end)/2;
		
		if(check(mid, arr, c, n)){     // 4 9 19 20 30
		    
			if(mid > max_len)
				max_len = mid;
				
			start = mid+1;
		}
		else{
			end = mid;
		}
		
	}
	cout<<max_len<<endl;

	return 0;
}