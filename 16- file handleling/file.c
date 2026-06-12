#include <stdio.h>

int main() {
    // 1. Declare the file pointer
    FILE *myFile;
    
    // 2. Open the file in write mode
    myFile = fopen("diary.txt", "w");
    
    // 3. Write our text
    fprintf(myFile, "Learning C is fun!");
    
    // 4. Close the file to save changes
    fclose(myFile);
    
    return 0;
}