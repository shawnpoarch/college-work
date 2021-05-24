//Shawn Poarch
//Lab 2
#include <iostream>
using namespace std;

int main()
{
	//part 1
	int a = 5, b = 12, c = 65;
	double x = 3.4, z = 9.1;

	cout << b / a << endl;

	cout << x * a << endl;

	cout << static_cast<double>(b/a) << endl;

	cout << static_cast<double>(b)/a << endl;

	cout << static_cast<double>(a) << endl;

	cout << static_cast<double>(b )/ static_cast<double>(a) << endl;

	cout << b / static_cast<int>(x) << endl;

	cout << static_cast<int>(x) * static_cast<int> (z) << endl;

	cout << static_cast<int>(x*z) << endl;

	cout << static_cast<double>(static_cast<int> (x) * static_cast<int>(z)) << endl;

	//part 2
	double F = 75;
	double C = (F - 32) * 5.0/9.0 ;
	 
	cout << C << endl;                        

	
	double cel = 0;
	double  far = (9.0 * cel) / 5.0 + 32;
	cout<< far << endl;
//part 3

	string Name= "Shawn";
	string City = "Victoria";
	string	College= "UHV";
	string Profession = "Programmer";
	string Animal= "dog";
	string	PetName = "Princess";
	int age = 46;
		
	cout << "There once was a person named " << Name << " who lived in " << City << ". At the age of " << age << ", "
		<< Name << " went to college at " << College << ". Name graduated and went to work as a " << Profession << ".Then, " << Name << " adopted a(n)  " << Animal << " named " << PetName << " .They both lived happily ever after!" << endl;
	

}