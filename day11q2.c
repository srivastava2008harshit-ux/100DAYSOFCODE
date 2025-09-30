// Q22: Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main() {
    float costPrice, sellingPrice;
    
    printf("enter the costprice:");
    scanf("%f", &costPrice);
    
    printf("enter the sellingprice:");
    scanf("%f", &sellingPrice); 

    if (sellingPrice > costPrice) {
        float profit = sellingPrice - costPrice;
        float profitPercent = (profit / costPrice) * 100;
        printf("Profit %.0f%%\n", profitPercent);
    } else if (sellingPrice < costPrice) {
        float loss = costPrice - sellingPrice;
        float lossPercent = (loss / costPrice) * 100;
        printf("Loss %.0f%%\n", lossPercent);
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}

