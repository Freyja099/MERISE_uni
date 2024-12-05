/***********************************************************************
 * Module:  Departement.h
 * Author:  ADMIN
 * Modified: November 22, 2024 10:10:49 AM
 * Purpose: Declaration of the class Departement
 ***********************************************************************/

#if !defined(__OOPcpp_Departement_h)
#define __OOPcpp_Departement_h

class Employee;

class Departement
{
public:
   int idDep;
   std::string nomDep;
   std::string localisationDep;
   
   Employee** employee;

protected:
private:

};

#endif