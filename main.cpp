#include <iostream>
#include <string>
#include <random>

// Function to generate a random key with length of text 
std::string generateKey(int length) {
    
    std::string key;
    int randomNum;

    // Random number generator
    std::random_device rd;  // Non-deterministic random device
    std::uniform_int_distribution<int> dist(0, 255);  // Range for ASCII

    for (int i = 0; i < length; i++) {
        key += static_cast<char>(dist(rd));  // Random ASCII character
    }

    return key;
}

// Function to encrypt the plaintext using the One-Time Pad
std::string encrypt(const std::string& plaintext, const std::string& key) {
    std::string ciphertext;
    for (size_t i = 0; i < plaintext.size(); i++) {
        ciphertext += plaintext[i] ^ key[i];  // XOR operation
    }
    

    return ciphertext;
}

// Function to decrypt the ciphertext using the One-Time Pad
std::string decrypt(const std::string& ciphertext, const std::string& key) {
    std::string userInput;
    for (size_t i = 0; i < ciphertext.size(); i++) {
        userInput += ciphertext[i] ^ key[i];  // XOR operation to get decrypted chars
    }
    return userInput;
}

int main() {
    // Get the plaintext from the user
    std::string userInput;
    std::cout << "Enter text: " << std::endl;
    std::getline(std::cin, userInput);

    // Generate a random key of the same length as the plaintext
    std::string key = generateKey(userInput.size());

    // Encrypt the plaintext
    std::string ciphertext = encrypt(userInput, key);

    // Display the results
    std::cout << "Generated Key: " << key << std::endl;
    std::cout << "Ciphertext (encrypted): " << ciphertext << std::endl;

    // Decrypt the ciphertext
    std::string decryptedText = decrypt(ciphertext, key);

    // Display the decrypted plaintext
    std::cout << "Decrypted Text: " << decryptedText << std::endl;

    return 0;
}
