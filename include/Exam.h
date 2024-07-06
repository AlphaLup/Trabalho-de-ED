#ifndef EXAM_H
#define EXAM_H

// define the structure of the exam
typedef struct exam Exam;

// create a new exam
Exam *create_exam(int id, int patient_id, int rx_id, struct tm *time);

// destroy an exam
void destroy_exam(Exam *exam);

// get the id of an exam
int get_exam_id(Exam *exam);

// get the patient id of an exam
int get_exam_patient_id(Exam *exam);

// get the id of the ray-x machine of an exam
int get_exam_rx_id(Exam *exam);

// get the time of the exam
struct tm *get_exam_time(Exam *exam);

#endif