/*
*Created for professor Jeniffer Cohen
*by Andrew Owen (yumaikas)
*This program gives a person their body-mass index based on their reported height and weight. 
*/

#include <iostream>
#include <hash_map>
#include <string>
//Keep from completely polluting the namspace (based on google's coding style conventions)
//See http://google-styleguide.googlecode.com/svn/trunk/cppguide.xml?showone=Namespaces#Namespaces
using std::cin;
using std::cout;
using std::endl;


//Get the mass
float promptMass(){
	float mass; 
	cout << "What is your weight? ";
	cin >> mass; 
	return mass;
}
//Get the weight
float promptHeight(){
	float height;
	cout << "What is your height? ";
	cin >> height;
	return height;
}

int main () {
	float mass = promptMass(); 
	float height = promptHeight();
	float body_mass_index = mass * 703 / (height * height); 
	cout << "Your body mass index is: " << body_mass_index; 
	system("pause");
	return 0;
}
