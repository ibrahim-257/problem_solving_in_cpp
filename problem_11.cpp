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

int  GetLastDigit(int Number)
{
    return Number % 10;
}

int ReverseNumber(int Number)
{
   int ReverseNum = 0;

   while(Number > 0)
   {
    ReverseNum = ReverseNum * 10 + GetLastDigit(Number);
    Number /= 10;
   }
   return ReverseNum;
}

bool isPalimdromeNumber(int Number)
{
    return Number == ReverseNumber(Number);
}

int main()
{

    if(isPalimdromeNumber(ReadPositiveNumber("Enter Positive Number:")))
        cout << "Yes ,it is a Palindrome number\n";
    else
        cout << "NO ,it is NOT a Palindrome number\n";

    return 0;
}