#include<iostream>
using namespace std;

int main(){
    //1.加减乘除 2.取模 
    int a1 = 10;
    int b1 = 3;

    cout << "a1 + b1 = " << a1 + b1 << endl; //13
    cout << "a1 - b1 = " << a1 - b1 << endl; //7
    cout << "a1 * b1 = " << a1 * b1 << endl; //30
    cout << "a1 / b1 = " << a1 / b1 << endl; //3  两个整数相除结果依然是整数
    cout << "a1 % b1 = " << a1 % b1 << endl; //1 取模运算，结果是10除以3的余数

    int a2 = 10;
    int b2 = 20;

    cout << "a2 / b2 = " << a2 / b2 << endl; //0 10除以20结果是0.5，但因为a2和b2都是整数，所以结果是0
    cout << "a2 % b2 = " << a2 % b2 << endl; //10 10除以20的商是0，余数就是10

    int a3 = 10;
    int b3 = 0;
    //cout << "a3 / b3 = " << a3 / b3 << endl; //运行时错误，除数不能为0
    //cout << "a3 % b3 = " << a3 % b3 << endl; //运行时错误，除数不能为0

    //两个小数可以相除
    double d1 = 0.5;
    double d2 = 0.25;
    cout << "d1 / d2 = " << d1 / d2 << endl; //2
    //两个小数不可以取模
    double d3 = 3.14;
    double d4 = 1.11;
    //cout << "d3 % d4 = " << d3 % d4 << endl; //编译错误，取模运算只能用于整数

    //3.递增
    int a4 = 10;
    cout << "a4 = " << a4 << endl; //10
    a4++; //a4 = a4 + 1;
    cout << "a4 = " << a4 << endl; //11
    ++a4; //a4 = a4 + 1;
    cout << "a4 = " << a4 << endl; //12
    //区别：a4++是后置递增，先使用a4的值再递增；++a4是前置递增，先递增再使用a4的值
    int a5 = 10;
    int b5 = ++a5 * 10; //a5先递增为11，再乘以10，结果是110
    cout << "a5 = " << a5 << endl; //11
    cout << "b5 = " << b5 << endl; //110
    int a6 = 10;
    int b6 = a6++ * 10; //a6先使用10乘以10，结果是100，再递增为11
    cout << "a6 = " << a6 << endl; //11
    cout << "b6 = " << b6 << endl; //100

    //4.递减
    int a7 = 10;
    cout << "a7 = " << a7 << endl; //10
    a7--; //a7 = a7 - 1;
    cout << "a7 = " << a7 << endl; //9
    --a7; //a7 = a7 - 1;
    cout << "a7 = " << a7 << endl; //8
    //区别：a7--是后置递减，先使用a7的值
    //再递减；--a7是前置递减，先递减再使用a7的值
    int a8 = 10;
    int b8 = --a8 * 10; //a8先递减为9，再乘以10，结果是90
    cout << "a8 = " << a8 << endl; //9
    cout << "b8 = " << b8 << endl; //90
    int a9 = 10;
    int b9 = a9-- * 10; //a9先使用10乘以10，结果是100，再递减为9
    cout << "a9 = " << a9 << endl; //9
    cout << "b9 = " << b9 << endl; //100
    
    system("pause");
    return 0;
}