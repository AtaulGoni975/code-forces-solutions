# Codeforces Solutions (C)

My solutions to [Codeforces](https://codeforces.com) problems, written in C.

I started pursuing competitive programming because my faculty suggested solving Codeforces problemsets. This repo is where I keep my practice and track my progress, one problem at a time.

## How this repo works

I code all my problems in one single file, `code forces.c`. When I finish a problem, I turn that code into a comment and start the next problem right below it. That's why the older solutions in the file are all commented out, and only the problem I'm currently working on is live code.

If you want to run an older solution, just remove the comment markers around it.

## Solved problems

I'm working through the 800-rated problems in the order of the Codeforces problemset (sorted by rating, then by number of solves).

| # | Problem | Name | Tags |
|---|---------|------|------|
| 1 | [4A](https://codeforces.com/problemset/problem/4/A) | Watermelon | brute force, math |
| 2 | [71A](https://codeforces.com/problemset/problem/71/A) | Way Too Long Words | strings |
| 3 | [231A](https://codeforces.com/problemset/problem/231/A) | Team | brute force, greedy |
| 4 | [282A](https://codeforces.com/problemset/problem/282/A) | Bit++ | implementation |
| 5 | [158A](https://codeforces.com/problemset/problem/158/A) | Next Round | implementation |
| 6 | [50A](https://codeforces.com/problemset/problem/50/A) | Domino piling | greedy, math |
| 7 | [263A](https://codeforces.com/problemset/problem/263/A) | Beautiful Matrix | implementation |
| 8 | [112A](https://codeforces.com/problemset/problem/112/A) | Petya and Strings | implementation, strings |
| 9 | [236A](https://codeforces.com/problemset/problem/236/A) | Boy or Girl | brute force, implementation, strings |
| 10 | [339A](https://codeforces.com/problemset/problem/339/A) | Helpful Maths | greedy, implementation, sortings, strings |
| 11 | [281A](https://codeforces.com/problemset/problem/281/A) | Word Capitalization | implementation, strings |
| 12 | [791A](https://codeforces.com/problemset/problem/791/A) | Bear and Big Brother | implementation |
| 13 | [617A](https://codeforces.com/problemset/problem/617/A) | Elephant | math |
| 14 | [266A](https://codeforces.com/problemset/problem/266/A) | Stones on the Table | implementation |
| 15 | [546A](https://codeforces.com/problemset/problem/546/A) | Soldier and Bananas | brute force, implementation, math |
| 16 | [59A](https://codeforces.com/problemset/problem/59/A) | Word | implementation, strings |
| 17 | [977A](https://codeforces.com/problemset/problem/977/A) | Wrong Subtraction | implementation |
| 18 | [110A](https://codeforces.com/problemset/problem/110/A) | Nearly Lucky Number | implementation |
| 19 | [734A](https://codeforces.com/problemset/problem/734/A) | Anton and Danik | implementation |
| 20 | [41A](https://codeforces.com/problemset/problem/41/A) | Translation | implementation, strings |
| 21 | [677A](https://codeforces.com/problemset/problem/677/A) | Vanya and Fence | implementation |
| 22 | [271A](https://codeforces.com/problemset/problem/271/A) | Beautiful Year | brute force, implementation |
| 23 | [116A](https://codeforces.com/problemset/problem/116/A) | Tram | implementation |
| 24 | [1030A](https://codeforces.com/problemset/problem/1030/A) | In Search of an Easy Problem | implementation |
| 25 | [266B](https://codeforces.com/problemset/problem/266/B) | Queue at the School | constructive algorithms, implementation |
| 26 | [486A](https://codeforces.com/problemset/problem/486/A) | Calculating Function | implementation, math |
| 27 | [467A](https://codeforces.com/problemset/problem/467/A) | George and Accommodation | implementation |
| 28 | [344A](https://codeforces.com/problemset/problem/344/A) | Magnets | implementation |
| 29 | [200B](https://codeforces.com/problemset/problem/200/B) | Drinks | implementation, math |
| 30 | [136A](https://codeforces.com/problemset/problem/136/A) | Presents | implementation |
| 31 | [228A](https://codeforces.com/problemset/problem/228/A) | Is your horseshoe on the other hoof? | implementation |
| 32 | [61A](https://codeforces.com/problemset/problem/61/A) | Ultra-Fast Mathematician | implementation |
| 33 | [1328A](https://codeforces.com/problemset/problem/1328/A) | Divisibility Problem | math |
| 34 | [705A](https://codeforces.com/problemset/problem/705/A) | Hulk | implementation |
| 35 | [520A](https://codeforces.com/problemset/problem/520/A) | Pangram | implementation, strings |
| 36 | [469A](https://codeforces.com/problemset/problem/469/A) | I Wanna Be the Guy | greedy, implementation |
| 37 | [144A](https://codeforces.com/problemset/problem/144/A) | Arrival of the General | implementation |
| 38 | [996A](https://codeforces.com/problemset/problem/996/A) | Hit the Lottery | dp, greedy |
| 39 | [443A](https://codeforces.com/problemset/problem/443/A) | Anton and Letters | constructive algorithms, implementation |
| 40 | [148A](https://codeforces.com/problemset/problem/148/A) | Insomnia cure | constructive algorithms, implementation, math |
| 41 | [785A](https://codeforces.com/problemset/problem/785/A) | Anton and Polyhedrons | implementation, strings |

## How to compile and run

```
gcc -Wall -Wextra "code forces.c" -o solution
./solution
```

On Windows, run `solution.exe` instead of `./solution`. The program reads from standard input, so type the sample input or redirect a file:

```
./solution < input.txt
```

## Topics practiced so far

- Input and output with `scanf` and `printf`
- Conditions (`if / else`, `switch`)
- Loops (`for`, `while`, `do-while`)
- Arrays and strings
- Basic math, greedy and simulation problems

## Goals

- Keep solving problems steadily and upsolve the ones I miss
- Learn new techniques as I go (sorting, binary search, math, graphs, DP)
- Get ready for ICPC-style programming contests

## Notes

- Everything is written in plain C so it compiles with `gcc`.
- Solutions are my own attempts. I try each problem before looking at hints or editorials.

## License

This project is released under the [MIT License](LICENSE).
