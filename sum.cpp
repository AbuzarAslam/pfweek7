#include<iostream>
int digitSum(int number);
using namespace std;
main()
{
    int number;
    int result;
    cout << "Enter a number....";
    cin >> number;
    result =  digitSum(number);
    cout << result;
}
int digitSum(int number)
{
    int modulus;
    int sum=0;
    while(number>1)
    {
    
    modulus = number%10;
    number = number/10;
    sum = sum + modulus;
    }
    return sum;
}
 
