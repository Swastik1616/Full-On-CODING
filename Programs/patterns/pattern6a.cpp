#include<bits/stdc++.h>
using namespace std;

void pattern6a(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    pattern6a(n);
}