#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 10;
    //逻辑运算符 非
    cout << "!a = " << !a << endl; //0 10是非零数，所以!a的结果是false，输出0
    cout << "!!a = " << !!a << endl; //1 !a的结果是false，所以!!a的结果是true，输出1

    //逻辑运算符 与
    cout << (a && b) << endl; //1 a和b都是非零数，所以a && b的结果是true，输出1
    cout << (a && 0) << endl; //0 a是非零数，但0是零数，所以a && 0的结果是false，输出0
    cout << (0 && b) << endl; //0 0是零数，所以0 && b的结果是false，输出0
    cout << (0 && 0) << endl; //0 0是零数，所以0 && 0的结果是false，输出0

    //逻辑运算符 或
    cout << (a || b) << endl; //1 a和b都是非零数，所以a || b的结果是true，输出1
    cout << (a || 0) << endl; //1 a是非零数，所以a || 0的结果是true，输出1
    cout << (0 || b) << endl; //1 b是非零数，所以0 || b的结果是true，输出1
    cout << (0 || 0) << endl; //0 0是零数，所以0 || 0的结果是false，输出0   

    system("pause");
    return 0;
}