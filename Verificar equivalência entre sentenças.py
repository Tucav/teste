from sympy import simplify_logic

expr1 = (P | ~Q) >> R
expr2 = ~P | R

print("Equivalentes?", simplify_logic(expr1 ^ expr2) == False)

