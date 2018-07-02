/**
 * Created on: Mon, Jul 2, 2018 7:07 PM

 * @author: wikiabhi (Abhishek)
*/

/*
    Given an array of integers (both odd and even), 
    the task is to sort them in such a way that the first part of the array contains 
    odd numbers sorted in descending order, 
    rest portion contains even numbers sorted in ascending order.
*/

#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
 
    int t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
 
        int* arr = new int[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        int evenIndex = 0, oddIndex = 0;
        int* even = new int[n];
        int* odd = new int[n];

        for(int i=0; i<n; i++){
            if(arr[i] % 2 == 0){
                even[evenIndex] = arr[i];
                evenIndex++;
            }else{
                odd[oddIndex] = arr[i];
                oddIndex++;
            }
        }

        sort(odd, odd+oddIndex, greater<int>());
        sort(even, even+evenIndex);

        
        for(int i=0; i<oddIndex; i++){
            cout << odd[i]  << " ";
        }
        for(int i=0; i<evenIndex; i++){
            cout << even[i] << " ";
        }
        cout << endl;
    }
}