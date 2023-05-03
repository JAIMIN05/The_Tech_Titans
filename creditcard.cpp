#include <iostream>
#include <string>
using namespace std;

bool is_Credit_Card_Valid(string cardNum)
{
    int sum = 0; 
    bool alternate = false; 
    for (int i = cardNum.length() - 1; i >= 0; i--)
    {
        int digit = cardNum[i] - '0';
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
    string cardNum; 
    cout << "Enter credit card number: ";
    cin >> cardNum; 
    if (is_Credit_Card_Valid(cardNum)) 
    {
        cout<<endl<<"*************************************************"<<endl;
        cout<< "\"CREDIT CARD NUMBER IS VALID.\""<< endl;
        cout<<"*************************************************"<<endl;
    }
    else 
    {
        cout<<endl<<"*************************************************"<<endl;
        cout<< "\"CREDIT CARD NUMBER IS NOT VALID.\""<< endl;
        cout<<"*************************************************"<<endl;
    }
    cout<<endl<<endl<<"-------------------------------------------------"<<endl;
    cout<<"| THIS PROGRAM IS PREPARED BY:-"<<"                 |"<<endl;
    cout<<"| NAME--SAMARTH DHOL, ID---22CS020"<<"              |"<<endl;
    cout<<"| NAME--JAIMIN KANERIYA, ID---22CS028"<<"           |"<<endl;
    cout<<"| NAME--NISHIT GAJIPARA, ID---22CS022"<<"           |"<<endl;
    cout<<"-------------------------------------------------"<<endl;
    return 0;
}

