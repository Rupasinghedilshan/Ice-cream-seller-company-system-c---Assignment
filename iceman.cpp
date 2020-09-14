//======================================================================ICE MAN==================================================================================
#include <iostream>
#include <fstream>
#include<string>
#include <cstdlib>
#include<Windows.h>

using namespace std;

//*******************function declaration***********************
//==============================================================================

void mainmenu();
void Payments_handling();

//Main----------
void Manage_ICE_Flavors();
void Manage_sales();

//Manage flavors-------------
void Add_ICE_flavor();
void view_flavor();
void Update_flavor();
void Delete_flavor();

//Manage sales-------------
void view_sales();
void Update_sales();

//company details----------
void Company_details();
void contact_us();
void about_us();



//==============================================================================
//Start-----------------------------------------------------------------------

//main(login screen)===========================================================
int main ()
{
	string username="";
	string password="";
	int attemptCounts = 0;
	
		cout<<endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
		cout<<"\t\t\t\t    ---------------W E L C O M E!----------------\n\n";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
		cout<<"\t\t\t\t    =============================================\n";
		cout<<"\t\t\t\t    +++++++++++++++++++++++++++++++++++++++++++++"<<endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		cout<<"\t\t\t\t    >>>>>>>>>          ICE MAN          <<<<<<<<<\n";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
		cout<<"\t\t\t\t    +++++++++++++++++++++++++++++++++++++++++++++"<<endl;
		cout<<"\t\t\t\t    =============================================\n\n";
	
 			
	cout<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
	cout<<" Enter your Username and Password to Login \n\n";

while ( attemptCounts < 3 )
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		cout << "Enter your username: "<< endl;
		cin >> username;
		cout<<endl;
		cout << "Enter your password: "<< endl;
		cin >> password;
		
		if ((username == "sameera") && (password == "123"))
		{
    		cout << "Access granted!" <<"\n"<< endl;
    		system("cls");
    		mainmenu();
		}
		else
			{
				//system("cls");
				attemptCounts++;
				//system("cls");			
				cout<<endl;
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
				cout << "Incorrect username/password combination. Please try again." << "\n" <<endl;
			}
	}
system("pause");
return 0;
}


//==============================================================================
//main menu---------------------------------------------------------------------

void mainmenu()
{
	char choice;
	string x;
	
	do{
	 cout<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);		
	cout<<"\t\t\t\t\t\t>>>>>>>>>ICE MAN<<<<<<<<<<\n\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
	cout<<"\t\t\t\t\t\t--------MAIN MENU---------\n"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
	cout<<"\t\t\t\t\t\t==========================\n\n"<<endl;
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout<<"\t1. Manage ICE Cream flavors\n"<<endl;
	cout<<"\t2. Payments Handling(Sales Adding)\n"<<endl;
	cout<<"\t3. Manage Sales[View and Update]\n"<<endl;
	cout<<"\t4. Company Details\n	"<<endl;
	cout<<"\t5. Logout	\n"<<endl;
	cout<<"\t6. Exit!\n"<<endl;
	
	cout<<"Enter your choice(1-6) \n"<<endl;
	cin>>choice;
	
	switch(choice){
           case '1':{
           	   system("cls");
               Manage_ICE_Flavors();
               break;
           }
               
           case '2':{
           	   system("cls");
               Payments_handling();
               break;
           }
                  
           case '3':{
           	   system("cls");
               Manage_sales();
               break;
           }
               
           case '4':{
           	   system("cls");
               Company_details();
               break;	

           }
               
           case '5':{
           		system("cls");
				cout<<"Do you really want to logout?"<<endl;
				cout<<"y :: Yes"<<endl;
				cout<<"n :: No"<<endl;
				cout<<"Enter the Letter : \n";
				cin>>x;
			
				if (x=="y" || x=="Y"){
					system("cls");
					main();
				}
						
				else if(x=="n" || x=="N"){
					system("cls");
					mainmenu();
					}
					break;
           }
          		
           case '6':{
           	    cout<<"Do you want to Exit?"<<endl;
				cout<<"y :: Yes"<<endl;
				cout<<"n :: No"<<endl;
				cout<<"Enter the Letter : \n";
				cin>>x;
			
				if (x=="y" || x=="Y")
					exit(0);
						
				else if(x=="n" || x=="N"){
					system("cls");
					mainmenu();
					}
					break;
           }
          		
				
          		
           default:{
           	   system("cls");
               cout<<"Invalid Option";
               mainmenu();
           }
          	   
               }
  	
           }while(choice!='6');
}

