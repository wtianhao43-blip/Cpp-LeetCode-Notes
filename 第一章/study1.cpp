#include <iostream>
using namespace std;


struct node{
    int num;
    char cha;
}st;

void test_arr(){
    int array[2][3] ={
        {0,1,2},
        {3,4,5}
    };
    cout << &array[0][0] << " " << &array[0][1] << " " << &array[0][2] << endl;
    cout << &array[1][0] << " " << &array[1][1] << " " << &array[1][2] << endl;
}
int main ()
{
    // int a[100];
    // char b[100];
    // cout << sizeof(int) << endl;
    // cout << sizeof(char) << endl;
    // cout << sizeof(a) << endl;
    // cout << sizeof(b) << endl;
    // cout << sizeof(st) << endl;
    // return 0;
    test_arr();
}