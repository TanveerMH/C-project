#include "libraries.h"
using namespace std;

void GetManagerDetails(); ///login page for the manager which requires username and password
void CheckPasswordLength(string,string); ///checks whether the password has length of 6
void CheckUsernameAndPassword(string,string); ///checks whether the username and password matches the actual ones
extern void dispmain1();



void GetManagerDetails()
{
    string username,password;

    system("cls");

    cout<<"\t\t\t|**************************************************************************|"       <<endl;
	cout<<"\t\t\t|                    WELCOME TO THE MANAGER SECTION                        |"       <<endl;
    cout<<"\t\t\t|                                 &                                        |"       <<endl;
	cout<<"\t\t\t|                PLEASE ENTER VALID USER NAME & PASSWORD                   |"       <<endl;
	cout<<"\t\t\t****************************************************************************"<<endl <<endl;

	cout << "\tUSE THE EXACT USER NAME & PASS. "<<endl;;
	cout << "\t(IT HAS CASE SENSITIVITY ISSUE)"<<endl;
	cout << "\t--------------------------------"<<endl;
    cout << "\tUsername: ";
    cin >> username;    ///takes username as input
    cout << "\tPassword: ";
    cin >> password;    ///takes password as input

    CheckPasswordLength(username,password);     ///calls the function to check password's length
}
void CheckPasswordLength(string user,string pass)
{
    if(pass.size() != 6)
    {
    	cout << endl;
        cout << "\t Invalid Password" << endl;
        cout << "\t Insert another password with length of 6 digits" << endl;
        Sleep(2000);
        GetManagerDetails();    ///if the conditions weren't met, calls the main manager function
    }
    else CheckUsernameAndPassword(user,pass);      ///otherwise check username and password validity
}
void CheckUsernameAndPassword(string user,string pass)
{
    string managerName[4] = {"TANVEER","RAISUL","ORICK","IBRAHIM"};
    string managerPass[4] = {"123456","654321","456789","987654"};

    if(user == *(managerName+0) && pass == *(managerPass+0))    ///compares username and password
    {
        ///system("cls");
        cout << "\t\t\t\tWelcome TANVEER" << endl;
        Sleep(3000);
        dispmain1();
    }
    else if(user == *(managerName+1) && pass == *(managerPass+1))
    {
        ///system("cls");
        cout << "\t\t\t\tWelcome RAISUL" << endl;
        Sleep(3000);
        dispmain1();
    }
    else if(user == *(managerName+2) && pass == *(managerPass+2))
    {
        ///system("cls");
        cout << "\t\t\t\tWelcome ORICK" << endl;
        Sleep(3000);
        dispmain1();
    }
    else if(user == *(managerName+3) && pass == *(managerPass+3))
    {
        ///system("cls");
        cout << "\t\t\t\tWelcome IBRAHIM" << endl;
        Sleep(3000);
        dispmain1();
    }
    else {
        cout << endl << "\t Invalid Username Or Password" << endl;
        cout << endl << "\t Please Insert Again. Thank you!" << endl;
        Sleep(3000);
        GetManagerDetails();
    }
}








