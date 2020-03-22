# 系統程式課程 -- 習題專案

欄位 | 內容
-----|--------
學期 | 108 學年度下學期
學生 |  陳詠鑫
學號末兩碼 | 44
教師 | [陳鍾誠](https://misavo.com/blog/%E9%99%B3%E9%8D%BE%E8%AA%A0)
學校科系 | [金門大學資訊工程系](https://www.nqu.edu.tw/educsie/index.php)
課程首頁 | [系統程式](https://misavo.com/blog/%E9%99%B3%E9%8D%BE%E8%AA%A0/%E8%AA%B2%E7%A8%8B/%E7%B3%BB%E7%B5%B1%E7%A8%8B%E5%BC%8F)

## 測試範例
```
a = 6;
b = 9;

if (a > b)t = a;
else t = b;
```
## 執行方法
1. make   gcc -std=c99 -O0 lexer.c compiler.c main.c -o compiler
2. ./compiler test/cond.c
3. 執行結果:
```
a = 6;
b = 9;

if (a > b)t = a;
else t = b;
========== lex ==============
token=a
token==
token=6
token=;
token=b
token==
token=9
token=;
token=if
token=(
token=a
token=>
token=b
token=)
token=t
token==
token=a
token=;
token=else
token=t
token==
token=b
token=;
========== dump ==============
0:a
1:=
2:6
3:;
4:b
5:=
6:9
7:;
8:if
9:(
10:a
11:>
12:b
13:)
14:t
15:=
16:a
17:;
18:else
19:t
20:=
21:b
============ parse =============
t0 = 6
t1 = 9
b = t1
t2 = a
t3 = b
t4 = t2 > t3
if not t4 goto L0
t5 = a
t = t5
goto L1
(L0)
t6 = b
t = t6
(L1)
```
