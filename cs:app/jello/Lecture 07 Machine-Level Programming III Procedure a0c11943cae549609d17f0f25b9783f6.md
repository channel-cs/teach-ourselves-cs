# Lecture 07: Machine-Level Programming III: Procedures

![Screenshot 2022-09-25 at 21.35.53.png](Lecture%2007%20Machine-Level%20Programming%20III%20Procedure%20a0c11943cae549609d17f0f25b9783f6/Screenshot_2022-09-25_at_21.35.53.png)

![Screenshot 2022-09-25 at 21.35.58.png](Lecture%2007%20Machine-Level%20Programming%20III%20Procedure%20a0c11943cae549609d17f0f25b9783f6/Screenshot_2022-09-25_at_21.35.58.png)

| F1 | 0x400548 | lea | 10 | - | - | 0x7fffffffe818 | 0x400565 |
| --- | --- | --- | --- | --- | --- | --- | --- |
| F2 | 0x40054c | sub | 10 | 11 | - | 0x7fffffffe818 | 0x400565 |
| F3 | 0x400550 | callq | 10 | 11 | - | 0x7fffffffe818 | 0x400565 |
| L1 | 0x400540 | mov | 9 | 11 | - | 0x7fffffffe810 | 0x400555 |
| L2 | 0x400543 | imul | 9 | 11 | 9 | 0x7fffffffe810 | 0x400555 |
| L3 | 0x400547 | retq | 9 | 11 | 99 | 0x7fffffffe810 | 0x400555 |
| F4 | 0x400555 | repz | 9 | 11 | 99 | 0x7fffffffe818 | 0x400565 |
| M2 | 0x400565 | mov | 9 | 11 | 99 | 0x7fffffffe820 | - |

![Screenshot 2022-09-25 at 21.49.50.png](Lecture%2007%20Machine-Level%20Programming%20III%20Procedure%20a0c11943cae549609d17f0f25b9783f6/Screenshot_2022-09-25_at_21.49.50.png)

![Screenshot 2022-09-25 at 21.49.54.png](Lecture%2007%20Machine-Level%20Programming%20III%20Procedure%20a0c11943cae549609d17f0f25b9783f6/Screenshot_2022-09-25_at_21.49.54.png)

A.

a0 = $rbx,

a1 = $r15,

a2 = $r14,

a3 = $r13,

a4 = $r12,

a5 = $rbp,

a6 = $rax,

a7 = $rdx,

B.

$rax(a6) and $rdx(a7) get stored on the stack

![Screenshot 2022-09-25 at 21.49.24.png](Lecture%2007%20Machine-Level%20Programming%20III%20Procedure%20a0c11943cae549609d17f0f25b9783f6/Screenshot_2022-09-25_at_21.49.24.png)

![Screenshot 2022-09-25 at 21.49.28.png](Lecture%2007%20Machine-Level%20Programming%20III%20Procedure%20a0c11943cae549609d17f0f25b9783f6/Screenshot_2022-09-25_at_21.49.28.png)

A. x

B.

x == 0

return 0

x >> 2

x + rv