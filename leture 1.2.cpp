#include<iostream>
using namespace std;

class Cricket{
	public :
		void overs(int overs){
			cout<<"you get"<<overs<<"overs in this formet "<<endl;
		} 
};
class T20match : public Cricket{
	public :
		void setvalue(){
			cout<<" In T20";
		}
		
};
class testmatch : public Cricket{
	public :
		void setvalue2(){
			cout<<"in test";
		}
};
int main(){
	T20match t;
	testmatch t2;
	t.setvalue();
	t2.setvalue2();
	t2.Cricket::overs(20);
	t2.setvalue2();
	t2.Cricket::overs(90);
	t2.setvalue2();
	return 0;
	
}
