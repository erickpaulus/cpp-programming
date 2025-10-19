#include <iostream>
#include <stdlib.h>
using namespace std;
int inputSuhuBadan(int jmlJam){
    int suhu, totalSuhu;
    for (int jam=1;jam<=jmlJam;jam++){
        cout << "masukan suhu badan ke " << jam <<" : " ;
        cin >> suhu;
        totalSuhu += suhu;
    }
    return totalSuhu ;
}

float hitungRataSuhu(int totalSuhu, int jmlJam){
    return (float(totalSuhu)/jmlJam);
}

void cetakRataSuhu(int jmlJam, float rataSuhu){
    cout << "Rata-rata suhu selama "<< jmlJam << " jam adalah " << rataSuhu << endl;
}


int main(){
    int totalSuhu;
    int jmlJam = 24;
    totalSuhu = inputSuhuBadan(jmlJam);
    cetakRataSuhu(jmlJam,  hitungRataSuhu(totalSuhu, jmlJam));
    system("pause");
}