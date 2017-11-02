#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// ConsoleApplication.LocalProcessing/StaffInformatino[]
struct StaffInformatinoU5BU5D_t3872475035;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Linq.SortContext`1<ConsoleApplication.LocalProcessing/StaffInformatino>
struct SortContext_1_t1770590709;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.QuickSort`1<ConsoleApplication.LocalProcessing/StaffInformatino>
struct  QuickSort_1_t1942605211  : public Il2CppObject
{
public:
	// TElement[] System.Linq.QuickSort`1::elements
	StaffInformatinoU5BU5D_t3872475035* ___elements_0;
	// System.Int32[] System.Linq.QuickSort`1::indexes
	Int32U5BU5D_t3030399641* ___indexes_1;
	// System.Linq.SortContext`1<TElement> System.Linq.QuickSort`1::context
	SortContext_1_t1770590709 * ___context_2;

public:
	inline static int32_t get_offset_of_elements_0() { return static_cast<int32_t>(offsetof(QuickSort_1_t1942605211, ___elements_0)); }
	inline StaffInformatinoU5BU5D_t3872475035* get_elements_0() const { return ___elements_0; }
	inline StaffInformatinoU5BU5D_t3872475035** get_address_of_elements_0() { return &___elements_0; }
	inline void set_elements_0(StaffInformatinoU5BU5D_t3872475035* value)
	{
		___elements_0 = value;
		Il2CppCodeGenWriteBarrier(&___elements_0, value);
	}

	inline static int32_t get_offset_of_indexes_1() { return static_cast<int32_t>(offsetof(QuickSort_1_t1942605211, ___indexes_1)); }
	inline Int32U5BU5D_t3030399641* get_indexes_1() const { return ___indexes_1; }
	inline Int32U5BU5D_t3030399641** get_address_of_indexes_1() { return &___indexes_1; }
	inline void set_indexes_1(Int32U5BU5D_t3030399641* value)
	{
		___indexes_1 = value;
		Il2CppCodeGenWriteBarrier(&___indexes_1, value);
	}

	inline static int32_t get_offset_of_context_2() { return static_cast<int32_t>(offsetof(QuickSort_1_t1942605211, ___context_2)); }
	inline SortContext_1_t1770590709 * get_context_2() const { return ___context_2; }
	inline SortContext_1_t1770590709 ** get_address_of_context_2() { return &___context_2; }
	inline void set_context_2(SortContext_1_t1770590709 * value)
	{
		___context_2 = value;
		Il2CppCodeGenWriteBarrier(&___context_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
