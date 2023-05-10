#include <windows.h>

int main() {
    HANDLE hStdIn = GetStdHandle(STD_INPUT_HANDLE);
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    char buffer[1024];

    // Prompt the user for input
    DWORD numBytesWritten;
    WriteFile(hStdOut, "Enter your name: ", 17, &numBytesWritten, NULL);

    // Read input from the user
    DWORD numBytesRead;
    ReadFile(hStdIn, buffer, 1024, &numBytesRead, NULL);

    // Write output to the console
    WriteFile(hStdOut, "Hello, ", 7, &numBytesWritten, NULL);
    WriteFile(hStdOut, buffer, numBytesRead, &numBytesWritten, NULL);
    WriteFile(hStdOut, "!", 2, &numBytesWritten, NULL);

    return 0;
}
