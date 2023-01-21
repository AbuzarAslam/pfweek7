#include<iostream>
using namespace std;
main()
{
    int num;
    int sum=0;
    for(num = 1; num<=100;num++)
    {
        sum = sum + num;
    }
    cout << "Sum of 100 natural numbers is " << sum;
}