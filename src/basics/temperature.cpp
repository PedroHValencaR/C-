#include <iostream>
using namespace std;
 
	float temp[5];
	int menu;
	int var = 0;
void registertemp(){
	if(var < 5){
		cout << "Temperature: " <<endl;
		cin.ignore();
		cin >> temp[var];
		var++;
	}else{
		cout << "The space is full"<<endl;
	}
}
 
void showtemp(){
	for (int i = 0; i < var; i++){
		cout << "Temperature: "<<temp[i]<<endl;
	}
}
 
void highesttemp(){
	if(var == 0){
		cout << "No temperature registered yet"<<endl;
		return;
	}
	float highest = temp[0];
	for (int i = 1; i < var; i++){
		if (temp[i] > highest){
			highest = temp[i];
		}
	}
	cout << "The highest temperature is "<<highest<<endl;
}
 
int main(){
 
	do{
	cout << "===================== Menu ======================" <<endl;
	cout << "1. Register temperatures"<<endl;
	cout << "2. Show temperatures" <<endl;
	cout << "3. Show highest temperature" <<endl;
	cout << "4. Exit" <<endl;
	cin >> menu;
	switch(menu){
		case 1:
			registertemp();
			break;
		case 2:
			showtemp();
			break;
		case 3:
			highesttemp();
			break;
	}
}while (menu != 4);
	cout << "Closing..."<<endl;
	return 0;
}
