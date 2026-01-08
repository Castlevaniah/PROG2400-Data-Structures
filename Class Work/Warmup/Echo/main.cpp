#include <iostream>
#include <string>

using namespace std;

int main() {
    string line;

    cout << "Enter words until you type end: ";
    while (getline(cin, line) && line != "end") {
        cout << "You typed: " << line << '\n';
        cout << "Anything else? (type \"end\" to stop): ";
    }

    cout << "Great job! Later days.\n";

    if (cin) {
        cout << "Okay! Press Enter to close...";
        cin.get();
    }

    return 0;
}
