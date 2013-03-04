/*
*Created for professor Jeniffer Cohen
*by Andrew Owen (yumaikas)
*This program gives a person their body-mass index based on their reported height and weight. 
*/

#include <iostream>
#include <string>
//Keep from completely polluting the namspace (based on google's coding style conventions)
//See http://google-styleguide.googlecode.com/svn/trunk/cppguide.xml?showone=Namespaces#Namespaces
using std::cin;
using std::cout;
using std::endl;
using std::string;

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
	cout << endl;
	return height;
}

string bmiStatus(float bmi)
{
	if(bmi > 25.0){
		return "are overweight.";
	} else if (bmi > 18.5){
		return "have an ideal weight.";
	} else {
		return "are underweight.";
	}
}
int main () {
	cout << "DISCLAMER: Body mass index is only one measure of health, " <<endl 
		 << "not the final word. Please to not take this calculation too seriously." << endl;
	float mass = promptMass(); 
	float height = promptHeight();
	float body_mass_index = mass * 703 / (height * height); 
	cout << "Your body mass index is: " << body_mass_index << endl; 
	cout << "According the the math, you " << bmiStatus(body_mass_index) << endl; 
	system("pause");
	return 0;
}
