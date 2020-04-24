# 1. Lógica binaria

## Ejercicio 1

- a) (¬p):
	> Mal formada, debería ser ¬p

- b) p ∨ q ∧ true:
	> Mal formada, debería separarse cada termino ejemplo: **p ∨ (q ∧ true)** o **(p ∨ q) ∧ true**

- c) (p → ¬p → q):
	> Mal formada, debería separsear cada termino ejemplo: **(p → (¬p → q))** o **((p → ¬p) → q)**

- d) ¬(p):
	> Mal formada, la forma correcta es: **¬p**

- e) (p ∨ ¬p ∧ q):
	> Mal formada, idem item b

- f) (true ∧ true ∧ true):
	> Mal  formada, faltan parentensís

- g) (¬p):
	> Mal formada, los parentesís estan de mas. Formula bien formada: **¬p**

- h) (p ∨ false):
	> Bien formada

- i) (p = q):
	> Bien formada

## Ejercicio 2

- a) (1 = 0) ∨ (x = y)
	> Puede tiparse correctamente

- b) (x + 10) = y
	> Puede tiparse correctamente

- c) (x ∨ y)
	> No puede tiparse correctamente. Los operadores logicos no estan definidos para numeros enteros

- d) z = (y = x)
	> Puede tiparse correctamente

- e) (z = 0) ∨ (z = 1)
	> No puede tiparse correctamente. El operador logico no esta definido entre bool y entero

- f) y + (y < 0)
	> No puede tiparse correctamente. El operador + no esta definido entre bool y entero

## Ejercicio 3

- La fórmula (3+7 = π−8)∧true es una fórmula bien formada porque **(3+7 = π−8)** es una comparación entre dos números floats que devuelve un bool y este se compara con un operador logico **∧**.

## Ejercicio 4

- a) (¬a ∨ b)
	~~~
	(¬true ∨ false) = (false ∨ false) = false
	~~~

- b) (c ∨ (y ∧ x) ∨ b)
	~~~
	(true ∨ (false ∧ false) ∨ true) = (true ∨ false ∨ true) = true
	~~~

- c) ¬(c ∨ y)
	~~~
	¬(true ∨ false) = ¬true = false
	~~~

- d) (¬(c ∨ y) ↔ (¬c ∧ ¬y))
	~~~
	(¬(true ∨ false) ↔ (¬true ∧ ¬false)) ≡ 
	(¬true ↔ (false ∧ true)) ≡ 
	(false ↔ false) ≡ true
	~~~

- e) ((c ∨ y) ∧ (x ∨ b))
	~~~
	((true ∨ false) ∧ (false ∨ true)) 
		≡ (true ∧ true) ≡ true
	~~~

- f) (((c ∨ y) ∧ (x ∨ b)) ↔ (c ∨ (y ∧ x) ∨ b))
	~~~
	(
		((true ∨ false) ∧ (true ∨ false)) 
			↔ (true ∨ (false ∧ false) ∨ true)
	)
		≡ ((true ∧ true) ↔ (true ∨ false ∨ true)) ≡ (true ↔ true) ≡ true
	~~~

- g) (¬c ∧ ¬y)
	~~~
	(¬true ∧ ¬false) ≡ (false ∧ true) ≡ false
	~~~

## Ejercicio 5

- a) (p ∨ ¬p)
	| p|¬p|(p ∨ ¬p)|
	| -| -|        -|
	| 0| 1|        1|
	| 1| 0|        1|
	>Es una tautología

- b) (p ∧ ¬p)
	| p|¬p|(p ∧ ¬p)|
	| -| -|        -|
	| 0| 1|        0|
	| 1| 0|        0|
	>Es una contradiccion

- c) ((¬p ∨ q) ↔ (p → q))
	| p| q|¬p|(¬p ∨ q)|(p → q)|(¬p ∨ q) ↔ (p → q)|
	| -| -| -|        -|      -|                   -|
	| 0| 0| 1|        1|      1|                   1|
	| 0| 1| 1|        1|      1|                   1|
	| 1| 0| 0|        0|      0|                   1|
	| 1| 1| 0|        1|      1|                   1|
	>Es una tautología

