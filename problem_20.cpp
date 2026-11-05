#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int RandomNumber(int from, int to)
{
    int ranNum = rand() % (to - from + 1) + from;
    return ranNum;
}

enum character {
    SmallLetter,
    CapitalLetter,
    SpecialChar,
    Digit,
};

char GetRandomChar(character randChar)
{
    switch (randChar)
    {
    case SmallLetter:
        return (char)RandomNumber('a', 'z');
    case CapitalLetter:
        return (char)RandomNumber('A', 'Z');
    case SpecialChar:
        return (char)RandomNumber('!', '/');
    case Digit:
        return (char)RandomNumber('0', '9');
    default:
        return (char)RandomNumber('0', '9');
    }
}

int main()
{
    srand((unsigned)time(NULL));

    cout << GetRandomChar(SmallLetter) << endl;
    cout << GetRandomChar(CapitalLetter) << endl;
    cout << GetRandomChar(SpecialChar) << endl;
    cout << GetRandomChar(Digit) << endl;

    return 0;
}