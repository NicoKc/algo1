# 2. Lógica ternaria

## Ejercicio 12

- a) 5 > 0 **≡** true

- b) 1 ≤ 1 **≡** true

- c) (5 + 3 − 8)^(-1) <> 2 **=** false

- d) 0 ≥ 5 **=** false

- e) (1/0) = (1/0) **=** true

- f) 0 > log²(2^(2⁰-1)-1) **=** false

- g) 0 * sqrt(-1) = 0 **=** false

- h) sqrt(-1)*0 = 0 **=** false

- i) tan(π/2) = tan(π) - tan(2) **=** false

## Ejercicio 13

	| p| q|(p ∧ q)|
	| -| -|       -|
	| 0| 0|       0|
	| 0| 1|       0|
	| 1| 0|       0|
	| 1| 1|       1|

	| p| q|(p ∧L q)|
	| -| -|        -|
	| 0| 0|        0|
	| 0| 1|        0|
	| 1| 0|        0|
	| 1| 1|        1|
	| 1|⊥|        ⊥|
	| 0|⊥|        0|
	|⊥| 0|        ⊥|
	|⊥| 1|        ⊥|
	|⊥|⊥|        ⊥|

> ∧ evalua ambos lados de la condición
> ∧L solo evalua el lado derecho si y solo si el lado izquierdo es true

## Ejercicio 14

	| p| q|(p ∨ q)|
	| -| -|       -|
	| 0| 0|       0|
	| 0| 1|       1|
	| 1| 0|       1|
	| 1| 1|       1|

	| p| q|(p ∨L q)|
	| -| -|        -|
	| 0| 0|        0|
	| 0| 1|        1|
	| 1| 0|        1|
	| 1| 1|        1|
	| 1|⊥|        1|
	| 0|⊥|        ⊥|
	|⊥| 0|        ⊥|
	|⊥| 1|        ⊥|
	|⊥|⊥|        ⊥|

> ∨ evalua ambos lados de la condición
> ∨L solo evalua el lado derecho si y solo si el lado izquierdo es false

## Ejercicio 15
- 
	| p| q|p → q)|
	| -| -|      -|
	| 0| 0|      1|
	| 0| 1|      1|
	| 1| 0|      0|
	| 1| 1|      1|

	| p| q|(p →L q)|
	| -| -|        -|
	| 0| 0|        1|
	| 0| 1|        1|
	| 1| 0|        0|
	| 1| 1|        1|
	| 1|⊥|        ⊥|
	| 0|⊥|        1|
	|⊥| 0|        ⊥|
	|⊥| 1|        ⊥|
	|⊥|⊥|        ⊥|

> → evalua ambos lados de la condición
> →L solo evalua el lado derecho si y solo si el lado izquierdo es true

## Ejercicio 16

- a) (¬x ∨L b)

	- (¬x ∨L b)
	- (¬⊥ ∨L true)
	- ⊥

- b) ((c ∨L (y ∧L a)) ∨ b)

	- ((c ∨L (y ∧L a)) ∨ b)
	- ((true ∨L (⊥ ∧L false)) ∨ true)
	- (true ∨ true)

- c) ¬(c ∨L y)

	- ¬(c ∨L y)
	- ¬(true ∨L ⊥)
	- ¬(true)

	- false

- d) (¬(c ∨L y) ↔ (¬c ∧L ¬y))

	- (¬(c ∨L y) ↔ (¬c ∧L ¬y))
	- (¬(true ∨L ⊥) ↔ (¬true ∧L ¬⊥))
	- (¬true ↔ false)
	- false ↔ false
	- true

- e) ((c ∨L y) ∧L (a ∨L b))

	- ((c ∨L y) ∧L (a ∨L b))
	- ((true ∨L ⊥) ∧L (false ∨L true))
	- (true ∧L true)
	- true

- f) (((c ∨L y) ∧L (a ∨L b)) ↔L (c ∨L (y ∧L a) ∨L b))

	- (((c ∨L y) ∧L (a ∨L b)) ↔L (c ∨L (y ∧L a) ∨L b))
	- (((true ∨L ⊥) ∧L (false ∨L true)) ↔L (true ∨L (⊥ ∧L false) ∨L true))
	- ((true ∧L true) ↔L (true ∨L (⊥ ∧L false) ∨L true))
	- ( true ↔L (true ∨L (⊥ ∧L false) ∨L true))
	- ( true ↔L ((true ∨L ⊥) ∨L true))
	- ( true ↔L true)
	- true

- g) (¬c ∧L ¬y)

	- (¬c ∧L ¬y)
	- (¬true ∧L ¬⊥)
	- (false ∧L ¬⊥)
	- (false ∧L ⊥)
	- ⊥

## Ejercicio 17

- a)| p| q| r| z|
	| -| -| -| -|
	| 0| 0| 0| 0|
	| 0| 0| 1| 1|
	| 0| 1|⊥| 1|
	| 1| 0| 0| 1|
	| 1| 0| 1| 1|
	| 1| 1|⊥| 1|

	> (p ∨L (q ∨L r))

- b)| p| q| r| z|
	| -| -| -| -|
	| 0| 0| 0| 1|
	| 0| 0| 1| 0|
	| 0| 1|⊥| 0|
	| 1| 0| 0| 0|
	| 1| 0| 1| 0|
	| 1| 1|⊥| 0|

	> ¬(p ∨L (q ∨L r))

- c)| p| q| r| z|
	| -| -| -| -|
	| 0| 0| 0| 0|
	| 0| 0| 1| 1|
	| 0| 1|⊥| 1|
	| 1| 0| 0| 1|
	| 1| 0| 1| 0|
	| 1| 1|⊥| 0|

	> ((p∧(¬q∧¬Lr)) ∨L ((q∧(¬p∧L¬r) ∨L r∧L(¬p∧¬q))))

- d)| p| q| r| z|
	| -| -| -| -|
	| 0| 0| 0| 0|
	| 0| 0| 1| 0|
	| 0| 1|⊥| 1|
	| 1| 0| 0| 1|
	| 1| 0| 1| 1|
	| 1| 1|⊥| 0|

	> (p ∨ (q ∨L (r ∨L ¬r))

- e)| p| q| r| z|
	| -| -| -| -|
	| 0| 0| 0| 0|
	| 0| 0| 1| 1|
	| 0| 1|⊥| 1|
	| 1| 0| 0| 1|
	| 1| 0| 1| 1|
	| 1| 1|⊥| 1|

	> (p ∨L (q ∨L r))

- f)| p| q| r| z|
	| -| -| -| -|
	| 0| 0| 0| 0|
	| 0| 0| 1| 1|
	| 0| 1|⊥| 0|
	| 1| 0| 0| 0|
	| 1| 0| 1| 1|
	| 1| 1|⊥| 0|

	> ((p ∧ ¬p) ∨ ((¬q ∧ true) ∧L r)