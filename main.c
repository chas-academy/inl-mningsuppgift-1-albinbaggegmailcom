#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);

    // Your code goes here

    /*  1. Use srand(1)
        2. Store 100 dice throws in an array
        3. Calculate number of occurences for each value
        4. Print number of occurences for each value
        5. Calculate and print the sum of all throws
        6. Calculate and print the average value as a float with one decimal
    */

    int dice_rolls[100];
    int dice_values[] = { 0, 0, 0, 0, 0, 0 };
    int sum = 0;

    // Roll 100 dice and store the values in different formats
    for (int i = 0; i < 100; i++)
    {
        dice_rolls[i] = (rand() % 6) + 1;
        // printf("dice_rolls[%d]: %d\n", i, dice_rolls[i]);
        
        dice_values[dice_rolls[i] - 1]++;
        // printf("dive_values[%d]: %d\n", 
        //     dice_rolls[i] - 1, dice_values[dice_rolls[i] - 1]);

        sum += dice_rolls[i];
        // printf("sum: %d\n", sum);
    }
    
    // Print the number of rolls for each value
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", dice_values[i]);
    }

    // Print total sum of values
    printf("%d\n", sum);

    // Calculate and print average roll value
    printf("%.1f\n", sum / 100.0); // One operand must be a float

    return 0;
}