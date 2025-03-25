#include <iostream>
#include <fstream>
using namespace std;

string userInfo(){
	string name, father, age, per;
	cout << "Enter your name here :";
	cin >> name;
	cout << "Enter your Father  name here :";
	cin >> father;
	cout << "Enter your age here :";
	cin >> age;
	cout << "Enter your Percentage here :";
	cin >> per;
	return name + ", "+ father + ", " + age + ", " + per ;
}
main(){
	
	string info = userInfo();	
	fstream file;
	file.open("StudentData.csv", ios::out|ios::in|ios::app);
	file << info << endl;
	file.close();
	return 0;
}
