/*
*Created for professor Jeniffer Cohen
*by Andrew Owen (yumaikas)
*This program does a little change making exercise that bears a resemblance to Roman Numerals.
*/
#include <iostream>
#include <string>
#include <ctime>
//Keep from completely polluting the namspace (based on google's coding style conventions)
//See http://google-styleguide.googlecode.com/svn/trunk/cppguide.xml?showone=Namespaces#Namespaces
using std::cin;
using std::cout;
using std::endl;
using std::string;

void introduce(){
	cout << "MAKING CHANGE" << endl;
	cout << "Your task is to make change." << endl;
	cout << "I'll give you a change amount," << endl;
	cout << "You have to add change to bring it up to a dollar" << endl;
	cout << "The less coins you use, the better." << endl << endl;
}

int getCoinCount(string coins){
	int change = 0;
	int length = coins.length();
	for (int i = 0; i < length; i++){
		switch (coins[i])
		{
		case 'q':
			change += 25;
			break;
		case 'd':
			change += 10;
			break;
		case 'n':
			change += 5;
			break;
		case 'p':
			change += 1;
			break;
		//Keep spaces from breaking the sequence of coins
		case ' ':
			break;
		//Stop the loop
		default:
			i = length;
			break;
		}
	}
	return change;
}
int main(){
	//Display the intro
	introduce();
	//Seed the random number generator based on the clock time
	srand((unsigned)time(NULL)); 

	for(int i = 0; i < 5; i++)
	{
		//Get the change amount to make
		int change= rand() % 100; 
		//Explain how to enter amount
		cout << "Add change to " << change <<" cents make one dollar"<< endl;
		cout <<"Enter (p)ennies, (n)ickles (d)imes, and (q)uarters. and hit enter when finished"<< endl 
			 <<"For example: \"qndp\" is 41 cents. \"qq\" is 50 cents" << endl;
		//Get input
		string input = ""; 
		cin >> input;
		//Parse the input 
		int added_change = getCoinCount(input); 
	
		int total = added_change + change;
		
		cout << "You added " << added_change << " cents" << endl;
		if(total > 100){
			int over = total - 100;
			cout << "You were over a dollar by " << over << " cents." << endl;
		}
		else if (total == 100)
		{
			cout <<"You got it exactly right." << endl;
		}
		else
		{
			int under = 100 - total;
			cout << "You were under by " << under << " cents" << endl; 
		}
		//Space out attemps
		for (int i = 0; i < 3; i++)
		{
			cout << endl;
		}
	}
	system("pause");
	return 0;  
}