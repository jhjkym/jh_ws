#include<iostream>
using namespace std;

int main(){
    cout<<""<<"Size of int: "<<sizeof(int)<<" bytes"<<endl; // 4 bytes
    cout<<""<<"Size of short int: "<<sizeof(short int)<<" bytes"<<endl; // 2 bytes
    cout<<""<<"Size of long int: "<<sizeof(long int)<<" bytes"<<endl; // 4 bytes on 32-bit systems, 8 bytes on 64-bit systems
    cout<<""<<"Size of long long int: "<<sizeof(long long int)<<" bytes"<<endl; // 8 bytes

    system("pause");
    return 0;
}