# 1. Secuencias

## Ejercicio 1

- a) |<4,3,1>| = 3
- b) addFirst(π, <2,3,5,7,11>) = <π,2,3,5,7,11>
- c) <0,1,2,3>[3] = 3
- d) concat(<2,3>,<5,7,11>) = <2,3,5,7,11>
- e) head(tail(<5,6,7,8>)) = 6
- f) subseq(<2,3,5,7,11>, 0, 3) = <2,3,5>
- g) π ∈ <2, 3, 5, 7, 11> = false
- h) subseq(<2,3,5,7,11>, 3, 2) = ⊥
    > No cumple 0 <= d <= h <= |a| por lo tanto se indefine
- i) 1 ∈ <1,2,3,4,5> = true
- j) subseq(<2,3,5,7,11>, 0, 65536) = ⊥
    > No cumple 0 <= d <= h <= |a| por lo tanto se indefine

## Ejercicio 2

- a) |x| = |tail(x)| + 1                        `Es valida`
- b) x = subseq(x, 0, |x| - 1)                  `No es valida`
- c) x = subseq(x, 0, |x")                      `Es valida`
- d) concat(addFirst(3, x), y) = addFirst(3, concat(x, y)) `Es valida`
    >Solo si *y* es tipo seq<Z>
- e) x = addFirst(head(x), tail(x))             `Es valida`
- f) x[0] = head(x)                             `Es valida`
- g) i ∈ x = head(subseq(x, i, i + 1))         `No es valida`
    > ∈ es un predicado que devuelve un valor Bool
      y head de seq<Z> devuelve un entero, no tipa
- h) tail(x) = subseq(x, 1, |x|)                `Es valida`

## Ejercicio 3
- a) |addFirst(e, s0)| = 1 + |s0|               `Verdader`
- b) |addFirst(e, s0)| = |tail(s0)|             `Falso`
    ~~~
    |addFirst(1, <2,3,4>)| = |tail(<2,3,4>)| ?
    |<1,2,3,4>| = |<3,4>| ?
    4 = 2 ?
    false
    ~~~
- c) |concat(s0, s1)| = |s0| + |s1|             `True`
- d) s0 = tail(addFirst(e. s0))                 `True`
- e) head(addFirst(e, s0)) = e                  `True`
- f) addFirst(e, s0) = tail(s0)                 `False`
    ~~~
    addFirst(1, <2,3,4>) = tail(<2,3,4>) ?
    <1,2,3,4> = <3,4> ?
    false
    ~~~
- g) head(addFirst(e, tail(s0))) = head(tail(addFirst(e, s0))) `False`
    ~~~
    head(addFirst(1,tail(<2,3>))) = head(tail(addFirst(1, <2,3>))) ?
    head(addFirst(1, <3>)) = head(tail(<1,2,3>) ?
    head(<1,3>) = head(<2,3>)
    1 = 2
    false
    ~~~
- h) addFirst(e, s0)[0] = e                     `True`
- i) addFirst(e, s0)[0] = head(addFirst(e, s0)) `True`

## Ejercicio 4

 - a) capicúa, que es verdadera sii una secuencia es capicúa.
    ~~~
    pred capicúa(s: seq<T>) {
        (∀i: Z)(
            (0 <= i) ∧ (i < |s|)
        ) →L (s[i] = s[|s| - i - 1])
    }
    ~~~

- b) esPrefijo, que es verdadera sii una secuencia es prefijo de otra
    ~~~
    pred esPrefijo(s0: seq<T>, s1:set<T>) {
        (∀i: Z)(Ej: Z)(
            (
                (0 <= i) ∧ (i < |s0|)
            ) →L (
                ((0 <= j) ∧ (j < |s1|)) 
                ∧L (s[i] = s[j])
            )
        )
    }
    ~~~

- c) estáOrdenada, que es verdadera sii la secuencia está ordenada de menor a mayor.
    ~~~
    pred estáOrdenada(s: seg<T>)
    {
        (∀i: Z)(
            (0 <= i) ∧ (i < |s| - 1)
        ) →L (
            s[i] < s[i + 1]
        )
    }
    ~~~

