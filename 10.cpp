#include <iostream>
#include <cmath>

using namespace std;

int main() {
  cout << "#9:-> Write a program to swap 2 no’s without using a third variable."<<endl;
  cout << "\n=============================================================";
  cout << "\nProgram Start here:->" << endl;
  cout << "\n+++++++++++++++++++++"<<endl;

  double first_number = 0, second_number =0;
  cout << "Type First Number: "<<endl;
  cin >> first_number;
  cout << "Type Second Number: "<<endl;
  cin >> second_number;

  cout << "BEFORE SWAP"<<endl;
  cout << "==========="<<endl;
  cout << "First Number = "<< first_number << " Second Number = " << second_number << endl;

  first_number = first_number + second_number;
  second_number = first_number - second_number;
  first_number = first_number - second_number;


  cout << "AFTER SWAP"<<endl;
  cout << "==========="<<endl;
  cout << "First Number = "<< first_number << " Second Number = " << second_number << endl;

  return 0;
}