//==============================================================================
//Manage ice flavors----------------------------------------------------------
void Manage_ICE_Flavors()
{	
	char ch;
	string x;
	
	do{
		
	cout<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);		
	cout<<"\t\t\t\t\t\t>>>>>>>>>ICE MAN<<<<<<<<<<\n\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout<<"\t\t\t\t\t\t-Manage ICE Cream Flavors-\n"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
	cout<<"\t\t\t\t\t\t==========================\n\n"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	
	cout<<"\t1. Add ICE Cream flavor	\n"<<endl;
	cout<<"\t2. View available flavors	\n"<<endl;
	cout<<"\t3. Update flavor details\n"<<endl;
	cout<<"\t4. Delete flavor	\n"<<endl;
	cout<<"\t5. Logout	\n"<<endl;
	cout<<"\t6. Back	\n"<<endl;
	cout<<"\t7. Exit!\n"<<endl;
	
	cout<<"Enter your choice(1-7) \n"<<endl;
	cin>>ch;
	
	switch(ch){
          case '1':{
          	   system("cls");
               Add_ICE_flavor();
               break;
          }
               
          case '2':{
			   system("cls");
               view_flavor();
               break;
          }
          case '3':{
          	   system("cls");
               Update_flavor();
               break;
          }
               
          case '4':{
          	   system("cls");
               Delete_flavor();
               break;
          }
               
          case '5':{
          		system("cls");
				cout<<"Do you really want to logout?"<<endl;
				cout<<"y :: Yes"<<endl;
				cout<<"n :: No"<<endl;
				cout<<"Enter the Letter : \n";
				cin>>x;
			
				if (x=="y" || x=="Y"){
					system("CLS");
					main();
				}
						
				else if(x=="n" || x=="N"){
					system("cls");
					Manage_ICE_Flavors();
					}
					break;
          }
          		
           case '6':{
           		system("cls");
          		mainmenu();
          		break;
           }
          		
		   case '7':{
		   		system("cls");
				cout<<"Do you want to Exit?"<<endl;
				cout<<"y :: Yes"<<endl;
				cout<<"n :: No"<<endl;
				cout<<"Enter the Letter : \n";
				cin>>x;
			
				if (x=="y" || x=="Y")
					exit(0); 
						
				else if(x=="n" || x=="N"){
					system("cls");
					Manage_ICE_Flavors();
					}
					break;
		   }
          	    
           default:{
           		system("cls");
               cout<<"Invalid Option";
               mainmenu();
           }
        }
  	
           }while(ch!='7');
}


//==============================================================================
//Add ICE Cream flavors---------------------------------------------------------

