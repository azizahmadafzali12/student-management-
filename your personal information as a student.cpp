#include <iostream>fd
#include <fstream>
using namespace std;
string getuserinfo(){
	string name,fathername,phone, percentage, intel,pi;
	int age;
//	float percentage;
//	bool intel;
//	double pi;
	getline(cin,name);
	cout << "Enter Your Full name :  ";
	getline(cin,name);
//	cin.getline(name,32);
	cout << "Khpl Plaar noom woleka : ";
	getline(cin,fathername);
//	cin.getline(fathername,20);
	cout << "How Old Are You : ";
	cin >> age;
	cout << "What is Your School Percentage : ";
	cin >> percentage;
	cout << "Enter Your Phone Numbere : ";
	cin >> phone;
	cout << "Are Your Intellegent or not, press 0 for not 1 for yer?";
	cin >> intel;
	cout << "If you are Intelelgent tell us what is the value of PI: ";
	cin >> pi;
	string info[] = {name,fathername,phone,to_string(age),percentage, intel, pi};
//	return info;
	return name + ", " + fathername + ", " + phone + ", " 
	+ to_string(age) + ", " + percentage + ", " + intel + ", " + pi;
}

int main(){

	fstream fio;
	fio.open("NewData.txt",ios::out|ios::in|ios::app);
	while(true){
		string info;
		int choice;
//		string abc = "123";
//		int ac = stoi(abc); // atoi() atof()
		cout << "Enter 1 to Insert Data : \n";
		cout << "Enter 2 to Show Data : \n";
		cout << "Enter 0 to End the Program : \n";
		cin >> choice;
		if (choice == 0) break;
		else if(choice == 1){
			info = getuserinfo();
			cout << info;
			fio << info << endl;
		}
		else{
			fio.seekg(0,ios::beg);
			while (fio){
		
			getline(fio,info);
			
			cout << info << endl;
	}
		}
		
		
	}


	
	fio.close();
	return 0;	
}
