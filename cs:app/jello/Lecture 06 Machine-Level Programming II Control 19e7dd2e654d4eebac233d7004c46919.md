# Lecture 06: Machine-Level Programming II: Control

![Screenshot 2022-09-20 at 21.35.43.png](Lecture%2006%20Machine-Level%20Programming%20II%20Control%2019e7dd2e654d4eebac233d7004c46919/Screenshot_2022-09-20_at_21.35.43.png)

![Screenshot 2022-09-20 at 21.35.47.png](Lecture%2006%20Machine-Level%20Programming%20II%20Control%2019e7dd2e654d4eebac233d7004c46919/Screenshot_2022-09-20_at_21.35.47.png)

A. double-word, less → int

B. word, greater or equal → short

C. byte, below or equal → unsigned char

D. quad word, not equal → long or unsigned long

![Screenshot 2022-09-20 at 21.37.40.png](Lecture%2006%20Machine-Level%20Programming%20II%20Control%2019e7dd2e654d4eebac233d7004c46919/Screenshot_2022-09-20_at_21.37.40.png)

A. quad word, greater or equal → long

B. word, equal → short or unsigned short

C. byte, above → unsigned char

D. double word, less or equal → int

![Screenshot 2022-09-20 at 21.38.31.png](Lecture%2006%20Machine-Level%20Programming%20II%20Control%2019e7dd2e654d4eebac233d7004c46919/Screenshot_2022-09-20_at_21.38.31.png)

A.

```cpp
void f (short a, short *p) {
	if (a == 0) {
		goto done;
	}
	if (a >= *p) {
		goto done;
	}
	*p = a;
done:
	return;
}
```

B.

Actually there are two conditions: && , <

![Screenshot 2022-09-20 at 21.40.30.png](Lecture%2006%20Machine-Level%20Programming%20II%20Control%2019e7dd2e654d4eebac233d7004c46919/Screenshot_2022-09-20_at_21.40.30.png)

![Screenshot 2022-09-20 at 21.40.35.png](Lecture%2006%20Machine-Level%20Programming%20II%20Control%2019e7dd2e654d4eebac233d7004c46919/Screenshot_2022-09-20_at_21.40.35.png)

0

a > b

result + (a*b)

a - 1

![Screenshot 2022-09-20 at 21.41.21.png](Lecture%2006%20Machine-Level%20Programming%20II%20Control%2019e7dd2e654d4eebac233d7004c46919/Screenshot_2022-09-20_at_21.41.21.png)

5

b ^ 15

0

c + 112

2

7

(c+b) << 2

4

a

b