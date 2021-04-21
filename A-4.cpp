#include<iostream>
using namespace std;
int* count()
{
	int a = 10;
	int *p = &a;
	delete p;
	return p;
}
int main()
{
    cout<<count;
    //gia tri con tro p khac gia tri bien dia phuong ban dau
}
