#include<iostream>
using namespace std;

int main(){
    //三目运算符
    int a = 10, b = 20;
    int max = (a > b) ? a : b; //如果a大于b，则max等于a，否则max等于b
    cout << "Max: " << max << endl;

    system("pause");
    return 0;
}