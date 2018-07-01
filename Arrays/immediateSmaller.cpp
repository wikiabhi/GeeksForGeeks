/**
 * Created on: Sun, Jul 1, 2018 9:28 PM

 * @author: wikiabhi (Abhishek)
*/

/*
Given an integer array, for each element in the array check, 
whether there exist a smaller element on the next immediate position of the array. 
If it exist print the smaller element. 
If there is no smaller element on the immediate next to the element then print -1.
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

        for(int i=0; i<n-1; i++){
            if(arr[i+1] < arr[i]){
                cout << arr[i+1] << " ";
            }else{
                cout << "-1 ";
            }
        }
        cout << "-1 " << endl;

    }
	return 0;
}