/*
*Created for professor Jeniffer Cohen
*by Andrew Owen (yumaikas)
*This program calculates the property tax for a piece of land.*/
#include <iostream>
#include <string>
#include <iomanip> 
//Keep from completely polluting the namspace (based on google's coding style conventions)
//See http://google-styleguide.googlecode.com/svn/trunk/cppguide.xml?showone=Namespaces#Namespaces
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::setprecision; 
using std::fixed; 

double getAssessmentValue(double land_value){
    return land_value * 0.6; 
}

double getTax(double assessment){
    return (double)((int)(assessment / 100) * 0.64); 
}
int main(){

    double land_value; 
    cout << "What is the value of your land? $";
    cin >> land_value; 
    double assessment =  getAssessmentValue(land_value); 
    cout << "The assessment value of your land is $" << assessment << endl; 
    cout << "The tax on your land is $" << fixed << setprecision(2) << getTax(assessment) << endl;
    system("pause");
    return 0;
}