
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int SIZE = 5;
    int winningDigits[SIZE];
    int player[SIZE];
    int matches = 0;

    srand(time(0));

    for (int i = 0; i < SIZE; i = i + 1) {
        winningDigits[i] = rand() % 10;
    }

    for (int i = 0; i < SIZE; i = i + 1) {
        cout << "Enter digit " << i + 1 << ": ";
        cin >> player[i];
    }

    for (int i = 0; i < SIZE; i = i + 1) {
        if (winningDigits[i] == player[i]) {
        matches = matches + 1;
    }
    }

    cout << "Winning digits: ";
        for (int i = 0; i < SIZE; i = i + 1) {
        cout << winningDigits[i] << " ";
    }

    cout << endl << "Player digits: ";
        for (int i = 0; i < SIZE; i = i + 1) {
        cout << player[i] << " ";
    }

    cout << endl << "Matches: " << matches << endl;

    return 0;
}
