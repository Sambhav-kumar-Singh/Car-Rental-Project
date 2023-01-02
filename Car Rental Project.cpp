#include<iostream>
#include<stdlib.h>
#include <fstream>
#include<windows.h>
#include<string.h>
using namespace std;
bool login();
void case1(); 
void case2();

class Car{
	protected:
		string carName;
		int model;
		int carId;
		int r_p_h;
		int driverId;
		int car_choice;
		public:
			Car(){
				cout<<"\n\n\n\t1 Add Car";
				cout<<"\n\n\n\t2 All Cars";
			    cout<<"\n\n\n\t3 Modify Car";
			    cout<<"\n\n\n\t4 Delete Car";
			    cout<<"\n\n\n\t5 Main Menu";
			    
			    cout<<"\n\n\n\t Enter Choice";
			    cin>>car_choice;
			}
			int carChoice(){
				return car_choice;
			}
			void addCar(){
				int count=0;
				int dId,dExp,searchedId,searchedexp;
				bool IsAvailable;
				string name;
				m:
					cout<<"\n\n\n\tEnter Car Name:";
					cin>>carName;
					cout<<"\n\n\n\tEnter Model:";
					cin>>model;
					cout<<"\n\n\n\tEnter Car Id:";
					cin>>carId;
					cout<<"\n\n\n\tEnter Car Rate Per Hour:";
					cin>>r_p_h;
					cout<<"\n\n\n\tEnter Driver Id:";
					cin>>driverId;
					
					/*fstream file;
					file.open("Driver.txt",ios::in);
					file>>dID>>name>>dExp>>IsAvailable;
					
					while(!file.eof()){
						if(driverId==dId){
							searcherId=dId;
							searchedexp=dExp;
							count++;
						}
						file>>dId>>name>>dExp>>IsAvailable;
					}
					file.close();
					if(count==0){
						system("color C");
						cout<<"\n\n\tNo Driver Found With This ID!!!";
						Sleep(3000);
						system("CLS");
						system("color A");
						goto m;
					}
					else*/
					{
						fstream file1;
						file1.open("Car.txt", ios::out | ios::app);
						file1<<" "<<carName<<" "<<model<<" "<<carId<<" "<<r_p_h<<" "/*<<searcherId<<" "*/<<searchedexp<<"\n";
						file1.close();
						cout<<"\n\n\t\tRecord Inserted Successfully!";
						Sleep(2000);
						system("CLS");
						case1();
										}					
					
					
				
			}
};
void case1(){
	int inner_choice;
	Car c1;
	    inner_choice=c1.carChoice();
	    if(inner_choice == 1){
	    	c1.addCar();
		}
		else if(inner_choice == 2){
			cout<<"c1.allCars()";
		}
		else if(inner_choice == 3){
			cout<<"c1.modifyCars()";
		}
		else if(inner_choice == 4){
			cout<<"c1.deleteCars()";
		}
		else
		{
			cout<<"\n\n\n\tInvalid Choice !!";
			system("CLS");
			case1();
		}
	
}


class Driver{
	protected:
		string driverName;
		int driverId;
		int driverExp;
		bool isAvail =true;
		int driver_choice;
		public:
			Driver(){
				cout<<"\n\n\n\t   Driver ManageMent System   ";
				cout<<"\n\n\n\t1) Add Driver";
				cout<<"\n\n\n\t2) All Driver";
				cout<<"\n\n\n\t3) Modify Driver";
				cout<<"\n\n\n\t4) Delete Driver";
				cout<<"\n\n\n\t5) Main Menu";
				
				cout<<"\n\n\n\tEnter Choice";
				cin>>driver_choice;
			}
			int driverChoice(){
				return driver_choice;
			}
			void addDriver(){
				int count=0;
				int dId,dExp,matchedId;
				bool IsAvailable;
				string name;
				m:
					cout<<"\n\n\n\tEnter Driver Id:";
					cin>>driverId;
					cout<<"\n\n\n\tEnter Name:";
					cin>>driverName;
					cout<<"\n\n\n\tEnter Car Experience:";
					cin>>driverExp;
					
					fstream file1;
					file1.open("driver.txt",ios::out | ios::app);
					file1<<" "<<driverId<<" "<<driverName<<" "<<driverExp<<" "<<isAvail<<"\n";
					file1.close();
					cout<<"\n\n\t\tRecord Inserted Successful!";
					Sleep(2000);
					system("CLS");
					goto m;
			}
};
void case2(){
	int inner_choice;
	Driver d1;
	inner_choice = d1.driverChoice();
	if(inner_choice ==1){
		d1.addDriver();
		
	}
	else if(inner_choice ==2){
		cout<<"c1.allCar()";
		
	}
	else if(inner_choice ==3){
		cout<<"c1.modifyCars()";
		
	}
	else if(inner_choice ==4){
		cout<<"c1.deleteCar()";
		
	}
	else {
		cout<<"\n\n\tInvalid Choice!!!";
		system("CLS");
		case2();
		
	}
	
}

bool login(){
	system("color 2");
	string userName;
	string password;
	bool isLoggedIn=false;
	cout<<"\n\n\n\t.................Car Rental Login !!.................";
	cout<<"\n\n\n\tEnter User Name: ";
	cin>>userName;
	cout<<"\n\n\n\tEnter User Password: ";
	cin>>password;
	if(userName=="Sambhav" && password=="12345"){
		isLoggedIn=true;
		cout<<"\n\n";
		cout<<"\tYou Are Logged In Successfully";
		cout<<"\n\n\tLoading";
		char loading= '|';
		for(int i=0;i<23;i++){
			cout<<loading;
			Sleep(100);
		}
		
		system("CLS"); 
		return isLoggedIn;
		
	}
	else
	{
		system("color 4");
		cout<<"\n\n\tLogin Failed !!!!";
		Sleep(1000);
		system("CLS");
		system("color 2");
		login();
		
	}
	
}




void main_menu(){
	if(login()){
		int mainChoice;
		system("CLS");
		cout<<"\n\n\n\t\t*******Car Rental Store*******";
		cout<<"\n\n\n\t1. Car Management";
		cout<<"\n\n\n\t2. Driver Management";
		cout<<"\n\n\n\t3. Customer Management";
		cout<<"\n\n\n\t4. Bill Management";
		cout<<"\n\n\n\t5. Exit";
		
		cout<<"\n\n\n\tEnter Choice: ";
		
		cin>>mainChoice;
		
		
		switch(mainChoice){
			case 1:
				{
					system("CLS");
					case1();
					break;
				}
				case 2:
				{
					system("CLS");
					case2();
					break;
				}
				
				case 5:
				{
					system("CLS");
					main_menu();
					break;
				}
		}
	}
	
}
int main(){
	system("color A");
	main_menu();
	return 0;
}
