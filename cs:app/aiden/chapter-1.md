## 1.1: Information Is Bits + Context
- 세상의 모든 정보들(ex: `hello.c`와 같은 `source program` 등)은 연속된 0과 1로 이루어져 있으며, 8-bits로 구성된 단위인 `byte`로 구조화되어 있다.

## 1.2: Programs Are Translated by Other Programs into Different Forms
`Compilation System`
1. `Preprocessing phase`
    - preprocessor가 `#` 문자로 시작하는 directive를 참고해 원본 C 프로그램을 수정한다.
2. `Compilation phase`
    - compiler가 text 파일인 `hello.i`를 `assembly language` 프로그램을 담고 있는 text 파일인 `hello.s`로 변환한다.
    - 서로 다른 high-level 언어를 서로 다른 컴파일러로 컴파일해도, 같은 언어(: Assembly language)로 작성된 결과물을 확인할 수 있다는 측면에서 유용하다.
3. `Assembly phase`
    - `hello.s` 파일을 machine language instruction의 묶음(: `relocatable object program`)이 담겨있는 `hello.o` 파일로 변환한다.
4. `Linking phase`
    - `hello.c` 프로그램 내에서 사용하고 있는 standard C library(ex: `printf`)가 있을 경우, 해당 library가 위치한 object file(ex: `printf.o`)를 `hello.o` 파일과 `merge`한다.
    - merging 과정을 통해 변환된 `hello` 파일은 `executable object file`(또는, `executable`)이라고 불린다.
    - executable object file은 메모리에 load될 준비가 되었으며, system에 의해 실행된다.

## 1.3: It Pays to Understand How Compilation System Work
프로그래머가 Compilation system을 이해해야 하는 이유
- 프로그램의 성능을 최적화하기 위해: machine-level 코드에 대한 기본적인 이해와 함께, 컴파일러가 여러 다른 C statement를 어떻게 machine-level 코드로 변환하는지에 대해 알고 있어야만 프로그래밍 측면에서의 좋은 결정을 내릴 수 있다.
- link-time error를 이해하기 위해: 가장 복잡한 프로그래밍 에러들 중 몇몇은 linker의 동작과 관련되어 있다.
- 보안적 허점을 피하기 위해

## 1.4 Processors Read and Interpret Instructions Stored in Memory
### 1.4.1 Hardware Organization of a System
`Buses`
- 전기/전자적 통로의 모음
- 컴포넌트 간에 bytes로 이루어진 정보들을 이리저리 옮기는 역할을 한다.
- 일반적으로 고정된 크기의 bytes 덩어리인 `words`를 운반한다.

`Main Memory`
- program과 data를 지니고 있는 임시 저장 공간
- `dynamic random access memory`(`DRAM`)의 집합으로 구성되어 있다.

`Processor`
- `central processing unit`(`CPU`)
- main memory 내부에 저장되어 있는 instruction을 해석, 실행하는 엔진
- `program counter`(`PC`)로 불리우는 `word` 크기의 저장 공간(`register`)이 core를 이루고 있다.
- instruction 실행 모델인 `instruction set architecture`(`ISA`)에 따라 동작한다.
- program counter가 가리키는 메모리의 instruction을 읽고, instruction의 bits를 해석한 후 instruction이 지시하는 간단한 operation을 수행한다. 그 후, program counter가 다음 instruction을 가리키도록 업데이트한다.
- operation은 main memory, `register file`, `arithmetic/locgic unit`(`ALU`)에 관여되어 있다. register file은 word 크기의 register의 집합으로 구성도니 작은 저장 공간이다. ALU는 새로운 data와 address 값을 계산한다.

### 1.4.2 Running the `hello` Program
- shell에 `./hello` command를 입력하면 shell은 `hello` object file code와 data를 disk에서 main memory로 복사하는 일련의 instruction을 실행함으로써 executable을 load한다.
- `hello` object file의 code와 data가 main memory에 load되고 나면, processor는 `hello` program의 `main` 루틴에 위치한 machine language instruction들을 실행하기 시작한다. 이 instruction들은 문자열 `hello, world\n`의 bytes를 memory에서 register file로, 그리고 display device로 복사한다.

## 1.5 Caches Matter
- 중요한 교훈: 시스템은 정보를 한 쪽에서 다른 쪽으로 옮기는 데 많은 시간을 소요한다.
- 물리적인 법칙으로 인해 큰 저장 공간은 작은 저장 공간보다 느리다. 그리고 빠른 저장 공간은 느린 저장 공간보다 비싸다.

`cache memories`(`caches`)
- processor가 곧 필요로 할 것 같은 정보들이 잠시 머무르는 저장 공간
- L1과 L2 cache 등은 `static random access memory`(`SRAM`)으로 구성되어 있다.
- '`locality`를 통해 매우 크면서도 빠른 memory를 활용할 수 있다'는 것이 caching의 아이디어이다. locality란 program이 인접한 data와 code에 접근하는 경향성을 말한다.

## 1.6 Storage Devices Form a Hierarchy
`memory heirarchy`
- processor와 크고 느린 저장 공간(e.g., main memory) 사이에 작고 빠른 저장 공간(e.g., cache)를 위치시키는 개념







