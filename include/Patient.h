#ifndef PATIENT_H
#define PATIENT_H

// define the structure of the patient
typedef struct patient Patient;

// create a new patient
Patient *create_patient(int id, char *name, struct tm *birthdate);

// destroy a patient
void destroy_patient(Patient *patient);

// get the id of a patient
int get_patient_id(Patient *patient);

// get the name of a patient
char get_patient_name(Patient *patient);

// get the birthdate of a patient
struct tm * get_patient_birthdate(Patient *patient);

#endif