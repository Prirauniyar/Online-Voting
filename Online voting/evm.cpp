#include"iostream"
#include <string.h>
using namespace std;
#define VOTERS 5      //Number of Voters in a City
#define CITY "MOH"     //Define City-Code for login
#define PINCODE 140307 //Pincode for login
void login();          //Proto-type of Login Page
int main(){
	                   //Variables Section
	int num, i=1;
	static int firstCount, secondCount, thirdCount, forthCount;
	                   //Body Section <Includin Loops & Switch Case>
	while(i<=VOTERS){
	login();           //Calling of Login Page
	cout<<"\t\t**Voting is the Right of Everyone!!**\n\n";
	cout<<"\t\t\t~Choose Your Own Government~\n\n\n";
	cout<<"\tKindly Read All The Information First And Choose A Correct Option :\n\n";
	cout<<"INFORMATION   : If you want to give your vote to BJP ENTER 1 \n  ";
	cout<<"            : If you want to give your vote to Congress ENTER 2 \n  ";
	cout<<"            : If you want to give your vote to AAP ENTER 3 \n  ";
	cout<<"            : If you want to give your vote to RJD ENTER 4 \n  ";
	cout<<"\n\n\n\n ";
	cout<<"\t\t1. BJP     2. Congress     3. AAP     4. RJD\n\n\n";
	cout<<"\t\tENTER: ";
	fflush(stdin);
	cin>>num;
	cout<<"\a\n\n\n";
	cout<<"=======================================================================\n\n";
	switch(num){
		case 1:
			cout<<"\aYou have chosen BJP";
			firstCount = firstCount + 1;
			break;
		case 2:
			cout<<"\aYou have chosen Congress";
			secondCount = secondCount + 1;
			break;
		case 3:
			cout<<"\aYou have chosen AAP";
			thirdCount = thirdCount + 1;
			break;
		case 4:
			cout<<"\aYou have chosen RJD";
			forthCount = forthCount+ 1;
			break;
		default:
			cout<<"\aInvalid Input(Error)";
					
	}
	cout<<"\n\nThank you so much!! Kindly leave the Online EVM!!\n\n";
	cout<<"=======================================================================\n";
	cout<<"=======================================================================\n\n\n\n\n";	
	i++;
	}
	//Counting Section
	cout<<"========================================================================\n";
	cout<<"==========================COUNTING SECTION==============================\n";
	cout<<"========================================================================\n\n\n";	
	cout<<"\t\t\tCounts of Votes\n\n\n";
	cout<<"\t\tBJP got "<<firstCount<< " Votes\n\n";
	cout<<"\t\tCongress got "<<secondCount<< " Votes\n\n";
	cout<<"\t\tAAP got "<<thirdCount<< " Votes\n\n";
	cout<<"\t\tRJD got "<<forthCount<< " Votes\n\n";
	//Winner Section
	cout<<"========================================================================\n";
	cout<<"===========================WINNER SECTION===============================\n";
	cout<<"========================================================================\n\n\n";
	if(firstCount > secondCount && firstCount > thirdCount && firstCount > forthCount){
		cout<<"\t\t\t\aBJP Won the Election!!\n\n";
	}
	else if(secondCount > firstCount && secondCount > thirdCount && secondCount > forthCount){
		cout<<"\t\t\t\aCongress Won the Election!!\n\n";
	}
	else if(thirdCount > firstCount && thirdCount > secondCount && thirdCount > forthCount){
		cout<<"\t\t\t\aAAP Won the Election!!\n\n";
	}
	else if(forthCount > firstCount && forthCount > secondCount && forthCount > thirdCount){
		cout<<"\t\t\t\aRJD Won the Election!!\n\n";
	}
	else{
		cout<<"\nElection is DRAW!! Election will  conduct again after two weeks.\n\n";
	}
	cout<<"========================================================================\n";
	cout<<"\nOnline EVM develop by MN_TEAM. \n";
	cout<<"Copyright 2021 by MN_TEAM. All Rights Reserved.";
	return 0;
}
//Login Page for Voters
void login(){
	int pin;
	char city[5];
	int camp;
	FIRST:
	cout<<"=======================================================================\n\n";	
	cout<<"------------------------------Login Page-------------------------------";
	cout<<"\n\n~Input the details as per your Voter ID~";
	cout<<"\n\nEnter the Pincode  : ";
	fflush(stdin);
	cin>>pin;
	cout<<"\nEnter the City Code (City Code must be in Capital Letter) : ";
	fflush(stdin);
	//gets(city);
	cin>>city;
	camp = strcmp(city,CITY);
	if(pin == PINCODE && camp == 0){
		cout<<"\n\n\tEnter Sucessfully!!";
		cout<<"\n\nProcced further for Voting!!!!\n\n";
		cout<<"=======================================================================\n\n\n";
	}
	else{
		cout<<"\n\n\t\aInvalid Pincode/City!!\n\n\tTry Again!!\n\n";
		cout<<"=======================================================================\n\n\n";
		goto FIRST;
	}
}