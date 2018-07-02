/**
 * Created on: Mon, Jul 2, 2018 6:51 PM

 * @author: wikiabhi (Abhishek)
*/

/*
Given an array A[] of N integers where each value represents number of chocolates in a packet. 
Each packet can have variable number of chocolates. 
There are m students, the task is to distribute chocolate packets such that :
1. Each student gets one packet.
2. The difference between the number of chocolates given to the students in packet with maximum chocolates 
and packet with minimum chocolates is minimum.
*/

#include <iostream>
#include <algorithm>
#include <climits>

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

        int m;
        cin >> m;

        sort(arr, arr+n);

        int minDifference = INT_MAX;

        for(int i=0; i<= n-m; i++){
            int diff = arr[i+m-1] - arr[i] ;
            if(diff < minDifference){
                minDifference = diff;
            } 
        }
        cout << minDifference << endl;
    }
}