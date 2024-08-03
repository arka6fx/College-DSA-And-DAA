// 1. Consider an array MARKS[30][10] which stores the marks obtained by M students for N number of subjects. Write a C program to 
// (A) Find the average marks obtained in each subject
// (B) Find the average marks obtained by each student
// (C) Find the number of students who have scored below 50 in their average 
// (D) Display the individual subject marks and total score obtained by each student. 
#include<stdio.h>
int main(){
    int M,N;
    printf("Enter the number of students: ");
    scanf("%d",&M);
    printf("Enter the number of subjects: ");
    scanf("%d",&N);
    int Marks[M][N];
    for (int i = 0; i<M; i++){
        printf("Enter the marks for student %d: \n",i+1);
        for (int j = 0; j<N; j++){
            printf("subject %d: ",j+1);
           scanf("%d",&Marks[i][j]);
        }
    }
    float student_avg[]={0};
    float subject_avg[]={0};
    int below_50_count = 0;
    for (int j = 0; j <N; j++){   
        int sum =0;
         for (int i = 0; i <M; i++){
           sum+=Marks[i][j];
         }
         subject_avg[j]=sum/M;
         
    }
    int count;
    for (int i = 0; i<M; i++){
       int sum =0;
        for (int j = 0; j<N; j++){
            sum+=Marks[i][j];
        }
        student_avg[i]=sum/N;
        if(student_avg[i]<50){
            below_50_count++;
        }
    }
    printf("Average marks in each subject: \n");
    for (int i = 0; i <N; i++){
        printf("subject %d: %.2f    ",i+1,subject_avg[i]);
    }
    printf("\n");
    printf("\nAverage marks obtained by each student: \n");
    for (int i = 0; i <M; i++){
        printf("student %d: %.2f    ",i+1,student_avg[i]);
    }
    printf("\n");
    printf("\nThe number of students who have scored below 50 in their average:%d ",below_50_count);
    printf("\n");
    printf("\nIndividual subject marks and total score obtained by each student:");
    for (int i = 0; i<M; i++){
        printf("\nStudent %d\n",i+1);
       int sum =0;
        for (int j = 0; j<N; j++){
            printf("Subject %d: %d   ",j+1,Marks[i][j]);
            sum+=Marks[i][j];
        }
        printf("Total score: %d\n",sum);
    }

    
    
 

    return 0;
}