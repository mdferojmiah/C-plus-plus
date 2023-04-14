#include <bits/stdc++.h>
#include <iostream>

using namespace std;

//Write your totalPrime function here
int totalPrime(int x, int y){
    int count = 0;
    for(int i = x; i <= y; i++){
        for(int j = 1; j <= sqrt(i); j++){
            if(i % j == 0){
                continue;
            }
            else
                count++;
        }
    }
    return count;
}

int main() {
    int S, E;
    cin >> S >> E;
    cout << totalPrime(S, E);
    return 0;
}
