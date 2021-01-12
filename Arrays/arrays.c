// c basic arrays
// We need a variable to store the top 20 high scores for a video game we are programming. Scores are integer values. Declare an array named high_score that holds 20 integers.
int high_score[20];

// In the code fragment below an array ages has been declared. It has room for 8 integer values. Write C statements to set the first three elements of this array to the values 4, 44 and 18, respectively.
int ages[8]
ages[0]=4;
ages[1]=44;
ages[2]=18;

// An airport shuttle is cheaper per person if you have more people in your group. In the code fragment below, the array named cost holds the shuttle's cost for groups of size 0 to 3. The variable group_size is set in code that is not shown. Use group_size to access the cost array and assign the correct value to total_cost.
total_cost = cost[group_size];
// Write a code fragment to loop over an array ages of count integers and print the age of the second oldest. You may assume that count is at least 2.
    int max, sec_max;
    if (ages[0] >= ages[1]){
        max = ages[0];
    	sec_max = ages[1];
    }
    else{
        max = ages[1];
    	sec_max = ages[0];
    }
    for (int i =0; i<count; i++){
        if (ages[i] > max){
            max = ages[i];
        }
        else if (sec_max < ages[i] && ages[i] < max){
            sec_max = ages[i];
        }
    }
    printf("%d", sec_max);