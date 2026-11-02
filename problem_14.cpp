#include <iostream>
using namespace std;

int ReadPositiveNumber(string message)
{
   int Number = 0;
   do
   {
    cout << message << endl;
    cin >> Number;
   } while (Number <= 0);

   return Number;
}


void PrintInvertedLetterPattern(int Number)
{
    char c = 'A' + (Number - 1);

    for(int i = Number; i > 0 ;i--)
    {
        for(int j = 1; j <= i ; j++)
        {
            cout << c;
        }
        c -= 1;
        cout << endl;
    }
}

int main()
{
    PrintInvertedLetterPattern(ReadPositiveNumber("enter A positive Number:"));
    return 0;
}