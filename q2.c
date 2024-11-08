#include <stdio.h>
//Q2


int process_transactions(int transactions, int size);

int main(){
    int transactions[] = {200, -150, -500, -400, -50, -200, 300};

    int size = sizeof(transactions) / sizeof(transactions[0]);

    int process_transactions(int transactions, int size);
    
    return 0;

}

int process_transactions(int transactions[], int size){
    int balance = 1000;
    int tobeprocessed[100];
    int tobeprocessed_count = 0;
    for(int i = 0; i < size; i++){
         int transaction = transactions[i];

        if(transaction < 0 && -transaction > balance){
            printf("Invalid transaction as withdrawn amount exceeds balance");
            tobeprocessed[tobeprocessed_count++] = transaction;
            continue;
        }
        balance += transaction;

        if (balance <= 0) {
            printf("Balance has reached 0. No further transactions will be processed.\n");
            tobeprocessed[tobeprocessed_count++] = transaction;  
            break;
    
    printf("\n Final balance is %d\n", balance);

    }

}
    for(int i = 0; i < tobeprocessed_count + 1; i++){
        tobeprocessed[i];
        printf("\n This is the total unprocessed actions", tobeprocessed[i]);
        break;
    }
}