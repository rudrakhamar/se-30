#include <iostream>
#include <ctime>

int main() {
    time_t now = time(0);
    tm *ltm = localtime(&now);

    std::cout << "Current date and time: " << 1900 + ltm->tm_year << "-"
              << 1 + ltm->tm_mon << "-" << ltm->tm_mday << " "
              << ltm->tm_hour << ":" << ltm->tm_min << ":" << ltm->tm_sec << std::endl;

    // ATM PIN is 12345
    int pin = 12345;
    int userPin;
    std::cout << "Please enter your ATM PIN: ";
    std::cin >> userPin;

    if (userPin == pin) {
        std::cout << "PIN verified! Access granted.\n";
    } else {
        std::cout << "Invalid PIN! Access denied.\n";
    }

    
}
