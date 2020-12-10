#include <iostream>

using namespace std;

int main(void)
{
    int phy, chem, bio, math, comp, sum;
    float per;
    printf("Enter marks of all 5 subjects (out of 100): \n");
    scanf("%d %d %d %d %d", &phy, &chem, &bio, &math, &comp);
    sum=phy+chem+bio+math+comp;
    per=(sum/5);
    printf("Total percentage : %.2f", per);
    if (per>=90)
        printf("\nGrade : A");
    else if (per>=80)
        printf("\nGrade : B");
    else if (per>=70)
        printf("\nGrade : C");
    else if (per>=60)
        printf("\nGrade : D");
    else if (per>=40)
        printf("\nGrade : E");
    else
        printf("\n Grade : F");
}
