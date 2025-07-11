#include <iostream>  // Include the input/output stream library
using namespace std; // Using standard namespace
/*
CODEWARS
ROT13
Author: Rubikan
URL: https://www.codewars.com/kata/530e15517bc88ac656000716/train/cpp
Description: This program implements the ROT13 cipher, which is a simple letter substitution cipher that replaces a letter with the 13th letter after it in the alphabet.
It is used to obfuscate text by shifting letters, making it unreadable without decoding.
The program reads input from the user, applies the ROT13 transformation, and outputs the transformed text.
*/

string rot13(string msg); // Function prototype for ROT13 encoding

int main() // Main function where the execution of the program starts
{   
    string msg;
    cout << "Enter a message to encode with ROT13: "; 
    cin >> msg; // Read input message from the user
    cout << "Encoded message: " << rot13(msg) << endl; // Output the encoded message
}

string rot13(string msg)
{
    string msgRot13 = "";
    int asciiValue = 0;
    for (int i = 0; i < msg.length(); i++)
    {
        asciiValue = (int)msg[i]; // Convert character to ASCII value
        // Uppercase letters A-Z
        if (asciiValue >= 65 && asciiValue <= 90)
        {
            // We apply rot13 by adding 13 to the ASCII value and if it exceeds 90,
            // we took the difference from 90 and added it to 64 (because the restant is at least 1)
            msgRot13 += char(asciiValue + 13 <= 90 ? asciiValue + 13 : 64 + (asciiValue + 13 - 90));
        }
        else if (asciiValue >= 97 && asciiValue <= 122)
        {
            // Lowercase letters a-z
            //  We apply rot13 by adding 13 to the ASCII value and if it exceeds 122,
            // we took the difference from 122 and added it to 96 (because the restant is at least 1)
            msgRot13 += char(asciiValue + 13 <= 122 ? asciiValue + 13 : 96 + (asciiValue + 13 - 122));
        } else {
            // If it's not a letter, we just add the character as is
            msgRot13 += msg[i];
        }
    }
    return msgRot13;
}
