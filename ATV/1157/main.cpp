#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int n;
    cin >> n;
    for (int i = 1; i <= n / 2; i++){
        if (n % i == 0){
            printf("%d\n", i);
        }
    }
    cout << n << endl;
    return 0;
}
