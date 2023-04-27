#include <iostream>
#include <string>
using namespace std;

//Create a function to check if a credit card number is valid
bool isCreditCardValid(string cardNumber)
{
    int sum = 0; //Initialize the sum variable to zero
    bool alternate = false; //Initialize the alternate variable to false
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
        cout<<"-------------------------------------------------"<<endl;
        cout <<endl<< "CREDIT CARD NUMBER IS VALID." << endl <<endl;
        cout<<"-------------------------------------------------"<<endl;
    }
    else // Otherwise, print a different message
    {
        cout<<"-------------------------------------------------"<<endl;
        cout <<endl<< "CREDIT CARD NUMBER IS NOT VALID." << endl << endl;
        cout<<"-------------------------------------------------"<<endl;
    }
    cout<<endl<<endl<<"*************************************************"<<endl;
    cout<<"* THIS PROGRAM IS PREPARED BY:-"<<"                 *"<<endl;
    cout<<"* NAME--SAMARTH DHOL, ID---22CS020"<<"              *"<<endl;
    cout<<"* NAME--JAIMIN KANERIYA, ID---22CS028"<<"           *"<<endl;
    cout<<"* NAME--NISHIT GAJIPARA, ID---22CS022"<<"           *"<<endl;
    cout<<"*************************************************"<<endl;
  return 0;
}
/*This program created by
 22cs028 -> jaimin kaneriya
 22cs020 -> samarth Dhol
 22cs022 -> Nishit gajipara
*/
