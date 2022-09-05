# Lecture 05: Machine-Level Programming I: Basics

![Screenshot 2022-09-05 at 21.52.58.png](Lecture%2005%20Machine-Level%20Programming%20I%20Basics%200b896f78604b41ae9bde19c90551bd54/Screenshot_2022-09-05_at_21.52.58.png)

0x100

0XAB

0x108

0xFF

address 4 + 0x100 = address 0x104 = 0xAB

address 9 + 0x100 + 0x3 = address 0x10C = 0x11

address 260 + 0x1 + 0x3 = address 0x104 + 0x1 + 0x3 = address 0x108 = 0x13

address 0xFC + 4 * 0x1 = address 0x100 = 0xFF

address 0x100 + 4 * 0x3 = address 0x10C = 0x11

![Screenshot 2022-09-05 at 21.53.49.png](Lecture%2005%20Machine-Level%20Programming%20I%20Basics%200b896f78604b41ae9bde19c90551bd54/Screenshot_2022-09-05_at_21.53.49.png)

```cpp
void decode1(long *xp, long *yp, long *zp) {
  long x = *xp
  long y = *yp
  long z = *zp
  *yp = x
  *zp = y
  *xp = z
}
```

![Screenshot 2022-09-05 at 21.54.01.png](Lecture%2005%20Machine-Level%20Programming%20I%20Basics%200b896f78604b41ae9bde19c90551bd54/Screenshot_2022-09-05_at_21.54.01.png)

![Screenshot 2022-09-05 at 21.54.04.png](Lecture%2005%20Machine-Level%20Programming%20I%20Basics%200b896f78604b41ae9bde19c90551bd54/Screenshot_2022-09-05_at_21.54.04.png)

9 + q

q + p

q + 3p

2 + p + 7p = 2 + 8p

0xE + 3q

6 + p + 7q

![Screenshot 2022-09-05 at 21.54.15.png](Lecture%2005%20Machine-Level%20Programming%20I%20Basics%200b896f78604b41ae9bde19c90551bd54/Screenshot_2022-09-05_at_21.54.15.png)

a = 10y

a = a + z

a = a + xy

→ a = 10y + z + xy

```cpp
y * (10 + x) + z
```

![Screenshot 2022-09-05 at 21.54.27.png](Lecture%2005%20Machine-Level%20Programming%20I%20Basics%200b896f78604b41ae9bde19c90551bd54/Screenshot_2022-09-05_at_21.54.27.png)

0x100,  0xFF + 0x1 = 0x100

0x108, 0xAB - 0x3 = 0xA8

value of (0x100 + 0x3 * 8) = 0x118, 0x11 * 0x10($16) = 0x110

16 + 0x100 = 0x110, 0x14

%rcx, 0x0

%rax, 0x100 - 0x3 = 0xFD