- d) todosPrimos, que es verdadera sii todos los elementos de la secuencia son n´umeros primos.
    ~~~
    pred todosPrimos(s: seg<T>)
    {
        (∀i: Z)(
            (0 <= i) ∧ (i < |s|)
        ) →L (
            esPrimo(s[i])
        )
    }
    ~~~

- e) todosIguales, que es verdadera sii todos los elementos de la secuencia son iguales.
    ~~~
    pred todosIguales(s: seg<T>)
    {
        (∀i: Z)(
            (0 <= i) ∧ (i < |s|)
        ) →L (
            s[i] = s[0]
        )
    }
    ~~~

- f) hayUnoParQueDivideAlResto, que determina si hay un elemento par en la secuencia que divide a todos los otros elementos
de la secuencia.
    ~~~
    pred hayUnoParQueDivideAlResto(s: seg<T>)
    {
        (Ej: Z) (
            (
                (
                    (0 <= j) ∧ (j < |s0|)
                ) ∧L (s[j] mod 2 = 0)
            ) ∧L (
                (∀i: Z) (
                    (0 <= i) ∧ (i < |s1|)
                ) →L ((s[j] = 0) ∨L (s[i] mod s[j] = 0))
            )
        )
    }
    ~~~

- g) hayUnoEnPosiciónParQueDivideAlResto, que determina si hay un elemento en una posición par de la secuencia que divide a todos los otros elementos contenidos en la secuencia.
    ~~~
    pred hayUnoParQueDivideAlResto(s: seg<T>)
    {
        (Ej: Z) (
            (
                (
                    (0 <= j) ∧ (j < |s0|)
                ) ∧L (j mod 2 = 0)
            ) ∧L (
                (∀i: Z) (
                    (0 <= i) ∧ (i < |s1|)
                ) →L ((s[j] = 0) ∨L (s[i] mod s[j] = 0))
            )
        )
    }
    ~~~

- h) sinRepetidos, que determina si la secuencia no tiene repetidos
    ~~~
    pred sinRepetidos(s: seg<T>)
    {
        (∀i, j: Z) (
                    (
                        (0 <= i) ∧ (i < |s|)
                    ) ∧ (
                        (0 <= j) ∧ (j < |s|)
                    ) ∧ (
                        i <> j
                    )
                ) →L ((s[i] <> s[j]))
            )
        )
    }
    ~~~

- i) otroMayorADerecha, que determina si todo elemento de la secuencia, salvo el último, tiene otro mayor a su derecha
    ~~~
    pred otroMayorADerecha(s: seg<T>)
    {
        (∀i: Z)(
            (0 <= i) ∧ (i < |s| - 1)
        ) →L (
            s[i] < s[i + 1]
        )
    }
    ~~~

- j) todoEsMúltiplo, que determina si todo elemento de la secuencia es múltiplo de algún otro.
    ~~~
    pred todoEsMúltiplo(s: seg<T>)
    {
        (Ej: Z) (
            (
                (
                    (0 <= j) ∧ (j < |s0|)
                ) ∧L (s[j] mod 2 = 0)
            ) ∧L (
                (∀i: Z) (
                    (0 <= i) ∧ (i < |s1|)
                ) →L ((s[j] = 0) ∨L (s[i] mod s[j] = 0))
            )
        )
    }
    ~~~

- k) enTresPartes, que determina si en la secuencia aparecen (de izquierda a derecha) primero 0s, despúes 1s y por último 2s.
    ~~~
    pred otroMayorOIgualALaDerecha(secuencia: seq<T>, incio: Z)
    {
        (∀i: Z)(
            (incio <= i) ∧ (i < |s| - 1)
        ) →L (
            s[i] <= s[i + 1]
        )
    }

    pred contieneCeroUnoYDos(secuencia: seq<T>)
    {
        (0 ∈ s) ∧ ((1 ∈ s) ∧ (2 ∈ s))
    }

    pred entreCeroYTres(numero: Z) {
        0 <= numero < 3
    }

    pred enTresPartes(secuencia: seq<Z>)
    {
        contieneCeroUnoYDos(secuencia) ∧ (
            (∀i: Z)(
                (0 <= i) ∧ (i < |s|)
            ) →L (
                (
                    entreCeroYTres(s[i])
                ) ∧L (
                    otroMayorOIgualALaDerecha(secuencia, i)
                )
            )
        )
    }

    pred enTresPartesAdmitiendoCeroApariciones(s: seq<Z>)
    {
        (∀i: Z)(
            (0 <= i) ∧ (i < |s|)
        ) →L (
            (
                entreCeroYTres(s[i])
            ) ∧L (
                otroMayorOIgualALaDerecha(s: seg<T>, i)
            )
        )
    }
    ~~~