- d) ((p ∨ q) → p)
	| p| q|(p ∨ q)|((p ∨ q) → p)|
	| -| -|       -|              -|
	| 0| 0|       0|              1|
	| 0| 1|       1|              0|
	| 1| 0|       1|              1|
	| 1| 1|       1|              1|
	>Es una contingencia

- e) (¬(p ∧ q) ↔ (¬p ∨ ¬q))
	| p| q|¬p|¬q|¬(p ∧ q)|(¬p ∨ ¬q)|(¬(p ∧ q) ↔ (¬p ∨ ¬q))|
	| -| -| -| -|       - |         -|                       -|
	| 0| 0| 1| 1|        1|         1|                       1|
	| 0| 1| 1| 0|        1|         1|                       1|
	| 1| 0| 0| 1|        1|         1|                       1|
	| 1| 1| 0| 0|        0|         0|                       1|
	>Es una tautología

- f) (p → p)
	| p|(p → p)|
	| -|       -|
	| 0|       1|
	| 1|       1|
	>Es una tautología

- g) ((p ∧ q) → p)
	| p| q|(p ∧ q)|((p ∧ q) → p)|
	| -| -|       -|             -|
	| 0| 0|       0|             1|
	| 0| 1|       1|             0|
	| 1| 0|       1|             1|
	| 1| 1|       1|             1|
	>Es una contingencia

- h) (p ∧ (q ∨ r)) ↔ ((p ∧ q) ∨ (p ∧ r))
	| p| q| r|(q ∨ r)|(p ∧ q)|(p ∧ r)|(p ∧ (q ∨ r))|((p ∧ q) ∨ (p ∧ r))|(p ∧ (q ∨ r)) ↔ ((p ∧ q) ∨ (p ∧ r))|
	| -| -| -|       -|       -|      -|             -|                    -|                                      -|
	| 0| 0| 0|       0|       0|      0|             0|                    0|                                      1|
	| 0| 0| 1|       1|       0|      0|             0|                    0|                                      1|
	| 0| 1| 0|       1|       0|      0|             0|                    0|                                      1|
	| 0| 1| 1|       1|       0|      0|             0|                    0|                                      1|
	| 1| 0| 0|       0|       0|      0|             0|                    0|                                      1|
	| 1| 0| 1|       1|       0|      1|             1|                    1|                                      1|
	| 1| 1| 0|       1|       1|      0|             1|                    1|                                      1|
	| 1| 1| 1|       1|       1|      1|             1|                    1|                                      1|
	>Es una tautología

- i) ((p → (q → r)) → ((p → q) → (p → r)))
	| p| q| r|(q → r)|(p → q)|(p → r)|(p → (q → r))|((p → q) → (p → r))|((p → (q → r)) → ((p → q) → (p → r)))|
	| -| -| -|       -|       -|      -|             -|                    -|                                        -|
	| 0| 0| 0|       1|       1|      1|             1|                    1|                                        1|
	| 0| 0| 1|       1|       1|      1|             1|                    1|                                        1|
	| 0| 1| 0|       0|       1|      1|             1|                    1|                                        1|
	| 0| 1| 1|       1|       1|      1|             1|                    1|                                        1|
	| 1| 0| 0|       1|       0|      0|             0|                    1|                                        1|
	| 1| 0| 1|       1|       0|      1|             1|                    1|                                        1|
	| 1| 1| 0|       0|       1|      0|             0|                    0|                                        1|
	| 1| 1| 1|       1|       1|      1|             1|                    1|                                        1|
	>Es una tautología

## Ejercicio 6

- a) true, false
	- **true → false = false** no es un tautología
	- **false → true = true** es una tautología
	> false es más fuerte que false

- b) (p ∧ q), (p ∨ q)
	- **(p ∧ q) → (p ∨ q)**

	| p| q|(p ∧ q)|(p ∨ q)|(p ∧ q) → (p ∨ q)|
	| -| -|       -|      -|                  -|
	| 0| 0|       0|      0|                  1|
	| 0| 1|       0|      1|                  1|
	| 1| 0|       0|      1|                  1|
	| 1| 1|       1|      1|                  1|

	- **(p ∨ q) → (p ∧ q)**

	| p| q|(p ∨ q)|(p ∧ q)|(p ∨ q) → (p ∧ q)|
	| -| -|       -|      -|                  -|
	| 0| 0|       0|      0|                  1|
	| 0| 1|       1|      0|                  0|
	| 1| 0|       1|      0|                  0|
	| 1| 1|       1|      1|                  1|

	> (p ∧ q) es más fuerte que (p ∨ q)

