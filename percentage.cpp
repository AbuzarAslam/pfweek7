#include<iostream>
using namespace std;
void printPercentage(int number);
main()
{
    int number;
    cout << "Enter number renge.....";
    cin >> number;
    printPercentage(number);
}
void printPercentage(int number)
{
    float count1=0;
    float count2=0;
    float count3=0;
    float count4=0;
    float count5=0;
    float p1;
    float p2;
    float p3;
    float p4;
    float p5;
    for(float count=1;count<=number;count=count+1)
    {
        int num;
        cout << "Enter number...." ;
        cin >> num;
        if(num<200)
        {
            count1 = count1+1;
        }
        else if(num<400)
        {
            count2 = count2+1;
        }
        else if(num<600)
        {
            count3 = count3+1;
        }
        else if(num<800)
        {
            count4 = count4+1;
        }
        else if(num<=1000)
        {
            count5 = count5+1;
        }
    }
    p1 = (count1/number)*100.0;
    cout << "Numbers in range of 0 - 199 are ..." << p1 << "%" << endl;
    p2 = (count2/number)*100.0;
    cout << "Numbers in range of 200 - 399 are..." << p2 << "%" << endl;
    p3 = (count3/number)*100.0;
    cout << "Numbers in range of 400 - 599 are..." << p3 << "%" << endl;
    p4 = (count4/number)*100.0;
    cout << "Numbers in range of 600 - 799 are..." << p4 << "%" << endl;
    p5 = (count5/number)*100.0;
    cout << "Numbers in range of 800 - 1000 are..." << p5 << "%" << endl;

}

