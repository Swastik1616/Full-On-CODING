#include<bits/stdc++.h>
using namespace std;

void pattern11(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                cout << "1 ";
            }
            else{
                cout << "0 ";
            }
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    pattern11(n);
}