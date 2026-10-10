#include <iostream>

using namespace std;
 
int main(){

	bool light = false;

	int option;

	do{

		cout << "1. Turn on / Turn off" <<endl;

		cout << "2. Exit" <<endl;

		cin >> option;

		if(option == 1){

// != (diferent) ------ light = !light (! negation) or inverter

			light =! light;

		}

		if(light){

			cout << "Turned on light" <<endl;

		}else{

			cout << "Turned off light" <<endl;

		}

	}while(option!=2);

	cout << "Closing..." <<endl;

	return 0;

}
 
