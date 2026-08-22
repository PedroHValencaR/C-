#include <iostream>
 
using namespace std;
 
int main(){
	// && equal and, || equal or.
	int age;
	cout <<"What's your age? "<<endl;
	cin >> age;
	if (age >= 18 && age <= 30){
		cout <<"Young adult!"<<endl;
	}
	if (age < 18 || age >30){
		cout <<"Hi"<<endl;
	}
}
