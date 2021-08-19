                      FIND COUNT OF REAPETED NUMBERS

                      time limit per test: 1 second
                   memory limit per test: 256 megabytes
                           input: standard input
                           output: standard output

Given n integers(maybe negative).you have to find how many integers reapeted strictly greater than k times.

Input
The first line contains a single integer t(1<=t<=10) - the number of test cases. Each test case consists of two lines.

The first line contains two integer. first is n(1<=n<=10^5) - the length of array and second is k(1 <= k <= 10).

The second line contains n integers , i.e.-  a1,a2,a3,a4....ai (-10^5<=ai<=10^5).

Output
For each test case,print a single value(Each in new line) - the number of integers which reapeted strictly greater than k times.



Example
input
1
20 3
-1 2 3 4 3 3 3 3 9 -1 4 -1 -1 5 8 2 2 6 9 1
output
2

Note
-1 repeated 4 times and three repeated 5 times Which are strictly greater than 3.So output is 2.

