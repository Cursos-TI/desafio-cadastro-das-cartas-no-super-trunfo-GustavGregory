# Desafio Super Trunfo: Cadastro de Cartas em C

Olá\! Bem-vindo ao meu repositório do desafio "Super Trunfo - Países".

Este projeto foi minha solução para o **Nível Novato** do desafio proposto pela MateCheck. O grande objetivo aqui era colocar em prática os conceitos mais fundamentais da linguagem C, como a manipulação de variáveis, entrada e saída de dados, para construir a base de um jogo.

## 🎯 O Desafio que Resolvi

A missão era criar um programa em C capaz de:

1.  **Cadastrar duas cartas** do jogo.
2.  Pedir ao usuário, via terminal, as informações de cada carta.
3.  **Armazenar** esses dados em variáveis.
4.  Ao final, **exibir na tela** todas as informações de forma clara e organizada.

As informações de cada carta que meu programa manipula são:

  - **Estado:** Uma letra (ex: `A`, `B`, `C`...).
  - **Código da Carta:** Uma combinação de letra e número (ex: `A01`).
  - **Nome da Cidade:** O nome da cidade da carta.
  - **População:** Número de habitantes (`int`).
  - **Área:** A área em km² (`float`).
  - **PIB:** O Produto Interno Bruto (`float`).
  - **Pontos Turísticos:** A quantidade de pontos turísticos (`int`).

A regra principal do desafio era manter o código simples, **sem usar laços de repetição (`for`, `while`) ou condicionais (`if`, `else`)**.

## 🛠️ Como o Programa Funciona

O código em `super_trunfo.c` funciona de maneira bem direta:

1.  **Declaração de Variáveis:** Primeiro, eu reservei um espaço na memória para cada informação das duas cartas.
2.  **Interação com o Usuário:** O programa imprime na tela mensagens pedindo cada um dos dados, um por vez.
3.  **Leitura dos Dados:** Utilizei a função `scanf` para ler o que o usuário digita e salvar nas variáveis correspondentes. Um detalhe legal é o uso de `scanf(" %[^\n]", ...)` para conseguir ler nomes de cidades com espaços, como "Rio de Janeiro".
4.  **Exibição Final:** Depois que as duas cartas são cadastradas, o programa limpa a tela (opcionalmente) e mostra um resumo organizado com todos os dados que foram inseridos.

## 🚀 Como Executar o Projeto

Você pode compilar e rodar este projeto em qualquer ambiente com um compilador C (como o GCC).

1.  **Clone o repositório:**

    ```bash
    git clone https://github.com/Cursos-TI/desafio-cadastro-das-cartas-no-super-trunfo-GustavGregory.git
    ```

2.  **Navegue até a pasta do projeto:**

    ```bash
    cd desafio-cadastro-das-cartas-no-super-trunfo-GustavGregory
    ```

3.  **Compile o arquivo C:**

    ```bash
    gcc CartasSuperTrunfo.c -o meu_jogo
    ```

4.  **Execute o programa:**

    ```bash
    ./meu_jogo
    ```

Ao executar, o terminal se tornará interativo e vai te guiar pelo processo de cadastro das cartas\!