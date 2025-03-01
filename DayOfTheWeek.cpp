#include <iostream>
#include <string>

using namespace std;

int main () {
    string day; //initialize string variable for day input
   
    cout << "Enter a day of the week: ";
    cin >> day;

    for (auto& day_alt : day) {     //function to convert day string to all lowercase to prevent input errors
        day_alt = tolower(day_alt);
    }
    
    int dayValue;                           //variable that will specify day as integer value for switch statement
    string monday       = "monday";         //string variables that will be compared to day string
    string tuesday      = "tuesday";
    string wednesday    = "wednesday";
    string thursday     = "thursday";
    string friday       = "friday";
    string saturday     = "saturday";
    string sunday       = "sunday";

    if (day == monday || day == tuesday || day == thursday) { //compares input day string to each day name 
        dayValue = 1;                                         //to determine what day value to assign
    } else if (day == wednesday) {
        dayValue = 2;
    } else if (day == friday) {
        dayValue = 3;
    } else if (day == saturday || day == sunday) {
        dayValue = 4;
    } else {
        dayValue = 0;
    }

    switch(dayValue) {      //compares day value assigned and outputs appropriate response
        case(1):
            cout << "It's a weekday!\n";
            break;
        
        case(2):
            cout << "Hump day!\n";
            break;
        
        case(3):
            cout << "TGIF!\n";
            break;
        
        case(4):
            cout << "It's the weekend!\n";
            break;
        default:
            cout << "Invalid entry. \n";
            break;
    }
    

    return 0;
}