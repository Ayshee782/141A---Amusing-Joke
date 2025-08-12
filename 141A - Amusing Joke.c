#include <stdio.h>
#include <string.h>

int main() {
    char guest[105], host[105], pile[210];
    int count[26] = {0}; // For letters A-Z

    scanf("%s", guest);
    scanf("%s", host);
    scanf("%s", pile);

    // Count letters from guest and host
    for (int i = 0; guest[i] != '\0'; i++) {
        count[guest[i] - 'A']++;
    }
    for (int i = 0; host[i] != '\0'; i++) {
        count[host[i] - 'A']++;
    }

    // Subtract letters from pile
    for (int i = 0; pile[i] != '\0'; i++) {
        count[pile[i] - 'A']--;
    }

    // Check if all counts are zero
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");
    return 0;
}

