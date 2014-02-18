#ifndef __L1TMUON_BDTPTASSIGNMENT_H__
#define __L1TMUON_BDTPTASSIGNMENT_H__
// 
// Class: L1TMuon::BDTPtAssignment
//
// Info: Implements a BDT based 'stand-in' for a pt-assignment LUT.
//
// Author: L. Gray (FNAL), B. Scurlock (UF)
//
#include <vector>
#include "L1TriggerDPGUpgrade/L1TMuon/interface/PtAssignmentUnit.h"
#include "FWCore/Utilities/interface/InputTag.h"

namespace L1TMuon {
  
  class BDTPtAssignment: public PtAssignmentUnit {
  public:
    BDTPtAssignment(const edm::ParameterSet&);
    ~BDTPtAssignment() {}

    virtual void assignPt(InternalTrack&);
  private:    
  };
}

#endif
