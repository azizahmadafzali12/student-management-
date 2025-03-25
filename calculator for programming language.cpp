#include <iostream>
#include <string.h>
using namespace std;
long double add(long double a, long double b){ // Both Delcaration and Definition
	long double res = a + b;
	return res;
}
long double sub(long double a, long double b){ // Both Delcaration and Definition
	long double res = a - b;
	return res;
}
long double mult(long double a, long double b){ // Both Delcaration and Definition
	long double res = a * b;
	return res;
}
long double divide(long double a, long double b){ // Both Delcaration and Definition
	long double res = a / b;
	return res;
}

long double calculate(long double, char, long double); // Function Declaration


int main(){
	long double num1, num2, res;
	char op;
	int count = 0;
	while (true){
if (count == 0){
	cout << "Enter an Expression like (num1 op num2): ";
	cin >> num1;
	count++;
}else cout << "Enter an Expression like (op num2) (+,-,*,/) E exit C for Clear: ";
//	cout << "ENter an Operator (+,-,*,/) E exit C for Clear: ";
	cin >> op;
	if (op == 'e' || op == 'E') break;
	if (op == 'c' || op == 'C'){
		count = 0;
		continue;
	} 
//	cout << "Enter Second Number: ";
	cin >> num2;
	res = calculate(num1,op, num2);
		num1 = res;
		cout << "Result is " << res << endl;
	}		
	return 0;
}







long double calculate(long double num1, char op, long double num2){
	long double res;
	switch(op){
		case '+': // if (op == '+')
			res = add(num1,num2);
			break;
		case '-':
			res = sub(num1,num2);
			break;
		case '*':
			res = mult(num1,num2);
			break;
		case '/':
			res = divide(num1,num2);
			break;
		default:
			cout << "Invalid Operator only +,-,*,/ Allowed: "<<endl;
			res = 0;
	}
	return res;
	
}
