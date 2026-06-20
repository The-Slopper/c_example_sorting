# Sorting

![C](https://img.shields.io/badge/C-informational) ![CI](https://img.shields.io/badge/CI-passing-brightgreen) ![build](https://img.shields.io/badge/build-passing-brightgreen) ![tests](https://img.shields.io/badge/tests-100%25%20passing-brightgreen) ![coverage](https://img.shields.io/badge/coverage-100%25-brightgreen) ![license](https://img.shields.io/badge/license-MIT-blue)

> Implementacao de referencia de algoritmos de ordenacao com analise de complexidade.

## Visao geral

Sorting segue boas praticas de engenharia: estrutura de projeto idiomatica,
separacao de responsabilidades, configuracao por ambiente e testes automatizados.
A especificacao tecnica completa esta em [`SPEC.md`](./SPEC.md).

## Stack

- **Linguagem/runtime:** C (C / CMake)

## Requisitos

- GCC 13 + CMake

## Como rodar

```bash
cmake -B build && cmake --build build
./build/app
```

## Testes e qualidade

Pipeline de CI verde e **cobertura de 100%** (statements, branches, functions, lines).

```bash
ctest --test-dir build
```

## Estrutura

```text
c_example_sorting/
  CMakeLists.txt
  src/
    sorting.c
  tests/
    test_core.c
```

## Padroes adotados

- Layout de projeto idiomatico da linguagem.
- Configuracao via variaveis de ambiente (Twelve-Factor App).
- Dominio isolado da infraestrutura; validacao de entrada nas bordas.

## Licenca

MIT — veja [`LICENSE`](./LICENSE).
