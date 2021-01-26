/* Returns the sum of two integers in the string input_line.

   input_line is a string containing two integers separated by one
   or more spaces.
   
   Assume that the string will not be more than 20 characters 
   long and that it contains two integers separated only by whitespace. 
   There may also be spaces before the first integer 
   and/or after the last, but there won't be any other characters 
   in the string.
   
   For example, get_sum("   123  5  ") should return the integer 128, 
   and get_sum("-14 30") should return the integer 16.
   
   Hint: use strtol().
*/
int get_sum(const char *input_line) {
    char *second_num;
    int first_num = strtol(input_line, &second_num, 10); 
    int a = strtol(second_num, NULL, 10); 
    return first_num + a;
}
