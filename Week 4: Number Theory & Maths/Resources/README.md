
Number Theory and Basic Mathematics(Although every code u may write involves maths in some way or the other but a few famous concepts are as follows : )
	
	Euclid's theorems
	HCF and LCM
	Factorial
	P&C
	Pegion Hole principle
	Primes
	Catalan numbers
	Chinese Remainder Theorem

Irrespective of language u code in, the mathematics is same always, for further references u can refer the sites:

Euclid's Theorems
The two important theorems, called "Euclid's first theorem (Or Euclid's lemma)" and "Euclid's second theorem (usually simply referred as "Euclid's theorem") are as follows:
First theorem: p | ab => p|a or p | b. A direct consequence of this is the fundamental theorem of arithmetic.
Second theorem : There are infinitely many primes. There are many simple proofs for this.
While it is true that there are infinitely many primes, it should also be remembered that there are arbitarily large gap between prime numbers. In other words, it is always possible to get a sequence of n consecutive composite numbers, given n.
references: https://en.wikipedia.org/wiki/Euclid's_theorem

GCD (Greatest Common Divisor) or HCF (Highest Common Factor) 
of two numbers is the largest number that divides both of them. 
further references : https://www.geeksforgeeks.org/c-program-find-gcd-hcf-two-numbers/

LCM : 
for LCM simply follow the same procedure and divide it by the HCF found. (Discussed above)

Factorial: 
n!(n factorial) Simply is multipication of all the values starting from 0 to n
for references: https://www.geeksforgeeks.org/program-for-factorial-of-a-number/

P&C: 
Permutation and combinations usually envolved in questions where we have to find the values/calculations by forming sequences and maintain the
count of the same
references: https://www.geeksforgeeks.org/binomial-coefficient-dp-9/

pegion hole principle(Dirichlet's principle) :
considering distribution like cases we can refer to pegion hole principle
https://mathworld.wolfram.com/PigeonholePrinciple.html
https://www.geeksforgeeks.org/discrete-mathematics-the-pigeonhole-principle/

Primes and primality tests: 
Primes make up a huge contribution in competitive programming and there are various ways to store and calculate the primes.
for further references: https://cp-algorithms.com/algebra/primality_tests.html

Catalan numbers: 
Catalan numbers are a sequence of natural numbers that occurs in many interesting counting
for references: https://www.geeksforgeeks.org/program-nth-catalan-number/

Chinese Remainder Theorem:
Typical problems of the form "Find a number which when divided by 2 leaves remainder 1, when divided by 3 leaves remainder 2, when divided by 7 leaves remainder 5" etc can be reformulated into a system of linear congruences and then can be solved using Chinese Remainder theorem. For example, the above problem can be expressed as a system of three linear congruences: "x ≡ 1 (mod 2), x ≡ 2 mod(3), x ≡ 5 mod (7)".
In general, a system of linear congruences:
x ≡ a1 (mod n1)
x ≡ a2 (mod n2)
x ≡ a3 (mod n3)
....
x ≡ ak (mod nk)
where (ni,nj) = 1 for every ni != nj has a unique solution modulo n where n = n1n2n3...nk.
Let ci= n/ni for every i. Let di be the solution for the congruence cix = 1 (mod ni) such that 0 <= di < ni. (This solution can be found out using Extended Euclid's algorithm). Then the common solution to the above system of linear equations is given by
c = a1c1d1 + a2c2d2 + ... + akckdk

A direct corollary of the Chinese Remainder theorem is as follows: Let n = p1a1 * p2a2 * .... * pkak be the prime factorization of n. Then, for any integers a and b, we have a = b (mod n) iff a = b (mod piai ) for each i.

The generalization of the Chinese Remainder Theorem, which discusses the case when the ni's are not necessarily pairwise coprime is as follows - The system of linear congruences
x ≡ a1 (mod n1)
x ≡ a2 (mod n2)
x ≡ a3 (mod n3)
....
x ≡ ak (mod nk)
has a solution iff gcd(ni,nj) divides (ai-aj) for every i != j. In such a case, there is a unique solution mod n, where n is the least common multiple of n1,n2...nk
refernces : https://www.geeksforgeeks.org/chinese-remainder-theorem-set-1-introduction/
