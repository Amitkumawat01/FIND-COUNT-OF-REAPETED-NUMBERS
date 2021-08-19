We have n integers, mixture of positive and negative integers.We have to find the count of integers which are repeated strictly greater than K times.

First of all we have to take input for test cases(t).Then we run While loop t times.In this while loop we initialize a vector vect to store each and every integer's repetition count.Then we take Input for n and k.Initialize a vector arr of n element.

Then we run a for loop n times to store each and every element's(ai) reapetation count in vector vect.  

Then again we run a for loop to check how many integers Repeated greater than k times. Then at the end we print our ans.

You can find solution code of this problem below...

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