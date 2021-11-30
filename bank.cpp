#include<iostream>
using namespace std;

//***************************************************************
//                   CLASS USED IN PROJECT
//****************************************************************


class account
{
	int acno;
	char name[50];
	int deposit;
	char type;
public:
	void create_account();	//function to get data from user
	void show_account() const;	//function to show data on screen
	void modify();	//function to add new data
	void dep(int);	//function to accept amount and add to balance amount
	void draw(int);	//function to accept amount and subtract from balance amount
	void report() const;	//function to show data in tabular format
	void retacno() const;	//function to return account number
	void retdeposit() const;	//function to return balance amount
	void rettype() const;	//function to return type of account
};         //class ends here

void account::create_account()
{
	cout<<"\nEnter The account No. :";
	cin>>acno;
	cout<<"\n\nEnter The Name of The account Holder : ";
	cin.ignore();
	cin.getline(name,50);
	cout<<"\nEnter Type of The account (C/S) : ";
	cin>>type;
	type=toupper(type);
	cout<<"\nEnter The Initial amount(>=500 for Saving and >=1000 for current ) : ";
	cin>>deposit;
	cout<<"\n\n\nAccount Created..";
}

void account::show_account() const
{
	cout<<"\nAccount No. : "<<acno;
	cout<<"\nAccount Holder Name : ";
	cout<<name;
	cout<<"\nType of Account : "<<type;
	cout<<"\nBalance amount : "<<deposit;
}


void account::modify()
{
	cout<<"\nAccount No. : "<<acno;
	cout<<"\nModify Account Holder Name : ";
	cin.ignore();
	cin.getline(name,50);
	cout<<"\nModify Type of Account : ";
	cin>>type;
	type=toupper(type);
	cout<<"\nModify Balance amount : ";
	cin>>deposit;
}

	
void account::dep(int x)
{
	deposit+=x;
}
	
void account::draw(int x)
{
	deposit-=x;
}
	
void account::report() const
{
	cout<<"ACCOUNT NUMBER : "<<acno<<"\t NAMW :"<<name<<"\t ACCOUNT TYPE : "<<type<<"\tBALANCE : "<<deposit<<endl;
}

	
void account::retacno() const
{
	cout<<acno;
}

void account::retdeposit() const
{
	cout<< deposit;
}

void account::rettype() const
{
	cout<<type;
}



//***************************************************************
//    	THE MAIN FUNCTION OF PROGRAM
//****************************************************************


int main()
{
    account obj1;
	char choice;
	int num;
	while(1)
	{
		cout<<"\n\n\n\tMAIN MENU";
		cout<<"\n\n\t01. NEW ACCOUNT";
		cout<<"\n\n\t02. DEPOSIT AMOUNT";
		cout<<"\n\n\t03. WITHDRAW AMOUNT";
		cout<<"\n\n\t04. BALANCE ENQUIRY";
		cout<<"\n\n\t05. VIEW ACCOUNT TYPE";
		cout<<"\n\n\t06. VIEW BALANCE AMOUNT";
		cout<<"\n\n\t07. EXIT";
		cout<<"\n\n\tSelect Your Option (1-7) ";
		cin>>choice;
		switch(choice)
		{
		case '1':
			 obj1.create_account();
			break;
		case '2':
			cout<<"\n\n\tEnter The account No. : "; cin>>num;
			 obj1.dep(num);
			break;
		case '3':
			cout<<"\n\n\tEnter The account No. : "; cin>>num;
			 obj1.draw(num);
			break;
		case '4': 
			cout<<"\n\n\tBALANCE ENQUIRY: "; 
			obj1.report();
			break;
		case '5':
			cout<<"\n\n\tVIEW ACCOUNT TYPE : ";
			 obj1.rettype();
			break;
		 case '6':
			cout<<"\n\n\tVIEW BALANCE AMOUNT : "; 
			 obj1.retdeposit();
			break;
		 case '7':
			cout<<"\n\n\tThanks for using bank managemnt system";
			return 0;
			break;
			default: return 0;
		 
		}
		
	}
	return 0;
}