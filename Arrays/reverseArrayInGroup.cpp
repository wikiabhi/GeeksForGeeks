#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t ;
    
    while(t--){
        int n;
        cin >> n;
        
        int * arr = new int[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        } 

        int k;
        cin >> k;

        int start = 0;
        int end = start + k - 1;

        while(start < n){
            for(int i=end; i>= start; i--){
                cout << arr[i] << " ";
            }
            start = end + 1;
            end = start + k - 1;

            if(end >= n){
                end = n-1; 
            }
        }
        cout << endl;
    }
   
	return 0;
}