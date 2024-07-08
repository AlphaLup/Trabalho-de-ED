# Sistema de Gerenciamento de Pacientes e Exames

Este projeto é um sistema de gerenciamento simples para pacientes e exames médicos. Ele permite a criação de registros de pacientes e exames associados, utilizando C como linguagem de programação.

## Funcionalidades

- **Cadastro de Pacientes:** Permite o cadastro de pacientes com informações como ID, nome e data de nascimento.
- **Cadastro de Exames:** Permite o cadastro de exames médicos, associando-os a um paciente específico e incluindo informações como ID do exame, ID do paciente, ID do aparelho de raio-X e data/hora do exame.
- **Consulta de Pacientes:** Permite a consulta de dados dos pacientes com informações como ID, nome e data de nascimento.
- **Consulta de Exames:** Permite a consulta de dados dos exames médicos associando a um paciente específico e incluindo informações como ID do exame, ID do paciente, ID do aparelho de raio-X e data/hora do exame.
- **Esclusão de Pacientes:** Desaloca memória, e, assim, exclui o paciente selecionado.
- **Exclusão de Exames:** Desaloca memória, e, assim, exclui o exame selecionado.

## Estrutura do Projeto

O projeto é dividido em várias partes:

- `main.c`: Arquivo principal que executa o programa.
- `Patient.c` e `Patient.h`: Definem a estrutura e as funções relacionadas ao gerenciamento de pacientes.
- `Exam.c` e `Exam.h`: Definem a estrutura e as funções relacionadas ao gerenciamento de exames.
- `Makefile`: Utilizado para compilar o projeto de forma eficiente.

## Como Compilar e Executar

Para compilar o projeto, você precisa ter o GCC instalado em seu sistema. Utilize o seguinte comando no terminal:

```bash
make
```

Isso irá compilar o código e gerar um executável chamado output. Para executar o programa, use:
```bash
./output
```
# Dependências
- GCC para compilação.
- Biblioteca padrão C para funções de data/hora, alocação de memória e outputs como ```printf()```.

# Licença
Este projeto é distribuído sob a licença MIT. Veja o arquivo LICENSE para mais detalhes.
