#include<iostream>
#include<cstring>
using namespace std;
int main()
{
int* p = new int;
int* p2 = p;
*p = 10;
delete p;
//chuong trinh chua thuc hien xong khong delete
cout << *p2;
delete p2;
}
