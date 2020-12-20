// webniar C++ varibles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void printfirstchar(char* a) {
    cout << *a;
    
}
void modify(char* a) {
    *a = '%';
    *(a + 1) = '%';
}
void swap(int* num1, int* num2) {
    int temp = *num1;
    *num2 = *num1;
    *num2 = temp;
}
int main()
{
    int num1 = 10;
    int num2 = 34;
    cout << num1 << endl;
    cout << num2 << endl;
    swap(&num1, &num2);
    cout << num1 << endl;
    cout << num2 << endl;

    int numC = 6;
    int* p_numC;//the star is a pointer
    p_numC = &numC;//will get memory address of numc and put into p_numC
    cout << numC << endl;
    cout << p_numC << endl;

    //wild pointer, don't do it
    //int* f;
    //*f = 1424;

    int i;
    i = 20;

    int* ptr;
    ptr = &i;//"&" is adress location

    *ptr = 30;
    cout << *ptr;

    //arrays and pointers
    int myarray[5] = { 10,20,30,50,5 };
    for (int i = 0; i < 5; i++) {
        cout << myarray[i] << endl;
    }

    ptr = &myarray[0];
    cout << *ptr<<endl;
    ptr = ptr + 2;//arthmetic pointer
    cout << *ptr;

    for (int i = 0; i < 5; i++) {
        cout << *(ptr+i) << endl;
        
    }
    cout << endl;
    //pointers with string
    char string[] = "test";

    cout << string << endl;

    char* ptr_string = &string[0];
    
    *ptr_string = 'a';
    *(ptr_string + 1) = 'a';
    cout << string << endl;
    cout << endl;

    char string2[] = "this is a test string";
    printfirstchar(string2);
    modify(string2);
    cout << string2 << endl;

    double w[3] = { 1.0,2.0,5.0 };
    //2 ways
    double* pw = w;
    cout << "w[0]" << w[0] << endl;

    cout << "w[0]" <<*pw << endl;
}
