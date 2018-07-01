/**
 * Created on: Sun, Jul 1, 2018 8:55 PM

 * @author: wikiabhi (Abhishek)
*/
#include<iostream>
using namespace std;

int main(){
	int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int * arr = new int[n];

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        for(int i=n-1; i>=0; i--){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
	return 0;
}