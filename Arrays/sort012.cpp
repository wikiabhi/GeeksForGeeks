/**
 * Created on: Sun, Jul 1, 2018 8:55 PM

 * @author: wikiabhi (Abhishek)
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

        int a = 0, b=0, c=0;
        for(int i=0; i<n; i++){
            if(arr[i] == 0){
                a++;
            }else if(arr[i] == 1){
                b++;
            }else if(arr[i] == 2){
                c++;
            }
        }

        for(int i=0; i<a; i++){
            cout << "0 ";
        }
        for(int i=0; i<b; i++){
            cout << "1 ";
        }
        for(int i=0; i<c; i++){
            cout << "2 ";
        }
        cout << endl;
    }
	return 0;
}