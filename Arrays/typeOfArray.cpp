/**
 * Created on: Sun, Jul 1, 2018 8:56 PM

 * @author: wikiabhi (Abhishek)
*/

/*
Given an array having no duplicates, which can be of 4 types
1.  Ascending
2.  Descending
3.  Descending Rotated
4.  Ascending Rotated
Your task is to print which type of array it is and the maximum element of that array.
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

        int max = arr[0];
        int maxIndex = 0;
        int min = arr[0];
        int minIndex = 0;

        for(int i=0; i<n; i++){
            if(arr[i] > max){
                max = arr[i];
                maxIndex = i;
            }
            if(arr[i] < min){
                min = arr[i];
                minIndex = i;
            }
        }
        
        if(minIndex == 0 && maxIndex == n-1){
            cout << max << " 1" << endl;
        }else if(maxIndex == 0 && minIndex == n-1){
            cout << max << " 2" << endl;
        }else if(maxIndex - minIndex > 0){
            cout << max << " 3" << endl;
        }else if(maxIndex - minIndex < 0){
            cout << max << " 4" << endl;
        }
    }
	return 0;
}