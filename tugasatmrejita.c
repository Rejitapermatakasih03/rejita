#include <iostream>
#include <string>

using namespace std;

int main()
{
    string pin = "220303"; // masukkan pin anda
    double balance = 2000000.00; // Saldo awal
    int choice;
    double amount;

    cout << "Selamat datang di ATM" << endl;
    
    // Menampilkan Bahasa
    cout << "Silakan Pilih Bahasa:" << endl;
    cout << " 1.English" << endl;
    cout << " 2.Indonesia" << endl;
    cout << "Pilihan anda: ";
    cin >> choice;

    // Meminta pengguna memasukkan PIN
    cout << "Silakan masukkan PIN anda: ";
    string input_pin;
    cin >> input_pin;

    // Memeriksa PIN yang dimasukkan pengguna
    if (input_pin == pin)
    {
        cout << "PIN  anda benar" << endl;

        // Menampilkan menu transaksi
        cout << "Silakan pilih transaksi yang anda inginkan:" << endl;
        cout << "1. Cek saldo" << endl;
        cout << "2. Tarik tunai" << endl;
        cout << "3. Setor tunai" << endl;
        cout << "4. Transfer" << endl;
        cout << "5. Top Up" << endl;
        cout << "6. Keluar" << endl;
        
        cout << "Pilihan anda: ";
        cin >> choice;

        // Memproses pilihan pengguna
        switch (choice)
        {
            case 1:
                cout << "Saldo anda saat ini adalah Rp " << balance << endl;
                break;
            case 2:
                cout << "Silakan masukkan jumlah yang ingin anda tarik: ";
                cin >> amount;
                if (amount > balance)
                {
                    cout << "Maaf, saldo anda tidak mencukupi" << endl;
                }
                else
                {
                    balance -= amount;
                    cout << "Anda telah menarik sejumlah Rp " << amount << endl;
                    cout << "Saldo anda saat ini adalah Rp " << balance << endl;
                }
                break;
            case 3:
                cout << "Silakan masukkan jumlah yang ingin disetor: ";
                cin >> amount;
                balance += amount;
                cout << "Anda telah menyetor sejumlah Rp " << amount << endl;
                cout << "Saldo anda saat ini adalah Rp " << balance << endl;
                break;
            case 4:
            	cout << "silahkan masukkan no rekening tujuan: ";
            	cin >> amount;
                balance += amount;
                cout << "Silakan masukkan jumlah yang ingin ditransfer: ";
                cin >> amount;
                balance += amount;
                  cout << "Anda telah menstansfer sejumlah Rp " << amount << endl;
                cout << "Saldo anda saat ini adalah Rp " << balance << endl;
                break;
            case 5:
            	cout << "Silakan pilih transaksi yang diinginkan:" << endl;
        		cout << "1. Dana" << endl;
       			cout << "2. Go-pay" << endl;
        		cout << "3. ShoppePay" << endl;
        		cout << "4. PLN" << endl;
        		cout << "5. OVO" << endl;
        	
				cout << "Pilihan anda: ";
                cin >> choice;
    			cout << "Silakan masukkan jumlah yang ingin ditop up: ";
                cin >> amount;
                balance += amount;
                  cout << "anda telah menstansfer sejumlah Rp " << amount << endl;
                cout << "Saldo anda saat ini adalah Rp " << balance << endl;
                break;
            case 6:
                cout << "Terima kasih telah menggunakan ATM" << endl;
                break;
            default:
                cout << "Maaf, pilihan tidak valid" << endl;
                break;
        }
    }
    else
    {
        cout << "PIN anda salah" << endl;
    }

    return 0;
}
