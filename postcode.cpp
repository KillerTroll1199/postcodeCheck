#include <iostream>
#include <string>
using namespace std;

bool isNum(char letter)
{
    bool isNum = false;
        if(letter>= '0' && letter <= '9')
        {
            isNum = true;
        }

        return isNum;
}
bool isLetter(char letter)
{
    bool isLetter = false;

    if(letter>= 'A' && letter <= 'Z')
    {
        isLetter = true;
    }

    return isLetter;
}

bool isValidLastChars(char first, char second, char third)
{
    bool isValid = false;

    if((isNum(first) == true) && (isLetter(second) == true) && (isLetter(third) == true))
    {
        isValid = true;
    }
    if((second == 'C') || (second == 'I') || (second == 'K') || (second == 'M') || (second == 'O') || (second == 'V') || (third == 'C') || (third == 'I') || (third == 'K') || (third == 'M') || (third == 'O') || (third == 'V'))
    {
        isValid = false;
    }

    return isValid;
}

bool thirdPos(char letter)
{
  if((letter == 'A') || (letter == 'B') || (letter == 'C') || (letter == 'D') || (letter == 'E') || (letter == 'F') || (letter == 'G' ) || (letter == 'H') || (letter == 'J') || (letter == 'K') || (letter == 'K') || (letter == 'S') || (letter == 'T') || (letter == 'U') || (letter == 'W'))
  {
      return true;
  }

  return false;
}

bool firstCharValid(char letter)
{
    if((isLetter(letter) == true) && (letter != 'Q') && (letter != 'V') && (letter != 'X'))
    {
        return true;
    }
    return false;
}

bool secondCharValid(char letter)
{
    if((isLetter(letter) == true) && (letter != 'I') && (letter != 'J') && (letter != 'Z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string postcode;

    while(1)
    {
        cout<<"Postcode Checker. Write a postcode and the program will determine if it is valid."<<endl;
        getline(cin, postcode);
        if(postcode.length() == 8)
        {
            char first = postcode[0];
            char second = postcode[1];
            char third = postcode[2];
            char fourth = postcode[3];
            char space = postcode[4];
            char fifth = postcode[5];
            char sixth = postcode[6];
            char seventh = postcode[7];

            if((firstCharValid(first) == true) && (secondCharValid(second) == true) && (isNum(third) == true) && (isNum(fourth) == true) && (isValidLastChars(fifth, sixth, seventh) == true))
            {
                cout<<"This is a valid postcode"<<endl;
            }
            else if((firstCharValid(first) == true) && (secondCharValid(second) == true) && (isNum(third) == true) && (isLetter(fourth) == true) && (isValidLastChars(fifth, sixth, seventh) == true))
            {
                cout<<"This is a valid postcode"<<endl;
            }
            else
            {
                cout<<"This is not a valid postcode"<<endl;
            }
        }
        else if(postcode.length() == 7)
        {
            char first = postcode[0];
            char second = postcode[1];
            char third = postcode[2];
            char space = postcode[3];
            char fourth = postcode[4];
            char fifth = postcode[5];
            char sixth = postcode[6];

            if((firstCharValid(first) == true) && (isNum(second) == true) && (isNum(third) == true) && (isValidLastChars(fourth, fifth, sixth) == true))
            {
                cout<<"This is a valid postcode"<<endl;
            }
            else if((firstCharValid(first) == true) && (secondCharValid(second) == true) && (isNum(third) == true) && (isValidLastChars(fourth, fifth, sixth) == true))
            {
                cout<<"This is a valid postcode"<<endl;
            }
            else if((firstCharValid(first) == true) && (isNum(second) == true) && (thirdPos(third) == true) && (isValidLastChars(fourth, fifth, sixth) == true))
            {
                cout<<"This is a valid postcode"<<endl;
            }
            else
            {
                cout<<"This is not a valid postcode"<<endl;
            }
        }
        else if(postcode.length() == 6)
        {
            char first = postcode[0];
            char second = postcode[1];
            char space = postcode[2];
            char third = postcode[3];
            char fourth = postcode[4];
            char fifth = postcode[5];

            if((firstCharValid(first) == true) && (isNum(second) == true) && (isValidLastChars(third, fourth, fifth) == true))
            {
                cout<<"This is an valid postcode"<<endl;
            }
            else
            {
                cout<<"This in an invalid postcode"<<endl;
            }
        }
        else
        {
            cout<<"This is an invalid postcode"<<endl;
        }
    }
}
