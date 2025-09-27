#include <stdio.h>

int updatebalance(float balance[], int customerID, int type, float trans_amount) {
    if (type == 1) { // withdrawal
        if (trans_amount > balance[customerID]) {
            return 0; // not enough balance
        } else {
            balance[customerID] -= trans_amount;
            return 1; // successful withdrawal
        }
    } 
    else if (type == 2) { // deposit
        balance[customerID] += trans_amount;
        return 1; // successful deposit
    }
    return -1; // invalid transaction type
}

int main() {
    int j;
    scanf("%d",&j);
    float balance[j];
    int i;

    for (i = 0; i < j; i++) {
        scanf("%f", &balance[i]);
    }

    int customerID, type;
    float trans_amount;

    printf("Enter customer ID (0 to 99): ");
    scanf("%d", &customerID);

    printf("types of transaction 1.withdrawl,2.deposit :");
    scanf("%d", &type);

    printf("trans_amount in float: ");
    scanf("%f", &trans_amount);

    int x = updatebalance(balance, customerID, type, trans_amount);

    if (x == 0) {
        printf("Not sufficient balance\n");
    } 
    else if (x == 1) {
        printf("the updated balance: %.2f\n", balance[customerID]);
    } 
    else {
        printf("Invalid transaction type\n");
    }

    return 0;
}
