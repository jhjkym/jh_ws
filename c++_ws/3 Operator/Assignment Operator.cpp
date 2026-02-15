#include<iostream>
using namespace std;

int main(){

    //赋值运算符
    // =
    int a1 = 10; //将10赋值给a1
    int a2 = a1; //将a1的值赋值给a2
    cout << "a1 = " << a1 << endl; //10
    cout << "a2 = " << a2 << endl; //10

    //+=
    int a3 = 10;
    a3 += 5; //a3 = a3 + 5;
    cout << "a3 = " << a3 << endl; //15

    //-=
    int a4 = 10;
    a4 -= 3; //a4 = a4 - 3;
    cout << "a4 = " << a4 << endl; //7

    //*=
    int a5 = 10;
    a5 *= 2; //a5 = a5 * 2;
    cout << "a5 = " << a5 << endl; //20

    // /=
    int a6 = 10;
    a6 /= 4; //a6 = a6 / 4;
    cout << "a6 = " << a6 << endl; //2 10除以4结果是2.5，但因为a6是整数，所以结果是2

    // %=
    int a7 = 10;
    a7 %= 3; //a7 = a7 % 3;
    cout << "a7 = " << a7 << endl; //1 10除以3的商是3，余数是1

    system("pause");
    return 0;

}   