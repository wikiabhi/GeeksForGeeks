/**
 * Created on: Mon, Jul 2, 2018 7:32 PM

 * @author: wikiabhi (Abhishek)
*/
/*
    Given an array A[] of size n and an integer k, 
    your task is to make the function countDistinct 
    which prints the count of distinct numbers in all windows of size k in the array A[].
*/

#include <iostream>
using namespace std;

void countDistinct(int A[], int k, int n){
    for(int i=0; i<=n-k; i++){
        int dist = 0;
        for(int j=i; j<i+k; j++){
            bool isDistinct = true;
            for(int p=j+1; p<i+k; p++){
                if(A[j] == A[p]){
                    isDistinct = false;
                    break;
                }
            }
            if(isDistinct){
                dist++;
            }
        }
        cout << dist << " ";  
    }
}

int main() {
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
		    cin>>a[i];
		countDistinct(a,k,n);
        cout<<endl;
	}
	return 0;
}


