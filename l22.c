#include <stdio.h>

// Function declaration
int process_transactions(int transactions[], int size);

int main() {
    int transactions[] = {-3400, -200, 300, 500, -550, 200, 300, -200, 100};
    int size = sizeof(transactions) / sizeof(transactions[0]);

    // Call the function
    process_transactions(transactions, size);

    return 0;
}

// Function definition
int process_transactions(int transactions[], int size) {
    int balance = 1000; // Starting balance
    int tobeprocessed[100]; // Array to hold unprocessed transactions
    int tobeprocessed_count = 0;

    // Print initial transactions
    printf("Processing the following transactions:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", transactions[i]);
    }
    printf("\n");

    // Process each transaction
    for (int i = 0; i < size; i++) {
        int transaction = transactions[i];

        // Check if withdrawal exceeds balance
        if (transaction < 0 && -transaction > balance) {
            printf("Invalid transaction: %d (withdrawal exceeds balance)\n", transaction);
            tobeprocessed[tobeprocessed_count++] = transaction;
            continue;
        }

        balance += transaction;
        printf("Processed transaction: %d, new balance: %d\n", transaction, balance);

        // Stop processing if balance reaches zero
        if (balance <= 0) {
            printf("Balance has reached 0. No further transactions will be processed.\n");
            tobeprocessed[tobeprocessed_count++] = transaction;
            break;
        }
    }

    // Print the final balance
    printf("\nFinal balance is %d\n", balance);

    // Print unprocessed transactions
    printf("\nUnprocessed transactions:\n");
    for (int i = 0; i < tobeprocessed_count; i++) {
        printf("Transaction %d: %d\n", i + 1, tobeprocessed[i]);
    }

    return 0;
}
