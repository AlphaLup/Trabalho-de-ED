#include <time.h>

typedef struct {
    int id;
    char * name;
    struct tm * birthdate;
} Patient;

Patient * create_patient(int id, const char *name, struct tm *birthdate, struct tm *arrival) {
    Patient *patient;

    patient = (Patient *) malloc(sizeof(Patient));
    if (patient == NULL) {
        perror("Falha ao alocar memória para o paciente");
        exit(1);
    }

    patient->id = id;
    patient->name = name;
    patient->birthdate = birthdate;

    return patient;
}

void destroy_patient(Patient *patient) {
    free(patient);
}

int get_patient_id(Patient *patient) {
    return patient->id;
}

const char get_patient_name(Patient *patient) {
    return patient->name;
}

struct tm * get_patient_birthdate(Patient *patient) {
    return patient->birthdate;
}