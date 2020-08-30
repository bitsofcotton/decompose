CXX=	clang++
LD=	${CXX}

# compiler flags.
#CXXFLAGS+=	-fopenmp
CXXFLAGS+=	-D_WITHOUT_EIGEN_
CXXFLAGS+=	-std=c++11 -Ofast -g3 -mtune=native
LDFLAGS+=	-lc++

CLEANFILES= *.o *.dSYM decompose

all:		decompose
clean:
	@rm -rf ${CLEANFILES}

