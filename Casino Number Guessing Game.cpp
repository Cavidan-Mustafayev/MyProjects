#include <bits/stdc++.h>
using namespace std;

int main()
{
    srand(time(0));


    cout << "Greetings. The rules of the game are as follows: You will enter a K value. If you correctly guess the number from a 1/k probability, you will win K dollars. Otherwise, you will lose 10 dollars." << "\n";
    int balance = 100;
    while(balance >= 10)
    {
        cout << "Your balance is" << balance << "$." << "\n";
        cout << "Enter a K probability: " << "\n";
        int k;
        cin >> k;
        cout << "Enter a N value: " << "\n";
        int n;
        cin >> n;
        int randnumber = rand() % k + 1;
        if(randnumber == n)
        {
            balance += k;
            cout << "You guessed the number correctly. You win " << k << "$." << "\n";
        }
        else
        {
            balance -= 10;
            cout << "You guessed the number incorrectly. You lose 10$." << "\n";
        }
    }
    cout << "You have lost all your money." << "\n";

}