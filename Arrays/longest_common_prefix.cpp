// error

#include <iostream>
#include <string>
using namespace std;

string longestPrefix(string* arr, int n){
    string common;

    for(int i=0; i<arr[0].length();){
        for(int j=1; j<n; j++){        
            if(arr[j][i] == arr[0][i]){
                common.append(arr[0],i,i+1);
                i++;
            }else{
                return common;
            }
        }
    }
    return common;
} 

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string * arr = new string[n];

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        string common = longestPrefix(arr, n);

        cout << common << endl;
    }
}