## Ejercicio 5
- a) fun intercambiarPrimeroPorUltimo(s : seq<Z>) : seq<Z>
    ~~~
    fun intercambiarPrimeroPorUltimo(inout s : seq<Z>) : seq<Z> {
        pre {|s| > 0, sf=s[0], sl=s[|s|-1]}
        post { s[0]=sl, s[|s|-1]=s0 }
    }
    ~~~

- b) fun esReverso(s : seq<Z>, t : seq<Z>)
    ~~~
    pred esReverso(s: seq<Z>, t: seq<Z>) 
    {
        (∀i: Z) (
                    (
                        (0 <= i) ∧ (i < |s|)
                    )
                ) →L ((s[i] = t[|t| - i - 1]))
            )
        )
    }

    fun esReverso(in s : seq<Z>,in t : seq<Z>, out esReverso: Bool) {
        pre {|s| > 0 ∧ |s| = |t|}
        post { IfThenElseFi(esReverso(s, t), esReverso = true, esReverso = false) }
    }
    ~~~

- c) fun reverso(s : seq<Z>) : seq<Z>
    ~~~
    fun reverso(in s : seq<Z>, out reverso: seq<Z>) {
        pre {|s| >= 0 }
        post { (|s| = |reverso|) ∧ (
                (∀i: Z) (
                    (
                        (0 <= i) ∧ (i < |s|)
                    )
                ) →L ((s[i] = reverso[|reverso| - i - 1]))
            )
        }
    }
    ~~~

- d) fun agregarTresCeros(s : seq<Z>) : seq<Z>
    ~~~
    fun agregarTresCeros(inout s : seq<Z>) {
        pre { |s| >= 0, s0 = s }
        post { 
            (|s0| = |s| + 3) ∧ (subseq(s, |s|-3, |s|) = <0,0,0>)
        }
    }
    ~~~

- e) fun agregarNCeros(s : seq<Z>, n : Z) : seq<Z>
    ~~~
    pred todosIgualesA(s: seg<T>, a: T)
    {
        (∀i: Z)(
            (0 <= i) ∧ (i < |s|)
        ) →L (
            s[i] = a
        )
    }

    fun agregarTresCeros(inout s : seq<Z>) {
        pre { |s| >= 0, s0 = s }
        post { 
            (
                (|s0| = |s| + n) ∧ 
                    todosIgualesA(subseq(s, |s|-n, |s|), 0)
            )
        }
    }
    ~~~

 - f) fun sumarUno(s : seq<Z>) : seq<Z>
    ~~~
    fun sumarUno(inout s : seq<Z>) {
        pre { |s| >= 0, s0 = s }
        post { (|s| = |s0|) ∧ (
            (∀i: Z)(
                (0 <= i) ∧ (i < |s|)
            ) →L (
                s[i] = s0[i] + 1
            ))
        }
    }
    ~~~

- g) fun ordenar(s : seq<Z>) : seq<Z> 
    ~~~
    pred otroMayorOIgualALaDerecha(secuencia: seq<T>, incio: Z)
    {
        (∀i: Z)(
            (incio <= i) ∧ (i < |s| - 1)
        ) →L (
            s[i] <= s[i + 1]
        )
    }

    proc ordernar(inout s: seq<Z>){
        pre { |s| >= 0 }
        post {
            (|s| = |s0|) ∧ (
                otroMayorOIgualALaDerecha(s)
            )
        }
    }
    ~~~

## Ejercicio 6

