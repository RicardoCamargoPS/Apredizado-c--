
#include <iostream>


using namespace std;

int main()
{

    int num1, num2;

    cout << "Entre com dois numeros inteiros \n";
    cin >> num1 >> num2;

    if(num1 == num2){
        cout << num1 << " é igual ao " << num2 << endl;
    }
    if(num1 != num2){
        cout << num1 << " é diferente ao " << num2 << endl;        
    }
    if(num1 < num2){
        cout << num1 << " é menor ao " << num2 << endl;    

    }
    if(num1 > num2){
        cout << num1 << " é maior ao " << num2 << endl;
        
    }
    if(num1 >= num2){
        cout << num1 << " é maior igual ao " << num2 << endl;
        
    }
    if(num1 <= num2){
        cout << num1 << " é menor igual ao " << num2 << endl;
        
    }


    return 0;

}