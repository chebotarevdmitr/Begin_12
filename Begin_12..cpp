#include <iostream>
using namespace std;


int main() {
	printf("Count digits of a number\n\n");
	// подсчёт цыфр в числе пользователя
	int number;
	cout<<"Enter number:";
	cin>>number;
	if(number==0)cout<<"You have entered 0\n";
	else{
	 if(number < 0)	number= -1 * number;
	  int counter=0;	
	 while(number>0) {
	 	//number=number/10;
	 	number/=10;
	 	counter++;
       }
	   cout	<<" Number contains "<<counter<<" digits\n";
	}
	
	system("pause>0");
}