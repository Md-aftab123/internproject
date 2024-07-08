#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
	cout<<"\n\n \t\tWELCOME TO NUMBER GUESSING GAME! "<<endl<<endl;
	cout<<"\tyou have to guess number between 1 to 100 "<<endl;
		while(true){
		
		
		srand(time(0));
		int secretnumber = (rand()%10);
		int playerchoice;
		cout<<"\n Enter your choice : ";
		cin>>playerchoice;
		if(secretnumber==playerchoice){
			cout<<"you wins! "<<secretnumber;
			
		}else{
			cout<<"\n opps! you lose "<<"try again "<<"\n secret number is = "<<secretnumber;
		}if(secretnumber>playerchoice){
			cout<<"\n\nsecretnumber is bigest number than your choice = "<<secretnumber;
		}else{
			cout<<"\n\nsecret number is lowest number than your choice = "<<secretnumber;
		}
	}
	
	return 0;
	
	
	
}