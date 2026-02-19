#include<iostream>
#include<stdlib.h>
using namespace std;

/*
系统随机生成一个1到100之间的数字，玩家进行猜测，如果猜错，提示玩家数字过大或过小，如果猜对恭喜玩家胜利，并且退出游戏。
*/

int main(){
    //随机生成一个1到100之间的数字
    int number = rand() % 100 + 1;
    int guess;
    cout << "欢迎来到猜数字游戏！请猜一个1到100之间的数字。" << endl;
    while(true){
        cin >> guess;
        if(guess < number){
            cout << "数字过小，请再试一次。" << endl;
        } else if(guess > number){
            cout << "数字过大，请再试一次。" << endl;
        } else {
            cout << "恭喜你，猜对了！" << endl;
            break;
        }
    }
    return 0;
}