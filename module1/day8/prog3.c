#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100

typedef struct {
    int entryNo;
    char sensorNo[10];
    float temperature;
    int humidity;
    int light;
    char time[9];
} LogEntry;

LogEntry logEntries[MAX_ENTRIES];
int numEntries = 0;

void extractLogEntries() {
    FILE *file;
    char line[100];
    char *token;

    file = fopen("data.csv", "r");
    if (file == NULL) {
        printf("Unable to open the file.\n");
        return;
    }

    // Read each line from the file
    while (fgets(line, sizeof(line), file) != NULL) {
        // Tokenize the line based on comma separator
        token = strtok(line, ",");
        if (token == NULL) {
            printf("Invalid line format: %s\n", line);
            continue;
        }

        // Extract the values and populate the log entry structure
        logEntries[numEntries].entryNo = atoi(token);

        token = strtok(NULL, ",");
        if (token == NULL) {
            printf("Invalid line format: %s\n", line);
            continue;
        }
        strcpy(logEntries[numEntries].sensorNo, token);

        token = strtok(NULL, ",");
        if (token == NULL) {
            printf("Invalid line format: %s\n", line);
            continue;
        }
        logEntries[numEntries].temperature = atof(token);

        token = strtok(NULL, ",");
        if (token == NULL) {
            printf("Invalid line format: %s\n", line);
            continue;
        }
        logEntries[numEntries].humidity = atoi(token);

        token = strtok(NULL, ",");
        if (token == NULL) {
            printf("Invalid line format: %s\n", line);
            continue;
        }
        logEntries[numEntries].light = atoi(token);

        token = strtok(NULL, ",");
        if (token == NULL) {
            printf("Invalid line format: %s\n", line);
            continue;
        }
        strcpy(logEntries[numEntries].time, token);

        numEntries++;
    }

    fclose(file);
}

void displayLogEntries() {
    int i;
    for (i = 0; i < numEntries; i++) {
        printf("EntryNo: %d\n", logEntries[i].entryNo);
        printf("SensorNo: %s\n", logEntries[i].sensorNo);
        printf("Temperature: %.2f\n", logEntries[i].temperature);
        printf("Humidity: %d\n", logEntries[i].humidity);
        printf("Light: %d\n", logEntries[i].light);
        printf("Time: %s\n", logEntries[i].time);
        printf("\n");
    }
}

int main() {
    extractLogEntries();
    displayLogEntries();

    return 0;
}
