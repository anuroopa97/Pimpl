// PIMPL_DLL.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "StableClass.h"
#include "SomeContainedClass1.h"
#include "SomeContainedClass2.h"

class StableClassImpl{
public:
    SomeContainedClass1* m_SomeContainedClass1;
    SomeContainedClass2* m_SomeContainedClass2;
    int CalculateAreaOfRectangle(){
        return m_SomeContainedClass1->GetValue() * m_SomeContainedClass2->GetValue();
    }
}
StableClass::StableClass(void) : m_pimplImpl(new StableClassImpl())
{
    m_pimplImpl->m_SomeContainedClass1=nullptr;
    m_pimplImpl->m_SomeContainedClass2=nullptr;

}
StableClass::~StableClass(void){
    delete m_pimplImpl;
}
void StableClass::Method1(int i)
{

}
void StableClass::Method2(int i)
{

}

int StableClass::CalculateAreaOfRectangle(){
    return m_pimplImpl->CalculateAreaOfRectangle();
}
// SomeContainedClass1* StableClass::GetSomeContainedClass1()
// {
//     return m_SomeContainedClass1;
// }

// SomeContainedClass2* StableClass::GetSomeContainedClass2()
// {
//     return m_SomeContainedClass2;
// }
