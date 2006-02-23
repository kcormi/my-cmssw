///////////////////////////////////////////////////////////////////////////////
// File: EcalNumberingScheme.h
// Description: Definition of sensitive unit numbering schema for ECal
///////////////////////////////////////////////////////////////////////////////

#ifndef EcalNumberingScheme_h
#define EcalNumberingScheme_h

#include "Geometry/CaloGeometry/interface/CaloNumberingScheme.h"
#include "Geometry/EcalCommonData/interface/EcalBaseNumber.h"
#include <boost/cstdint.hpp>

class EcalNumberingScheme : public CaloNumberingScheme {

public:
  EcalNumberingScheme(int);
  virtual ~EcalNumberingScheme();
  virtual uint32_t getUnitID(const EcalBaseNumber& baseNumber) const = 0;

};

#endif
