// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext_HeaderFile
#define _StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext.hxx>

#include <Handle_StepGeom_GeometricRepresentationContext.hxx>
#include <Handle_StepRepr_GlobalUnitAssignedContext.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <Standard_Integer.hxx>
#include <Handle_StepBasic_HArray1OfNamedUnit.hxx>
#include <Handle_StepBasic_NamedUnit.hxx>
class StepGeom_GeometricRepresentationContext;
class StepRepr_GlobalUnitAssignedContext;
class TCollection_HAsciiString;
class StepBasic_HArray1OfNamedUnit;
class StepBasic_NamedUnit;



class StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext : public StepRepr_RepresentationContext
{

public:

  
  //! Returns a GeometricRepresentationContextAndGlobalUnitAssignedContext
  Standard_EXPORT StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aContextIdentifier, const Handle(TCollection_HAsciiString)& aContextType) ;
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aContextIdentifier, const Handle(TCollection_HAsciiString)& aContextType, const Handle(StepGeom_GeometricRepresentationContext)& aGeometricRepresentationContext, const Handle(StepRepr_GlobalUnitAssignedContext)& aGlobalUnitAssignedContext) ;
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aContextIdentifier, const Handle(TCollection_HAsciiString)& aContextType, const Standard_Integer aCoordinateSpaceDimension, const Handle(StepBasic_HArray1OfNamedUnit)& aUnits) ;
  
  Standard_EXPORT   void SetGeometricRepresentationContext (const Handle(StepGeom_GeometricRepresentationContext)& aGeometricRepresentationContext) ;
  
  Standard_EXPORT   Handle(StepGeom_GeometricRepresentationContext) GeometricRepresentationContext()  const;
  
  Standard_EXPORT   void SetGlobalUnitAssignedContext (const Handle(StepRepr_GlobalUnitAssignedContext)& aGlobalUnitAssignedContext) ;
  
  Standard_EXPORT   Handle(StepRepr_GlobalUnitAssignedContext) GlobalUnitAssignedContext()  const;
  
  Standard_EXPORT   void SetCoordinateSpaceDimension (const Standard_Integer aCoordinateSpaceDimension) ;
  
  Standard_EXPORT   Standard_Integer CoordinateSpaceDimension()  const;
  
  Standard_EXPORT   void SetUnits (const Handle(StepBasic_HArray1OfNamedUnit)& aUnits) ;
  
  Standard_EXPORT   Handle(StepBasic_HArray1OfNamedUnit) Units()  const;
  
  Standard_EXPORT   Handle(StepBasic_NamedUnit) UnitsValue (const Standard_Integer num)  const;
  
  Standard_EXPORT   Standard_Integer NbUnits()  const;




  DEFINE_STANDARD_RTTI(StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext)

protected:




private: 


  Handle(StepGeom_GeometricRepresentationContext) geometricRepresentationContext;
  Handle(StepRepr_GlobalUnitAssignedContext) globalUnitAssignedContext;


};







#endif // _StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext_HeaderFile
