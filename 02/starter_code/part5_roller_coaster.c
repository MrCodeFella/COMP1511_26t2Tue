// part5_roller_coaster
//
// This program was written by Conrad Vernon, z5478184
// on 9/6/2026
//
// This program:
// 1. Scans in the users height.
//
// 2. If the height is 0 or less, 
//    it should print an error message
//
// 3. If the height is below the minimum height, 
//    it should print a message telling the user they are not tall enough to ride
// 
// 4. If the height is above the minimum but below the ride alone threshold,
//    it should print a message telling the user they can ride with an adult
//
// 5. If the height is or is above the ride alone threshold, 
//    it should print a message telling the user they can ride.

#include <stdio.h>

// forgot as we were in a rush, but it would be better to replace the 
// min height and min ride alone height with #defines as these are constants.
// eg. #define MIN_HEIGHT 100

int main(void) {
    double height;
    scanf("%lf", &height);

    if (height <= 0) {
        printf("ERORR INVALID HEIGHT\n");
    } else if (height < 100) {
        printf("too short to ride\n");
    } else if (height < 160) {
        printf("ride with adult\n");
    } else {
        printf("ride alone!\n");
    }

    return 0;
}