#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream file1("o1.txt");
    ifstream file2("o2.txt");
    
    if (!file1.is_open() || !file2.is_open()) {
        cerr << "Error: Could not open files." << endl;
        return 1;
    }

    string line1, line2;
    int lineNo = 1;

    while (getline(file1, line1) && getline(file2, line2)) {
        if (line1 == line2) {
            cout << "Line " << lineNo << ": Same" << endl;
        } else {
            cout << "Line " << lineNo << ": Different" << endl;
        }
        lineNo++;
    }

    // Check if files have unequal lines
    while (getline(file1, line1)) {
        cout << "Line " << lineNo++ << ": Extra in file1" << endl;
    }
    while (getline(file2, line2)) {
        cout << "Line " << lineNo++ << ": Extra in file2" << endl;
    }

    cout << "Comparison completed. Output written to output.txt" << endl;

    file1.close();
    file2.close();
    // cout.close();
    return 0;
}
