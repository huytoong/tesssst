#include<iostream>
using namespace std;
int main(){
	int a=1000000;
	int *ptr;
	ptr=&a; (*ptr)=99;
	cout<<&a;
}
