#include<stdio.h>
#include<stdlib.h>

//function prototypes
int calcTotal(int q1, int q2, int q3, int q4);
float caleAverage(int q1, int q2, int q3, int q4);
float twoPoints(int totalShots, int shotsMade);
float threePoints(int totalShots, int shotsMade);
void displayStatistics(int totPts,int tot2Pts,int tot3Pts,float avgQtr,float twoPts,float threePts);

int main()
{
    int twoPointQ1;             //two point shots made in q1
    int threePointQ1;             //two point shots made in q1
    int totalShotsQ1;             //two point shots made in q1
    int twoPointQ2;             //two point shots made in q1
    int threePointQ2;             //two point shots made in q1
    int totalShotsQ2;             //two point shots made in q1
    int twoPointQ3;             //two point shots made in q1
    int threePointQ3;             //two point shots made in q1
    int totalShotsQ3;             //two point shots made in q1
    int twoPointQ4;             //two point shots made in q1
    int threePointQ4;             //two point shots made in q1
    int totalShotsQ4;             //two point shots made in q1
    
    printf("how many shots did you make 1st quater?");
    scanf("%d", &totalShotsQ1);
    printf("how many 2 point shots did you make 1st quater?");
    scanf("%d", &twoPointQ1);
    printf("how many 3 point shots did you make 1st quater?");
    scanf("%d", &threePointQ1);

    printf("how many shots did you make quater 2?");
    scanf("%d", &totalShotsQ2);
    printf("how many 2 point shots did you make 2nd quater?");
    scanf("%d", &twoPointQ2);
    printf("how many 3s did you make 2 quater?");
    scanf("%d", &threePointQ2);

    printf("how many shots did you make 3 quater?");
    scanf("%d", &totalShotsQ3);
    printf("how many 2s did you make 3 quater?");
    scanf("%d", &twoPointQ3);
    printf("how many 3s did you make 3 quater?");
    scanf("%d", &threePointQ3);

    printf("how many shots did you make 4 quater?");
    scanf("%d", &totalShotsQ4);
    printf("how many 2s did you make 4 quater?");
    scanf("%d", &twoPointQ4);
    printf("how many 3s did you make 4 quater?");
    scanf("%d", &threePointQ4);

    //calculate stats
    int totalPoints = calcTotal(totalShotsQ1, totalShotsQ2, totalShotsQ3, totalShotsQ4);
    int total2s = calcTotal(twoPointQ1, twoPointQ2, twoPointQ3, twoPointQ4);
    int total3s = calcTotal(threePointQ1, threePointQ2, threePointQ3, threePointQ4);

    float averageQ = caleAverage(totalShotsQ1, totalShotsQ2, totalShotsQ3, totalShotsQ4);
    float t2points = twoPoints(totalPoints, total2s);
    float t3points = threePoints(totalPoints, total3s);
    
    displayStatistics(totalPoints, total2s, total3s, averageQ, t2points, t3points);

    return 0;
}

//function definitions
int calcTotal(int q1, int q2, int q3, int q4)
{
    double sum = q1+q2+q3+q4;
    return sum;
}

float caleAverage(int q1, int q2, int q3, int q4)
{
    float average = (q1+q2+q3+q4)/4.0;
    return average;
}

float twoPoints(int totalShots, int shotsMade)
{
    float performance = ((float)shotsMade/(float)totalShots)*100.0;
    return performance;
}

float threePoints(int totalShots, int shotsMade)
{
    float performance = ((float)shotsMade/(float)totalShots)*100;
    return performance;
}

void displayStatistics(int totpts, int tot2pts, int tot3pts, float avgQtr, float twoPts, float threePts)
{
        printf("----- These are the statistics -----\n");
        printf("Total attempts made:          %d\n", totpts);
        printf("Total 2-points shots made:   %d\n", tot2pts);
        printf("Total 3-points shots made:   %d\n", tot3pts);
        printf("Success for 2-points shots:  %.1f\n", twoPts);
        printf("Success for 3-points shots:  %.1f\n", threePts);
        printf("Average points per quarter:  %.1f\n", avgQtr);
}

