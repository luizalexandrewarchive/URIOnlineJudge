#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

	int a,b;
	cin >> a;
	cin >> b;
	if (a%b==0 || b%a==0){
		cout << "Sao Multiplos" << endl;
	}else{
		cout << "Nao sao Multiplos" << endl;
	}
}