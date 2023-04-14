#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str1[50] = "Coding";
    char str2[50] = " Ninjas!";
    string s = "Feroj";
    cout << "Concatenated String: ";
    strcat(str1, str2);
    s.push_back('!');
    cout << str1 <<endl;
    cout << s <<endl;
    return 0;
}
