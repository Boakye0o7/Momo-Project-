#include<iostream>
#include <string>
using namespace std;
/*Haggla Mensah Agyei
UEB3214522*/

int main()
{
    string pin= "0000";
    string cpin;
    int attempts = 0, choice, npin, amount, number;
    int newBalance, balance =1000;
    while (attempts <3){
    cout<< "Enter Your PIN for Authentication" <<endl;
    cin>> cpin;
    cout<< endl;
    if (cpin =="0000") {
    cout << "Access Granted" <<endl;
    cout << endl;
    break;
    }
    else if(cpin != pin) {
    cout << "Wrong pin try again." <<endl;
    attempts++;
    cout<<endl;
    }
    if (attempts>= 3){
    cout << "Maximum attempts made. Exiting program"<<endl;
    return 0;
    }
    }
    
    while (true) {
    cout<<"1. Check balance "<<endl;
    cout<<"2. Reset Pin "<<endl;
    cout<<"3. Send Money "<<endl;
    cout<<"4. Buy Airtime "<<endl;
    cout << "5. Exit"<<endl;
    
    cin>>choice;
    switch(choice) {
    
    case 1:
    while(attempts<3){
    cout<<"Enter Pin" <<endl;
    cin >> cpin;
    if (cpin == "0000"){
    cout<<"You balance is $" << balance <<endl;
    break;
    }
    else{
    cout<< "Wrong PIN. Try again."<<endl;
    attempts++;
    }
    if (attempts>=3){
    cout << "Maximum attempts made. Exiting program"<<endl;
    return 0;
    }
    }
    break;
    
    case 2:
    while (attempts<3){
    cout<< "Enter Current Pin"<<endl;
    cin >> cpin;
    
    if(cpin=="0000"){
    cout<<"Enter New PIN"<<endl;
    cin >> npin;
    cout <<"Pin changed successfully"<<endl;
    break;
    }
    else{
    cout << "Wrong Pin entered, try again"<<endl;
    attempts++;
    }
    if (attempts>=3){
    cout << "Maximum attempts made"<<endl;
    return 0;
    }
    }
    
    
    case 3:
    cout << "Enter recipient's Momo line"<<endl;
    cin>>number;
    cout << "Enter amount" <<endl;
    cin >> amount;
    if (amount>balance) {
    cout << "Insufficient balance"<<endl;
    return 0;
    }
    else {
    newBalance=balance-amount;
    cout<< "Transaction successful. Your new balance is $"<< newBalance<<endl;
    break;
    }
    
    case 4:
    cout << "Enter mobile number"<<endl;
    cin >> number;
    cout<<"Enter amount "<<endl;
    cin >> amount;
    if (amount>balance) {
    cout << "Insufficient balance. Please try again" <<endl;
    } else{
    newBalance = balance - amount;
    cout<< "You have sent airtime worth "<<amount<< " to " <<number<< " Your new balance is $"<< newBalance<<endl;
    break;
    }
    
    case 5:
    cout << "Thank you for using Haggla's Momo Platform."<<endl;
    cout << "We  will be glad to have you back" << endl;
    return 0;
    break;
    default:
    cout << "Invalid choice, try again."<<endl;
    return 0;
    cin >> choice;
    }
    
    }
    
     return 0;
}