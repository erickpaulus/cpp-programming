#include <iostream>
#include <stdlib.h>

using namespace std;

typedef int larik[10];  // Type alias untuk  array 


// fungsi cetak array
void printArray(const larik& a, int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

// Function tukar 2 integer
void tukar(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

// Fungsi shell Sort 
void shellSort(larik& a, int n) {
   int j;
 
  //Pengurangan jarak / gap sebanyak 2 ?
   for (int gap = n / 2; gap > 0; gap /= 2)  {
    cout << "gap =" << gap <<" : \n";
	for (int i = gap; i < n; i++) {
	   int temp = a[i];
	   for (j=i; j>=gap && temp<a[j - gap]; j -= gap){
		  a[j] = a[j - gap];
	   }
	   a[j] = temp;
       printArray(a, n);
	} 
   }
}

int main() {
    larik a = {5, 8, 2, 4, 1};  // Inisialisasi array
    int n = 5;                  // jumlah elemen dalam array

    // Cetak array sebelum sorting
    cout << "Array sebelum sorting: ";
    printArray(a, n);

    // panggil fungsi  bubbleSort 
    shellSort(a, n);

    // Cetak array sesudah sorting
    cout << "Array setelah sorting: ";
    printArray(a, n);

    system("pause");
    return 0;
}
