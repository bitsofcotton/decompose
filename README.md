# decompoe_orth
Decompose serial input to mother wavelet. Before draft.

# Inner structure
Suppose input vector x in R^n, there exists mother wavelet y in R^n and some intensity z in R^n s.t.
x = \[y, \[I_{1/2}y, I_{1/2}y\], ..., \[average y, ..., average y\] \] \* z.
And with some expansion, we get -\epsilon 1 \leq A(x)\[y, z\] \leq \epsilon 1 ,
so with linear optimize, we get mother wavelet from input.
