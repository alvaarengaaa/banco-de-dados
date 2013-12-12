#pragma once
#include "Lista.h"
#include "curso.h"
#include <string.h>
#include <iostream>
class escola
{
private:
	Lista<curso*> Cursos;
public:
	escola();
	~escola();
	// O m�tido InsertCurso insere um novo curso na escola (RAIZ) e chama o metodo InsertTurma;
	// O m�todo InsertTurma insere uma nova turma na lista de turmas de tal curso;
	// Durante a cria��o da turma � necess�rio ja cadastrar os alunos dentro dela;
	// Assim mantemos a hierarquia de Curso->Turma->Alunos;
	void InsertCurso();
};

