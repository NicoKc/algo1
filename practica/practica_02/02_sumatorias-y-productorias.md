# Sumatorias y Productorias

## Ejercicio 10

- a) 4 + 3 + 1 = 8
- b) 0
- c) 0
- d) ⊥
- e) ⊥
- f) 0
- g) ⊥
- h) 3 + 5 + 7 = 15
- i) 1 + 1 + 1 + 1 + 1 = 5
- j) 0 + 0 + 0 + 0 + 0 = 0

## Ejercicio 11
    ~~~
    aux sumaDeDivisores(n: Z): Z {
        n
        Σ (if (n mod i == 0) then i else 0 fi)
       i=1
    }

    pred EsPrimo(n: Z): Bool {
        sumaDeDivisores(n) = n + 1
    }
    ~~~

## Ejericio 12
- a)Cuente la cantidad de veces que aparece el elemento e de tipo Z en la secuencia s.

    ~~~
    aux contarLaCantidadDeEn(e: Z, s: seq<Z>): Z {
       |s|
        Σ (if (s[i] = e) then 1 else 0 fi)
       i=0
    }
    ~~~

- b)Sume los elementos en las posiciones impares de la secuencia s

    ~~~
    aux sumarSoloIndicesImpares(s: seq<Z>): Z {
       |s|
        Σ (if (i mod 2 == 1) then s[i] else 0 fi)
       i=0
    }
    ~~~

- c)Sume los elementos mayores a 0 contenidos en la secuencia s

    ~~~
    aux sumarSoloLosMayoresACero(s: seq<Z>): Z {
       |s|
        Σ (if (s[i] > 0) then s[i] else 0 fi)
       i=0
    }
    ~~~

- d)Sume los inversos multiplicativos (1/x) de los elementos contenidos en la secuencia s distintos a 0.

    ~~~
    aux sumarInversosMultiplicativosDistintosDeCero(s: seq<Z>): Z {
       |s|
        Σ (if (s[i] <> 0) then (1/s[i]) else 0 fi)
       i=0
    }
    ~~~

- e) Cuente la cantidad de elementos primos no repetidos en la secuencia s.

    ~~~
    pred hayOtroApartirDe(p: z, e: z, s:seq<Z>) {
        (e ∈ subseq(s,i + 1,|s|))
    }

    aux sumarLaCantidadDePrimosEn(s: seq<Z>): Z {
       |t|
        Σ (if (esPrimo(t[i]) ∧ ¬(hayOtroApartirDe(i, t[i], s))) then 1 else 0 fi)
       i=0
    }
    ~~~

## Ejericio 13

    ~~~
    aux cantidadDeElemento(s: seq<Z>): Z 
        = 

    pred esPermutacionDe(s: seq<Z>, t: seq<Z>) {
        (|s| = |t|) ∧L
            (∀i : Z)(
                (0 ≤ i < |s|)
                →L
                (#{ s[i] ∈ s }) = (#{ t[i] ∈ s })
            ) ∧L
            (
                 |s|
                ( Σ  (s[i] - t[i])) = 0
                 i=0
            )
    }
    ~~~

## Ejercicio 14

- a) Sume los elementos contenidos en todas las secuencias.

~~~
   |s| |s[i]|
    Σ (  Σ (s[i][j]))
   i=1  j=1
~~~

- b) Cuente la cantidad de secuencias vacías

~~~
   |s| |s[i]|
    Σ (  Σ  if (s[i][j] = 0) then 1 else 0 fi)
   i=1  j=1
~~~

c) Sume el valor del ´ultimo elemento de cada secuencia no vacía

~~~
   |n| 
    Σ (if (s[i][|s[i]|-1] <> 0) then s[i][|s[i]|-1] else 0 fi)
   i=1 
~~~

- d) Retorne True sii todas las secuencias poseen el mismo tamaño.

~~~
    (∃i : Z)(
        (∀i : Z)(
            (0 ≤ i < |s|)
                →L (
                #{i ∈ s[i]} = i
            )
        )
    )
~~~

- e) Retorne la suma de todas las posiciones impares de cada secuencia

~~~
   |s|  |s[i]|
    Σ (  Σ  if ((j mod 2) = 1) then j else 0 fi)
   i=1  j=1
~~~

## Ejercicio 15

~~~
   |s|  |s[i]|
    Σ (  Σ  if (s[i][j] = ' ') then  else 0 fi)
   i=1  j=1
~~~

## Ejercicio 16
~~~
   |s|  |s[i]|
    Σ (  Σ  if (s[i][j] ∈ <'0','1','2','3','4','5','6','7','8','9'>) then  else 0 fi)
   i=1  j=1
~~~