//simple calculator in C++
#include<iostream>
using namespace std;

int main(){
	int a,b,sum,sub,multi,modulas;
	float div;
	char op;
	cout<<"Enter the number of A :";
	cin>>a;
	cout<<"Enter the number of B :";
	cin>>b;
	cout<<"Enter your opreator(+,-,*,/,%):";
	cin>>op;
	switch(op){

		case '+':
		sum=a+b;
		cout<<"Sum of two number(a+b)="<<sum<<endl;
		break;
		
		case '-': 
		sub=a-b;
		cout<<"Subtraction of two number(a-b)="<<sub<<endl;
		break;
		
		case '*': 
		multi=a*b;
		cout<<"Multiplication of two number(a*b)="<<multi<<endl;
		break;
		
		case  '/':
		div=a/b;
		cout<<"Divide of two number(a/b)="<<div<<endl;
		break;
		
		case '%':
		modulas=a%b;
		cout<<"Modulas of two number(a%b)="<<modulas<<endl;
		break;
	 default:
		cout<<"invlide your opreators:";
		break;
	}
	return 0;
}
