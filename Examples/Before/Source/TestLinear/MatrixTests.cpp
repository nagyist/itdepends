#include "stdafx.h"
#include "CppUnitTest.h"
#include "Algebra/Diagonal.h"
#include "Algebra/Full.h"
#include "Algebra/ReadMatrix.h"
#include "Algebra/Vector.h"
#include "Solvers/BasisRange.h"
#include "Solvers/BiCGSTAB.h"
#include "Solvers/ConjugateGradient.h"
#include "Solvers/ConjugateGradientNE.h"
#include "Solvers/ConjugateGradientNR.h"
#include "Solvers/ConjugateResidual.h"
#include "Solvers/MinimalResidual.h"
#include "Solvers/PCG.h"
#include "Solvers/PCGNE.h"
#include "Solvers/PCGNR.h"
#include "Solvers/ResidualNormSteepestDescent.h"
#include "Solvers/ResidualRange.h"
#include "Solvers/SteepestDescent.h"
#include "Solvers/TruncatedResidualRange.h"
#include "TestUtils/LogStream.h"
#include <fstream>
#include <iomanip>
#include <memory>