- c) true, true
	- **true → true**
	> true es más fuerte que true

- d) p, (p ∧ q)
	- **p → (p ∧ q)**

	| p| q|(p ∧ q)|p → (p ∧ q)|
	| -| -|       -|           -|
	| 0| 0|       0|           1|
	| 0| 1|       0|           1|
	| 1| 0|       0|           0|
	| 1| 1|       1|           1|

	- **(p ∧ q) → p**

	| p| q|(p ∧ q)|(p ∧ q) → p|
	| -| -|       -|           -|
	| 0| 0|       0|           1|
	| 0| 1|       0|           1|
	| 1| 0|       0|           1|
	| 1| 1|       1|           1|

	> (p ∧ q) es mas fuerte que p

- e) false, false
	> false es mas fuerte que false

- f) p, (p ∨ q)
	- **p → (p ∨ q)**

	| p| q|(p ∨ q)|p → (p ∨ q)|
	| -| -|       -|           -|
	| 0| 0|       0|           1|
	| 0| 1|       1|           1|
	| 1| 0|       1|           1|
	| 1| 1|       1|           1|

	- **(p ∧ q) → p**

	| p| q|(p ∨ q)|(p ∨ q) → p|
	| -| -|       -|           -|
	| 0| 0|       0|           1|
	| 0| 1|       1|           0|
	| 1| 0|       1|           1|
	| 1| 1|       1|           1|

	> p es mas fuerte que (p ∨ q)

- g) p, q
	- **p → q**

	| p| q|(p → q)|
	| -| -|       -|
	| 0| 0|       1|
	| 0| 1|       1|
	| 1| 0|       0|
	| 1| 1|       1|

	- **q → p**

	| p| q|(q → p)|
	| -| -|       -|
	| 0| 0|       1|
	| 0| 1|       0|
	| 1| 0|       1|
	| 1| 1|       1|
	> p y q on incomparables, ninguna es mas fuerte

- h) p, (p → q)
	- **p → (p → q)**

	| p| q|(p → q)|(p → (p → q))|
	| -| -|       -|             -|
	| 0| 0|       1|             1|
	| 0| 1|       1|             1|
	| 1| 0|       0|             0|
	| 1| 1|       1|             1|

	- **(p → q) → p**

	| p| q|(p → q)|((p → q) → p)|
	| -| -|       -|             -|
	| 0| 0|       1|             0|
	| 0| 1|       1|             0|
	| 1| 0|       0|             1|
	| 1| 1|       1|             1|
	> p y (p → q) son incomparables, ninguna es mas fuerte

> La proposición mas fuertes es false y la mas debil true

## Ejercicio 7
- a) ((¬p ∨ ¬q) ∨ (p ∧ q)) → (p ∧ q) ≡ (p ∧ q) ?

	- (**(¬p ∨ ¬q)** ∨ (p ∧ q)) → (p ∧ q)
		- **(¬p ∨ ¬q)** ≡ ¬(p ∧ q)				`Por Ley de De Morgan`
	- (¬(p ∧ q) ∨ (p ∧ q)) → (p ∧ q)
		- (x → y) ≡ (¬x ∨ y)					`Implicación material`
	- ¬(¬(p ∧ q) ∨ (p ∧ q)) ∨ (p ∧ q)
		- (¬x ∨ x) ≡ x							`Principio del tercero excluido`
	- ¬(p ∧ q) ∨ (p ∧ q)
		- (¬x ∨ x) ≡ x							`Principio del tercero excluido`
	- (p ∧ q)
	>Es una equivalencia

