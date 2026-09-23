#include <iostream>
using namespace std;
int main(){
	char name[10][50];
	float grade1[10];
	float grade2[10];
	int var = 0;
	int menu;

	do{
		cout << "=========== Menu ==============="<<endl;
		cout << "1.Add student"<<endl;
		cout << "2.Show student"<<endl;
		cout << "3.Average grades"<<endl;
		cout << "4.Show approved students"<<endl;
		cout << "5.Exit"<<endl;
		cin >> menu;
		switch(menu){
			case 1:
				if (var < 10){
					cout << "Student: "<<endl;
					cin.ignore();
					cin.getline(name[var], 50);
					cout << "Grade 1: "<<endl;
					cin >> grade1[var];
					cout << "Grade 2: "<<endl;
					cin >> grade2[var];
					var++;
				}else{
					cout << "Invalid number!"<<endl;
				}break;
			case 2:
				for (int i = 0; i < var; i++){
					cout << "Student: "<<name[i]<<endl;
				}break;
			case 3:
				for (int i = 0; i < var; i++){
					cout << "Student: "<<name[i]<<endl;
					cout << "Average grade: "<<(grade1[i] + grade2[i]) / 2<<endl;
				}break;
			case 4:
				for (int i = 0; i < var; i++){
					cout << "Student: "<<name[i]<<endl;
					if ((grade1[i] + grade2[i]) / 2 >= 7){
						cout << "Approved!"<<endl;
					}else{
						cout << "Reproved!"<<endl;
					}
				}break;
		}
	}while (menu != 5);
	cout << "Closing....."<<endl;
}
