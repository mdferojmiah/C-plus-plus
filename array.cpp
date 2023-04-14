#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string *a = new string[n];

    for(int i = 0; i < n; i++){
        cin>> a[i];
    }

    for(int i = 0; i < n; i++){
        cout<< a[i]<< endl;
    }

    delete [] a;

    return 0;
}
