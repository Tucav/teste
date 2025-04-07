from sympy import Implies, satisfiable

A = P | Q
B = ~Q
C = P

conseq = Implies(A & B, C)
print("É consequência lógica?", not satisfiable(~conseq))
