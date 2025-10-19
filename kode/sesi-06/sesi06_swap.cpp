#include <iostream>
#include <stdlib.h>

using namespace std;

void swap( float& x, float& y){
	float temp = x;
	x = y;
	y = temp;
}

main() {     
	float bil1 = 2, bil2 = 3;
	cout << bil1 << " , "  << bil2 << endl;   // 2   3
	swap(bil1,bil2);   			// pemanggilan
	cout << "Hasil Swap / Tukar : "; 
	cout << bil1 << " , " << bil2 << endl;   // 3   2 
    system("pause");
}



