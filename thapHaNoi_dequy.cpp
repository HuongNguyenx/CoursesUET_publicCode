#include <iostream>
using namespace std;

int count=0;

void move(int n, char start, char mid, char end){
	if(n==1){
		cout << start << "->" << end << endl;
		count++;
	}
	else{
		move(n-1, start, end, mid);
		move(1, start, mid, end);
		move(n-1, mid, start, end);
	}
}



int main(){
	int n;
	cin >> n;
	move(n, 'A', 'B', 'C');
	cout << endl << count;
	return 0;
}
