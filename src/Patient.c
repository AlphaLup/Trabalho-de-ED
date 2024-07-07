#include <time.h>
#include <stdlib.h>
#include <string.h>
#include "Patient.h"

struct patient 
{
    int id;
    char name[100];
    struct tm * birthdate;
};

Patient *create_patient(int id, const char *name, struct tm *birthdate) {
    Patient *new_patient;

    new_patient = (Patient *)malloc(sizeof(Patient));
    if (new_patient == NULL) {
        perror("Falha ao alocar memória para o paciente");
        exit(1);
    }

    new_patient->id = id;
    // Fixed wrong assignment of the property "patient->name"
    strcpy(new_patient->name, name);
    new_patient->birthdate = birthdate;

    return new_patient;
}

void destroy_patient(Patient *patient) {
    free(patient);
}

int get_patient_id(const Patient *patient) {
    return patient->id;
}

const char get_patient_name(const Patient *patient) {
    return patient->name;
}

struct tm * get_patient_birthdate(const Patient *patient) {
    return patient->birthdate;
}