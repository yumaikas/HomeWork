/*
*Created for professor Jeniffer Cohen
*by Andrew Owen (yumaikas)
*This program estmates a paint job for a client with large square footage needs.  
*/
#include <iostream>
#include <string>
//Keep from completely polluting the namspace (based on google's coding style conventions)
//See http://google-styleguide.googlecode.com/svn/trunk/cppguide.xml?showone=Namespaces#Namespaces
using std::cin;
using std::cout;
using std::endl;
using std::string;
    double const COST_LABOR_HOUR = 20.00; 
    int const AREA_FACTOR = 115;

struct PaintJobEstimate {
    public: 
    int num_gallons;
    int hours_labor;
    double paint_total;
    double labor_charge(){
        return hours_labor * COST_LABOR_HOUR;
    }
    
    double get_total_cost(){
        return paint_total + labor_charge(); 
    }
    

};

PaintJobEstimate runEstimate(int square_feet, double cost_paint){
      PaintJobEstimate estimate;
      estimate.num_gallons = square_feet / AREA_FACTOR;  
      estimate.hours_labor = estimate.num_gallons * 8;
      estimate.paint_total = estimate.num_gallons * cost_paint; 
      return estimate; 
}

int main(){
    int square_feet; 
    double cost_paint; 
    cout << "Enter the number of square feet that you want painted: ";
    cin >> square_feet; 
    cout << "Enter the cost of a gallon of paint: $";
    cin >> cost_paint; 
    {
    auto est = runEstimate(square_feet, cost_paint); 
    cout << "The job is going to require " << est.num_gallons << " gallons of paint" << endl; 
    cout << "And " << est.hours_labor << " hours of labor are going to be needed" << endl; 
    cout << "The paint is going to cost $" <<  est.paint_total << 
            " and the labor is going to cost $" <<  est.labor_charge() << "." << endl; 
    cout << "In all, the total cost is $" << est.get_total_cost() << endl; 
    }
    system("pause");
    return 0;  
}