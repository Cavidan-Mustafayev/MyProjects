#include <bits/stdc++.h>
using namespace std;

int main() 
{
    srand(time(0));

    cout << "Rock == R || r\n";
    cout << "Paper == P || p\n";
    cout << "Scissor == S || s\n";

    string choices[] = {"Paper", "Rock", "Scissor"};

    while (true) 
    {
        int randnumber = rand() % 3;

        string s;
        cin >> s;

        transform(s.begin(), s.end(), s.begin(), ::toupper);

        int a;
        if(s == "P") a = 0;
        else if(s == "R") a = 1;
        else if(s == "S") a = 2;
        else 
        {
            cout << "Invalid input! Please enter R, P, or S.\n";
            continue;
        }

        cout << "The Bot chose: " << choices[randnumber] << "\n";

        if(a == randnumber)
            cout << "It's a draw!\n";
        else if((a == 0 && randnumber == 2) || (a == 1 && randnumber == 0) || (a == 2 && randnumber == 1))
            cout << "You win!\n";
        else
            cout << "You lost!\n";
    }
}
