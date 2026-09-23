#include <iostream>
 
using namespace std;
 
int main(){

	int age;

	cout<<"How old are you? "<<endl;

	cin>>age;

	if (age >= 60){

		cout<<"You're an elder!"<<endl;

	}

	else if(age >= 18){

		cout<<"You're an adult!"<<endl;

	}

	else{

		cout<<"You're a minor!"<<endl;

	}

	return 0;

}
 
