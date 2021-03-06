// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Extrema_POnCurv_HeaderFile
#define _Extrema_POnCurv_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Real.hxx>
#include <gp_Pnt.hxx>
#include <Standard_Storable.hxx>
#include <Standard_PrimitiveTypes.hxx>
class gp_Pnt;


Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(Extrema_POnCurv);


class Extrema_POnCurv 
{

public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Extrema_POnCurv();
  
  Standard_EXPORT Extrema_POnCurv(const Standard_Real U, const gp_Pnt& P);
  
  Standard_EXPORT   void SetValues (const Standard_Real U, const gp_Pnt& P) ;
  
     const  gp_Pnt& Value()  const;
  
      Standard_Real Parameter()  const;
    Standard_Real _CSFDB_GetExtrema_POnCurvmyU() const { return myU; }
    void _CSFDB_SetExtrema_POnCurvmyU(const Standard_Real p) { myU = p; }
    const gp_Pnt& _CSFDB_GetExtrema_POnCurvmyP() const { return myP; }



protected:




private: 


  Standard_Real myU;
  gp_Pnt myP;


};

#define Pnt gp_Pnt
#define Pnt_hxx <gp_Pnt.hxx>
#define Extrema_Point Extrema_POnCurv
#define Extrema_Point_hxx <Extrema_POnCurv.hxx>

#include <Extrema_Point.lxx>

#undef Pnt
#undef Pnt_hxx
#undef Extrema_Point
#undef Extrema_Point_hxx




#endif // _Extrema_POnCurv_HeaderFile
