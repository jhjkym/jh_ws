#include<iostream>
using namespace std;

int main(){
    cout<< "1" <<endl;
    goto label; //跳转到label标签处
    cout<< "2" <<endl; //这行代码不会被执行
    label: //标签定义
    cout<< "3" <<endl;
    system("pause");
    return 0;
}