// simple program to check vowels
#include <iostream>
using namespace std;
// main functions
int main()
{
    // chracters variables
    char a = 'a', e = 'e', i = 'i', o = 'o', u = 'u';
    char ch;
    cout << "enter a chracter" << endl;
    cin >> ch;
    switch (ch)
    {
    case 'a':
        cout << "It is a vowel.\n";
        break;
    case 'e':
        cout << "It is a vowel.\n";
        break;
    case 'i':
        cout << "It is a vowel.\n";
        break;
    case 'o':
        cout << "It is a vowel.\n";
        break;
    case 'u':
        cout << "It is a vowel.\n";
        break;
    default:
        cout << "It is a consonent.\n";
        break;
    }
    return 0;
}