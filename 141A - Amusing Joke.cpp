#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string guest, host, pile;
    cin >> guest >> host >> pile;

    vector<int> count(26, 0); // For letters A-Z

    // Count letters from guest and host
    for (char c : guest) {
        count[c - 'A']++;
    }
    for (char c : host) {
        count[c - 'A']++;
    }

    // Subtract letters from pile
    for (char c : pile) {
        count[c - 'A']--;
    }

    // Check if all counts are zero
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}