void Add_ICE_flavor(){
	
	int no;
	string flavor_name;
	string price;
	string quantity;
	char addAgain;
	string x;
	
	cout<<endl;
	cout<<"\t\t\t\t  >>>>>>>>>>>>>>>>>>>>ICE MAN<<<<<<<<<<<<<<<<<<<<<\n\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
	cout<<"\t\t\t\t  -------------Add ICE Cream flavors--------------\n\n"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	
	cout<<"Add Ice cream flavor No : \n";
	cin>>no;
	cout<<endl;	
	
	cout<<"Input name of the ICE Cream flavor :\n";
	cin>>flavor_name;
	cout<<endl;
	
	cout<<"Quantity(No of ICE cones) :\n";
	cin>>quantity;
	cout<<endl;
	
	cout<<"Input the price Of 1 Cone :\n";
	cin>>price;
	cout<<endl;
	
	cout<<"\t\tAdded Successfully!!!\n\n";
	
	ofstream iceman("Manage_ICE_Flavors.txt",ios::app);
	if(iceman.is_open())
	{
	
		iceman<<no <<"       		"<<flavor_name <<"	     		"<<quantity <<"	        		"<<price <<"	    		" <<'\n';
		
		iceman.close();
	}
	
	cout<<"\t***************************************\n\n";
	cout<<"\t\tPress 1 for more option\n";
	cin>>addAgain;

	switch(addAgain){
	
	       case '1':{
	       		cout<<"do you want to continue, adding flavors or go to back menu?\n"<<endl;
				cout<<"Input the option letter!"<<endl;
				cout<<"a :: Again add a flavor"<<endl;
				cout<<"b :: back menu\n"<<endl;
				cout<<"Enter the Letter : \n";
				cin>>x;
	       		system("cls");
	       		
				if (x=="a" || x=="A")
					//system("cls");
					Add_ICE_flavor();
					
				else if(x=="b" || x=="B"){
					system("cls");
					Manage_ICE_Flavors();
					break;
	       }
	       
		}
	}
}


//==============================================================================
//View ICE Cream flavors--------------------------------------------------------


void view_flavor(){
	
	int no;
	string flavor_name;
	string quantity;
	string price;
	char back;
		
		cout<<endl;
		cout<<"\t\t\t\t  >>>>>>>>>>>>>>>>>>>>ICE MAN<<<<<<<<<<<<<<<<<<<<<\n\n";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		cout<<"\t\t\t\t  -------------Add ICE Cream flavors--------------\n\n"<<endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		cout<<endl;
		
		cout<<"***********************************************************************************************************\n";
		cout<<"\t||   Flavor No  ||   Flavor Name   ||   Quantity   ||   Price(RS:)   ||\n\n";
	
	string s;
	 ifstream a ("Manage_ICE_Flavors.txt");
                if (a.is_open())
                {
                    while ( getline (a,s) )
                     {
                           cout << s << '\n';
                     }
                      a.close();		
                    }
	//iceman.close();

	cout<<"\t\n*********************************************************************************************************\n\n";
	cout<<"Press 1 for go to the back screen\n";
	cin>>back;

	switch(back){
	
	       case '1':{
	       		system("cls");
	       		Manage_ICE_Flavors();
	       		break;
	       		
	       }
	       	
	       default:{
	       	system("cls");
                cout<<"Invalid Option";
                exit(0);
		   }
		}
	}


//==============================================================================
//Update ICE Cream flavors--------------------------------------------------------

