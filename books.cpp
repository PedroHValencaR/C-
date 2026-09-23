#include <iostream>
using namespace std;
 
char autor [10][50];
char book [10][50];
int page[10];
int var = 0;
 
void insert(){
					if (var < 10){	
					cout <<"Autor: "<<endl;
					cin.ignore();
					cin.getline(autor[var], 50);
					cout <<"Book: "<<endl;
					cin.getline(book[var], 50);
					cout << "Pages: "<<endl;
					cin >> page[var];
					var++;
					}else{
				cout << "Space is full!"<<endl;
			}
}
 
void show(){
				if (var == 0){
				cout << "No book registered yet!"<<endl;
			}
			for (int i = 0; i < var; i++){	
					cout << "Autor: "<<autor[i]<<endl;
					cout << "Book: "<<book[i]<<endl;
					cout << "Pages: "<<page[i]<<endl;
					cout << "-------------------------------"<<endl;
					}
}
 
int main(){
	int menu;
	do{
		cout << "---------------------MENU--------------------"<<endl;
		cout << "1. Autor, Book and Pages"<<endl;
		cout << "2. Show informations"<<endl;
		cout << "3. Exit"<<endl;
		cin >> menu;
		switch(menu){
			case 1:
				insert();
				break;
			case 2:
				show();
				break;
		}
	}while (menu != 3);
	cout << "Closing...."<<endl;
}
