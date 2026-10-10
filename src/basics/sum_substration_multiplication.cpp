#include <iostream>
 
using namespace std;
 
int main(){
	int n1, n2;
	int sum, substration, multiplication;
	int op;
	float division;
	cout<<"What is n1: "<<endl;
	cin>>n1;
	cout<<"What is n2: "<<endl;
	cin>>n2;
	cout<<"Which operation do you want? "<<endl;
//op is the operation, so that the user can choose which operation he wants to do
	cout<<"[1.sum]"<<"[2.substration]"<<"[3.multiplication] "<<"[4.division] "<<endl;
	cin>>op;
	if(op==1){
	sum = n1 + n2;
	cout<<"The sum is "<<sum<<endl;
}
	if (op==2){
	substration= n1 - n2;
	cout<<"The substration is "<<substration<<endl;
}
	if (op==3){
	multiplication = n1 * n2;
	cout<<"The multiplication is "<<multiplication<<endl;
}
//To show that division per 0 is impossible, I have opened the if condition	
if(op==4){
 
	if (n2!=0){
		division = (float)n1/n2;
		cout<<"The division is "<<division<<endl;
	}
	else{
		cout<<"Impossible to divide per 0!"<<endl;
	}
	return 0;
}
}
