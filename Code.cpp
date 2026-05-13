#include <iostream>
#include <cstring>
#include <cmath>
#include <cctype>

void trimCode(char* str){
    int len = strlen(str);
    while (isspace(*str)) 
    {
        for(int i = 0 ; i < len ; i++){
            str[i] = str[i+1];
        }
        len--;
    }
    while (len > 0 && isspace(str[len-1]))    {
        str[len-1] = '\0';
        len--;
    }
    
}

int tong(int *a , int n , int sum =0){
    if (n == 0 || a == NULL)
        return sum;
    return tong(a,n-1 , sum += a[n-1]);
    
}
int **taoKhoAcc(int r, int c){
    
    int **a = new int*[r];
    for (int i = 0; i < r; i++)
    {
        a[i] = new int[c];
    }
    return a;
}
void nhapKho(int **a, int r, int c){
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            std::cout << "Nhap kho acc thu [" << i << "][" << j << "] : ";
            std::cin >> *(*(a+i)+j);
        }
        
    }
}
bool laNT(int n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
int tongAccVIP(int **a, int r, int c){
    int sum =0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (laNT(*(*(a+i)+j)))
                sum += *(*(a+i)+j);          
        }
        
    }
    return sum;
}
void huyKho(int **a, int r){
    for (int i = 0; i < r; i++)
    {
        delete[] *(a+i);
    }
    delete[] a;
}
int main() {
    
    char code[100];
    std::cout << "Nhap code: ";
    std::cin.getline(code, 100);
    trimCode(code);
    std::cout << "Code sau khi da duoc trim: " << code << std::endl;
    int n;
    std::cout << "Nhap so luong acc: ";
    std::cin >> n;
    int *a = new int[n];

    std::cout << "Nhap diem acc: ";
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    std::cout << "Tong diem acc: " << tong(a, n) << std::endl;
    int r, c;
    std::cout << "Nhap so dong va cot cua kho acc: ";
    std::cin >> r >> c;
    int **a1 = taoKhoAcc(r, c);
    nhapKho(a1, r, c);
    std::cout << "Tong diem acc VIP (la so nguyen to): " << tongAccVIP(a1, r, c) << std::endl;
    huyKho(a1, r);
    delete[] a;
    a = nullptr;
    a1 = nullptr;
    
    system("pause");
    return 0;
}