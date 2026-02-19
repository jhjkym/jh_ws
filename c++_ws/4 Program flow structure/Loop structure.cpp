#include<iostream>
using namespace std;

int main(){
    //while循环
    int count = 0;
    while(count < 5){
        cout << "Count: " << count << endl;
        count++;
    }

    //do-while循环
    int num = 0;
    do{
        cout << "Num: " << num << endl;
        num++;
    }while(num < 5);

    //for循环
    for(int i = 0; i < 5; i++){
        cout << "i: " << i << endl;
    }
    
    system("pause");
    return 0;
}