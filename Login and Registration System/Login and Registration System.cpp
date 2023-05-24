#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

void login();
void registration();
void forgot();

int main(){
	
	int c;
	cout<<"\t\t\t__________________________________________\n\n\n";
	cout<<"\t\t\t          Welcome to the Login Page        \n\n\n";
	cout<<"\t\t\t_____________     MENU     _______________ \n\n\n";
	cout<<"                                                   \n\n\n";
		
	cout<<"\t| Press 1 to Login                      |"<<endl;
	cout<<"\t| Press 2 to Registar                   |"<<endl;
	cout<<"\t| Press 3 if you forgot your PASSWORD   |"<<endl;
	cout<<"\t| Press 4 to EXIT                       |"<<endl;
	cout<<"\n\t Please enter your choice: ";
	cin>>c;
	
	
	switch(c){
		
		case 1:
			login();
			break;
		
		
		case 2:
			registration();
			break;
			
		case 3:
			forgot();
			break;
			
		case 4:
			cout<<"\t\t\t Thankyou!  \n\n";
			break;
			
		default:
			system("cls");
			cout<<"Please select from the options above \n"<<endl;
			main();
		
	}
	
	




	
	
	
	
	
	
	return 0;
}

	void login()
	{
		
		int count;
		string userID, password, id, pass;
		system("cls");
		cout<<"\t\t\t Please enter the USERNAME and PASSWORD: "<<endl;
		cout<<"\t\t\t USERNAME: ";
		cin>>userID;
		cout<<"\t\t\t PASSWORD: ";
		cin>>password;
		
		
		ifstream input("records.txt");
		
		while(input>>id>>pass){
			if(id==userID && pass==password){
				count = 1;
				system("cls");
			}
		}
		
		input.close();
		
		if(count==1){
			cout<<userID<<"\n Your LOGIN is successful \n Thanks for logging in ! \n";	
			main();		
		} else {
			cout<<"LOGIN Error! \n Please check your USERNAME and PASSWORD \n";
			main();
		}
		
		
	}
	
	
void registration(){
	string rUserID, rPassword, rID, rPass;
	system("cls");
	cout<<"\t\t\t Enter the username: ";
	cin>>rUserID;
	cout<<"\t\t\t Enter the password: ";
	cin>>rPassword;
	
	
	ofstream f1("records.txt",ios::app);
	
	f1<<rUserID<<' '<<rPassword<<endl;
	system("cls");
	
	cout<<"\n\t\t\t Registration is Successful ! \n";
	main();	
}

void forgot(){
	int option;
	system("cls");
	cout<<"\t\t\t You forgot the password? No worries \n";
	cout<<"Press 1 to search your ID by USERNAME "<<endl;
	cout<<"Press 2 to go back to main menu "<<endl;
	cout<<"\t\t\t Enter your choice ";
	cin>>option;
	
	switch(option){
		case 1:
			{
			
				int count = 0;
				string sUserID, sID, sPass;
				cout<<"\n\t\t\tEnter the USERNAME which you remember: ";
				cin>>sUserID;
				
				ifstream f2("records.txt");
				while(f2>>sID>>sPass){
					if(sID==sUserID){
						count = 1;
					}
				}
				f2.close();
				if(count==1){
					cout<<"\n\n Your account is found! \n";
					cout<<"\n\n Your Password is: "<<sPass;
					main();
				} else {
					cout<<"\n\t Sorry! Your account is not found! \n";
					main();
				}
				
				 break;
			}
			
			case 2: 
			{
				main();
			}
			
			default:
				cout<<"\t\t\t Wrong choice ! Please try again "<<endl; 
				forgot();
			
			
	}
	
	
}



