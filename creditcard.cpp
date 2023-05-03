#include <iostream>
#include <string>

using namespace std;

//Create a function to check if a credit card number is valid
int is_Credit_Card_Valid(string cardNum)
{
    float sum = 0; //Initialize the sum variable to zero
    int alternate = 1; //Initialize the alternate variable to false
    for (int i = cardNum.length() - 1; i >= 0; i--)
    {
        int digit = cardNum[i] - '0'; // Convert the character digit to an integer
        if (alternate==true)
        {
            digit *= 2; // Double the digit if it is in an alternate position
            if (digit > 9)
            {
                digit = (digit % 10) + 1; // If the doubled digit is greater than 9, add its digits together
            }
        }
        sum += digit; // Add the digit to the sum variable
        if(i%2==0)
        {
            alternate = 1; // Alternate the value of alternate
        }
        else
        {
            alternate = 0;
        }
    }
    return (sum % 10 == 0); // If the sum is divisible by 10, return true. Otherwise, return false.
}

int main()
{
    string cardNum; // Declare a string variable to store the credit card numbe
    cin >> cardNum; // Read the credit card number from the user
    if (is_Credit_Card_Valid(cardNum)) // If the credit card number is valid, print a message
    {
        cout<<"---------------------------------------------"<<endl;
        cout<<"---------------------------------------------"<<endl;
        cout<< "CREDIT CARD NUMBER IS VALID."<< endl;
        cout<<"---------------------------------------------"<<endl;
        cout<<"---------------------------------------------"<<endl;
    }
    else // Otherwise, print a different message
    {
        cout<<"---------------------------------------------"<<endl;
        cout<<"---------------------------------------------"<<endl;
        cout<< "CREDIT CARD NUMBER IS NOT VALID."<< endl;
        cout<<"---------------------------------------------"<<endl;
        cout<<"---------------------------------------------"<<endl;
    }
    return 0;
}