- b) (p ∨ q) ∧ (p ∨ r) ≡ ¬p → (q ∧ r) ?

	- ¬p → (q ∧ r)
		- ¬p → (q ∧ r) ≡  ¬(¬p) ∨ (q ∧ r)	`Implicación material`
		- ¬(¬p) ∨ (q ∧ r) ≡ p ∨ (q ∧ r)		`Doble negación`
	- p ∨ (q ∧ r)
		- p ∨ (q ∧ r) ≡ (p ∨ q) ∧ (p ∨ r)	`Ley distributiva`
	- (p ∨ q) ∧ (p ∨ r)
	>Es una equivalencia

- c) ¬(¬p) → (¬(¬p ∧ ¬q)) ≡ q ?

	- **¬(¬p)** → (¬(¬p ∧ ¬q))
		- **¬(¬p)** ≡ p							`Doble negación`
	- p → (**¬(¬p ∧ ¬q)**)
		- **¬(¬p ∧ ¬q)** ≡ (¬(¬p) ∨ ¬(¬q))		`Ley de De Morgan`
		- (¬(¬p) ∨ ¬(¬q)) ≡ (p ∨ q)				`Doble negación`
	- p **→** (p ∨ q)
		- p → (p ∨ q) ≡ ¬p ∨ (p ∨ q)			`Implicación material`
		- ¬p ∨ (p ∨ q) ≡ (¬p ∨ p) ∨ q			`Ley asociativa`
	- **(¬p ∨ p)** ∨ q
		- (¬p ∨ p) ≡ true						`Principio del tercero excluido`
	- true ∨ q ≡ true							`Simplificación O`
	> No es una equivalencia

	
- d) ((true ∧ p) ∧ (¬p ∨ false)) → ¬(¬p ∨ q) ≡ p ∧ ¬q ?

	- (**(true ∧ p)** ∧ (¬p ∨ false)) → ¬(¬p ∨ q)
		- **(true ∧ p)** ≡ p					`Simplificación Y`
	- (p ∧ **(¬p ∨ false)**) → ¬(¬p ∨ q)
		- **(¬p ∨ false )** ≡ ¬p				`Simplificación O`
	- **(p ∧ ¬p)** → ¬(¬p ∨ q)
		- **(p ∧ ¬p)** ≡ false					`Contradicción`
	- false → **¬(¬p ∨ q)**
		- **¬(¬p ∨ q)** ≡ (¬(¬p) ∧ ¬q)			`Ley de De Morgan`
		- (¬(¬p) ∧ ¬q) ≡ (p c ¬q)				`Doble negación`
	- false **→** (p ∧ ¬q)
		- false **→** x ≡ ¬false ∨ (p ∧ ¬q)		`Implicación material`
		- ¬false ∨ (p ∧ ¬q) ≡ true ∨ (p ∧ ¬q)	`Negación`
	- **true ∨ (p ∧ ¬q)**
		- **true ∨ (p ∧ ¬q)** ≡ (p ∧ ¬q)		`Principio del tercero excluido`
	- (p ∧ ¬q) ≡ p ∧ ¬q
	>Es una equivalencia

- e) (p ∨ (¬p ∧ q)) ≡ ¬p → q ?

	- **(p ∨ (¬p ∧ q))**
		- **(p ∨ (¬p ∧ q))** ≡ ((p ∨ ¬p) ∧ (p ∨ q)) `Ley distributida`
	- (**(p ∨ ¬p)** ∧ (p ∨ q))
		- **(p ∨ ¬p)** ≡ true				`Principio del tercero excluido`
	- **(true ∧ (p ∨ q))**
		- **(true ∧ (p ∨ q))** ≡ (p ∨ q)		`Simplificación Y`
	- (p ∨ q) 									*(1)*

	- **¬p → q**
		- ¬p → q ≡ ¬(¬p) ∨ q					`Implicación material`
		- (**(¬(¬p))** ∨ q) ≡ (**p** ∨ q)		`Doble negación`
	- (p ∨ q) 									*(2)*

	- *(1)* ≡ *(2)*
	>Es una equivalencia

