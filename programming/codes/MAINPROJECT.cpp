/* 1.Hasan Tanveer Mahmood - 1725413
   2.Muhammad Ibrahim - 1627123
   3. Md Raisul islam - 1725501
   4. K M Tansir Hossain -1638331
   */
#include "libraries.h" //here open the library header file
#include "manager.h"   //here open the manager header file
#include "function.h"   //here open the function header file
#define max 10
using namespace std;

void opening() ; // function prototype
void dispmain1(); // function prototype
void dispmain2();  // function prototype

int main()
{

opening() ;  // here main function call the openning function
return 0;
}
void opening()   //this is the openning function
{

    string choice;
    system("cls");


	cout<<"\t\t\t|****************************************************************************|\n";
    cout<<"\t\t\t|*********************    WELLCOME TO FRIEND'S PHARMACY   *******************|\n";
    cout<<"\t\t\t|****************************************************************************|\n";

    cout<<" "<<endl<<endl;
    cout<<"\t\t\t|****************************************************************************|\n";
    cout<<"\t\t\t|*****************         SELECT WHAT YOU WANT       ***********************|\n";
    cout<<"\t\t\t|****************+***********************************************************|\n";
	cout<<"\t\t\t|  1. MANAGER    | -Can Order,Delete,Modify,Print and see the Daily summery  |\n";
    cout<<"\t\t\t|----------------|-----------------------------------------------------------|\n";
    cout<<"\t\t\t|  2. CUSTOMER   | -Can Order,Delete,Print Only                              |\n";
    cout<<"\t\t\t|----------------|-----------------------------------------------------------|\n";
    cout<<"\t\t\t|  3. EXIT       | -Exit from the function                                   |\n";
	cout<<"\t\t\t******************************************************************************\n";
    cout<<" "<<endl;

    cout<<"\t SELECT THE OPTION : ";
	cin >> choice;
	//Checking the input whether is it valid or not.
	if(choice == "1")
	{
	   GetManagerDetails();  // if user choice is manager then function call the manager detail function
	   dispmain1();          // after checking the manager details the function call for manager view section
	}

	 if(choice == "2")
	 {
	   dispmain2(); // if user choose customer view then here open the customer section
	 }

	 if(choice == "3")
	 {
	   exit();
	 }

	 else if (choice != "1" && choice != "2")
     {  // if user put invalid input then show this message bellow
		cout << "\n\tSORRY YOUR INPUT IS OUT OF SELECTION.PLEASE RE-ENTER INPUT." << endl;
		Sleep(1500);
		opening() ;
    }
}
