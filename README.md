# 🗓️ Calculadora de Datas em C

![Linguagem](https://img.shields.io/badge/Linguagem-C-blue.svg)

---

## 🚀 Sobre o Projeto

Este projeto foi desenvolvido como parte da minha jornada de aprendizado na **trilha de Back-End da Codecademy**. O objetivo foi colocar em prática conceitos fundamentais da linguagem C, incluindo:

* Lógica de programação e estruturas condicionais.
* Modularização de código em funções.
* Manipulação de ponteiros para alterar variáveis.
* Validação de entradas do usuário (input validation).
* Criação de um programa interativo de linha de comando (CLI).

---

## ✨ Funcionalidades

O programa oferece um menu simples com duas funcionalidades principais:

1.  **Verificar Ano Bissexto**:
    * Recebe um ano como entrada (entre 1800 e 10000).
    * Informa se o ano fornecido é bissexto ou não, seguindo as regras do calendário gregoriano.

2.  **Adicionar Dias a uma Data**:
    * Recebe uma data inicial no formato `mm dd aaaa` e um número de dias a serem adicionados.
    * Valida se a data inicial é uma data real (ex: não permite 30 de fevereiro).
    * Calcula e exibe a nova data após a adição dos dias, cuidando corretamente das viradas de mês e de ano.

---

## 🛠️ Como Usar

Para compilar e executar este projeto localmente, você precisará de um compilador C, como o **GCC**.

### Pré-requisitos


Certifique-se de que o GCC (ou um compilador C equivalente) esteja instalado.

```bash
# Para verificar se o GCC está instalado (no Linux ou macOS)
gcc --version
```

### Compilação e Execução
1. Clone o repositório (substitua pela URL do seu repositório):
   ```bash
   git clone [https://github.com/SEU-USUARIO/SEU-REPOSITORIO.git](https://github.com/SEU-USUARIO/SEU-REPOSITORIO.git)
   ```
2. Navegue até o diretório do projeto:
      ```bash
      cd SEU-REPOSITORIO
   ```
3. Compile o código-fonte:
      ```bash
      gcc nome_do_arquivo.c -o calculadora_datas
   ```
4. Execute o programa:
      ```bash
      ./calculadora_datas
   ```

### Exemplos de Uso

Ao executar, o programa apresentará o seguinte menu:
   ```bash
Select an option:
  1. Check for a leap year
  2. Add days to a date
Enter selection:
   ```

Exemplo 1: Verificando um ano bissexto
   ```bash
Enter selection: 1
Enter a year between 1800 and 10000: 2024
2024 is a Leap Year.
   ```

Exemplo 2: Adicionando dias a uma data
  ```bash
Enter selection: 2
Enter a date (mm dd yyyy) and days to add: 2 25 2024 10
New date: Mar 6, 2024
   ```

## 💻 Tecnologias Utilizadas
- **Linguagem C**

  

<p align="center">
  Feito com ❤️ como parte da minha jornada de aprendizado.
</p>






