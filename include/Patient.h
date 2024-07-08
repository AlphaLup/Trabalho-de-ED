#ifndef PATIENT_H
#define PATIENT_H

#include <time.h>

// define a estrutura do paciente
typedef struct patient Patient;

// criar um novo paciente
// tipo de retorno: Patient * p --> (ponteiro para a estrutura do paciente)
Patient *create_patient(int id, const char *name, struct tm *birthdate);

// destruir um paciente
// liberar a memória alocada para a estrutura do paciente
void destroy_patient(Patient *patient);

// obter o ID de um paciente
// tipo de retorno: int
int get_patient_id(const Patient *patient);

// obter o nome de um paciente
// retorna um ponteiro contendo uma cópia do campo patient->name (char *)
char * get_patient_name(const Patient *patient);

// obter a data de nascimento de um paciente
// retorna um ponteiro referenciando a estrutura tm de <time.h>
struct tm * get_patient_birthdate(const Patient *patient);

#endif