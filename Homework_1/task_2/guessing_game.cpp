#include <iostream>
#include <stdlib.h>

using namespace std;
int main(int argc, char const *argv[])
{
	int num,user_num;
	//random_r();
	num = rand()%100;
	cout<<"Guess the number"<<endl;
	cin>>user_num;
	while(1){
		if(user_num == num){
			cout<< "You Won" << endl;
			break;
		}else if(user_num > num){
			cout<< "number is larger"<<endl;
			cout<<"Guess the number"<<endl;
	        cin>>user_num;
		}else{
			cout<< "number is smaller"<<endl;
			cout<<"Guess the number"<<endl;
	        cin>>user_num;
		}
	}
	return 0;
}