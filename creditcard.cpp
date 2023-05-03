#include <iostream>
#include <string>
using namespace std;

bool isCreditCardValid(string cardNumber)
{
    int sum = 0;
    bool alternate = false; 
    for (int i = cardNumber.length() - 1; i >= 0; i--)
    {
        int digit = cardNumber[i] - '0'; 
        if (alternate)
        {
            digit *= 2; 
            if (digit > 9)
            {
                digit = (digit % 10) + 1;
            }
        }
        sum += digit; 
        alternate = !alternate; 
    }
    return (sum % 10 == 0); 
}

int main()
{
    string cardNumber; 
    cout << "Enter credit card number: ";
    cin >> cardNumber; 
    if (isCreditCardValid(cardNumber)) 
    {
        cout << "Credit card number is valid." << endl;
    }
    else // Otherwise, print a different message
    {
        cout << "Credit card number is not valid." << endl;
    }
  return 0;
}
//this program create using luhn algorithm

/*This program created by
 22cs028 -> jaimin kaneriya
 22cs020 -> samarth Dhol
 22cs022 -> Nishit gajipara
*/
