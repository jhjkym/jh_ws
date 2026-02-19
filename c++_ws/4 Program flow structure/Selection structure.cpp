#include<iostream>
using namespace std;

int main(){
    //单行格式if语句
    //输入一个分数，如果分数大于600分，视为考上一本大学，并在屏幕上打印
    int score = 0;
    cout << "请输入分数："<<endl;
    cin >> score;
    if(score > 600){
        cout << "恭喜你，考上一本大学！" << endl;
    }

    //多行格式if语句
    //输入一个分数，如果分数大于600分，视为考上一本大学，并在屏幕上打印；否则视为考上二本大学，并在屏幕上打印
    if(score > 600){
        cout << "恭喜你，考上一本大学！" << endl;
    }else{
        cout << "恭喜你，考上二本大学！" << endl;
    }
    
    //多条件的if语句
    //输入一个分数，如果分数大于600分，视为考上一本大学，并在屏幕上打印；如果分数大于500分，视为考上二本大学，并在屏幕上打印；否则视为考上三本大学，并在屏幕上打印
    if(score > 600){
        cout << "恭喜你，考上一本大学！" << endl;
    }else if(score > 500){
        cout << "恭喜你，考上二本大学！" << endl;
    }else{
        cout << "恭喜你，考上三本大学！" << endl;
    }

    system("pause");
    return 0;
}