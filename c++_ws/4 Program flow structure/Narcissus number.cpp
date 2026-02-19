#include<iostream>
using namespace std;

/*求出所有3位数中的水仙花数*/
int main(){
    cout << "所有3位数中的水仙花数有：" << endl;
    for(int i = 100; i <= 999; i++){
        int a = i / 100; //百位
        int b = (i / 10) % 10; //十位
        int c = i % 10; //个位
        if(i == a*a*a + b*b*b + c*c*c){
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}