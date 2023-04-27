#include <iostream>
#include <string>
using namespace std;

// Create a function to check if a credit card number is valid
bool isCreditCardValid(string cardNumber)
{
    int sum = 0; // Initialize the sum variable to zero
    bool alternate = false; // Initialize the alternate variable to false
    for (int i = cardNumber.length() - 1; i >= 0; i--)
    {
        int digit = cardNumber[i] - '0'; // Convert the character digit to an integer
        if (alternate)
        {
            digit *= 2; // Double the digit if it is in an alternate position
            if (digit > 9)
            {
                digit = (digit % 10) + 1; // If the doubled digit is greater than 9, add its digits together
            }
        }
        sum += digit; // Add the digit to the sum variable
        alternate = !alternate; // Alternate the value of alternate
    }
    return (sum % 10 == 0); // If the sum is divisible by 10, return true. Otherwise, return false.
}

int main()
{
    string cardNumber; // Declare a string variable to store the credit card number
    cout << "Enter credit card number: ";
    cin >> cardNumber; // Read the credit card number from the user
    if (isCreditCardValid(cardNumber)) // If the credit card number is valid, print a message
    {
        cout << "Credit card number is valid." << endl;
    }
    else // Otherwise, print a different message
    {
        cout << "Credit card number is not valid." << endl;
    }
  return 0;
}
/*This program created by
 22cs028 -> jaimin kaneriya
 22cs020 -> samarth Dhol
 22cs022 -> Nishit gajipara
*/
