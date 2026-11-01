#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct player {
    string name,school;
};

int main() {

    int n;
    cout << "Amount People: ";
    cin >> n;

    vector <player> AllPlayers(n);

    for (int i = 0; i < n; i++) {
        cout << "Player " << i+1 <<": \n";
        cout << "Name: "; cin >> AllPlayers[i].name;
        cout << "School: "; cin >> AllPlayers[i].school;  
    }

    //input

    return 0;
}