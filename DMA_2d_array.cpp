#include <iostream>
using namespace std;

int main()
{
    int row, col;

    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> col;

    int *arr = new int[row*col];

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            *(arr + i * col + j) = rand() % 100;
        }
    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << *(arr + i * col + j) << " ";
        }
        cout <<endl;
    }

    delete [] arr;
    return 0;
}
