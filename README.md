# decompose
Decompose serial input to mother wavelet.

# Inner structure
Suppose input vector x in R^n, there exists mother wavelet y in R^n and some intensity z in R^n s.t.
x = \[y, \[I_{1/2}y, I_{1/2}y\], ..., \[average y, ..., average y\] \] \* z.
And with some expansion (and scale for some axis results:), we get -\epsilon 1 \leq A(x)\[y, z^-1\] \leq \epsilon 1 ,
so with linear optimize with certain z range, we get mother wavelet from the input. (But the quadratic optimization is recommended for the form.)

# How to use
    const int count(20);
    SimpleVector<T> v(count);
    Decompose<T> decom(v.size());
    // some operation on v.
    const auto mw(decom.next(v));
    
    // or we can do:
    const int count(20);
    SimpleVector<T> dst(/* some size */);
    SimpleVector<T> src(/* some size */);
    // some operation on dst, src.
    const auto mimic(Decompose(count).mimic(dst, src));

# Tips
This might leads us to p_1/2 prediction, or, cracks some machine learning depend difficulty on real world problems with deterministic form on simple calculated y vector.

# General Tips
This is similar algorithm to multilayer perceptron algorithm because latter one is to make A_0(x,k):=A(0,x,k)\*A(1,x,k)\*...\*A(n,x,k) from some differentials on A(n,x,k) depends on A(n-1,x,k) and A(n,x,k-1) and A(n-1,x,k-1) and differential itself. And with so, some of A(n,x,k) is the function depends on differential itself and A(n-1,x,k), so this is similar to the decomposition x=y\*z_0+\[I_1/2,I_1/2]y\*z_1+... on log(y). But I have no idea on the relation with them.

# Another Download Sites
* https://sites.google.com/view/bitsofcotton/
* https://ja.osdn.net/projects/decompose/
