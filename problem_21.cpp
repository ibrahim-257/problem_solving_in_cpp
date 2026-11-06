#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
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

int RandomNumber(int from, int to)
{
    int ranNum = rand() % (to - from + 1) + from;
    return ranNum;
}

string GenerateRandomLetters(short NumberOfLetters)
{
   string Key = "";

   for (int i = 0; i < NumberOfLetters; i++)
   {
    Key.push_back((char)RandomNumber('A', 'Z'));
   }
   return Key;
}

string GenerateKey(int KeyLength, short LettersPerSection)
{
    string Key = "";

    for(int i = 0; i < KeyLength; i++)
    {
        Key += GenerateRandomLetters(LettersPerSection);
        if((i != KeyLength - 1))
        Key.push_back('-');
    }
    return Key;
}

void PrintKyes(int NumberOfKeys)
{
    for(int i = 1; i <= NumberOfKeys; i++)
    {
        cout << "Key [" << i << "] : " << GenerateKey(4, 4) << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    PrintKyes(ReadPositiveNumber("Please Enter a Number of Keys : "));
    return 0;
}