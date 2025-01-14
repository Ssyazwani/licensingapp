#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm> 

using namespace std;

struct LicenseInfo {
    string licenseNumber;
    string dateOfApplication;
    string activities;
    string uen;
    string type;
    string paymentDate;
    string oic;
};

int main() {
    
    string filename = "license_numbers.csv";

  
    ifstream file(filename);
    
  
    if (!file.is_open()) {
        cerr << "Could not open the file!" << endl;
        return 1;
    }

    string line;
    vector<LicenseInfo> licenses;
    

    getline(file, line);

   
    while (getline(file, line)) {
        stringstream ss(line);
        string cell;
        LicenseInfo license;

      
        getline(ss, license.licenseNumber, ',');
        getline(ss, license.dateOfApplication, ',');
        getline(ss, license.activities, ',');
        getline(ss, license.uen, ',');
        getline(ss, license.type, ',');
        getline(ss, license.paymentDate, ',');
        getline(ss, license.oic, ',');

     
        licenses.push_back(license);
    }

 
    string userInput;
    cout << "Enter the type to filter by  'SPI' or 'MPI': ";
    cin >> userInput;

   
    sort(licenses.begin(), licenses.end(), [](const LicenseInfo& a, const LicenseInfo& b) {
        return a.type < b.type; 
    });

  
    vector<LicenseInfo> filteredLicenses;
    for (const auto& license : licenses) {
        if (license.type == userInput) {
            filteredLicenses.push_back(license);
        }
    }

   
    if (filteredLicenses.empty()) {
        cout << "No records found for type '" << userInput << "'." << endl;
    } else {
        for (const auto& license : filteredLicenses) {
            cout << "License Number: " << license.licenseNumber << endl;
            cout << "Date of Application: " << license.dateOfApplication << endl;
            cout << "Activities: " << license.activities << endl;
            cout << "UEN: " << license.uen << endl;
            cout << "Type: " << license.type << endl;
            cout << "Payment Date: " << license.paymentDate << endl;
            cout << "OIC: " << license.oic << endl;
            cout << "------------------------" << endl;
        }
    }

   
    file.close();
    return 0;
}