#include<iostream>
using namespace std;

char before(char x){
	//Write your function definition here
    if(x == 65){
        return 'Z';
    }
    if(x >= 65 && x <= 90){
        x = x-1;
    }
    else{
        return '0';
    }
    return x;
}


int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
