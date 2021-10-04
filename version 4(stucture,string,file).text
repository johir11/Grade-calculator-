#include<stdio.h>
#include<string.h>

struct StudentData

{
    char student_name[50];
    float all_cgpa;
    float course_gpa[10];

}sd[10];

void info()
{
    int student;
    FILE *data1;
    struct StudentData sd1[10];
    data1=fopen("StudentData.dat" ,"r");

    if (data1 == NULL){
        fprintf(stderr, "Error opening file \n");
        exit (1);
    }


    printf("Name CGPA\n");

    for(student=0;student<10;student++){
        if(fread(&sd1[student],sizeof(struct StudentData),1,data1)){
            printf ("%s is %.2f\n",sd1[student].student_name,sd1[student].all_cgpa);
        }
    }

    fclose (data1);
}
//here is the main fuction
void main()
{
    float course_credit[10],total_credit=0;
    int course,student,temp=0;

//taking course credit and calculating totall course credit

    printf("Enter Course Credit \n");
    for(course=0;course<10;course++){
        scanf("%f",&course_credit[course]);
        total_credit=total_credit+course_credit[course];
    }

// file open and record information
    FILE *data;
    data=fopen("StudentData.dat","w");

    if (data == NULL)
    {
        fprintf(stderr, "\nError opening file\n");
        exit (1);
    }

//taking name and course gradepoint

    for(student=0;student<10;student++){
        fflush(stdin);
        printf("Enter %d Student Name: ",student+1);
        gets(sd[student].student_name);
        printf("Enter %d Student GPA: ",student+1);
        for(course=0;course<10;course++){
            scanf("%f",&sd[student].course_gpa[course]);
        }
    }

//calculating cgpa

    for(student=0;student<10;student++){
    temp=0;
    for(course=0;course<10;course++){
        temp+=(sd[student].course_gpa[course]*course_credit[course]);
    }
        sd[student].all_cgpa=temp/total_credit;
    }
//here is writing structure information in file
    for(student=0;student<10;student++){
        fwrite(&sd[student],sizeof(struct StudentData),1,data);
    }

    if(fwrite != 0)
        printf(" file written successfully \n");
    else
        printf("writing file error\n");
 fclose(data);

//back to void info function to display information

 info();


//here is sorting cgpa
temp=0;
for(student=0;student<10;student++){

    for(course=0;course<10-student;course++){

        if(sd[course].all_cgpa<sd[course+1].all_cgpa){
         temp=sd[course].all_cgpa;
          sd[course].all_cgpa=sd[course+1].all_cgpa;
            sd[course+1].all_cgpa=temp;
        }
    }
}

//after shorting cgpa


printf("ranking of CGPA is \n");

for(student=0;student<10;student++){
    printf("%d%.2f\n",student+1,sd[student].all_cgpa);

}

}
