#include "Assembly.h"
#include "Mesh.h"
#include "SetOfElements.h"
#include "Solver.h"
#include "Algebra/Diagonal.h"
#include "Algebra/Full.h"
#include "Algebra/Mapped.h"
#include "Algebra/Normal.h"
#include "Algebra/Vector.h"
#include "Algebra/WriteMatrix.h"
#include "Equations/Base.h"
#include "Fields/FieldNodal.h"
#include "Solvers/ConjugateGradientNE.h"
#include "Solvers/ConjugateGradientNR.h"
#include "Solvers/ConjugateResidual.h"
#include "Solvers/CRAIG.h"
#include "Solvers/LSMR.h"
#include "Solvers/LSQR.h"
#include "Solvers/LU.h"
#include "Solvers/MINRES.h"
#include "Solvers/PCG.h"
#include "Solvers/PCGNE.h"
#include "Solvers/PCGNR.h"
#include "Solvers/ResidualRange.h"
#include <fstream>
