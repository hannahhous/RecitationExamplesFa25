#include <stdio.h>
#include <ctype.h>

int main() {
    printf("=== CHARACTER CONVERSION FUNCTIONS ===\n\n");

    // toupper() - converts to uppercase
    char lower = 'a';
    printf("toupper('%c') = '%c'\n", lower, toupper(lower));
    printf("toupper('5') = '%c' (non-letter unchanged)\n\n", toupper('5'));

    // tolower() - converts to lowercase
    char upper = 'Z';
    printf("tolower('%c') = '%c'\n", upper, tolower(upper));
    printf("tolower('5') = '%c' (non-letter unchanged)\n\n", tolower('5'));


    printf("=== CHARACTER QUERY FUNCTIONS ===\n\n");

    // Test array with various characters
    char test_chars[] = {'A', 'z', '5', ' ', '\n', '\t', '!', '@', 'f', 0x7F};
    int num_tests = sizeof(test_chars) / sizeof(test_chars[0]);

    printf("Testing characters: ");
    for (int i = 0; i < num_tests; i++) {
        if (isprint(test_chars[i])) {
            printf("'%c' ", test_chars[i]);
        } else {
            printf("\\x%02X ", (unsigned char)test_chars[i]);
        }
    }
    printf("\n\n");

    // Print table header
    printf("%-6s ", "Char");
    printf("%-8s %-8s %-8s %-8s %-8s %-8s %-8s %-8s %-8s %-8s %-8s\n",
           "digit", "alpha", "alnum", "lower", "upper", "xdigit",
           "space", "cntrl", "punct", "print", "graph");
    printf("-----------------------------------------------------------------------");
    printf("---------------------\n");

    // Test each character
    for (int i = 0; i < num_tests; i++) {
        char c = test_chars[i];

        // Print character
        if (isprint(c)) {
            printf("'%c'    ", c);
        } else {
            printf("\\x%02X  ", (unsigned char)c);
        }

        // Print results of each query function
        printf("%-8s ", isdigit(c) ? "YES" : "no");
        printf("%-8s ", isalpha(c) ? "YES" : "no");
        printf("%-8s ", isalnum(c) ? "YES" : "no");
        printf("%-8s ", islower(c) ? "YES" : "no");
        printf("%-8s ", isupper(c) ? "YES" : "no");
        printf("%-8s ", isxdigit(c) ? "YES" : "no");
        printf("%-8s ", isspace(c) ? "YES" : "no");
        printf("%-8s ", iscntrl(c) ? "YES" : "no");
        printf("%-8s ", ispunct(c) ? "YES" : "no");
        printf("%-8s ", isprint(c) ? "YES" : "no");
        printf("%-8s ", isgraph(c) ? "YES" : "no");
        printf("\n");
    }

    printf("\n=== PRACTICAL EXAMPLES ===\n\n");

    // Example: Converting a string to uppercase
    char str1[] = "Hello World 123!";
    printf("Original: %s\n", str1);
    for (int i = 0; str1[i]; i++) {
        str1[i] = toupper(str1[i]);
    }
    printf("Uppercase: %s\n\n", str1);

    // Example: Counting different character types
    char str2[] = "Hello123! How are you?";
    int letters = 0, digits = 0, spaces = 0, punct = 0;

    for (int i = 0; str2[i]; i++) {
        if (isalpha(str2[i])) letters++;
        if (isdigit(str2[i])) digits++;
        if (isspace(str2[i])) spaces++;
        if (ispunct(str2[i])) punct++;
    }

    printf("String: \"%s\"\n", str2);
    printf("Letters: %d, Digits: %d, Spaces: %d, Punctuation: %d\n\n",
           letters, digits, spaces, punct);

    // Example: Validating hex digits
    char hex_str[] = "1A2F";
    int is_valid_hex = 1;

    for (int i = 0; hex_str[i]; i++) {
        if (!isxdigit(hex_str[i])) {
            is_valid_hex = 0;
            break;
        }
    }

    printf("Is \"%s\" a valid hex string? %s\n", hex_str, is_valid_hex ? "YES" : "NO");

    return 0;
}