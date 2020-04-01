# CRT-Calculator
An Algorithmic implementation of Chinese Remainder Theorem 

<h3>As the process to find a number using CRT;this application provides a quick result to your problem</h3>
<h4>This shows the working of Chinese remainder theorem</h4>

Let r and s be positive integers which are relatively prime and let a and b be any two integers. Then there is an integer N such that

 N=a (mod r) 	---------------------(1)

and

 N=b (mod s). 		---------------------(2)


Moreover, N is uniquely determined modulo rs. An equivalent statement is that if (r,s)=1, then every pair of residue classes modulo r and s corresponds to a simple residue class modulo rs.

The Chinese remainder theorem is implemented in the Wolfram Language as ChineseRemainder[{a1, a2, ...}{m1, m2, ...}]. The Chinese remainder theorem is also implemented indirectly using Reduce in with a domain specification of Integers.

The theorem can also be generalized as follows. Given a set of simultaneous congruences

 x=a_i (mod m_i) 	---------------------(3)


for i=1, ..., r and for which the m_i are pairwise relatively prime, the solution of the set of congruences is

 x=a_1b_1M/(m_1)+...+a_rb_rM/(m_r) (mod M), 	---------------------(4)

where

 M=m_1m_2...m_r 	---------------------(5)

and the b_i are determined from

 b_iM/(m_i)=1 (mod m_i). 
