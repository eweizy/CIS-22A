//Eric Wei, Assignment 2, Xcode

#include <iostream>
using namespace std;

int main()
{
    double ass1, ass2, ass3, ass4, ass5, ass6, ass7, lab_ex, midterm, final;
    
    cout << "Enter points for assignment 1 => ";
    cin >> ass1;
    cout << "Enter points for assignment 2 => ";
    cin >> ass2;
    cout << "Enter points for assignment 3 => ";
    cin >> ass3;
    cout << "Enter points for assignment 4 => ";
    cin >> ass4;
    cout << "Enter points for assignment 5 => ";
    cin >> ass5;
    cout << "Enter points for assignment 6 => ";
    cin >> ass6;
    cout << "Enter points for assignment 7 => ";
    cin >> ass7;
    cout << "Enter total points for lab exercises => ";
    cin >> lab_ex;
    cout << "Enter points for midterm => ";
    cin >> midterm;
    cout << "Enter points for final => ";
    cin >> final;
    cout << endl << "The assignment points are " << ass1 << "   " << ass2 << "   " << ass3 << "   " << ass4 << "   " << ass5 << "   " << ass6 << "   " << ass7 << '\n' << '\n';
    
    //calculates average assignment grade
    double ass_tot, ass_avg, class_tot, percent_tot;

    ass_tot = ass1 + ass2 + ass3 + ass4 + ass5 + ass6 + ass7; //Total assignment points
    ass_avg = ass_tot / 7; //average assignment points
    class_tot = ass_tot + lab_ex + midterm + final; //total class points
    percent_tot = class_tot / 400 *100; //percent of total
    
    cout << "The average assignment grad is " << ass_avg << '\n' << '\n';
    cout << "Total assignment points = " << ass_tot << '\n';
    cout << "Lab exercsise points    = " << lab_ex << '\n';
    cout << "Midterm points          = " << midterm << '\n';
    cout << "Final points            = " << final << '\n';
    cout << "                          ---" << '\n';
    cout << "Total points            = " << class_tot << '\n' << '\n';
    cout << "Percent of total        = " << percent_tot << "%" << '\n';
    
}