- f) ¬(p ∧ (q ∧ s)) ≡ s → (¬p ∨ ¬q)

	- **¬(p ∧ (q ∧ s))**
		- **¬(p ∧ (q ∧ s))** ≡ (¬p ∨ ¬(q ∧ s))	`Ley de De Morgan`
	- (¬p ∨ **¬(q ∧ s)**)
		- **¬(q ∧ s)** ≡ (¬q ∨ ¬s)				`Ley de De Morgan`
	- (¬p ∨ (¬q ∨ ¬s))							*(1)*

	- s **→** (¬p ∨ ¬q)
		- x → y ≡ (¬x ∨ y)						`Implicación material`
	- **(¬s ∨ (¬p ∨ ¬q))**
		- **(¬s ∨ (¬p ∨ ¬q))** ≡ ((¬s ∨ ¬p) ∨ ¬q) `Ley asociativa`
		- ((¬s ∨ ¬p) ∨ ¬q) ≡ ((¬p ∨ ¬s) ∨ ¬q)	`Ley conmutativa`
		- ((¬p ∨ ¬s) ∨ ¬q) ≡ (¬p ∨ (¬s ∨ ¬q))	`Ley asociativa`
		- (¬p ∨ (¬s ∨ ¬q)) ≡ (¬p ∨ (¬q ∨ ¬s))	`Ley conmutativa`
	- (¬p ∨ (¬q ∨ ¬s)) ≡ *(1)*
	>Es una equivalencia

