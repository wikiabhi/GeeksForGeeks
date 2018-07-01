/**
 * Created on: Sun, Jul 1, 2018 4:41 PM

 * @author: wikiabhi (Abhishek)
*/

/* 
A program to print all the LEADERS in the array. 
An element is leader if it is greater than all the elements to its right side. 
The rightmost element is always a leader.
*/

#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int n;
        cin >> n;

        int * arr = new int[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        int * leaders = new int[n];
        int currentMax = arr[n-1];
        int j = 0;

        leaders[j] = currentMax;
        j++;
        for(int i=n-2; i>=0; i--){
            if(arr[i] > currentMax){
                currentMax = arr[i];
                leaders[j] = currentMax;
                j++;
            }    
        }

        j--;
        for(;j>=0; j--){
            cout << leaders[j] << " " ;
        }
        cout << endl;
    }

	return 0;
}