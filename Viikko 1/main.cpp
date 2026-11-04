#include <iostream>

using namespace std;


void calcSum(int a, int b){

    int Sum = a + b;

    cout << "Summa:" << Sum << endl;



}

void calcDiv(int a, int b){

    int Div = a - b;


    if(b == 0){

        throw std::runtime_error("jakaja ei saa olla nolla!");

    } else {

      cout << "Erotus:" << Div << endl;


    }
}

int retSum(int a, int b){

    int Sum = a + b;
    return Sum;



}

int retDiv(int a, int b){

    float Div = a - b;
    return Div;



}
int main()
{
    int a;
    int b;

    cout << "Anna ensimmainen luku";
    cin >> a;

    cout << "Anna toinen luku";
    cin >> b;


    calcSum(a, b);
    calcDiv(a, b);
    return 0;
}










