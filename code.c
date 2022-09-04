/*
Problem
In the current semester, you have taken XX RTP courses, YY Audit courses and ZZ Non-RTP courses.

The credit distribution for the courses are:

44 credits for clearing each RTP course.
22 credits for clearing each Audit course.
No credits for clearing a Non-RTP course.
Assuming that you cleared all your courses, report the number of credits you obtain this semester.
*/

#include<stdio.h>
int main(){
    
    int T;
    scanf("%d", &T);
    
    while(T--){
        int X,Y,Z;
        scanf("%d %d %d", &X,&Y,&Z);
        printf("%d \n", 4*X+2*Y+0*Z);
    }
    return 0;
}