- g) p → (q ∧ ¬(q → r)) ≡ (¬p ∨ q) ∧ (¬p ∨ (q ∧ ¬r))

	- p **→** (q ∧ ¬(q **→** r))
		- x **→** y ≡ ¬x ∨ y					`Implicación material`
	- ¬p ∨ (q ∧ **¬(¬q ∨ r)**)
		- **¬(¬q ∨ r)** ≡ (¬(¬q) ∧ ¬r)			`Ley de De Morgan`
		- (¬(¬q) ∧ ¬r) ≡ (q ∧ ¬r)				`Doble negación`
	- ¬p ∨ **(q ∧ (q ∧ ¬r))**
		- **(q ∧ (q ∧ ¬r))** ≡ ((q ∧ q) ∧ ¬r)	`Ley asociativa`
	- ¬p ∨ (**(q ∧ q)** ∧ ¬r)
		- **(q ∧ q)** ≡ q						`Simplificación Y`
	- **¬p ∨ (q ∧ ¬r)**
		` **¬p ∨ (q ∧ ¬r)** ≡ (¬p ∨ q) ∧ (¬p ∨ ¬r) `Ley distributiva`
	- (¬p ∨ q) ∧ (¬p ∨ ¬r)						*(1)*

	- (¬p ∨ q) ∧ **(¬p ∨ (q ∧ ¬r))**
		- **(¬p ∨ (q ∧ ¬r))** ≡ ((¬p ∨ q) ∧ (¬p ∨ ¬r)) `Ley distributiva`
	- **(¬p ∨ q) ∧ ((¬p ∨ q) ∧ (¬p ∨ ¬r))**
		- **(¬p ∨ q) ∧ ((¬p ∨ q) ∧ (¬p ∨ ¬r))** ≡ ((¬p ∨ q) ∧ (¬p ∨ q)) ∧ (¬p ∨ ¬r) `Ley asociativa`
	- **((¬p ∨ q) ∧ (¬p ∨ q))** ∧ (¬p ∨ ¬r)
		- **((¬p ∨ q) ∧ (¬p ∨ q))** ≡ (¬p ∨ q)	`Simplificación Y`
	- (¬p ∨ q) ∧ (¬p ∨ ¬r) ≡ *(1)*
	>Es una equivalencia

## Ejercicio 8

- ¬ (Negación)

	¬q ≡ ¬q

- ∨ (Disyunción)

	(p ∨ q) ≡ (p ∨ q)

- ∧ (Conjunción)

	- (p ∧ q) ≡ ¬(¬p ∨ ¬q)						(Ley de De Morgan)

	| p| q|(p ∧ q)|¬(¬p ∨ ¬q)|
	| -| -|       -|         -|
	| 0| 0|       0|         0|
	| 0| 1|       0|         0|
	| 1| 0|       0|         0|
	| 1| 1|       1|         1|

- → (Implicación)

	- (p → q) = (¬p ∨ q)						(Implicación material)

	| p| q|(p → q)|(¬p ∨ q)|
	| -| -|       -|        -|
	| 0| 0|       0|        0|
	| 0| 1|       0|        0|
	| 1| 0|       0|        0|
	| 1| 1|       1|        1|

- ↔ (Equivalencia)

	- (p ↔ q) ≡ ¬(¬p ∨ ¬q) ∨ ¬(p ∨ q)

	| p| q|(p ↔ q)|¬(¬p ∨ ¬q) ∨ ¬(p ∨ q)|
	| -| -|       -|                      -|
	| 0| 0|       1|                      1|
	| 0| 1|       0|                      0|
	| 1| 0|       0|                      0|
	| 1| 1|       1|                      1|

## Ejercicio 9

- a)
	- I) “Si es fin de semana, Juan estudia o escucha música, pero no ambas cosas”

		- f → ((e ∨ m) ∧ ¬(e ∧ m))

	| f| e| m|(e ∨ m)|(e ∧ m)|(e ∨ m) ∧ ¬(e ∧ m)|f → ((e ∨ m) ∧ ¬(e ∧ m))|
	| -| -| -|       -|       -|                  -|                          -|
	| 0| 0| 0|       0|       0|                  0|                          1|
	| 0| 0| 1|       1|       0|                  1|                          1|
	| 0| 1| 0|       1|       0|                  1|                          1|
	| 0| 1| 1|       1|       1|                  0|                          1|
	| 1| 0| 0|       0|       0|                  0|                          0|
	| 1| 0| 1|       1|       0|                  1|                          1|
	| 1| 1| 0|       1|       0|                  1|                          1|
	| 1| 1| 1|       1|       1|                  0|                          0|

	- II) “Si no es fin de semana entonces Juan no estudia”

		- (f ∧ e)
	
	| f| e|(f ∧ e)|
	| -| -|       -|
	| 0| 0|       0|
	| 0| 1|       0|
	| 1| 0|       0|
	| 1| 1|       1|

	- III) “Cuando Juan estudia los fines de semana, lo hace escuchando música”

		- (f ∧ e) → m

	| f| e| m|(f ∧ e)|(f ∧ e) → m|
	| -| -| -|       -|           -|
	| 0| 0| 0|       0|           1|
	| 0| 0| 1|       0|           1|
	| 0| 1| 0|       0|           1|
	| 0| 1| 1|       0|           1|
	| 1| 0| 0|       0|           1|
	| 1| 0| 1|       0|           1|
	| 1| 1| 0|       1|           0|
	| 1| 1| 1|       1|           1|

- b) Se puede deducir que Juan no ya que la preposición I y III se contradicen,
	y ademas por la preposición II Juan solo estudia los fines de semana

## Ejercicio 10

- a) 
	- "Conocer a Juan" ≡ j
	- "Conocer a Camila" ≡ c
	- "Conocer a Gonzalo" ≡ g
	- "Si todos conocen a Juan entonces todos conocen a Camila" ≡ (j ∧ c)
	- "Si todos conocen a Juan, entonces que todos conozcan a Camila implica que todos conocen a Gonzalo" ≡ (j ∧ c) → g

	| j| c| g|(j ∧ c)|(j ∧ c) → g|
	| -| -| -|       -|           -|
	| 0| 0| 0|       0|           1|
	| 0| 0| 1|       0|           1|
	| 0| 1| 0|       0|           1|
	| 0| 1| 1|       0|           1|
	| 1| 0| 0|       0|           1|
	| 1| 0| 1|       0|           1|
	| 1| 1| 0|       1|           0|
	| 1| 1| 1|       1|           1|

	- Si, por transitividad.

## Ejercicio 10

	- "Haroldo se pelea con sus compañeritos, vuelve a casa con un ojo morado" ≡ hp → om
	- "Vuelve a casa con un ojo morado" ≡ om

	|hp|om|hp → om|om → hp|
	| -| -|       -|       -|
	| 0| 0|       1|       1|
	| 0| 1|       1|   **0**|
	| 1| 0|       0|       1|
	| 1| 1|       1|       1|

	- La falacia de Afirmación del Consecuente o Error Inverso posee el siguiente esquema lógico:
		- Si se da A, entonces se da B
		- se da B
		- Por lo tanto se da A

	> Estamos ante una falacia ya que la conclusión no tiene que ser correcta.