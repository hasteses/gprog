#include <iostream>

double find_g_prog(double first, double q, double n) {
    if (n <= 1) {
        return first;
    }

    return find_g_prog(first, q, n - 1) * q; // B_n = B(n - 1) * q 
}

int main(){
    std::cout << find_g_prog(2, 2, 2) << std::endl;
    std::cout << find_g_prog(2, 2, 6) << std::endl;
}
