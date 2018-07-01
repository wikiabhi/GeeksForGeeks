/**
 * Created on: Sun, Jul 1, 2018 7:38 PM

 * @author: wikiabhi (Abhishek)
*/
#include<iostream>
using namespace std;

int* leftRotate(int* arr, int n, int d){
    int i,j;   
    int * a = new int[n];
    for(i=d, j=0; i < n; i++, j++){
        a[j] = arr[i];
    }
    
    for(i=0; i<d; i++, j++){
        a[j] = arr[i];
    }
    return a;
}
    


int main(){
	int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int n, d;
        cin >> n >> d;
        int * arr = new int[n];

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        
        int * rotatedArr = new int[n];
        rotatedArr = leftRotate(arr,n,d);

        for(int i=0; i<n; i++){
            cout << rotatedArr[i] << " ";
        }
        
    }
	return 0;
}