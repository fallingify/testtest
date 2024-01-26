#include <bits/stdc++.h>
using namespace std;

int N; 
int arr[1000]; 

int main() {
    int num;

    cin >> N;
    
    for(int i=0; i<N; i++) {
        cin >> num;
        arr[i] = num;   
    }

    cout << "\n";

    for(int i=0; i<N; i++) {
        cout << arr[i] << "\n";
    }
    
    return 0;
}