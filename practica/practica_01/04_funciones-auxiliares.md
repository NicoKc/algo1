# 4. Funciones auxiliares

## Ejercicio 20

- a) aux suc (x: Z): Z = x + 1;
- b) aux suma (x,y: R): R = x + y;
- c) aux producto (x,y: R):R = x * y;
- d) pred esCuadrado (x: Z) { sqrt(x) = x*x }
- e) pred esPrimo (x: Z) { cantDivisioresPositivos(x) = 2 }
	> aux cantDivisioresPositivos (x): Z = IfThenElseFi(esDivisorDe(x, x-1) == 1, esDivisorDe(x, x-2)+1, esDivisorDe(x, x-2));
	> aux esDivisorDe(x,y: Z): Z = IfThenElseFi((y = 1) ∨ ((x mod y) = 0), 1, 0);
- e) pred sonCoprimos (x, y : Z) { mcd(x,y) = 1 }
	> aux mcd(x,y: Z): Z = IfThenElseFi(y = 0, x, mcd(x mod y))
- f) pred divisoresGrandes (x , y : Z) { (x > 1) ∧ (menorDivisorDe(x, 2) > y) }
	> aux menorDivisor(x, y: Z): Z = IfThenElseFi(esDivisorDe(x, y)==1, y, esDivisorDe(x, y+1))
- h) 
	<pre>
	pred mayorPrimoQueDivide (x: Z, y : Z) {
		esPrimo(y) ∧L (x mod y = 0) ∧L (
			¬(Ej : Z) (
				((x < j < y) ∧L esPrimo(j) ∧L (x mod j = 0))
			)
		)
	}
	</pre>
- i)
	~~~
	pred sonPrimosHermanos (x : Z, y : Z) { 
		(esPrimo(x) ∧L esPrimo(y)) ∧L ((∀j : Z) ((x < j < y) → ¬esPrimo(j))) 
	}
	~~~