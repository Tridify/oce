// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_ConversionBasedUnitAndVolumeUnit_HeaderFile
#define _StepBasic_ConversionBasedUnitAndVolumeUnit_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepBasic_ConversionBasedUnitAndVolumeUnit.hxx>

#include <Handle_StepBasic_VolumeUnit.hxx>
#include <StepBasic_ConversionBasedUnit.hxx>
class StepBasic_VolumeUnit;



class StepBasic_ConversionBasedUnitAndVolumeUnit : public StepBasic_ConversionBasedUnit
{

public:

  
  //! Returns a ConversionBasedUnitAndVolumeUnit
  Standard_EXPORT StepBasic_ConversionBasedUnitAndVolumeUnit();
  
  Standard_EXPORT   void SetVolumeUnit (const Handle(StepBasic_VolumeUnit)& aVolumeUnit) ;
  
  Standard_EXPORT   Handle(StepBasic_VolumeUnit) VolumeUnit()  const;




  DEFINE_STANDARD_RTTI(StepBasic_ConversionBasedUnitAndVolumeUnit)

protected:




private: 


  Handle(StepBasic_VolumeUnit) volumeUnit;


};







#endif // _StepBasic_ConversionBasedUnitAndVolumeUnit_HeaderFile
