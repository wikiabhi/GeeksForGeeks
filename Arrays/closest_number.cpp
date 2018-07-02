/**
 * Created on: Mon, Jul 2, 2018 8:45 PM

 * @author: wikiabhi (Abhishek)
*/

/*
    Given an array of sorted integers. 
    The task is to find the closest value to the given number in array. 
    Array may contain duplicate values.
    Note: If the difference is same for two values print the value which is greater than the given number.
*/

#include <iostream>
#include <climits>
using namespace std;

int mod(int x){
    if(x>=0){
        return x;
    }else{
        return -x;
    }
} 

int main(){
 
    int t;
    cin >> t;
 
    while(t--){
        int n,k;
        cin >> n >> k;
 
        int* arr = new int[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        int diff = INT_MAX;
        int closestIndex;

        for(int i=0; i<n; i++){
            int currentDiff = mod(arr[i]-k);
            if(currentDiff < diff){
                diff = currentDiff;
                closestIndex = i;
            }
            if(currentDiff == diff){
                if((arr[i]-k) > 0){
                    closestIndex = i;
                }
            }
        }
        cout << arr[closestIndex] << endl;
    }
}