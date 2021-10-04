#include<stdio.h>
void main()
{
    float all_students_course_gradepoint[10][10];
    float all_students_cgpa[10];
    float course_credet[10];
    int credet_totall=0;
    int course;
    int student,variable[10];
    char students_name[10][50];
    float temp=0;

    //taking student name

    for(student=0;student<10;student++){

        printf("%d st student name \n",student+1);

        scanf("%s",students_name[student]);
    }

    //taking course gradepoint

    printf("Enter THE all students Gradepoint \n");

    for(student=0;student<10;student++){
        printf("Enter %d student gradepoint \n",student+1);
        for(course=0;course<10;course++){

            scanf("%f",&all_students_course_gradepoint[student][course]);
            variable[course]=course+1;
        }
    }

    //calculationg totall credit

    printf("Enter all Course Credit \n");

    for(course=0;course<10;course++){

        scanf("%f",&course_credet[course]);
        credet_totall=credet_totall+course_credet[course];
    }

    //calculating student cgpa

    for(student=0;student<10;student++){
        temp=0;
        for(course=0;course<10;course++){
            temp=( temp + all_students_course_gradepoint[student][course]*course_credet[course]);
        }
        all_students_cgpa[student]= temp/credet_totall;
    }

    //bubble shorting for find out the highest cgpa

    for(student=0;student<10;student++){
        for(course=0;course<10-student;course++){
            if(all_students_cgpa[course]<all_students_cgpa[course+1]){
                temp=all_students_cgpa[course];
                all_students_cgpa[course]=all_students_cgpa[course+1];
                all_students_cgpa[course+1]=temp;
                temp=variable[course];
                variable[course]=variable[course+1];
                variable[course+1]=temp;

            }
        }
    }
//showing student cgpa rank

    printf("Students CGPA Ranking \n");

    for(student=0;student<10;student++){

    printf("%d%d%.2f \n",student+1, variable[student], all_students_cgpa[student]);
    }

}