- a) “Si un entero en s cumple P, también cumple Q”
    ~~~
        (∀i: Z)(
            (0 <= i) ∧ (i < |s|)
        ) →L (
            P(s[i]) → Q(s[i])
        )
    ~~~

- b) “Todos los enteros de s que cumplen P, no cumplen Q”
    ~~~
        (∀ i: Z)(
            (
                (0 <= i) ∧ (i < |s|)
            ) →L (
                P(s[i]) ∧L ¬Q(s[i])
            )
        )
    ~~~

- c) “Todos los enteros de s que están en posiciones pares y cumplen P, no cumplen Q”
    ~~~
        (∀i: Z)(
            (
                (0 <= i) ∧ (i < |s|)
            ) →L (
                (i mod 2 = 0) ∧L
                    (P(s[i])) ∧L
                    (¬Q(s[i]))
            )
        )
    ~~~ 

- d) “Todos los enteros de s que cumplen P y están en posiciones que cumplen Q, son pares”
    ~~~
        (∀i: Z)(
            (
                ((0 <= i) ∧ (i < |s|))
            ) →L (
                (i mod 2 = 0) ∧L (Q(i) ∧L P(s[i]))
            )
        )
    ~~~

- e)  “Si hay un entero en s que no cumple P entonces ninguno en s cumple Q”
    ~~~
        (∃i: Z)(
            (
                ((0 <= i) ∧ (i < |s|))
            ) ∧L (
                ¬(P(s[i])) →L (
                    (∀j: Z)(
                        ((0 <= j) ∧ (j < |s|))
                    ) →L (
                        ¬(Q(s[j]))
                    )
                )
            )
        )
    ~~~

- f) “Si hay un entero en s que no cumple P entonces ninguno en s cumple Q, y 
si todos los enteros de s cumplen P entonces hay al menos dos elementos 
de s que cumplen Q”
    ~~~
        (
            (∃i: Z)
            (
                (
                    (0 <= i) ∧ (i < |s|)
                ) ∧L (
                    ¬(P(s[i])) →L (
                        (∀j: Z)(
                            ((0 <= j) ∧ (j < |s|))
                        ) →L (
                            ¬(Q(s[j]))
                        )
                    )
                )
            )
        ) ∨L (
            (
                (#{ i ∈ s: P(i) }) = |s|
            ) →L (
                (#{ j ∈ s: Q(j) }) >= 2
            )
        )
    ~~~

## Ejercicio 7

- a) “Todo elemento en una posición válida de la secuencia cumple P”: 
        (∀i : Z)((0 ≤ i < |s|) ∧L P(s[i]))
    ~~~
    (∀i : Z)(
        (0 ≤ i < |s|) **∧L** P(s[i])
    )
    ~~~
    ~~~
    (∀i : Z)(
        (0 ≤ i < |s|) **→L** P(s[i])
    )
    ~~~

    >El error es el conector lógico, al poner un y-luego, si un elmento de Z 
      no pertenece a la secuencia s el predicado siempre es falso

- b) “Algún elemento en una posici´on v´alida de la secuencia cumple P”: 
        (∃i : Z)((0 ≤ i < |s|) →L P(s[i]))
    ~~~
    (∃i : Z)(
        (0 ≤ i < |s|) **→L** P(s[i])
    )
    ~~~
    ~~~
    (∃i : Z)(
        (0 ≤ i < |s|) **∧L** P(s[i])
    )
    ~~~
    >El error es el conector lógico, al poner un entonces-luego, si un elmento de Z 
      no pertenece a la secuencia s el predicado siempre es verdadero

## Ejercicio 8

    A es mas fuerte que B o, B es mas debil que A, cuando (A → B) es tautologia

- a) P(3) y (∀k : Z)((0 ≤ k < 10) → P(k))
    > (∀k : Z)((0 ≤ k < 10) → P(k)) es mas fuerte que P(3)
- b) P(3) y ((k > 5) ∧ (∀i : Z)((0 ≤ i < k) → P(i)))
    ~~~
        (
            (k > 5) ∧ 
                (∀i : Z)(
                    (0 ≤ i < k) → P(i)
                )
        )
    ~~~
    > ((k > 5) ∧ (∀i : Z)((0 ≤ i < k) → P(i))) es mas fuerte que P(3)
