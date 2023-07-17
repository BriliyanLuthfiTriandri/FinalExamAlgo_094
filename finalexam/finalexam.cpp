#include <iostream>
#include <string>
using namespace std;

//isi disini
const int MAX_MAHASISWA = 100;
int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
string jurusan[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];
int jumlahMahasiswa = 0;
//isi disini
void tambahMahasiswa(){
	if (jumlahMahasiswa < MAX_MAHASISWA) {
		cout << "========== TAMBAH MAHASISWA ==========" << endl; 
		cout << "NIM : ";
		cin >> NIM[jumlahMahasiswa];
		cin.ignore();
		cout << "Nama : ";
		getline(cin, nama[jumlahMahasiswa]);
		cout << "Jurusan : ";
		getline(cin, jurusan[jumlahMahasiswa]);
		cout << "Tahun Masuk: ";
		cin >> tahunMasuk[jumlahMahasiswa];
		cin.ignore();
		jumlahMahasiswa++;
		cout << "Mahasiswa berhasil ditambahkan!" << endl;
	}
	else {
		cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
	}
}

//isi disini
void tampilkanSemuaMahasiswa() {
	cout << "============= Daftar Mahasiswa ==============" << endl;
	for (int i = 0; i < jumlahMahasiswa; i++) {
		cout << "NIM : " << NIM[i] << endl;
		cout << "Nama : " << nama[i] << endl;
		cout << "Jurusan ; " << jurusan[i] << endl;
		cout << "Tahun Masuk : " << tahunMasuk[i] << endl;
		cout << endl; 
	}
}

//isi disini
void algorithmacariMahasiswaByNIM() {
	int nim;
	bool found = false;

	cout << "CARI MAHASISWA BERDASARKAN NIM" << endl;
	cout << "MASUKAN NIM YANG INGIN ANDA CARI" << endl;
	cin >> nim; 

}

//isi disini
void algorithmaSortByTahunMasuk();

int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1: 
			//isi disini
			break;
		case 2:
			//isi disini
			break;
		case 3:
			//isi disini
			break;
		case 4:
			//isi disini
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}



// 2. Algoritma yang digunakan dalam studi kasus diatas adalah buble sort, linear search 
// 3. Perbedaan algoritma stack dan queue adalah algoritma stack = algoritma yang cara menyimpannya ditumpuk (last in, first out / LIFO), hanya dapat diakses dari satu sisi, dari atas atau yang terakhir (called top), hanya ada 2 operasi basic yaitu push dan pop.
//    sedangkan algoritma queue yaitu algoritma yang ujung paling akhir adalah elemen yang diinsertkan dan elemen paling akhir adalah mendelete ( first in, first out / FIFO), hanya ada 2 operasi yaitu insert dan delete
// 4. Harus menggunakan algoritma stack ketika kita menggunakan perhitungan aritmatika yang complex, atau jika ingin menyimpan data secara bertumpuk dan data yang dimasukan terakhir ingin keluar terlebih dahulu 
// 5. a.) Kedalaman yang dimiliki oleh struktur tersebut adalah 5
// 5. b.) In = salah, karena untuk inorder membacanya 1. mengunjungi left subtree 2. ke root 3. mengunjungi right subtree
//        preorder = benar, karena untuk preorder membacanya 1. root 2. ke left subtree 3. ke right subtree
//        postorder = salah, karena untuk postorder membacanya 1. left subtree 2. right subtree 3. root
