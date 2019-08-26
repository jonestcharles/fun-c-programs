#include <stdio.h>
double distanceConvert(double);
double weightConvert(double);
double tempConvert(double);

int main(void) {
    /* This program takes in user input for number of values to be converted
    metric to imperial, as welll as a char indicating whther it is meters,
    grams, or degrees Celsius. Program calls appropriate conversion value, and
    prints result for each converted value on its own line */
    int values, i;
    double metric;
    double imperial = 0;
    char unit;
    // get user input for number of values to convert
    scanf("%d", &values);
    // for each value, get metric value and unit char. then convert and print
    for (i = 0; i < values; i++) {
        scanf("%lf %c", &metric, &unit);
        if (unit == 'm') {
            imperial = distanceConvert(metric);
            printf("%lf ft\n", imperial);
        } else if (unit == 'g') {
            imperial = weightConvert(metric);
            printf("%lf lbs\n", imperial);
        } else if (unit == 'c') {
            imperial = tempConvert(metric);
            printf("%lf f\n", imperial);
        }
    }
    
    return 0;
}
// convert meters to feet
double distanceConvert(double metric) {
    double imperial = metric * 3.2808;
    return imperial;
}
//convert grams to pounds
double weightConvert(double metric) {
    double imperial = metric * 0.002205;
    return imperial;
}
// convert degrees C to degrees F
double tempConvert(double metric) {
    double imperial = 32 + (1.8 * metric);
    return imperial;
}
