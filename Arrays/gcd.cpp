/**
 * Created on: Sun, Jul 1, 2018 9:54 PM

 * @author: wikiabhi (Abhishek)
*/

#include<iostream>
using namespace std;

int gcd(int a, int b){
    if(a>b){
        return gcd(b,a);
    }
    if(b % a == 0){
        return a;
    }
    return gcd( b%a, a);
}

int main(){
	int t;
    cin >> t;

    while(t--){
        int a, b;
        cin >> a >> b;
        cout << gcd(a,b) << endl;
    }
	return 0;
}