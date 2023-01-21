#include<iostream>
using namespace std;
int calculateGCD(int num1,int num2);
int calculateLCM(int num1,int num2);
main()
{
    int num1;
    int num2;
    int result1,result2;
    cout << "Enter 1st number...";
    cin >> num1;
    cout << "Enter 2nd number....";
    cin >> num2;
    result1 = calculateGCD(num1,num2);
    result2 = calculateLCM(num1,num2);
    cout << "GCD is...." << result1;
    cout << "LCM is...." << result2;
}
int calculateGCD(int num1,int num2)
{
    if (num1>num2)
    {
    while(num1>num2)
    {
    num1=num1-num2;
    } 
    return num1;
    }
    else if (num2>num1)
    {
    while(num2>num1)
    {
    num2=num2-num1;
    } 
    return num2;
    }
}
int calculateLCM(int num1,int num2)
{
    int lcm;
    int result1;
    result1 = calculateGCD(num1,num2);
    lcm = (num1*num2)/result1;
    return lcm;

}