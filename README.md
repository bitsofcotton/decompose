# decompose
Decompose serial input to mother wavelet.

# Inner structure
Suppose input vector x in R^n, there exists mother wavelet y in R^n and some intensity z in R^n s.t.
x = \[y, \[I_{1/2}y, I_{1/2}y\], ..., \[average y, ..., average y\] \] \* z.
And with some expansion (and scale for some axis results:), we get -\epsilon 1 \leq A(x)\[y, z^-1\] \leq \epsilon 1 ,
so with linear optimize with certain z range, we get mother wavelet from the input. (But the quadratic optimization is recommended for the form.)

# Tips
This might leads us to p_1/2 prediction, or, cracks some machine learning depend difficulty on real world problems with deterministic form on simple calculated y vector.
