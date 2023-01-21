#include<iostream>
using namespace std;
main()
{
    int num;
    cout << "Enter a number...";
    cin >> num; 
    while(num<0)
    {
        cout << "Enter a number...";
        cin >> num; 
    }
}