- c) (∀n : Z)((n ∈ s ∧ P(n)) → Q(n)) y (∀n : Z)((n ∈ s) → Q(n))
    ~~~
        (∀n : Z)(
            (n ∈ s ∧ P(n)) → Q(n)
        )
    ~~~
    ~~~
        (∀n : Z)(
            (n ∈ s) → Q(n)
        )
    ~~~
    (∀n : Z)((n ∈ s ∧ P(n)) → Q(n)) es mas fuerte que (∀n : Z)((n ∈ s) → Q(n))

- d) (∃n : Z)(n ∈ s ∧ P(n) ∧ Q(n)) y (∀n : Z)((n ∈ s) → Q(n))
    ~~~
        (∃n : Z)(
            (n ∈ s) ∧ P(n) ∧ Q(n)
        )
    ~~~
    ~~~
        (∀n : Z)(
            (n ∈ s) → Q(n)
        )
    ~~~
    > Son incomparables

- e) (∃n : Z)(n ∈ s ∧ P(n) ∧ Q(n)) y |s| > 0 ∧ ((∀n : Z)((n ∈ s) → Q(n)))
    ~~~
        (∃n : Z)(
            (n ∈ s) ∧ P(n) ∧ Q(n)
        )
    ~~~
    ~~~
        (|s| > 0) ∧ (
            (∀n : Z)(
                (n ∈ s) → Q(n)
            )
        )
    ~~~
    > Son incomparables

- f) (∃n : Z)(n ∈ s ∧ P(n) ∧ Q(n)) y (∀n : Z)(n ∈ s → (P(n) ∧ Q(n)))
    ~~~
        (∃n : Z)(
            (n ∈ s) ∧ P(n) ∧ Q(n)
        )
    ~~~
    ~~~
        (∀n : Z)(
            (n ∈ s) → (P(n) ∧ Q(n))
        )
    ~~~
    > (∀n : Z)(n ∈ s → (P(n) ∧ Q(n))) es más fuerte que (∃n : Z)(n ∈ s ∧ P(n) ∧ Q(n))

## Ejercicio 9

- a) 
    - I) (∀i : Z)((0 ≤ i < |s|) →L ((∀j : Z)(0 ≤ j < |s|) ∧ i < j) →L s[i] < s[j])
    - II) (∀j : Z)((0 ≤ j < |s|) →L ((∀i : Z)(0 ≤ i < |s|) ∧ i < j) →L s[i] < s[j])

    I)
    ~~~
    (∀i : Z)(
        (0 ≤ i < |s|) →L (
            (∀j : Z)(0 ≤ j < |s|) ∧ (i < j)
        ) →L (s[i] < s[j])
    )
    ~~~
    II)
    ~~~
    (∀j : Z)(
        (0 ≤ j < |s|) →L (
            (∀i : Z)(0 ≤ i < |s|) ∧ i < j
        ) →L s[i] < s[j]
    )
    ~~~
    > Son equivalentes

- b) 
    - I) (∃i : Z)(0 ≤ i < |s| ∧L ((∃j : Z)((0 ≤ j < |s| ∧ i < j − 1) ∧L TodosIguales(subseq(s, i, j)))))
    - II) (∃j : Z)(0 ≤ j < |s| ∧L ((∃i : Z)((0 ≤ i < |s| ∧ i < j − 1) ∧L TodosIguales(subseq(s, i, j)))))
    I)
    ~~~
    (∃i : Z)(
        (0 ≤ i < |s|) ∧L (
            (∃j : Z)(
                (0 ≤ j < |s| ∧ i < j − 1) ∧L 
                    TodosIguales(subseq(s, i, j))
            )
        )
    )
    ~~~
    II)
    ~~~
    (∃j : Z)(
        (0 ≤ j < |s|) ∧L (
            (∃i : Z)(
                (0 ≤ i < |s| ∧ i < j − 1) ∧L
                    TodosIguales(subseq(s, i, j))
            )
        )
    )
    ~~~
    > Son equivalentes


