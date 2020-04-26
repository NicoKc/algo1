## 01-Secuencias

## Ejercicio 6

- a) “Si un entero en s cumple P, también cumple Q”
    ~~~
        (∀i: Z)(
            (0 <= i) ∧ (i < |s|)
        ) →L (
            P(s[i]) → Q(s[i])
        )
    ~~~

    i ∈ Z : (P(i) => Q(i))

    z = <1,2,3,4>
    s = <2,3>
    |s|(∀i: Z)((0 <= i) ∧ (i < |s|))|P(s[i]) →L Q(s[i])| a →L b |
    |-|                             -|                 -|        -|
    |1|                             0|                ⊥|        1|
    |2|                             1|                 1|        1|
    |3|                             1|                 0|        0|
    |4|                             0|                ⊥|        1|

    > a ≡ ((0 <= i) ∧ (i < |s|)
      b ≡ P(s[i]) →L Q(s[i])

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

    i ∈ Z : (P(i) => ¬Q(i))
    z = <1,2,3,4>
    s = <2,3>

    |s|((0 <= i) ∧ (i < |s|)|P(s[i])|Q(s[i])|P(s[i]) ∧L ¬Q(s[i])| a →L b |
    |-|                     -|     -|       -|                   -|        -|
    |1|                     0|    ⊥|       ⊥|                  ⊥|        1|
    |2|                     1|     1|       0|                   1|        1|
    |3|                     1|     0|      ⊥|                   0|        0|
    |4|                     0|    ⊥|       ⊥|                  ⊥|        1|

    > a ≡ ((0 <= i) ∧ (i < |s|)
      b ≡ P(s[i]) ∧L ¬Q(s[i])

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

    {[i ∈ s,Z : ((((i%2 = 0) ∧L P(s[i]))) ∧L (¬Q(i)))}

    z = <1,2,3,4,5,6,8>
    s = <2,3,4,5,8>

    |s|((0 <= i) ∧ (i < |s|)|i % 2 = 0|P(s[i])|Q(s[i])|¬Q(s[i])|(((i%2 = 0) ∧L P(s[i])))| T| R|
    |-|                     -|        -|     -|       -|       -|                       -| -| -|
    |1|                     0|        0|    ⊥|       ⊥|      ⊥|                       0| 0| 0|
    |2|                     1|        1|     0|       0|       1|                       0| 0| 0|
    |3|                     1|        0|     0|       1|       0|                       0| 0| 0|
    |4|                     1|        1|     1|       0|       1|                       1| 1| 1|
    |5|                     1|        0|     1|       1|       0|                       0| 0| 0|
    |8|                     1|        1|     1|       1|       0|                       1| 0| 0|
    |6|                     0|        1|    ⊥|       ⊥|      ⊥|                      ⊥| ⊥| 1|
    > T ≡ ((((i%2 = 0) ∧L P(s[i]))) ∧L (¬Q(i)))
      R ≡ ((0 <= i) ∧ (i < |s|) →L T

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

    {[i ∈ s,Z : (i % 2 = 0) ∧L (P(s[i]) ∧L Q[i]) }

- e)  “Si hay un entero en s que no cumple P entonces ninguno en s cumple Q”
    ~~~
        (Ei: Z)(
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

    {Ei ∈ s,Z : ¬P(s[i]) ∧L ({j ∈ s,Z: ¬Q(s[i])}) } ) }