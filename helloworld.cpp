#include<iostream>
using namespace std;
namespace c{
	class cnm{
		public:
			void cc(){
				int b=4;
				while(b){
					do{
						for(int c=0;c<1;c++){
							if(b==1){
								cout<<"helloworld"<<endl;
							}
						}
						b--;
					}while(b);
				}
			}
	
	};
}
void fun(){
	int b=4;
	while(b){
		do{
			for(int c=0;c<1;c++){
				if(b==1){
					c::cnm ccc;
					ccc.cc();
				}
			}
			b--;
		}while(b);
	}
}
int main(){
	int i=1;
	while(i){
		do{
			for(int a=0;a<1;a++){
				if(a==0){
					fun();
				}
			}
			i--;
		}while(i);
	}
	return 0;
}