void Update_flavor()
{
	char q;
	do{
		cout<<endl;
		cout<<"\t\t\t\t  >>>>>>>>>>>>>>>>>>>>ICE MAN<<<<<<<<<<<<<<<<<<<<<\n\n";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		cout<<"\t\t\t\t  -------------Update ICE Cream flavors--------------\n\n"<<endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		
		//system("cls");
	 	fstream iceman;
		fstream temp;
		iceman.open("Manage_ICE_Flavors.txt", ios::in);
		temp.open("temp.txt", ios::out);
		
		string u;
		cout << "Enter Flavor No to Update the flavor details :" << endl;
		cin>>u;
		
		string no;
		string flavor_name;
		string price;
		string quantity;

		while(iceman>>no>>flavor_name>>quantity>>price){

			if(no==u){
				string up_no;
				string up_flavor_name;
				string up_price;
				string up_quantity;

				cout<<"Add Ice cream flavor No : \n";
				cin>>up_no;
				cout<<endl;	
	
				cout<<"Input name of the ICE Cream flavor :\n";
				cin>>up_flavor_name;
				cout<<endl;
	
				cout<<"Quantity(No of ICE Cones) :\n";
				cin>>up_quantity;
				cout<<endl;
	
				cout<<"Input the price of 1 cone :\n";
				cin>>up_price;		
				cout<<endl;

				temp<<up_no<<"       \t"<<up_flavor_name<<"          \t"<<up_quantity<<"           \t"<<up_price<<endl;
			}
			else{

				temp<<no<<"          \t"<<flavor_name<<"             \t"<<quantity<<"              \t"<<price<< endl;

			}
		}
		temp.close();
		iceman.close();
		iceman.open("Manage_ICE_Flavors.txt",ios::out);
		temp.open("temp.txt", ios::in);
		
		while(temp>>no>>flavor_name>>quantity>>price){
			iceman<<no<<"\t"<<flavor_name<<"\t"<<quantity<<"\t"<<price<<endl;
	   }
		temp.close();
		iceman.close();
		remove("temp.txt");
		
		cout<<"===Successfully updated!!===\n"<<endl;
		cout<<"Do You Want To Update Again? (y/n)"<<endl;
		cin>>q;
		
			switch(q)
	{
			case 'y':{
				system("cls");
				Update_flavor();
			}
				
			case 'n':{
				system("cls");
				mainmenu();
			}
			
			default:{
				exit(0);
			}
				
	}
	} while(q);
	
			

	
}
//==============================================================================
//Delete ICE Cream flavors--------------------------------------------------------
void Delete_flavor()
{
	char i;
	int y=1;
	int z;
	string x;
	do{
		
		cout<<endl;
		cout<<"\t\t\t\t  >>>>>>>>>>>>>>>>>>>>ICE MAN<<<<<<<<<<<<<<<<<<<<<\n\n";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		cout<<"\t\t\t\t  ------------Delete ICE Cream flavors------------\n\n"<<endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		
		//system("cls");
		string s;
		fstream iceman;
		fstream temp;
		iceman.open("Manage_ICE_Flavors.txt",ios::in);
		temp.open("temp.txt",ios::out);
		
		cout << "Enter Flavor No To Delete the flavor Details "<<endl;
		cin>>s;
		
		string no;
		string flavor_name;
		string price;
		string quantity;

		while(iceman>>no>>flavor_name>>quantity>>price){

			if(no==s){
				
				y=0;
				continue;
				
				
			}
			else{
				temp<<no<<"\t"<<flavor_name<<"\t"<<quantity<<"\t"<<price<<endl;
				
				
			}
		}
		
		temp.close();
		iceman.close();
		iceman.open("Manage_ICE_Flavors.txt",ios::out);
		temp.open("temp.txt",ios::in);

		while(temp>>no>>flavor_name>>quantity>>price){

			iceman<<no<<"\t"<<flavor_name<<"\t"<<quantity<<"\t"<<price<<endl;
		}
		temp.close();
		iceman.close();
		remove("temp.txt");
		
	
	}
 while(i=='1');
	
		if(y==1){
		cout<<"Not Successfully deleted!"<<endl;
	}
		if(y==0){
		cout<<"Successfully deleted!"<<endl;
	}
	cout<<"1.Back"<<endl;
	cout<<"2.Logout"<<endl;
	cout<<"3.Exit"<<endl;
	cout<<"Enter No :\n";
	cin>>z;
	
	switch(z)
	{
		case 1:
			system("cls");
			Manage_ICE_Flavors();
			break;
		
		case 2:{
			system("cls");
		
			cout<<"Do you really want to logout?"<<endl;
			cout<<"y :: Yes"<<endl;
			cout<<"n :: No"<<endl;
			cout<<"Enter the Letter : \n";
			cin>>x;
			
			if (x=="y" || x=="Y"){
					system("cls");
					main();
				}
						
			else if(x=="n" || x=="N"){
					system("cls");
					mainmenu();
			}
		}
			
			
		case 3:{
			system("cls");
			exit(0);
		}
			
		
		default:{
			system("cls");
			main();
			break;
		}
			
	}
}


//=============================================================================
// Payments(create bill)-------------------------------------------------------------------

