# decompose
Decompose serial input to mother wavelet.

# Inner structure
Suppose input vector x in R^n, there exists mother wavelet y in R^n and some intensity z in R^n s.t.
x = \[y, \[I_{1/2}y, I_{1/2}y\], ..., \[y_n, ..., y_n\] \] \* z.
And with some expansion (and scale for some axis results:), we get -\epsilon 1 \leq A(x)\[y, z^-1\] \leq \epsilon 1 ,
so with linear optimize with certain z range, we get mother wavelet from the input. (But the quadratic optimization is recommended for the form.)

# How to use
    SimpleVector<T> v(/* some size */);
    Decompose<T> decom(v.size());
    // some operation on v.
    const auto mw(decom.mother(v));
    
    // or we can do:
    SimpleVector<T> dst(/* some size */);
    SimpleVector<T> src(/* some size */);
    // some operation on dst, src.
    const auto mimic(Decompose(/* some size */).mimic(dst, src));
    
    // or we can do:
    SimpleVector<T> v(/*some size */);
    // some operation on v.
    const auto emphasis(Decompose(/* some size */).emphasis(v, /* some intensity */));

# General Tips
This is similar algorithm to multilayer perceptron algorithm because latter one is to make A_0(x,k):=A(0,x,k)\*A(1,x,k)\*...\*A(n,x,k) from some differentials on A(n,x,k) depends on A(n-1,x,k) and A(n,x,k-1) and A(n-1,x,k-1) and differential itself. And with so, some of A(n,x,k) is the function depends on differential itself and A(n-1,x,k), so this is similar to the decomposition x=y\*z_0+\[I_1/2,I_1/2]y\*z_1+... on log(y). But I have no idea on the relation with them.

# The things undone
If we work with linear optimize, we can get non-overlearning result for the wavelet.      
But this is not implemented.

# Known bug
This returns overlearned result because of max rank matrix.

# Another Download Sites
* https://drive.google.com/drive/folders/1B71X1BMttL6yyi76REeOTNRrpopO8EAR?usp=sharing
* https://1drv.ms/u/s!AnqkwcwMjB_PaDIfXya_M3-aLXw?e=qzfKcU
* https://ja.osdn.net/users/bitsofcotton/

# Archive
This repository is archived.
