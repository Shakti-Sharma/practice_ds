#include<iostream>
using namespace std;

int main(){
int l_r;
cout << "Print the lenght of the star \n";
cin >> l_r;


for(int i=0; i<l_r; i++) {

	for(int j=0; j<l_r; j++) {
		cout << "*";
	}
	cout << "\n";
}
return 0;
}