void Payments_handling()
{
	
	int no;
	string flavor_name;
	int price;
	int quantity;
	char addAgain;
	string x;
	
		cout<<endl;
		cout<<"\t\t\t\t  >>>>>>>>>>>>>>>>>>>>ICE MAN<<<<<<<<<<<<<<<<<<<<<\n\n";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		cout<<"\t\t\t\t  -------------------Payments---------------------\n\n"<<endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	
		cout<<"Add Ice cream flavor No : \n";
		cin>>no;
		cout<<endl;	
	
		cout<<"Input name of the ICE Cream flavor :\n";
		cin>>flavor_name;
		cout<<endl;
	
		cout<<"Customer buying Quantity :\n";
		cin>>quantity;
		cout<<endl;
	
		cout<<"Input the price of 1 ICE cone :\n";
		cin>>price;
		cout<<endl;

	
	int cp;
	
	int total = quantity*price;
	
		cout<<"\t***************************************\n";
		cout<<"Total bill price(Rs) :    "<<total<<'\n';
		cout<<"\t***************************************\n";
		cout<<endl;
		cout<<"Customer pays :\n";
		cin>>cp;
		cout<<endl;
		
	int balance =cp-total;					
		cout<<"\t======================================\n";
	
	cout<<"Customer balance(Rs) :    "<<balance<<'\n';
	ofstream sale("sales.txt",ios::app);
	if(sale.is_open())
	{

		sale<<no <<"		"<<flavor_name <<"			"<<quantity <<"	 		"<<price <<"			" <<total<<"         "<<cp<<"        "<<balance<<"        "<<'\n';
		sale.close();
	}
	cout<<endl;
	cout<<"\t***************************************\n\n";
	cout<<"\t\tPress 1 for more option\n";
	cin>>addAgain;

	switch(addAgain){
	
	       case '1':{
				cout<<"do you want to continue ?"<<endl;
				cout<<"Input your choice letter below!"<<endl;
				cout<<"a :: yes "<<endl;
				cout<<"b :: back menu\n"<<endl;
				cout<<"Enter the Letter : \n";
				cin>>x;
	       		system("cls");
	       		
				if (x=="a" || x=="A")
					//system("cls");
					Payments_handling();
					
				else if(x=="b" || x=="B"){
					system("cls");
					mainmenu();
					break;
	       }
	       
				
			}
	      }
}



//===============================================================================================================================================================
//--------------------------------------------------------------------Managing Sales----------------------------------------------------------------------------

void Manage_sales()
{
	char ms;
	string x;

	while(ms!='5'){
			
	cout<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);		
	cout<<"\t\t\t\t\t\t>>>>>>>>>ICE MAN<<<<<<<<<<\n\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout<<"\t\t\t\t\t\t------Manage sales--------\n"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
	cout<<"\t\t\t\t\t\t==========================\n\n"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	
	cout<<"\t1. View sales	\n"<<endl;
	cout<<"\t2. Update sales details\n"<<endl;
	cout<<"\t3. Logout	\n"<<endl;
	cout<<"\t4. Back	\n"<<endl;
	cout<<"\t5. Exit!\n"<<endl;
	
	cout<<"Enter your choice(1-5) \n"<<endl;
	cin>>ms;
	
	switch(ms){

          case '1':{
			   system("cls");
               view_sales();
               break;
          }
               
          case '2':{
				system("cls");
               	Update_sales();
                break;
          }
               
          case '3':{
          		system("cls");
				cout<<"Do you really want to logout?"<<endl;
				cout<<"y :: Yes"<<endl;
				cout<<"n :: No"<<endl;
				cout<<"Enter the Letter : \n";
				cin>>x;
			
				if (x=="y" || x=="Y"){
					system("CLS");
					main();
				}
						
				else if(x=="n" || x=="N"){
					system("cls");
					Manage_sales();
					}
					break;
          }
          		
           case '4':{
           		system("cls");
          		mainmenu();
          		break;
           }
          		
		   case '5':{
		   		system("cls");
				cout<<"Do you want to Exit?"<<endl;
				cout<<"y :: Yes"<<endl;
				cout<<"n :: No"<<endl;
				cout<<"Enter the Letter : \n";
				cin>>x;
			
				if (x=="y" || x=="Y")
					exit(0); 
						
				else if(x=="n" || x=="N"){
					system("cls");
					Manage_sales();
					}
					break;
		   }
          	   
               }
  	
           }
}



//=============================================================================
//view sales-------------------------------------------------------------------

