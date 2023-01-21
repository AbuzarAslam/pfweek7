#iinclude<iostream>
using namespace std;
void Rows(int rows);
main()
{
    int rows;
    cout << "Enter number of rows..";
    cin >> rows;
    Rows(int rows);
}
void Rows(int rows)
{
    for(int i=1;i<=rows;i++)
    {
        cout << "*";
    }
    cout << endl;
}