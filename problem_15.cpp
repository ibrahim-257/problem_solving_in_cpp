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

void PrintLetterPattern(int Number)
{
    char c = 'A';
    for (int i = 1; i<= Number; i++)
    {
        for (int j = 1; j<= i; j++)
        {
            cout<< c;
        }
        c += 1;
        cout << endl;
    }
}

int main()
{
    PrintLetterPattern(ReadPositiveNumber("Enter positive Number:"));
    return 0;
}