#include<iostream>
using namespace std;

int main()
{
    int num1, num2;
    int sum;
    cout<< "Sum calculator\n";;
    cout<< "If Vencer have (enter number of apple): ";
    cin >> num1;
    
    cout<< "and James have (enter number of apple): ";
    cin >> num2;

    sum = num1 + num2;
    
    cout << "How many do they have in total?: " << sum << endl;
    
    return 0;
}
