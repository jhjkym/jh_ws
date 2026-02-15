#include<iostream>
#include<string> //引入string头文件，使用C++风格字符串
using namespace std;

int main(){
    //1.C风格字符串
    char str[] = "Hello World"; //字符串常量，编译器会自动在末尾添加一个'\0'作为字符串结束标志
    cout << str << endl; //输出字符串

    //2.C++风格字符串
    string str2 = "Hello C++"; //string是C++标准库中的字符串类，使用起来更方便
    cout << str2 << endl; //输出字符串

    system("pause");
    return 0;
}