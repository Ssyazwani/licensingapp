#include <iostream>
#include <iomanip> // For setw()
#include <string>  // For using strings

using namespace std;

int main() {
    // Set column width for each column
    const int colWidth = 25;

    // Array to store the "Yes" or "No" values for each application and document
    string billingDetails[4], luLr[4], safeguardingForm[4], bgDeposit[4];

    // Input the required document statuses from the user
    for (int i = 0; i < 4; ++i) {
        cout << "For IPA Application " << i+1 << ", enter the following information (Yes/No):\n";
        
        cout << "Billing Details: ";
        cin >> billingDetails[i];
        
        cout << "LU/LR: ";
        cin >> luLr[i];
        
        cout << "Safeguarding Form: ";
        cin >> safeguardingForm[i];
        
        cout << "BG Security Deposit: ";
        cin >> bgDeposit[i];

        cout << endl;
    }

    // Print the header of the table
    cout << left << setw(colWidth) << "Application"
         << setw(colWidth) << "Billing Details"
         << setw(colWidth) << "LU/LR"
         << setw(colWidth) << "Safeguarding Form"
         << setw(colWidth) << "BG Security Deposit" << endl;

    // Print separator line
    cout << setw(colWidth * 5) << setfill('-') << "" << endl;
    cout << setfill(' '); // Reset fill character to space

    // Print rows for each application and the associated required documents
    for (int i = 0; i < 4; ++i) {
        cout << left << setw(colWidth) << "IPA Application " + to_string(i+1)
             << setw(colWidth) << billingDetails[i]
             << setw(colWidth) << luLr[i]
             << setw(colWidth) << safeguardingForm[i]
             << setw(colWidth) << bgDeposit[i] << endl;
    }

    return 0;
}
