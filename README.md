# Projeto_Final_Euler


Grupo: Bruno E.A. Hayek TIA: 32145799
<br>

  Para este projeto de computação paralela de calcular o número de Euler farei códigos na linguagem C e na linguagem Go. Na pasta "Codigos_em_C" se encontrarão os códigos do cálculo do número de Euler na versão serial e na versão paralelizada, ambos em C. Já na pasta "Codigos_em_Go" haverão os códigos em Go das versões serial e paralela.

<br>

Exercício 04 – Decomposição de tarefas

<br>
1. Quais são as tarefas no caminho crítico para cada grafo de dependência? Para responder a pergunta, apresente um DAG do seu projeto.
<br>

![DAG](https://github.com/BrunoEAH/Projeto_Final_Euler/assets/111454984/424b87fd-6705-42b2-b1fb-a3f6fd70da7e)

<br>

2. Qual é o limite inferior do tempo de execução paralela para cada decomposição?
  O limite inferior do tempo de execução paralela é de 44,561 segundos, ou seja, o tempo de execução da versão serial. 


3. Quantos processadores são necessários para se conseguir o tempo mínimo de execução?
  São necessários 2 processadores para se conseguir o tempo mínimo de execução.
  
4. Qual é o grau máximo de concorrência?
  O grau máximo de concorrência é de 100 threads, visto que foram usadas 100 threads no programa.
  
5. Qual é o paralelismo médio?
  O paralelismo médio é de 44,561/0,663 => ≅ 67,211161.

