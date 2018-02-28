#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include "DynamicArray.h"
//using namespace std;
int main()
{
    try {
    DynamicArray arr(5, 4);
    DynamicArray arr1(4,11);
    DynamicArray arr3(arr);
   
    DynamicArray arr4(4,7);
    //DynamicArray arr5(-2, 5);
   // cout << "arr: " << arr;
    DynamicArray arr6(std::move(arr));
   // cout << "arr3: " << arr3;
  //  cout << "arr6: " << arr6 << endl;
   // cout << "arr: " << arr << endl;
    //cout << arr1;
   // cout << endl;
   // cout << arr3;
   // cout << endl;
   // cout << "__" << arr1.getLength();
   // cout << "arr1: " << arr1;
   // arr1.resize(10);
    cout << "arr1: " << arr1 << endl;
    arr1.pushBack(7);
    arr1.pushBack(4);
    cout << "arr1: " << arr1;
    arr3.resize(3);
    cout << "arr3: " << arr3;
   // cout << "_____" << arr1[8] << endl;
    arr4 = arr1;
    cout << "arr4: " << arr4;
   /* cout << "arr4 " << arr4 << endl;
    cout << "arr + arr4 " << arr + arr4 << endl;
    cout << "arr4 == arr1 " << (arr4 == arr1) << endl;
    
    cout << "arr4 != arr1 " << (arr4 != arr1) << endl;
    cout << "arr4 > arr " << (arr4 > arr) << endl;
    cout << "arr4 >= arr " << (arr4 >= arr) << endl;
    cout << "arr4 < arr " << (arr4 < arr) << endl;
    cout << "arr4 <= arr " << (arr4 <= arr) << endl;

    cout << "arr " <<  arr;
    cin >> arr;
    cout << "arr " << arr;
    cout << "arr3: " << arr[2]; */
}
    catch (char* s) {
        cout << s << endl;
    }

   
    
    _getch();
    return 0;
}

