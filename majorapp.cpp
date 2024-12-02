#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   cout << "MPI applications\n";

   cout << "MPI applications\n";
   cout << "For IPA \n";
   cout << "For licensing\n";
   cout << "Ensure for these applications that are in IPA, the following documents are in:\n";
   cout << "Billing Details\n";
   cout << "LU/LR\n";
   cout << "Safeguarding Form\n";
   cout << "BG or Safeguarding Form\n";
   

    const int colWidth = 25; 

    
    cout << left << setw(colWidth) << "Application" 
         << setw(colWidth) << "Billing Details" 
         << setw(colWidth) << "LU/LR" 
         << setw(colWidth) << "Safeguarding Form" 
         << setw(colWidth) << "BG Security Deposit" << endl;
    
   
    cout << setw(colWidth * 5) << setfill('-') << "" << endl;
    cout << setfill(' '); 

    
    cout << left << setw(colWidth) << "IPA Application 1" 
         << setw(colWidth) << "Yes" 
         << setw(colWidth) << "Yes" 
         << setw(colWidth) << "Yes" 
         << setw(colWidth) << "No" << endl;
    cout << left << setw(colWidth) << "IPA Application 2" 
         << setw(colWidth) << "Yes" 
         << setw(colWidth) << "Yes" 
         << setw(colWidth) << "No" 
         << setw(colWidth) << "Yes" << endl;
    cout << left << setw(colWidth) << "IPA Application 3" 
         << setw(colWidth) << "No" 
         << setw(colWidth) << "Yes" 
         << setw(colWidth) << "Yes" 
         << setw(colWidth) << "No" << endl;
    cout << left << setw(colWidth) << "IPA Application 4" 
         << setw(colWidth) << "No" 
         << setw(colWidth) << "No" 
         << setw(colWidth) << "Yes" 
         << setw(colWidth) << "Yes" << endl;




   
  return 0;
}