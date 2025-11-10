#include <bits/stdc++.h>
using namespace std;
int main()
{
    string password;
    string name_surname;

    cout << "Enter your name and surname: " << "\n";
    getline(cin, name_surname);
    cout << "Enter your password: " << "\n";


    bool flag = false;
    while(flag == false)
    {
        cin >> password;
        if(password.size() > 8)
        {
            flag = true;
            cout << "Password accepted" << "\n";
        }
        else
        {
            cout << "Password is too short enter the minimum 9 characters" << "\n";
            cout << "Please try again" << "\n";
        }
    }


    vector<pair<string, string>> users;
    users.push_back({name_surname, password});


    for(int i = 0; i < users.size(); i++)
    {
        cout << users[i].first << " " << users[i].second << "\n";
    }

}
