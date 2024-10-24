# One-Time-Pad
## Overview
This C++ project implements a basic One-Time Pad (OTP) encryption and decryption system. The OTP is a symmetric encryption technique that uses a random key of the same length as the plaintext, making it theoretically unbreakable when the key is truly random and used only once. My proffesor during my first semester of college, taught us briefly about the One-Time Pad. I was very intrugued by it, so I decided to implement it in C++. 

## Features
Generate Random Key: Creates a random key of the same length as the input plaintext.

Encrypt Plaintext: XOR operation is used to encrypt the plaintext with the generated key.

Decrypt Ciphertext: Uses the same key to decrypt the ciphertext back to the original plaintext.

## Notes
~ The key is randomly generated and should be kept secure and used only once for encryption so that it can be unbreakable

~ This project uses the <random> library for key generation.

~ The XOR operation ensures that encryption and decryption are symmetric.

## Contact
Feel free to reach out if you have any questions or suggestions. 

Zach Shamieh
zachshamieh@gmail.com
