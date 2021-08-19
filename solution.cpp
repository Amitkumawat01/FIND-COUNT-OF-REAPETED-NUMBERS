#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	// loop for t testcases
	while(t--){
		// vector vect for storing each number's repeatation (Each element initialized from zero )
		int N=2*1e5+10;
        vector<int> vect(N,0);

		int n,k,count=0;
		cin>>n>>k;
		// Vector arr for storing all numbers 
		vector<int> arr(n);
        // For loop for storing all numbers reapetation in vector vect 
		for(int i=0; i<n; i++){
			cin>>arr[i];
			if(arr[i]>=0){
			    vect[arr[i]]++;
			 }
			else {
				arr[i]=-arr[i];
				int m=1e5+arr[i];
				vect[m]++;
			}
		}
        //For loop for counting how many numbers repeated strictly greater than K times 
		for(int i=0; i<N; i++){
			if(vect[i]>k) count++;
		}
		cout<<count<<endl;
	}
	return 0;
}