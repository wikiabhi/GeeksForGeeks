/**
 * Created on: Sun, Jul 1, 2018 9:38 PM

 * @author: wikiabhi (Abhishek)
*/

/*
    Write a program to input a list of n integers in an array and 
    arrange them in a way similar to the to-and-fro movement of a Pendulum.
    The minimum element out of the list of integers, must come in center position of array.
    If there are even elements, then minimum element should be moved to (n-1)/2 index 
    (considering that indexes start from 0)
    The next number (next to minimum) in the ascending order, goes to the right, 
    the next to next number goes to the left of minimum number and it continues like a Pendulum.
*/

#include<iostream>
#include <algorithm>
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
        sort(arr, arr+n);

        int mid = (n-1)/2;
        int current = mid;
        int next = mid + 1;
        int nextNext = mid - 1;

        int * pendulum = new int[n];
        for(int i=0; i<n; i++){
            pendulum[current] = arr[i];
            current = next;
            next = nextNext;
            if(current > next){
                nextNext = current + 1;
            }else{
                nextNext = current - 1;
            }      
        }

        for(int i=0; i<n ; i++){
            cout << pendulum[i] << " ";
        }
        cout << endl;
    }
	return 0;
}
