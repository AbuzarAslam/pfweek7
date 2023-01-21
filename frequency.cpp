#include<iostream>
using namespace std;
int freqChecker(int num,int digit);
main()
{
   int num;
   int digit;
   int result;
   cout << "Enter a number...";
   cin >> num;
   cout << "Enter a digit...";
   cin >> digit;
   result = freqChecker(num,digit);
   cout << result;
}
int freqChecker(int num,int digit)
{
    int count=0,modulus;
    while(num>0)
    {
        modulus = num%10;
        num = num / 10;
        if(modulus == digit)
        {
        count = count + 1;

        }
    }
   return count;
}