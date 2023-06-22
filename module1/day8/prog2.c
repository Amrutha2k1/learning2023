#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void convertToUpper(FILE *source, FILE *destination) {
    int ch;
    while ((ch = fgetc(source)) != EOF) {
        fputc(toupper(ch), destination);
    }
}

void convertToLower(FILE *source, FILE *destination) {
    int ch;
    while ((ch = fgetc(source)) != EOF) {
        fputc(tolower(ch), destination);
    }
}

void convertToSentenceCase(FILE *source, FILE *destination) {
    int ch;
    int sentenceStart = 1;
    while ((ch = fgetc(source)) != EOF) {
        if (sentenceStart && isalpha(ch)) {
            fputc(toupper(ch), destination);
            sentenceStart = 0;
        } else {
            fputc(tolower(ch), destination);
            if (ch == '.' || ch == '?' || ch == '!') {
                sentenceStart = 1;
            }
        }
    }
}

int main(int argc, char *argv[]) {
    FILE *source, *destination;
    char option;
    
    // Check the number of arguments
    if (argc < 3) {
        printf("Usage: ./cp [-u | -l | -s] source_file destination_file\n");
        return 1;
    }
    
    // Open the source file in read mode
    source = fopen(argv[2], "r");
    if (source == NULL) {
        printf("Unable to open the source file.\n");
        return 1;
    }
    
    // Open the destination file in write mode
    destination = fopen(argv[3], "w");
    if (destination == NULL) {
        printf("Unable to create the destination file.\n");
        fclose(source);
        return 1;
    }
    
    // Check the option provided by the user
    option = argv[1][1];
    
    // Copy the contents of the source file to the destination file based on the user option
    switch (option) {
        case 'u':;
            convertToUpper(source, destination);
            break;
        case 'l':;
            convertToLower(source, destination);
            break;
        case 's':;
            convertToSentenceCase(source, destination);
            break;
        default:;
            // Normal copy
            int ch;
            while ((ch = fgetc(source)) != EOF) {
                fputc(ch, destination);
            }
            break;
    }
    
    printf("File copied successfully.\n");
    
    // Close the files
    fclose(source);
    fclose(destination);
    
    return 0;
}
