#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void printDivisors(int x){
    for(int i = x; i > 0; i--){
      if (x % i == 0) {
          cout << (x / i) << " ";
      }
    }
}

int main() {
    int n;
    cin >> n;
    printDivisors(n);
    return 0;
}
