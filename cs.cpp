#include<bits/stdc++.h>
using namespace std;
namespace cnm{
	class caonima{
		public:
			void print(){
				int i=1;
				while(i){
					do{
						for(int j=0;j<1;j++){
							cout<<"HELLO WORLD";
							i=0;
						}
					}while(i);
				}
			}
	};
}
void fun(){
	cnm::caonima c;
	int i=1;
	while(i){
		do{
			for(int j=0;j<1;j++){
				if(j==0){
					c.print();
				}
			}
		}while(i);
		i--;
	}
}
int main(){
	int i=1;
	while(i){
		do{
			for(int j=0;j<1;j++){
				if(j==0){
					fun();
					i--;
				}
			}
		}while(i);
	}
}
