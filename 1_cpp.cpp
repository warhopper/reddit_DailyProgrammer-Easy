#include <iostream>
#include <string>
#include <fstream>
using namespace std;
//https://www.reddit.com/r/dailyprogrammer/comments/pih8x/easy_challenge_1/
int main()
{
   string name, userName;
   int age;
   cout << "Please enter the following information" << endl;
   cout << "Name? ";
   cin >> name;
   cout << "\nAge? ";
   cin >> age;
   cout << "\nReddit username? ";
   cin >> userName;
   cout << "Your name is " << name << ", you are " << age << " years old, \n";
   cout << " and your username is " << userName;


   ofstream outF;
   outF.open("userINFO.txt");
   outF << "Your name is " << name << ", you are " << age << " years old, \n";
   outF << " and your username is " << userName;

   char quit = cin.get();
   return 0;
}
