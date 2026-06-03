#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

// Prototypes for clarity
void runFileOperations();

int main() {
    std::cout << "=== C++ File I/O Demonstration ===" << std::endl;
    runFileOperations();
    std::cout << "\n==================================" << std::endl;
    return 0;
}

void runFileOperations() {
    // -------------------------------------------------------------------------
    // PA1301: Open files & PA1303: Write to files
    // -------------------------------------------------------------------------
    std::cout << "\n[PA1301 & PA1303] Opening file1.txt and writing data..." << std::endl;
    std::ofstream outFile("file1.txt"); // Opens file for writing
    
    if (outFile.is_open()) {
        outFile << "Hello, C++ World!\nThis is a file handling test.\n12345";
        
        // PA1302: Close files
        std::cout << "[PA1302] Closing file1.txt..." << std::endl;
        outFile.close(); 
    } else {
        std::cerr << "Error opening file1.txt for writing." << std::endl;
    }


    // -------------------------------------------------------------------------
    // PA1304: Read from files
    // -------------------------------------------------------------------------
    std::cout << "\n[PA1304] Reading content line-by-line from file1.txt:" << std::endl;
    std::ifstream inFile("file1.txt"); // Opens file for reading
    
    if (inFile.is_open()) {
        std::string line;
        while (std::getline(inFile, line)) {
            std::cout << "-> " << line << std::endl;
        }
        inFile.close();
    }


    // -------------------------------------------------------------------------
    // PA1305: Extract characters from files & PA1311: Count characters from last operation
    // -------------------------------------------------------------------------
    std::cout << "\n[PA1305 & PA1311] Extracting a block of characters..." << std::endl;
    inFile.open("file1.txt");
    if (inFile.is_open()) {
        char buffer[20] = {0};
        
        // read() extracts a specific number of characters
        inFile.read(buffer, 14); 
        
        std::cout << "Extracted string: \"" << buffer << "\"" << std::endl;
        // gcount() returns the number of characters extracted by the last unformatted input operation
        std::cout << "Characters read in last operation (gcount): " << inFile.gcount() << std::endl;
        
        inFile.close();
    }


    // -------------------------------------------------------------------------
    // PA1306: Compare content of two files
    // -------------------------------------------------------------------------
    std::cout << "\n[PA1306] Comparing file1.txt and a newly created file2.txt..." << std::endl;
    
    // Create a second file to compare
    std::ofstream out2("file2.txt");
    out2 << "Hello, C++ World!\nThis is a file handling test.\n12345";
    out2.close();

    // Re-open both for comparison
    std::ifstream f1("file1.txt", std::ios::binary);
    std::ifstream f2("file2.txt", std::ios::binary);

    if (f1.is_open() && f2.is_open()) {
        bool isEqual = true;
        char ch1, ch2;

        // Read character by character and compare
        while (f1.get(ch1) && f2.get(ch2)) {
            if (ch1 != ch2) {
                isEqual = false;
                break;
            }
        }
        
        // Check if one file is longer than the other
        if (isEqual && (f1.get(ch1) || f2.get(ch2))) {
            isEqual = false;
        }

        std::cout << "Result: Files are " << (isEqual ? "IDENTICAL" : "DIFFERENT") << std::endl;
        f1.close();
        f2.close();
    }


    // -------------------------------------------------------------------------
    // PA1307: Load characters from cin stream directly to file
    // -------------------------------------------------------------------------
    std::cout << "\n[PA1307] Enter a short sentence to save directly to file3.txt:\n> ";
    std::ofstream cinToFile("file3.txt");
    
    if (cinToFile.is_open()) {
        std::string userInput;
        std::getline(std::cin, userInput); // Grab input from cin
        
        cinToFile << userInput; // Stream directly into the file
        cinToFile.close();
        std::cout << "Saved successfully to file3.txt." << std::endl;
    }


    // -------------------------------------------------------------------------
    // PA1308: Peek characters without extracting & PA1309: Return extracted character on stream
    // -------------------------------------------------------------------------
    std::cout << "\n[PA1308 & PA1309] Testing Peek and Putback/Unget..." << std::endl;
    inFile.open("file1.txt");
    
    if (inFile.is_open()) {
        // PA1308: Peek
        char peekedChar = inFile.peek();
        std::cout << "Peeked at next character: '" << peekedChar << "' (Stream position unchanged)" << std::endl;

        // PA1309: Extract and then Return (Putback)
        char extractedChar;
        inFile.get(extractedChar);
        std::cout << "Extracted character: '" << extractedChar << "'" << std::endl;

        inFile.putback(extractedChar); // Returning it to the stream
        std::cout << "Returned '" << extractedChar << "' back to the stream." << std::endl;

        // Extract again to prove it was put back
        inFile.get(extractedChar);
        std::cout << "Extracted again: '" << extractedChar << "'" << std::endl;

        inFile.close();
    }


    // -------------------------------------------------------------------------
    // PA1310: Write bytes to file
    // -------------------------------------------------------------------------
    std::cout << "\n[PA1310] Writing raw binary bytes to bytes.dat..." << std::endl;
    std::ofstream binaryFile("bytes.dat", std::ios::binary);
    
    if (binaryFile.is_open()) {
        char rawBytes[] = {0x41, 0x42, 0x43, 0x44, 0x0A}; // ASCII for A, B, C, D, \n
        
        // .write() handles raw byte/binary writing
        binaryFile.write(rawBytes, sizeof(rawBytes)); 
        binaryFile.close();
        std::cout << "Binary bytes written successfully." << std::endl;
    }


    // -------------------------------------------------------------------------
    // PA1312: Conduct error handling with IO stream
    // -------------------------------------------------------------------------
    std::cout << "\n[PA1312] Triggering and handling an IO stream error..." << std::endl;
    std::ifstream nonExistentFile("imaginary_file.txt");

    // Check for failure state explicitly using stream states
    if (nonExistentFile.fail()) {
        std::cout << "Error Caught: Failed to open 'imaginary_file.txt'!" << std::endl;
        std::cout << "Stream States -> Fail bit: " << nonExistentFile.fail() 
                  << " | Bad bit: " << nonExistentFile.bad() 
                  << " | EOF bit: " << nonExistentFile.eof() << std::endl;
        
        nonExistentFile.clear(); // Clears the error flags for safety
    }
}