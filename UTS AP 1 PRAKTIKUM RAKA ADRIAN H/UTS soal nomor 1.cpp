#include <iostream>
#include <string>
#include <cctype>

bool isValidPassword(const std::string& password) {
    if (password.length() != 8)
        return false;

    bool usedChars[256] = { false };

    for (char c : password) {
        if (!isalnum(c) || c == ' ' || usedChars[static_cast<unsigned char>(c)])
            return false;
        usedChars[static_cast<unsigned char>(c)] = true;
    }

    return true;
}

std::string encryptPassword(const std::string& password) {
    std::string encryptedPassword;
    
    for (char c : password) {
        if (isalpha(c)) {
            char newChar = c + 2;
            if (newChar > 'z' || (isupper(c) && newChar > 'Z')) {
                newChar -= 26;
            }
            encryptedPassword += newChar;
        } else if (isdigit(c)) {
            char newDigit = (c - '0') * 2 + '0';
            encryptedPassword += newDigit;
        }
    }

    return encryptedPassword;
}

int main() {
    std::string password;
    std::cout << "Masukkan password (8 karakter): ";
    std::cin >> password;

    if (isValidPassword(password)) {
        std::string encryptedPassword = encryptPassword(password);
        std::cout << "Password yang dimasukkan: " << password << std::endl;
        std::cout << "Password yang tersimpan: " << encryptedPassword << std::endl;
    } else {
        std::cout << "Password tidak valid." << std::endl;
    }

    return 0;
}