void view_sales()
{
	
	int no;
	string flavor_name;
	int quantity;
	int price;
	char back;
		
		cout<<"\t\t\t\t  >>>>>>>>>>>>>>>>>>>>ICE MAN<<<<<<<<<<<<<<<<<<<<<\n\n";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		cout<<"\t\t\t\t  -------------View sales--------------\n\n"<<endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		
		cout<<"\t\t******************************************************\n";
		cout<<"||Flavor No|| Flavor Name || Cones Quantity ||Price of 1 ICE Cone(Rs:)||Total Price|| Customer pays ||Customer Balance|| \n";
	
	string s;
	 ifstream a ("sales.txt");
                if (a.is_open())
                {
                    while ( getline (a,s) )
                     {
                           cout << s << '\n';
                     }
                      a.close();		
                    }
	//iceman.close();

	cout<<"\t\n*********************************************************************************************************\n\n";
	cout<<"Press 1 for go to the back screen\n";
	cin>>back;

	switch(back){
	
	       case '1':{
	       		system("cls");
	       		Manage_sales();
	       		break;		
	       }
	       	
	       default:{
	       	system("cls");
                cout<<"Invalid Option";
                exit(0);
		   }
			}
	}
	

//update sales
//------------------------------------------------------------------

void Update_sales()
{
	char q;
	do{
		cout<<endl;
		cout<<"\t\t\t\t  >>>>>>>>>>>>>>>>>>>>ICE MAN<<<<<<<<<<<<<<<<<<<<<\n\n";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		cout<<"\t\t\t\t  ------------------Update sales------------------\n\n"<<endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		
		//system("cls");
	 	fstream us;
		fstream temp;
		us.open("sales.txt", ios::in);
		temp.open("temp.txt", ios::out);
		
		int u;
		cout << "Enter Flavor No to Update the flavor details :" << endl;
		cin>>u;
		
		int no;
		string flavor_name;
		int price;
		int quantity;
		int total,cp,balance;
		while(us>>no>>flavor_name>>quantity>>price>>total>>cp>>balance){

			if(no==u){
				int uno;
				string uflavor_name;
				int uprice;
				int uquantity;
				int utotal,ucp,ubalance;

				cout<<"Add Ice cream flavor No : \n";
				cin>>no;
				cout<<endl;	
	
				cout<<"Input name of the ICE Cream flavor :\n";
				cin>>flavor_name;
				cout<<endl;
	
				cout<<"Customer buying Quantity :\n";
				cin>>quantity;
				cout<<endl;
	
				cout<<"Input the price of 1 ICE cone :\n";
				cin>>price;
				cout<<endl;
				
				cout<<"Input total : \n";
				cin>>total;
				cout<<endl;
				
				cout<<"Input customer paid amount : \n";
				cin>>cp;
				cout<<endl;
				
				cout<<"balance : \n";
				cin>>balance;
				cout<<endl;

				temp<<uno<<"       \t"<<uflavor_name<<"          \t"<<uquantity<<"           \t"<<uprice<<"      \t"<<utotal<<"       \t"<<ucp<<"       \t"<<ubalance<<endl;
			}
			else{

				temp<<no<<"          \t"<<flavor_name<<"             \t"<<quantity<<"              \t"<<price<<"      \t"<<total<<"       \t"<<cp<<"       \t"<<balance<< endl;

			}
		}
		temp.close();
		us.close();
		us.open("sales.txt",ios::out);
		temp.open("temp.txt", ios::in);
		
		while(temp>>no>>flavor_name>>quantity>>price>>total>>cp>>balance){
			us<<no<<"\t"<<flavor_name<<"\t"<<quantity<<"\t"<<price<<"\t"<<total<<"\t"<<cp<<"\t"<<balance<<endl;
	   }

		temp.close();
		us.close();
		remove("temp.txt");
		
		cout<<"===Successfully updated!!===\n"<<endl;
		cout<<"update again?(y/n) "<<endl;
		cin>>q;
		
		switch(q)
	{
			case 'y':{
				system("cls");
				Update_sales();
			}
				
			case 'n':{
				system("cls");
				mainmenu();
			}
			
			default:{
				exit(0);
			}
				
	}
	} while(q);
}



