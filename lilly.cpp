#include<iostream>
using namespace std;
float calculateMoney(int age, int price1, float price2);
main()
{
    int age;
    int price1;
    float price2;
    float result;
    cout << "Enter age...";
    cin >> age;
    cout << "Enter price of toy...";
    cin >> price1;
    cout << "Enter price of washing machine....";
    cin >> price2;
    result = calculateMoney(age,price1,price2);
    cout << result;
}
float calculateMoney(int age, int price1, float price2)
{   
    int dollar=0;
    int amount=0;
    float saving=0;
    int birthday;
    for(birthday=1;birthday<=age;birthday++)
    {
        if(birthday%2==0)
        {
            dollar += ((birthday * 5) - 1);
        }
        else if(birthday%2==1)
        {
            amount=amount+price1;
        }
    }
    saving = dollar + amount;
    if(price2<saving)
    {
        int remaining;
        remaining = saving - price2;
        cout << "Yes!";
        return remaining;
    }
    else if(price2>saving)
    {
        cout << "No!";
        return price2-saving;
    }
    
}