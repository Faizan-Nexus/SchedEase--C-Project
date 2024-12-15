#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
#include "Header.h"
using namespace std;

struct Class {
    string day;
    string subject;
    string instructor;
    string time;
    string roomNo;
    string blockNo;
};

// Display details of a class
void displayClassDetails(const Class& classInfo) {
    cout << "* Subject: " << classInfo.subject << endl;
    cout << "* Instructor: " << classInfo.instructor << endl;
    cout << "* Time: " << classInfo.time << endl;
    cout << "* Room No: " << classInfo.roomNo << endl;
    cout << "* Block No: " << classInfo.blockNo << endl;
    cout << "* Day: " << classInfo.day << endl;
}

// Helper function to validate group input
char getGroupInput() {
    char group;
    while (true) {
        cout << "Enter the group (e.g., X or Y): ";
        cin >> group;
        group = toupper(group); // Make case-insensitive
        if (group == 'X' || group == 'Y') {
            return group;
        }
        cout << "Invalid group! Please enter X or Y." << endl;
    }
}

// Display schedule for a specific day
void displayScheduleForDay(const string& dayInput) {
    string day = dayInput;
    for (auto& c : day) c = toupper(c); // Convert input to uppercase for consistency

    if (day == "MONDAY" || day == "MON") {
        cout << "Here is the class schedule for Monday:" << endl;
        cout << "**************************************************" << endl;
        cout << "Your first Class details are as follows:" << endl;
        displayClassDetails({"Monday", "Electronic Devices and Circuits", "Umair Ayaz Kamangar", "12:30 To 01:30", "307", "03"});
        cout << "\nNamaz break: 01:30 To 02:00\n" << endl;

        char group = getGroupInput();
        if (group == 'X') {
            cout << "Your Second Class details are as follows:" << endl;
            displayClassDetails({"Monday", "Computer Programming Lab", "Muhammad Irfan Younis", "02:00 To 05:00", "03", "01"});
        } else if (group == 'Y') {
            cout << "Your Second Class details are as follows:" << endl;
            displayClassDetails({"Monday", "Circuit Analysis Lab", "Engr. Irfan Ali Babar", "02:00 To 05:00", "306", "03"});
        }

    } else if (day == "TUESDAY" || day == "TUE") {
        cout << "Here is the class schedule for Tuesday:" << endl;
        cout << "**************************************************" << endl;
        displayClassDetails({"Tuesday", "Electronic Devices and Circuits", "Umair Ayaz Kamangar", "11:30 To 01:30", "508", "03"});
        cout << "\nNamaz break: 01:30 To 02:00\n" << endl;
        displayClassDetails({"Tuesday", "Islamic Studies", "Peeral Khan", "02:00 To 04:00", "406", "03"});
        displayClassDetails({"Tuesday", "Circuit Analysis", "Engr. Irfan Ali Babar", "04:10 To 06:10", "407", "03"});

    } else if (day == "WEDNESDAY" || day == "WED") {
        cout << "Here is the class schedule for Wednesday:" << endl;
        cout << "**************************************************" << endl;
        displayClassDetails({"Wednesday", "Linear Algebra", "Irfan Younis", "09:00 To 11:00", "406", "03"});
        cout << "\nRefreshment break: 11:00 To 11:30\n" << endl;
        displayClassDetails({"Wednesday", "Circuit Analysis", "Engr. Irfan Ali Babar", "11:30 To 12:30", "507", "03"});
        displayClassDetails({"Wednesday", "Computer Programming", "Irfan Younis", "12:30 To 01:30", "03", "01"});
        cout << "\nNamaz break: 01:30 To 02:00\n" << endl;
        displayClassDetails({"Wednesday", "Computer Programming", "Irfan Younis", "02:00 To 04:00", "03", "01"});

    } else if (day == "THURSDAY" || day == "THU") {
        cout << "Here is the class schedule for Thursday:" << endl;
        cout << "**************************************************" << endl;
        displayClassDetails({"Thursday", "Communication Skills", "Asifa Abbas", "11:30 To 01:30", "211", "02"});
        cout << "\nNamaz break: 01:30 To 02:00\n" << endl;

        char group = getGroupInput();
        if (group == 'X') {
            displayClassDetails({"Thursday", "Electronic Devices and Circuits", "Umair Ayaz Kamangar", "02:00 To 05:00", "506", "03"});
        } else if (group == 'Y') {
            displayClassDetails({"Thursday", "Computer Programming Lab", "Irfan Younis", "02:00 To 05:00", "03", "01"});
        }

    } else if (day == "FRIDAY" || day == "FRI") {
        cout << "Here is the class schedule for Friday:" << endl;
        cout << "**************************************************" << endl;
        displayClassDetails({"Friday", "Linear Algebra", "Irfan Younis", "09:00 To 11:00", "308", "03"});
        cout << "\nRefreshment break: 11:00 To 11:30\n" << endl;
        displayClassDetails({"Friday", "Communication Skills", "Asifa Abbas", "11:30 To 01:30", "507", "03"});
        cout << "\nNamaz break: 01:30 To 02:00\n" << endl;

        char group = getGroupInput();
        if (group == 'X') {
            displayClassDetails({"Friday", "Electronic Devices and Circuits Lab", "Umair Ayaz Kamangar", "02:00 To 05:00", "506", "03"});
        } else if (group == 'Y') {
            displayClassDetails({"Friday", "Circuit Analysis Lab", "Engr. Irfan Ali Babar", "02:00 To 05:00", "306", "03"});
        }

    } else if (day == "SATURDAY" || day == "SAT") {
        cout << "Here is the class schedule for Saturday:" << endl;
        cout << "**************************************************" << endl;
        displayClassDetails({"Saturday", "Coding Workshop", "Irfan Younis", "11:30 To 01:30", "207", "02"});
        cout << "\nNamaz break: 01:30 To 02:00\n" << endl;
        displayClassDetails({"Saturday", "Coding Workshop", "Muhammad Irfan Younis Mughal", "02:00 To 03:00", "207", "02"});

    } else {
        cout << "Invalid day! Please enter a valid day of the week." << endl;
    }
}

// Main Function
int main() {
    string day;
    cout << "Enter the day to see the schedule (e.g., Monday, Mon): ";
    cin >> day;
    displayScheduleForDay(day);
    return 0;
}
