# Lecture 09: Machine-Level Programming V: Advanced Topics

![Screenshot 2022-10-11 at 23.57.57.png](Lecture%2009%20Machine-Level%20Programming%20V%20Advanced%20To%208e4624e5dc344527a49198fd8a4d16e9/Screenshot_2022-10-11_at_23.57.57.png)

![Screenshot 2022-10-11 at 23.58.02.png](Lecture%2009%20Machine-Level%20Programming%20V%20Advanced%20To%208e4624e5dc344527a49198fd8a4d16e9/Screenshot_2022-10-11_at_23.58.02.png)

| up→t1.u | long | movq (%rdi), %rax
mvq %rax, (%rsi) |
| --- | --- | --- |
| up→t1.v | short | movw 8(%rdi), %ax movw %ax, (%rsi) |
| &up→t1.w | char* | addq $10, %rdi
movq %rdi, (%rsi) |
| up→t2.a | int* | movq %rdi, (%rsi) |
| up→t2.a[up→t1.u] | int | movq (%rdi), %rax
movl (%rdi,%rax,4), %eax
movl %eax, (%rsi) |
| *up→t2.p | char | movq 8(%rdi), %rax
movb (%rax), %al
movb %al, (%rsi) |

![Screenshot 2022-10-12 at 0.03.37.png](Lecture%2009%20Machine-Level%20Programming%20V%20Advanced%20To%208e4624e5dc344527a49198fd8a4d16e9/Screenshot_2022-10-12_at_0.03.37.png)

A. 약 2^13 (8192개)

B. 128 = 2^7 이므로 2^6 (64) attempts

![Screenshot 2022-10-12 at 0.12.44.png](Lecture%2009%20Machine-Level%20Programming%20V%20Advanced%20To%208e4624e5dc344527a49198fd8a4d16e9/Screenshot_2022-10-12_at_0.12.44.png)

![Screenshot 2022-10-12 at 0.12.48.png](Lecture%2009%20Machine-Level%20Programming%20V%20Advanced%20To%208e4624e5dc344527a49198fd8a4d16e9/Screenshot_2022-10-12_at_0.12.48.png)

A.

unprotected code: 24, 0

protected code: 8, 16, (canary is stored at offset 40)

B.

protected code에서는 v가 stack에서 buf보다 위에 있기 때문에 buf가 넘쳐도 v에 영향을 주지 않는다