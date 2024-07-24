// Problem Description :
// The function accepts two positive integers ‘r’ and ‘unit’ and a positive integer array ‘arr’ of size ‘n’ as its argument ‘r’ represents the number of rats present in an area, ‘unit’ is the amount of food each rat consumes and each ith element of array ‘arr’ represents the amount of food present in ‘i+1’ house number, where 0 <= i

// Note:

// Return -1 if the array is null
// Return 0 if the total amount of food from all houses is not sufficient for all the rats.
// Computed values lie within the integer range.
// Example:

// Input:

// r: 7
// unit: 2
// n: 8
// arr: 2 8 3 5 7 4 1 2
// Output:

// 4

// Explanation:
// Total amount of food required for all rats = r * unit

// = 7 * 2 = 14.

// The amount of food in 1st houses = 2+8+3+5 = 18. Since, amount of food in 1st 4 houses is sufficient for all the rats. Thus, output is 4.

#include<stdio.h>

// Function to calculate the number of houses needed to meet the food requirement for the rats
int rate_count_house(int r, int unit, int arr[], int n) {
    // If there are no houses, return -1 indicating it's impossible to meet the requirement
    if(n == 0) return -1;
    
    // Calculate the total food required for the rats
    int food_required = r * unit;
    // Initialize the amount of food collected till now
    int food_till_now = 0;
    // Variable to keep track of the number of houses checked
    int house = 0;
    
    // Loop through the houses to accumulate food
    for (house = 0; house < n; house++) {
        food_till_now += arr[house]; // Add food from the current house
        // Check if the accumulated food meets or exceeds the required food
        if(food_till_now >= food_required)
            break; // Exit the loop as requirement is met
    }
    
    // If the accumulated food is still less than the required food, return 0 indicating insufficiency
    if(food_required > food_till_now)
        return 0;
    // Return the number of houses needed (1-based index)
    return house + 1;
}

int main() {
    // Array representing the amount of food available in each house
    int arr[] = {2, 8, 3, 5, 7, 4, 12};
    // Calculate the number of houses
    int size = sizeof(arr) / sizeof(arr[0]);
    // Variables to store the number of rats and the food unit per rat
    int r, unit;
    
    // Prompt user to enter the number of rats
    printf("Enter r\n");
    scanf("%d", &r);
    // Prompt user to enter the food unit per rat
    printf("Enter unit\n");
    scanf("%d", &unit);
    
    // Calculate and display the number of houses needed to meet the food requirement for all the rats
    printf("Amount of food in the first %d houses is sufficient for all the rats", rate_count_house(r, unit, arr, size));
    return 0;
}
