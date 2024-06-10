# Coffee Temperature Admissibility Checker

Karen, a coffee aficionado, wants to know the optimal temperature for brewing the perfect cup of coffee. She has read several recipe books, including the universally acclaimed "The Art of the Covfefe".

## Problem Statement

Karen knows `n` coffee recipes. The `i-th` recipe suggests that coffee should be brewed between `li` and `ri` degrees, inclusive, to achieve the optimal taste.

A temperature is admissible if at least `k` recipes recommend it.

Karen has `q` questions. For each question, given that she only wants to prepare coffee with a temperature between `a` and `b`, inclusive, you need to tell her how many admissible integer temperatures fall within the range.

## Input

1. The first line of input contains three integers, `n`, `k` (1 ≤ k ≤ n ≤ 200000), and `q` (1 ≤ q ≤ 200000), the number of recipes, the minimum number of recipes a certain temperature must be recommended by to be admissible, and the number of questions Karen has, respectively.
2. The next `n` lines describe the recipes. Specifically, the `i-th` line among these contains two integers `li` and `ri` (1 ≤ li ≤ ri ≤ 200000), describing that the `i-th` recipe suggests that the coffee be brewed between `li` and `ri` degrees, inclusive.
3. The next `q` lines describe the questions. Each of these lines contains `a` and `b` (1 ≤ a ≤ b ≤ 200000), describing that she wants to know the number of admissible integer temperatures between `a` and `b` degrees, inclusive.

## Output

For each question, output a single integer on a line by itself, representing the number of admissible integer temperatures between `a` and `b` degrees, inclusive.

## Examples

### Example 1

**Input:** <br/>
3 2 4 <br/>
91 94 <br/>
92 97 <br/>
97 99 <br/>
92 94<br/>
93 97<br/>
95 96<br/>
90 100<br/>

**Output:**<br/>
3<br/>
3<br/>
0<br/>
4<br/>
<hr/>

**Explanation:**

In the first test case, Karen knows 3 recipes:

- The first one recommends brewing the coffee between 91 and 94 degrees, inclusive.
- The second one recommends brewing the coffee between 92 and 97 degrees, inclusive.
- The third one recommends brewing the coffee between 97 and 99 degrees, inclusive.

A temperature is admissible if at least 2 recipes recommend it.

She asks 4 questions:

1. In her first question, she wants to know the number of admissible integer temperatures between 92 and 94 degrees, inclusive. There are 3: 92, 93, and 94 degrees are all admissible.
2. In her second question, she wants to know the number of admissible integer temperatures between 93 and 97 degrees, inclusive. There are 3: 93, 94, and 97 degrees are all admissible.
3. In her third question, she wants to know the number of admissible integer temperatures between 95 and 96 degrees, inclusive. There are none.
4. In her final question, she wants to know the number of admissible integer temperatures between 90 and 100 degrees, inclusive. There are 4: 92, 93, 94, and 97 degrees are all admissible.

[See the problem on Codeforces](https://codeforces.com/contest/816/problem/B)
