#include<iostream>
using namespace std;
int main(){ 
    int numberofdays;
	cout<<"Please enter number of days"<<endl;
	cin>>numberofdays;
	int numberofweeks=numberofdays/7;
	int remainingdays=numberofweeks%7;
	cout<<"numberofdays= "<<numberofdays<<endl;
	cout<<"numberofweeks= "<<numberofweeks<<endl;
	cout<<"remainingdays= "<<remainingdays<<endl;
	
	return 0;
}