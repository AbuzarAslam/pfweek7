#include<iostream>
using namespace std;
int Digit(int num);
main()
{
    int num;
    int result;
    cout << "Enter a number...";
    cin >> num;
    result = Digit(num);
    cout << result;
}
int Digit(int num)
{
     int count=0;
    for( count;num>0;count++)
    {
        num = num/10;
    }
    return count;
}
