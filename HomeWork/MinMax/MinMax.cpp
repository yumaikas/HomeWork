/*
*Created for professor Jeniffer Cohen
*by Andrew Owen (yumaikas)
*This program finds the largest and smallest numbers in an entered list of numbers*/
#include <iostream>
#include <string>
#include <vector>
//Keep from completely polluting the namspace (based on google's coding style conventions)
//See http://google-styleguide.googlecode.com/svn/trunk/cppguide.xml?showone=Namespaces#Namespaces
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(){
    cout << "Enter a list of numbers, seperated by newlines, and end the list with -99" << endl;
    vector<int> nums; 
    bool finished = false;
    //Get the inputs into a vector
    while(!finished){
      int input = -99;
      cin >> input;
      finished = (input == -99);   
      if (finished) { break; }
      nums.push_back(input);
    }
    //Find the max and the min, and start with a priming read so that we get the true max and min.
    int max, min = 0; 
    max = nums.front(); 
    min = nums.front();
    //Find the max and min. 
    for(auto it = nums.begin(); it != nums.end(); it++)
    {
        int a = *it;
        if (a > max) { max = a; }
        if (a < min) { min = a; }
    }
    cout << "The max of the list is: " << max << endl;
    cout << "The min of the numbers is: " << min << endl;
    system("pause");
    return 0;

}