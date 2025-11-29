#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

void part1(const char *filename) {
    FILE *fp = fopen(filename, "r");
    if (!fp) {
        perror("Error opening file");
        return;
    }
    
    char line[MAX_LINE_LENGTH];
    int result = 0;
    
    while (fgets(line, sizeof(line), fp)) {
        // Remove trailing newline
        line[strcspn(line, "\n")] = 0;
        
        // TODO: Implement part 1 solution
    }
    
    fclose(fp);
    printf("Part 1: %d\n", result);
}

void part2(const char *filename) {
    FILE *fp = fopen(filename, "r");
    if (!fp) {
        perror("Error opening file");
        return;
    }
    
    char line[MAX_LINE_LENGTH];
    int result = 0;
    
    while (fgets(line, sizeof(line), fp)) {
        // Remove trailing newline
        line[strcspn(line, "\n")] = 0;
        
        // TODO: Implement part 2 solution
    }
    
    fclose(fp);
    printf("Part 2: %d\n", result);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <input_file>\n", argv[0]);
        return 1;
    }
    
    part1(argv[1]);
    part2(argv[1]);
    
    return 0;
}
