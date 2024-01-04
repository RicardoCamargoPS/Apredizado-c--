
#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
    float avarage;
    int counter, grade, total;

    total = 0;
    counter = 0;

    cout << "Entre grade , -1 para o fim ";
    cin >> grade;

    while(grade != -1){
        total = total + grade;
        counter = counter + 1;
        cout  << "Enter grade,  -1  para o fim: ";
        cin >> grade;
    }

    if(counter != 0 ){
        avarage = (float) total / counter;
        cout << "Class avarage is " << setprecision(2) << setiosflags(ios::fixed | ios::showpoint) << avarage << endl; 
    }
    else
        cout << "No grades  were entered" << endl;

    return 0;
}