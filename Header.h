#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;

void project_Tutorial() {
    cout << "***___ Guidelines to use Project ___***\n" << endl;
    string dayName = "Monday or Mon";
    string instructorName = "Irfan Younis or IY";
    string subject = "CP";
    int width = 40;

    // Top row
    cout << setw(width) << setfill('*') << "" << endl;
    
    // Text rows
    cout << "* Enter day as: " << setw(width - 17) << setfill(' ') << left << dayName << "*" << endl;
    cout << "* Enter name as: " << setw(width - 18) << setfill(' ') << left << instructorName << "*" << endl;
    cout << "* Enter subject name as: " << setw(width - 26) << setfill(' ') << left << subject << "*" << endl;
    
    // Bottom row
    cout << setw(width) << setfill('*') << "" << endl;
}
void project_info(){
	
    string universityName = "SUKKUR IBA UNIVERSITY";
   cout<<setw(70)<<setfill(' ')<<universityName<<endl;
   cout<<"\n";
   cout<<setw(67)<<setfill('#')<<" Welcome To CSE "<<setw(53)<<setfill('#')<<"\n";

    cout << " Enter your dearest Name: ";
    string name;
    getline(cin, name);
     cout<<setw(65)<<setfill('=')<<" Welcome To My Project "<<"Mr."<<name<<" " <<setw(45)<<setfill('=')<<"="<<endl;
    cout << setw(80) << setfill('*') << "Project name: CSE-II Classes Schedule "<<setw(41)<<setfill('*')<< "\n";
    cout<<setw(39)<<setfill('-')<<"-" <<" Prepaerd by: MUHAMMAD FAIZAN ANJUM SHAH "<<setw(40)<<setfill('-')<<"-"<<endl;
    cout<<setw(37)<<setfill('-')<<"-"<<" Assigned by: SIR MUHAMMAD IRFAN YOUNIS MUGHAL "<<setw(35)<<setfill('-')<<"-"<<endl;

}

