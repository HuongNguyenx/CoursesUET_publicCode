#include <iostream>
using namespace std;

string convertDecimalToBinary(int number){
    string result = "";
    while(number>0){
        int t = number%2;
        if(t==1) result = result + '1';
        else result = result + '0';
        number = number/2;
    }
    int n = result.length();
    char temp;
    for(int i=0; i<(n/2); i++){
        temp = result[i];
        result[i] = result[n-i-1];
        result[n-i-1] = temp;
    }
    return result;
}

int main (){
	int n;
	cin >> n;
	cout << convertDecimalToBinary(n);
	return 0;
}
