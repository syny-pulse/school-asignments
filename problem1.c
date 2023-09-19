#include <stdio.h>

int main(void) {
    double X1,Y1,X2,Y2,gradient,midX,midY,perpendicularGradient;
    printf("Enter cordinates of point 1: ie X1,Y1\n");//This line prompts the user to enter the cordinates of point 1 of the line
    scanf("%lf,%lf", &X1, &Y1); //Scan the cordinates of point 1 and hold them as X1,Y1
    printf("Enter cordinates of point 1: ie X2,Y2\n");//This line prompts the user to enter the cordinates of point 2 of the line
    scanf("%lf,%lf", &X2, &Y2); //Scan the cordinates of point 2 and hold them as X2,Y2
    gradient = (Y2-Y1)/(X2-X1);
    midX = (X1+X2)/2;
    midY = (Y1+Y2)/2;
    perpendicularGradient = -1/gradient;
    printf("%.1lf",gradient);
    printf("\nThe gradient of the line between the two points is %.1lf",gradient);
    printf("\nThe midpoint of the line between the two points is %.1lf,%1lf",midX,midY);
    printf("\nThe slope of the perpendicular to the line between the two points is %.1lf",perpendicularGradient);

    // for the perpendicular bisector
    double Y_intercept = midY - (perpendicularGradient * midX);
    printf("\nThe y-intercept of the perpendicular bisector is %.1lf", Y_intercept);
    printf("\nThe equation of the perpendicular bisector is y = %.1lfx+%.1lf", perpendicularGradient,Y_intercept);

return 0;
}
