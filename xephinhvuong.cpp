#include <iostream>
#include <cmath>

int main() {
    // Nhập số lượng trường hợp
    long long t;
    std::cin >> t;
    long long a[t];
    for(long long i = 0; i < t; i++){
        std::cin >> a[i];
    } 
    for (long long k = 0; k < t; ++k) {
        long long uoc1, uoc2;
        long long hieuNhoNhat = a[k] - 1; // Khởi tạo với giá trị lớn
        for (long long i = 1; i <= sqrt(a[k]); ++i) {
            if (a[k] % i == 0) {
                long long hieuTam = abs(i - a[k] / i);
                if (hieuTam <= hieuNhoNhat) {
                    hieuNhoNhat = hieuTam;
                    uoc1 = i;
                    uoc2 = a[k] / i;
                }
            }
        }
        std::cout << uoc1 << " " << uoc2 << std::endl;
    }

    return 0;
}
