#define SUPERVISOR(regular) regular + 5
int main() {
    int regular_pay = 20;
    int hours_worked = 10;
    printf("pay is %d\n", (hours_worked * SUPERVISOR(regular_pay)));
}

// output:
// pay is 10*20+5=205 since regular+5 has no bracket
