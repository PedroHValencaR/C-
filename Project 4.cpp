#include <iostream>
using namespace std;
int main(){
	int menu;
	char product[10][50];
	float price[10];
	int quantity[10];
	int var = 0;
	float total = 0;
	do{
		cout << "============ Menu ============"<<endl;
		cout << "1.Add product"<<endl;
		cout << "2.Show product"<<endl;
		cout << "3.Show total stock value"<<endl;
		cout << "4.Exit"<<endl;
		cin >> menu;
		switch(menu){
			case 1:
				if (var < 10){
					cout << "Product: "<<endl;
					cin.ignore();
					cin.getline(product[var], 50);
					cout << "Price: "<<endl;
					cin >> price[var];
					cout << "Quantity: "<<endl;
					cin >> quantity[var];
					var++;
				}else{
					cout << "Space is full!"<<endl;
				}break;
			case 2:
				for (int i = 0; i < var; i++){
					cout << "Product: "<<product[i]<<endl;
				}break;
			case 3:
				for (int i = 0; i < var; i++){
					cout << product[i]<<endl;
					cout << "Stock value: "<<quantity[i] * price[i]<<endl;
					total += quantity[i] * price[i];
				}cout << "Total stock value: "<<total<<endl;
				break;
		}
	}while (menu != 4);
	cout << "Closing...."<<endl;
}
