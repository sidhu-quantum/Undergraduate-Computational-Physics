#include <iostream>


int main() {
    int N = 0;
    double e_approx = 0.0;
    double factorial = 1.0;


    std::cout << "Enter the number of terms (N) for approximation: ";
    std::cin >> N;


    // Validate the input
    if (N <= 0) {
        std::cout << "Please enter a positive integer." << std::endl;
        return 1;
    }


    // Series explansion of e^1 = sum(1/n!)
    for (int n = 0; n < N; ++n){
        if (n > 0){
            factorial *= n;     // Compute n!
        }
        e_approx += 1.0 / factorial;
    }


    std::cout << "Approximation of e using " << N << " terms: " << e_approx << std::endl;


    return 0;
}