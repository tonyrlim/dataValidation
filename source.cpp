//Coded By: Anthony Lim arl150130 CS1337.007
#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int isValid(string input);

int main()
{
    string input;
    int length;

    cout << "Please input a password that: " << endl
         << "1. Between 6 and 14 characters long" << endl
         << "2. Has at least one uppercase and one lowercase character" << endl
         << "3. Has at least 1 digit" << endl
         << "4. Has at least one punctuation symbol" << endl;

    while(true)
    {
        do
        {
            cout << "Enter the password between 6 and 14 characters long: ";
            cin >> input;
            length = input.length();
        }while(length > 5 && length < 15);

        if(isValid(input))
            continue;

        break;
    }
    return 0;
}

int isValid(string input)
{
    bool hasUpper= 0, hasLower = 0, hasDigit = 0, hasPunct = 0;
    for(int i = 0; i < input.length(); i++)
    {
        if(isupper(input[i]))
            hasUpper = 1;
        else if(islower(input[i]))
            hasLower = 1;
        else if(isdigit(input[i]))
            hasDigit = 1;
        else if(ispunct(input[i]))
            hasPunct = 1;
    }

    if(!hasUpper)
    {
        cout << "ERROR: PASSWORD DOESN'T CONTAIN AN UPPERCASE LETTER." << endl;
    }

    if(!hasLower)
    {
        cout << "ERROR: PASSWORD DOESN'T CONTAIN A LOWERCASE LETTER." << endl;
    }

    if(!hasDigit)
    {
        cout << "ERROR: PASSWORD DOESN'T CONTAIN A DIGIT." << endl;
    }

    if(!hasPunct)
    {
        cout << "ERROR: PASSWORD DOESN'T CONTAIN A PUNCTUATION." << endl;
    }

    if(hasUpper && hasLower && hasDigit && hasPunct)
    {
        return 0;
    }
    else
    {
        return 1;
    }


}
