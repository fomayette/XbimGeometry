// Created on: 1991-09-05
// Created by: J.P. TIRAUlt
// Copyright (c) 1991-1999 Matra Datavision
// Copyright (c) 1999-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#ifndef _Standard_TooManyUsers_HeaderFile
#define _Standard_TooManyUsers_HeaderFile

#include <Standard_Type.hxx>
#include <Standard_DefineException.hxx>
#include <Standard_SStream.hxx>
#include <Standard_LicenseError.hxx>

class Standard_TooManyUsers;
DEFINE_STANDARD_HANDLE(Standard_TooManyUsers, Standard_LicenseError)

#if !defined No_Exception && !defined No_Standard_TooManyUsers
  #define Standard_TooManyUsers_Raise_if(CONDITION, MESSAGE) \
  if (CONDITION) Standard_TooManyUsers::Raise(MESSAGE);
#else
  #define Standard_TooManyUsers_Raise_if(CONDITION, MESSAGE)
#endif

DEFINE_STANDARD_EXCEPTION(Standard_TooManyUsers, Standard_LicenseError)

#endif // _Standard_TooManyUsers_HeaderFile
