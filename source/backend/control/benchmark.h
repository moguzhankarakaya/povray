//******************************************************************************
///
/// @file backend/control/benchmark.h
///
/// This module defines the prototypes for all benchmark functions.
///
/// @copyright
/// @parblock
///
/// Persistence of Vision Ray Tracer ('POV-Ray') version 3.8.
/// Copyright 1991-2019 Persistence of Vision Raytracer Pty. Ltd.
///
/// POV-Ray is free software: you can redistribute it and/or modify
/// it under the terms of the GNU Affero General Public License as
/// published by the Free Software Foundation, either version 3 of the
/// License, or (at your option) any later version.
///
/// POV-Ray is distributed in the hope that it will be useful,
/// but WITHOUT ANY WARRANTY; without even the implied warranty of
/// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
/// GNU Affero General Public License for more details.
///
/// You should have received a copy of the GNU Affero General Public License
/// along with this program.  If not, see <http://www.gnu.org/licenses/>.
///
/// ----------------------------------------------------------------------------
///
/// POV-Ray is based on the popular DKB raytracer version 2.12.
/// DKBTrace was originally written by David K. Buck.
/// DKBTrace Ver 2.0-2.12 were written by David K. Buck & Aaron A. Collins.
///
/// @endparblock
///
//******************************************************************************

#ifndef POVRAY_BACKEND_BENCHMARK_H
#define POVRAY_BACKEND_BENCHMARK_H

// Module config header file must be the first file included within POV-Ray unit header files
#include "backend/configbackend.h"

// C++ variants of C standard header files
// C++ standard header files
//  (none at the moment)

// POV-Ray header files (base module)
// POV-Ray header files (backend module)
//  (none at the moment)

namespace pov
{

/*****************************************************************************
* Global functions
******************************************************************************/

bool Write_Benchmark_File (const char *Scene_File_Name, const char *INI_File_Name) ;
unsigned int Get_Benchmark_Version (void) ;

}
// end of namespace pov

#endif // POVRAY_BACKEND_BENCHMARK_H
