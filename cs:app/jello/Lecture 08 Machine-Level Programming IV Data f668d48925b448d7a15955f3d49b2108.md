# Lecture 08: Machine-Level Programming IV: Data

![Screenshot 2022-10-04 at 17.49.43.png](Lecture%2008%20Machine-Level%20Programming%20IV%20Data%20f668d48925b448d7a15955f3d49b2108/Screenshot_2022-10-04_at_17.49.43.png)

![Screenshot 2022-10-04 at 17.49.46.png](Lecture%2008%20Machine-Level%20Programming%20IV%20Data%20f668d48925b448d7a15955f3d49b2108/Screenshot_2022-10-04_at_17.49.46.png)

| P | 4 | 20 | XP | XP + 4i |
| --- | --- | --- | --- | --- |
| Q | 2 | 4 | XQ | XQ + 2i |
| R | 8 | 72 | XR | XR + 8i |
| S | 8 | 80 | XS | XS + 8i |
| T | 8 | 16 | XT | XT + 8i |

![Screenshot 2022-10-04 at 17.59.23.png](Lecture%2008%20Machine-Level%20Programming%20IV%20Data%20f668d48925b448d7a15955f3d49b2108/Screenshot_2022-10-04_at_17.59.23.png)

A.

offsets: 0, 2, 6, 14

total size: 22

alignment: 8

B.

offsets: 0, 8, 16, 24

total size: 32

alignment: 8

C.

offsets: 0, 16

total size: 32

alignment: 8

D.

offsets: 0, 16

total size: 32

alignment: 8

E. (이해안됨, 답안지대로 적음)

offsets: 0, 24

total size: 40

alignment: 8

![Screenshot 2022-10-04 at 18.00.03.png](Lecture%2008%20Machine-Level%20Programming%20IV%20Data%20f668d48925b448d7a15955f3d49b2108/Screenshot_2022-10-04_at_18.00.03.png)

![Screenshot 2022-10-04 at 18.00.07.png](Lecture%2008%20Machine-Level%20Programming%20IV%20Data%20f668d48925b448d7a15955f3d49b2108/Screenshot_2022-10-04_at_18.00.07.png)

A.

| Field | a | b | c | d | e | f | g | h |
| --- | --- | --- | --- | --- | --- | --- | --- | --- |
| Size | 8 | 4 | 1 | 2 | 8 | 8 | 4 | 8 |
| Offset | 0 | 8 | 16 | 24 | 32 | 40 | 48 | 56 |

B. 64 bytes

C.

![Screenshot 2022-10-04 at 18.04.07.png](Lecture%2008%20Machine-Level%20Programming%20IV%20Data%20f668d48925b448d7a15955f3d49b2108/Screenshot_2022-10-04_at_18.04.07.png)

![Screenshot 2022-10-04 at 18.04.11.png](Lecture%2008%20Machine-Level%20Programming%20IV%20Data%20f668d48925b448d7a15955f3d49b2108/Screenshot_2022-10-04_at_18.04.11.png)

A. Registers: a in %xmm0, b in %rdi c in %xmm1, d in %esi

B. Registers: a in %edi, b in %rsi, c in %rdx, d in %rcx

C. Registers: a in %rdi, b in %xmm0, c in %esi, d in %xmm1

D. Registers: a in %xmm0, b in %rdi, c in %xmm1, d in %xmm2