#include <iostream>
 
using namespace std;
 
int main(){

	int menu;

	//char works with only 1 letter

	char time [50]; //Now char works with 50 letters

	// do the things para are inside do{} will happen, but while set it to stop with what you choose.

	do {

	cout <<"[1. Set time.]"<<"[2. Show time.]"<<"[3. Close.]"<<endl;

	cin >> menu;

	//If user choose case 1, 2 or 3 (switch)

	switch (menu){

		case 1:

			cout <<"Type an hour."<<endl;

			cin>> time;

			break;

		case 2:

			cout <<"The time is: "<<time<<endl;

			break;

		case 3:

			cout <<"Closing..."<<endl;

			break;

		default:

			cout <<"This option doesn't exist! [Choose between 1-3]"<<endl;

	}

}while (menu != 3);

}

 
