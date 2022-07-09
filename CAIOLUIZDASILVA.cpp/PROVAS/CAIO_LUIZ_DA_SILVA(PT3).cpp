#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;

int mediaDoAluno (int a, int b, int c )
{
	a + b / 2 = c;
}

int mediaDealunos (int a, int b, int c)
{
	a + b/ 2 = c;
}

main()
{
 TAluno aluno;
 TTurma turma;
 
 mediaDoaluno(aluno.nota_1,aluno.nota_2,aluno.nota_final);
 mediaDealunos (aluno.nota_1, aluno.nota_2, mediaDaturma);
 
 
 
int 
 
 int i;
 cout << "FORNECA OS DADOS DA TURMA...\n";
 cout << "NOME DA DISCIPLINA --->";
 cin >> turma.disciplina;
 cout << "NOME DO PROFESSOR ---->";
 cin >> turma.professor;
 cout << "QUANTIDADE DE AULAS -->";
 cin >> turma.qtdDeAulas;
 cout << "QUANTIDADE DE ALUNOS ->";
 cin >> turma.qtdDeAlunos;
 for (i = 1; i <= turma.qtdDeAlunos; i++)
 {
 cout << "\n";
 aluno.nota_final = 0;
 cout << "DADOS DO ALUNO " << i << "...\n";
 cout << "NOME DO ALUNO: ";
 cin >> aluno.nome;
 cout << "PRIMEIRA NOTA DO ALUNO: ";
 cin >> aluno.nota_1;
 cout << "SEGUNDA NOTA DO ALUNO: ";
 cin >> aluno.nota_2;
 if (mediaDoAluno(aluno) < MEDIA)
 {
 cout << "NOTA FINAL DO ALUNO: ";
 cin >> aluno.nota_final;
 }
 cout << "QUANTIDADE DE FALTAS DO ALUNO: ";
 cin >> aluno.qtdDeFaltas;
 turma.alunos[i-1] = aluno;
 }
 cout << "\nCONSOLIDADO DA TURMA...\n";
 for (i = 1; i <= turma.qtdDeAlunos; i++)
 {
 cout << "\nALUNO ----------> " << turma.alunos[i-1].nome << "\n";
 cout << "PRIMEIRA NOTA --> " << turma.alunos[i-1].nota_1 << "\n";
 cout << "SEGUNDA NOTA ---> " << turma.alunos[i-1].nota_2 << "\n";
 if (mediaDoAluno(turma.alunos[i-1]) < MEDIA)
 cout << "NOTA FINAL -----> " << turma.alunos[i-1].nota_final << "\n";
 cout << "FREQUENCIA -----> " << frequencia(turma.alunos[i-1], turma) << "\n";
 cout << "MEDIA FINAL ----> " << mediaDoAluno(turma.alunos[i-1]) << "\n";
 }
 cout << "\nMEDIA DA TURMA -> " << mediaDaTurma(turma) << "\n"
}
