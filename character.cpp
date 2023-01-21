#include<iostream>
using namespace std;
main()
{
    char character;
    cout << "Enter character instead of y....";
    cin >> character;
    while(character!='y')
    {
        cout << "Enter character instead of y....";
        cin >> character;
    }
}