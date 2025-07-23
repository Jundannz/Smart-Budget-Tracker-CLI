#include <iostream>
#include <string>

void showMenu(){
    std::cout << "======================================\n";
    std::cout << "         SMART BUDGET TRACKER         \n";
    std::cout << "======================================\n";
    std::cout << "1. Tambah pengeluaran\n";
    std::cout << "2. Lihat total harian\n";
    std::cout << "3. Lihat laporan mingguan\n";
    std::cout << "4. Lihat berdasarkan kategori\n";
    std::cout << "5. Keluar\n";
    std::cout << "Pilih menu: ";
}
double addExpense(double &expenseTotal, std::string expenseCategory){
    std::cin.ignore();
    double expense = 0;
    std::cout << "Masukkan kategori pengeluaran: ";
    std::getline(std::cin, expenseCategory);
    std::cout << "Masukkan jumlah pengeluaran: ";
    std::cin >> expense;
    return expenseTotal =+ expense;
}
void todayTotal(double expenseTotal){
    std::cout << expenseTotal << '\n';
}
double weeklyReport(){
    return 0;
}
void viewByCategory(){

}
int main(){
    int pilihan = 0;
    double expenseTotal = 0;
    std::string expenseCategory;

    do{
        showMenu();
        std::cin >> pilihan;
        switch (pilihan){
            case 1: 
                addExpense(expenseTotal, expenseCategory);
                break;
            case 2:
                todayTotal(expenseTotal);
                break;
            case 3:
                weeklyReport();
                break;
            case 4: 
                viewByCategory();
            case 5:
                std::cout << "Keluar....";
        }
    } while ( pilihan != 5);
    return 0;
}