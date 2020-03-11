// Simple_Quadratic_formula_calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include<limits>
#include <iomanip>
#include <cstring>
#include <string>
using namespace std;

void calculator();
void final_output();
int non_real_check();
int non_real_confirmation = 0;
double a, b, c, discriminant;
double root_1, root_2;


int main()
{
    string con = "";
    cout << "welcome to the Quadratic formula calculator" << "\n";
    system("pause");
    cout << "a quadratic equation is of the form ax^2 + bx +c" << "\n";
    system("pause");
    cout << "enter a real number value for a" << "\n";
    cin >> a;
    while (1)
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "You have entered wrong input" << endl;
            cout << "please enter a number for variable a:";
            cin >> a;
        }
        if (!cin.fail())
            break;
    }
    
    

    cout << "enter a real number value for b" << "\n";
    cin >> b;
    while (1)
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "You have entered wrong input" << endl;
            cout << "please enter a number for variable b:";
            cin >> b;
        }
        if (!cin.fail())
            break;
    }
    
    
    
    cout << "enter a real number value for c" << "\n";
    cin >> c;

    while (1)
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "You have entered wrong input" << endl;
            cout << "please enter a number for variable c:";
            cin >> c;
        }
        if (!cin.fail())
            break;
    }
    cout << "the numbers you entered are: a="<< a << " " <<"b=" << b <<" "<< "c=" <<c<< endl;
    cout << "\n";
    cout << "calculating roots"<< "\n";
    system("pause");

    calculator();
    non_real_confirmation = non_real_check();
    

    
    
    if (non_real_confirmation == 1)
    {
        final_output();

        cout << "would you like to enter more values? Y/N:" << "\n";
        cin >> con;
        while (con != "N" || con != "n")
        {
            if (con == "y" || con == "Y")
            {
                cout << "enter a real number value for a" << "\n";
                cin >> a;
                while (1)
                {
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "You have entered wrong input" << endl;
                        cout << "please enter a number for variable a:";
                        cin >> a;
                    }
                    if (!cin.fail())
                        break;
                }



                cout << "enter a real number value for b" << "\n";
                cin >> b;
                while (1)
                {
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "You have entered wrong input" << endl;
                        cout << "please enter a number for variable b:";
                        cin >> b;
                    }
                    if (!cin.fail())
                        break;
                }



                cout << "enter a real number value for c" << "\n";
                cin >> c;

                while (1)
                {
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "You have entered wrong input" << endl;
                        cout << "please enter a number for variable c:";
                        cin >> c;
                    }
                    if (!cin.fail())
                        break;
                }
                cout << "the numbers you entered are: a=" << a << " " << "b=" << b << " " << "c=" << c << endl;
                cout << "\n";
                cout << "calculating roots" << "\n";
                system("pause");
                calculator();

                non_real_confirmation = non_real_check();
                if (non_real_confirmation == 1)
                {
                    final_output();
                }
                cout << "Would you like to enter different values? Y/N:" << "\n";
                cin >> con;
            }
            else if (con == "n" || con == "N")
            {
                return 0;
            }
            else if (con != "n" || con != "N" || con != "y" || con != "Y")
            {
                cout << "invalid input please input either Y or N" << "\n";
                cin >> con;
            
            }
        }

    }
    
    else if (non_real_confirmation == 0)
    {
        cout << "the discriminant is less than zero resulting in non-real answers" << "\n";
        system("pause");
        cout << "Would you like to enter different values? Y/N:" << "\n";
        cin >> con;
        while (con != "N" || con != "n")
        {


            if (con == "y" || con == "Y")
            {
                cout << "enter a real number value for a" << "\n";
                cin >> a;
                while (1)
                {
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "You have entered wrong input" << endl;
                        cout << "please enter a number for variable a:";
                        cin >> a;
                    }
                    if (!cin.fail())
                        break;
                }



                cout << "enter a real number value for b" << "\n";
                cin >> b;
                while (1)
                {
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "You have entered wrong input" << endl;
                        cout << "please enter a number for variable b:";
                        cin >> b;
                    }
                    if (!cin.fail())
                        break;
                }



                cout << "enter a real number value for c" << "\n";
                cin >> c;

                while (1)
                {
                    if (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "You have entered wrong input" << endl;
                        cout << "please enter a number for variable c:";
                        cin >> c;
                    }
                    if (!cin.fail())
                        break;
                }
                cout << "the numbers you entered are: a=" << a << " " << "b=" << b << " " << "c=" << c << endl;
                cout << "\n";
                cout << "calculating roots" << "\n";
                system("pause");
                calculator();

                non_real_confirmation = non_real_check();
                if (non_real_confirmation == 1)
                {
                    final_output();
                }
                cout << "Would you like to enter different values? Y/N:" << "\n";
                cin >> con;
            }
            else if (con == "n" || con == "N")
            {
                return 0;
            }
            else if (con != "n" || con != "N" || con != "y" || con != "Y")
            {
                cout << "invalid input please input either Y or N" << "\n";
                cin >> con;

            }
        }
        
    }
    return 0;
}

void calculator()
{
  
   discriminant = ((b * b) - (4 * a * c));

    root_1 = (((-b) + sqrt(discriminant)) / (2 * a));
    root_2 = (((-b) - sqrt(discriminant))/ (2 * a));
}
void final_output()
{
    if (root_1 == root_2)
    {
        cout << "the roots are repeated the answer is" << " " << root_1 << "\n";
    }
    else if (root_1 != root_2)
    {

        cout << "root 1 is" << " " << root_1 << "\n" ;
    
        cout << "root 2 is" << " " << root_2 << "\n" ;
    }
    
}
int non_real_check()
{
    if (discriminant > 0 || discriminant==0)
    {
        return 1;
    }
    else if(discriminant < 0)
    {
        return 0;
    
    }
 
}