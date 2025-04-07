from sympy import symbols
from sympy.logic.boolalg import to_cnf, to_dnf

P, Q, R = symbols('P Q R')
expr = (P | ~Q) >> R

print("FNC:", to_cnf(expr, simplify=True))
print("FND:", to_dnf(expr, simplify=True))
