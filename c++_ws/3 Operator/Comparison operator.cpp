#include<iostream>
using namespace std;

int main(){
    int a =10;
    int b =20;

    cout << "a == b : " << (a == b) << endl; //0 10不等于20，所以结果是false，输出0
    cout << "a != b : " << (a != b) << endl; //1 10不等于20，所以结果是true，输出1
    cout << "a > b : " << (a > b) << endl; //0 10不大于20，所以结果是false，输出0
    cout << "a < b : " << (a < b) << endl; //1 10小于20，所以结果是true，输出1
    cout << "a >= b : " << (a >= b) << endl; //0 10不大于等于20，所以结果是false，输出0
    cout << "a <= b : " << (a <= b) << endl; //1 10小于等于20，所以结果是true，输出1 

    system("pause");
    return 0;
}