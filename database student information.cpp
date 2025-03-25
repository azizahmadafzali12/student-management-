#include <fstream>  
#include <iostream>  
using namespace std;  
int main () {  
   char input[75];  
   ofstream file;  
   file.open("database.txt");  
   cout <<"Writing to a text file:" << endl;  
   cout << "Please Enter your name: ";   
   cin.getline(input, 100);  
   file << input << endl;  
   cout << "Please Enter your age: ";   
   cin >> input;  
   cin.ignore();  
   file << input << endl;  
   file.close();  
   ifstream is;   
   string line;  
   is.open("database.txt");   
   cout << "Reading from a text file:" << endl;   
   while (getline (is,line))  
   {  
   cout << line << endl;  
   }      
   is.close();  
   return 0;  
}