//===============================================================================================================================================================
//--------------------------------------------------------------------Company details----------------------------------------------------------------------------

void Company_details()
{
	char cho;
do{

	cout<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);		
	cout<<"\t\t\t\t\t\t>>>>>>>>>ICE MAN<<<<<<<<<<\n\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout<<"\t\t\t\t\t\t------Company Details-----\n"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
	cout<<"\t\t\t\t\t\t==========================\n\n"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

	cout<<""<<endl;
	cout<<"1- About Us"<<endl;
	cout<<"2- Contact Us"<<endl;
	cout<<"3- Exit to Main menu"<<endl;
	cout<<""<<endl;

	cout<<"Enter choice Number(1-3): \n";
	cout<<"Press any other key to close the window\n";
	cin>>cho;

		switch(cho){
			case '1':{
					system("cls");
					about_us();			
					break;
			}
					
			case '2':{
					system("cls");
					contact_us();
					break;
			}
					
			case '3':{
					system("cls");
					mainmenu();
					break;
			}
					
			default:{
					system("cls");
               		cout<<"Invalid Option";
               		exit(0);
			}
          	   
					}
		}while(cho!='3');
}

//=============================================================================
//about us-------------------------------------------------------------------

void about_us()
{
char ab;	

	cout<<endl;
		cout<<"\t\t\t\t  >>>>>>>>>>>>>>>>>>>>ICE MAN<<<<<<<<<<<<<<<<<<<<<\n\n";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		cout<<"\t\t\t\t  --------------------About US--------------------\n\n"<<endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

	cout<<""<<endl;
	cout<<"ICE MAN is a Famouse ICE Cream seller Company in sri lanka is an old-fashioned neighborhood ice cream shop. Whether you want a scoop of your \n";
	cout<<"favorite flavor, an awesome lunch or a rich, creamy milkshake you’ve found the right place! We always aim to \n";
	cout<<"please with great flavors, a friendly atmosphere and personal service.\n";
	cout<<""<<endl;
	cout<<"At the Ice Man shop, we treat everyone who walks through the door of our shop like a regular, whether it’s your\n";
	cout<<"first time or you’ve been coming here since the beginning. Many people have fond memories of enjoying a delicious\n";
	cout<<"Ice cone with different flavors\n\n";

	cout<<"1: back\n";
	cout<<"0: Exit\n";
	cout<<""<<endl;
	cout<<"Enter 1 or any other character to return to Company Details menu : ";
	cin>>ab;
			switch(ab){
				case '1':{
					system("cls");
					Company_details();
					break;
				}
					
				case '0':{
					system("cls");
					exit(0);
					break;
				}
					
				default:{
					system("cls");
					break;
				}
					
					}
}


//=============================================================================
//Contact details-------------------------------------------------------------------
void contact_us()
{
	char contact;

		cout<<endl;
		cout<<"\t\t\t\t  >>>>>>>>>>>>>>>>>>>>ICE MAN<<<<<<<<<<<<<<<<<<<<<\n\n";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		cout<<"\t\t\t\t  -------------------Contact US-------------------\n\n"<<endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	
	
		cout<<"Address: \n";
		cout<<"         No 203,\n";
		cout<<"         Vajira Road,\n";
		cout<<"         Bambalapitiya,\n";
		cout<<"         Colombo 04"<<endl;
		cout<<""<<endl;
		cout<<"Telephone No: \n";
		cout<<"         0112354143\n";
		cout<<"         0772334545\n";
		cout<<"         0712334545\n";
		cout<<endl;
		cout<<"Email : \n";
		cout<<"         iceman12@email.com\n";
		cout<<"\n\n";
		cout<<"1: back\n";
		cout<<"0: Exit\n";
		cout<<"Enter the choice number : ";
		cin>>contact;
		
			switch(contact)
			{
				case '1':
				{
					system("cls");
					Company_details();			
					break;
				}
				case '0':
				{
					system("cls");
					exit(0);
					break;	
				}
				default:
				{
					system("cls");
					break;
				}
			}
}


