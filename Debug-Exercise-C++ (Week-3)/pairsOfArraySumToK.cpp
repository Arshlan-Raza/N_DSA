#include<iostream>
#include<vector>

using namespace std;

int pairSumToX(int input[], int size, int x) {
    int pairs = 0;
    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            if (i != j && input[i] + input[j] == x) {
                pairs++;
            }
        }
    }
    return pairs / 2; // Divide by 2 to avoid counting the same pair twice
}


#include <iostream>

int main() {
    const int size = 6;
    int input[size] = {1, 2, 3, 4, 5, 6};
    int targetSum = 7;

    int result = pairSumToX(input, size, targetSum);

    cout << "Number of pairs with sum " << targetSum << ": " << result << endl;

    return 0;
}
