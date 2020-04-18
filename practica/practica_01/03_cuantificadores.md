# 3. Cuantificadores

## Ejercicio 18

- a)

	- I) x a ∀
	- II) x a ∀, y a ∀
	- III) j a ∀
	- IV) j a ∀
	- V) j a ∀, j a ∀
	- VI) j a ∀
	- VII) j a ∀
	
- b)

## Ejercicio 19

- a) "Todos los naturales menores a 10 que cumplen P, cumplen Q":
	pred a(){
		(∀x : Z) (
			((1 ≤ x < 10) → P(x)) → Q(x))
		)
	}

- b) “No hay ningún natural menor a 10 que cumpla P y Q”:
	pred c() {
		(∀x : Z) (
			(1 ≤ x < 10) → P(x) = Q(x) = false
		)
	}

