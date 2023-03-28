
#include "PIMPLDLL_EXPORTS.h"
#include "BaseStableClass.h"


class SomeContainedClassImpl;

// This class is exported from the dll
class PIMPLDLL_API StableClass : BaseStableClass {
public:
	StableClass(void);
    ~StableClass(void);

	void Method1(int i) override; 
	void Method2(int i) override; // Newly Added

	int CalculateAreaOfRectangle();

private:
	StableClassImpl* m_pimplImpl;

};


