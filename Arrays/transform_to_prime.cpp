/**
 * Created on: Sun, Jul 1, 2018 4:59 PM

 * @author: wikiabhi (Abhishek)
*/

/*
    Given an array of n integers. 
    Find minimum number to be inserted in array, so that sum of all elements of array becomes prime. 
    If sum is already prime, then return 0.
*/

// error

#include<iostream>
using namespace std;

bool isPrime(int n){
    for(int i=2; i*i < n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
	int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        int* arr = new int[n];

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        int sum = 0;
        for(int i=0; i<n; i++){
            sum += arr[i];
        }

        int offset;
        if(sum % 2 == 0){
            offset = 1;
        }else{
            offset = 0;
        }

        int j=0;
        int newSum = sum;
        int increment = offset + 2*j;

        while(!isPrime(newSum)){
            increment = offset + 2*j;
            newSum = sum + increment;
            j++; 
        }

        cout << increment << endl;

    }
	return 0;
}