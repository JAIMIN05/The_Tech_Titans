#include <iostream>
#include <string>
#include <limits.h>
using namespace std;

//Create a function to check if a credit card number is valid
bool is_Credit_Card_Valid(string cardNum)
{
    int sum = 0; //Initialize the sum variable to zero
    bool alternate = false; //Initialize the alternate variable to false
    for (int i = cardNum.length() - 1; i >= 0; i--)
    {
        int digit = cardNum[i] - '0'; // Convert the character digit to an integer
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
    string cardNum; // Declare a string variable to store the credit card number
    cout << "Enter credit card number: ";
    cin >> cardNum; // Read the credit card number from the user
    if (is_Credit_Card_Valid(cardNum)) // If the credit card number is valid, print a message
    {
        cout<<"---------------------------------------"
        cout<<"---------------------------------------"
        cout<< "CREDIT CARD NUMBER IS VALID."<< endl;
        cout<<"---------------------------------------"
        cout<<"---------------------------------------"
    }
    else // Otherwise, print a different message
    {
        cout<<"---------------------------------------"
        cout<<"---------------------------------------"
        cout<< "CREDIT CARD NUMBER IS NOT VALID."<< endl;
        cout<<"---------------------------------------"
        cout<<"---------------------------------------"
    }
}



