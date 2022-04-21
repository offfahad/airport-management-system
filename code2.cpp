#include<iostream>
#include<string.h>
using namespace std;
class Airport
{
	private:
	string Airline_Name[6]={"PIA-Gold","Air-Blue","Red-Rose","Emirates","Shaheen"};
	string Airline_No[6]={"B-707","A-503","R-401","E-306","S-102"};
	int Passenger[6]={200,300,150,100,170};
	string Arrival_Time[6]={"2:00PM","12:00AM","5:00AM","9:00PM","7:00PM"};
	string Depart_Time[6]={"6:20PM","3:30AM","2:50PM","12:10AM","10:40PM"};
	public:
		void traverse(int s=5)
		{
			cout<<"\n    Airline Name \t\t Airline Number \t\t Passengers \t\t Arrival Time \t\t Departure Time\n";
			cout<<"_______________________________________________________________________________________________________________________________\n\n";
			for(int i=0;i<s;i++)
			{
				
				cout<<i+1<<".  "<<Airline_Name[i]<<" \t\t\t "<<Airline_No[i]<<" \t\t\t\t "<<Passenger[i]<<" \t\t\t "
				<<Arrival_Time[i]<<" \t\t "<<Depart_Time[i]<<endl;
			}
			cout<<"_______________________________________________________________________________________________________________________________\n\n";
		}
		void Search()
		{
			string key;
			bool found=false;
			cout<<"Enter the Flight Name or Flight Number You Want to Search: ";
			cin>>key;
			for(int i=0;i<5;i++)
			{
				if(Airline_Name[i]==key||Airline_No[i]==key)
				{
					cout<<Airline_Name[i]<<" \t\t\t "<<Airline_No[i]<<" \t\t\t\t "<<Passenger[i]<<" \t\t\t "
				<<Arrival_Time[i]<<" \t\t "<<Depart_Time[i]<<endl;
				found=true;
				break;
				}
			}
			if(found==false)
			{
				cout<<"Sorry Sir, Its Not Present in Our DataBase \n";
			}
			
		}
		void insert()
		{
			int pos;
			char choice;
			cout<<"\nEnter 1 for Insertion at 1st Position\nEnter 2 for Insertion at Last Position\n";
			cout<<"Enter 3 for Insertion at your Desired Position\n";
			cout<<"\nEnter Where You Want to Insert: ";
			cin>>choice;
			switch(choice)
			{
				case '1':
					{
						for(int i=4;i>=0;i--)
						{
							Airline_Name[i+1]=Airline_Name[i];
							Airline_No[i+1]=Airline_No[i];
							Passenger[i+1]=Passenger[i];
							Arrival_Time[i+1]=Arrival_Time[i];
							Depart_Time[i+1]=Depart_Time[i];
						}
						cout<<"Enter the New Details\nAirline Name: ";
						cin>>Airline_Name[0];
						cout<<"Airline Number: ";
						cin>>Airline_No[0];
						cout<<"Number of Passengers: ";
						cin>>Passenger[0];
						cout<<"Arrival Time: ";
						cin>>Arrival_Time[0];
						cout<<"Departure Time: ";
						cin>>Depart_Time[0];
						cout<<"\n";
						break;	
					}
				case '2':
					{
						cout<<"Enter the New Details\nAirline Name: ";
						cin>>Airline_Name[5];
						cout<<"Airline Number: ";
						cin>>Airline_No[5];
						cout<<"Number of Passengers: ";
						cin>>Passenger[5];
						cout<<"Arrival Time: ";
						cin>>Arrival_Time[5];
						cout<<"Departure Time: ";
						cin>>Depart_Time[5];
						cout<<"\n";
						break;	
					}
				case '3':
					{
						cout<<"\nEnter the Position Where You Want to Insert: ";
						cin>>pos;
						pos--;
						for(int i=4;i>=pos;i--)
						{
							Airline_Name[i+1]=Airline_Name[i];
							Airline_No[i+1]=Airline_No[i];
							Passenger[i+1]=Passenger[i];
							Arrival_Time[i+1]=Arrival_Time[i];
							Depart_Time[i+1]=Depart_Time[i];
						}
						cout<<"\nEnter the New Details\nAirline Name: ";
						cin>>Airline_Name[pos];
						cout<<"Airline Number: ";
						cin>>Airline_No[pos];
						cout<<"Number of Passengers: ";
						cin>>Passenger[pos];
						cout<<"Arrival Time: ";
						cin>>Arrival_Time[pos];
						cout<<"Departure Time: ";
						cin>>Depart_Time[pos];
						cout<<"\n";
					break;
					}
				default:
					cout<<"You Entered Wrong Input\n";
			}
		}
		void Delete()
		{
			int pos;
			char choice;
			cout<<"\nEnter 1 for Deletion at 1st Position\nEnter 2 for Deletion at Last Position\n";
			cout<<"Enter 3 for Deletion at your Desired Position\n";
			cout<<"\nEnter Where You Want to Deletion: ";
			cin>>choice;
			switch(choice)
			{
				case '1':
					{
						for(int i=0;i<5;i++)
						{
							Airline_Name[i]=Airline_Name[i+1];
							Airline_No[i]=Airline_No[i+1];
							Passenger[i]=Passenger[i+1];
							Arrival_Time[i]=Arrival_Time[i+1];
							Depart_Time[i]=Depart_Time[i+1];
						}
						break;	
					}
				case '2':
					{
						for(int i=4;i<5;i++)
						{
							Airline_Name[i]=Airline_Name[i+1];
							Airline_No[i]=Airline_No[i+1];
							Passenger[i]=Passenger[i+1];
							Arrival_Time[i]=Arrival_Time[i+1];
							Depart_Time[i]=Depart_Time[i+1];
						}
						break;	
					}
				case '3':
					{
						cout<<"\nEnter the Position Which You Want to Delete: ";
						cin>>pos;
						pos--;
						for(int i=pos;i<5;i++)
						{
							Airline_Name[i]=Airline_Name[i+1];
							Airline_No[i]=Airline_No[i+1];
							Passenger[i]=Passenger[i+1];
							Arrival_Time[i]=Arrival_Time[i+1];
							Depart_Time[i]=Depart_Time[i+1];
						}
					break;
					}
				default:
					cout<<"You Entered Wrong Input\n";
			}
		}
	
};
void Menu()
{
	cout<<"Enter 1 for Travarse\nEnter 2 for Searching\nEnter 3 for Insertion\nEnter 4 for Deletion\n";
	cout<<"Enter 5 to End the Program\n";
	cout<<"___________________________________________________________________________\n";
	cout<<"Enter Your Choice: ";
}
int main()
{
	int si=5;
	Airport obj;
	char M_choice;
	while(true)
	{
		Menu();
		cin>>M_choice;
		switch(M_choice)
		{
			case '1':
				{
					obj.traverse(si);
					break;
				}
				case '2':
					{
						obj.Search();
						break;
					}
				case '3':
					{
						obj.insert();
						si=si+1;
						break;
					}
				case '4':
					{
						obj.Delete();
						si=si-1;
						break;
					}
					case '5':
						{
							cout<<"\n\t\t\t\t\t\tEND\n";
							return 0;
					}
			default:
				{
					cout<<"\nYou Entered Wrong Input\n\n";
				}
		}
	}
	
	
}
