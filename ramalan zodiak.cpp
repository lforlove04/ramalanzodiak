#include <iostream>
using namespace std;

int main(){
    int bulan, tanggal, tahun;
    
    
    cout << "Masukan Tanggal Bulan dan Tahun lahir Kamu "; 
    cin >> tanggal; 
    cin >> bulan; 
    cin >> tahun;
   
    if((tanggal>=21 && tanggal<=31 && bulan==3) || (tanggal>=1 && tanggal<=19 && bulan==4)){
        cout << "ARIES" << endl;
        cout << "Hai zodiak mu ARIES kamu memiliki sifat baik dan penyayang, semoga hari mu menyenangkan";
    }else if((tanggal>=20 && tanggal<=30 && bulan==4) || (tanggal>=1 && tanggal<=20 && bulan==5)){
        cout << "TAURUS" << endl;
        cout << "Hai zodiak mu TAURUS kamu adalah seorang pekerja keras, semoga hari mu menyenangkan";
    }else if((tanggal>=21 && tanggal<=31 && bulan==5) || (tanggal>=1 && tanggal<=20 && bulan==6)){
        cout << "GEMINI" << endl;
        cout << "Hai zodiak mu GEMINI kamu mempunyai karisma luar biasa yang mampu menarik perhatian lawan jenis mu, semoga hari mu menyenangkan";
    }else if((tanggal>=21 && tanggal<=30 && bulan==6) || (tanggal>=1 && tanggal<=22 && bulan==7)){
        cout << "CANCER" << endl;
        cout << "Hai zodiak mu CANCER kamu adalah orang yang humoris serta penyayang dan sangat sensitif, semoga hari mu menyenangkan";
    }else if((tanggal>=23 && tanggal<=31 && bulan==7) || (tanggal>=1 && tanggal<=22 && bulan==8)){
        cout << "LEO" << endl;
        cout << "Hai zodiak mu LEO kamu memiliki jiwa kepemimpinan seperti singa si raja hutan, semoga hari mu menyenangkan";
    }else if((tanggal>=23 && tanggal<=31 && bulan==8) || (tanggal>=1 && tanggal<=22 && bulan==9)){
        cout << "VIRGO" << endl;
        cout << "Hai zodiak mu VIRGO kamu sangat suka menjadi pusat perhatian orang sekitar mu dan itu modal yang bagus untuk hidup mu kedepan nya, semoga hari mu menyenangkan";
    }else if((tanggal>=23 && tanggal<=30 && bulan==9) || (tanggal>=1 && tanggal<=22 && bulan==10)){
        cout << "LIBRA" << endl;
        cout << "Hai zodiak mu LIBRA kamu memiliki tingkat kepedulian tinggi terhadap sekitar mu";
    }else if((tanggal>=23 && tanggal<=31 && bulan==10) || (tanggal>=1 && tanggal<=21 && bulan==11)){
        cout << "SCORPIO" << endl;
        cout << "Hai zodiak mu SCORPIO kamu adalah seorang pemalu dan pendiam tetapi memiliki jiwa humor yang tinggi, semoga hari mu memyenangkan";
    }else if((tanggal>=22 && tanggal<=30 && bulan==11) || (tanggal>=1 && tanggal<=21 && bulan==12)){
        cout << "SAGITARIUS" << endl;
        cout << "Hai zodiak mu SAGITARIUS kamu adalah orang yang tidak bisa berbohong dan memiliki jiwa petualang, semoga hari mu menyenangkan";
    }else if((tanggal>=22 && tanggal<=31 && bulan==12) || (tanggal>=1 && tanggal<=19 && bulan==1)){
        cout << "CAPRICORN" << endl;
        cout << "Hai zodiak mu CAPRICORN kamu memiliki pemikiran yang kadang tidak dimiliki teman seusia mu, semoga hari mu memyenangkan";
    }else if((tanggal>=20 && tanggal<=31 && bulan==1) || (tanggal>=1 && tanggal<=18 && bulan==2)){
        cout << "AQUARIUS" << endl;
        cout << "Hai zodiak mu AQUARIUS kamu adalah orang yang selalu riang serta gembira, semoga hari mu menyenangkan";
    }else if((tanggal>=19 && tanggal<=29 && bulan==2) || (tanggal>=1 && tanggal<=20 && bulan==3)){
        cout << "PISCES" << endl;
        cout << "Hai zodiak mu PISCES kamu memiliki hati yang lembut dan penyayang juga memiliki selera humor yang sangat bagus, semoga hari mu menyenangkan";
    }
    return 0;
}
