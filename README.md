# Projeto_Final_Euler


Grupo: Bruno E.A. Hayek TIA: 32145799
<br>

  Para este projeto de computação paralela de calcular o número de Euler farei códigos na linguagem C e na linguagem Go. Na pasta "Codigos_em_C" se encontrarão os códigos do cálculo do número de Euler na versão serial e na versão paralelizada, ambos em C. Já na pasta "Codigos_em_Go" haverão os códigos em Go das versões serial e paralela.

<br>

Exercício 04 – Decomposição de tarefas

<br>
1. Quais são as tarefas no caminho crítico para cada grafo de dependência? Para responder a pergunta, apresente um DAG do seu projeto.
<br>

![image](https://github.com/BrunoEAH/Projeto_Final_Euler/assets/111454984/ea5f4ed6-8b49-45a8-9082-f48147b39c26)

Tarefa T0: Declaração das variáveis de das threads.
<br>
Tarefa T1 à T100: 100 threads executando o cálculo
<br>
Tarefa T101: diretiva pragma omp critical fazendo com que as threads se convirjam e some os resultados obtidos na variável e, representando a constante de Euler.
<br>

2. Qual é o limite inferior do tempo de execução paralela para cada decomposição?
<br>
  O limite inferior do tempo de execução paralela é de 51,346 segundos, ou seja, o tempo de execução da versão serial. 


3. Quantos processadores são necessários para se conseguir o tempo mínimo de execução?
<br>
  São necessários 2 processadores para se conseguir o tempo mínimo de execução.
  
4. Qual é o grau máximo de concorrência?

<br>
  O grau máximo de concorrência é de 100 threads, visto que foram usadas 100 threads no programa.
  
5. Qual é o paralelismo médio?
<br>
  O paralelismo médio é de 51,346/0,629 = 81,63116.

