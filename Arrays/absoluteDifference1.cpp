#include <iostream>
using namespace std;

int mod(int x){
    if(x>=0){
        return x;
    }else{
        return -x;
    }
}

bool absDiff(int num){
    int dig = 0; 
    int prevDig = num % 10;

    while(num != 0){
        dig = prevDig;
        num /= 10;
        prevDig = num % 10;

        if(mod(dig - prevDig) != 1){
            return false;
        }
    }
    return true;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        int * arr = new int[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        int * result = new int[n];
        // algo
        int count = 0;
        for(int i=0; i<n; i++){
            if(absDiff(arr[i])){
                result[count] = arr[i];
                count++;
            } 
        }

        for(int i=0; i<n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}