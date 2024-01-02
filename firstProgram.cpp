
#include <iostream>


using namespace std;

int main()
{

    int counter, grade, total, avarage;

    total = 0;
    counter = 1;

    while (counter <= 10){

        cout << " Enter grade: ";
        cin >> grade;
        total = total + grade;
        counter = counter + 1;
    }

    avarage = total / 10;
    cout << "Class avarage is " << avarage << endl;

    return 0;

}