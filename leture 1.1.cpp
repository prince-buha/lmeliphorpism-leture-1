#include<iostream>
using namespace std;

class Operations{
	public :
	void calculate(int x,int y){
		cout<<"the division "<<x<<"And"<<y<<" is :"<<x/y<<endl;
		}
	void calculate(int x,int y,int z){
			cout<<"The subtraction "<<x<<"-"<<y<<"-"<<z<<" is:"<<x-y-z<<endl;
		}
	void calculate(int x,int y,int z,int a){
		cout<<"The multiplication "<<x<<"*"<<y<<"*"<<a<<" is :"<<x*y*z*a<<endl;
	}
	void calculate(int x,int y,int z,int a,int b){
		cout<<"The addition "<<x<<"+"<<y<<"+"<<z<<"+"<<a<<"+"<<b<<" is:"<<x+y+z+a+b<<endl;
	}
		
};
int main(){
	Operations o1;
	o1.calculate(9,8,7,6);
	return 0;
	
}
