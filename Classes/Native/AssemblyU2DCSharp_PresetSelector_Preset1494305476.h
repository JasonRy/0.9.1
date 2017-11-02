#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PresetSelector/Preset
struct  Preset_t1494305476 
{
public:
	// System.String PresetSelector/Preset::name
	String_t* ___name_0;
	// System.Int32 PresetSelector/Preset::downsampleFactor
	int32_t ___downsampleFactor_1;
	// System.Int32 PresetSelector/Preset::iterations
	int32_t ___iterations_2;
	// System.Single PresetSelector/Preset::blurMinSpread
	float ___blurMinSpread_3;
	// System.Single PresetSelector/Preset::blurSpread
	float ___blurSpread_4;
	// System.Single PresetSelector/Preset::blurIntensity
	float ___blurIntensity_5;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(Preset_t1494305476, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_downsampleFactor_1() { return static_cast<int32_t>(offsetof(Preset_t1494305476, ___downsampleFactor_1)); }
	inline int32_t get_downsampleFactor_1() const { return ___downsampleFactor_1; }
	inline int32_t* get_address_of_downsampleFactor_1() { return &___downsampleFactor_1; }
	inline void set_downsampleFactor_1(int32_t value)
	{
		___downsampleFactor_1 = value;
	}

	inline static int32_t get_offset_of_iterations_2() { return static_cast<int32_t>(offsetof(Preset_t1494305476, ___iterations_2)); }
	inline int32_t get_iterations_2() const { return ___iterations_2; }
	inline int32_t* get_address_of_iterations_2() { return &___iterations_2; }
	inline void set_iterations_2(int32_t value)
	{
		___iterations_2 = value;
	}

	inline static int32_t get_offset_of_blurMinSpread_3() { return static_cast<int32_t>(offsetof(Preset_t1494305476, ___blurMinSpread_3)); }
	inline float get_blurMinSpread_3() const { return ___blurMinSpread_3; }
	inline float* get_address_of_blurMinSpread_3() { return &___blurMinSpread_3; }
	inline void set_blurMinSpread_3(float value)
	{
		___blurMinSpread_3 = value;
	}

	inline static int32_t get_offset_of_blurSpread_4() { return static_cast<int32_t>(offsetof(Preset_t1494305476, ___blurSpread_4)); }
	inline float get_blurSpread_4() const { return ___blurSpread_4; }
	inline float* get_address_of_blurSpread_4() { return &___blurSpread_4; }
	inline void set_blurSpread_4(float value)
	{
		___blurSpread_4 = value;
	}

	inline static int32_t get_offset_of_blurIntensity_5() { return static_cast<int32_t>(offsetof(Preset_t1494305476, ___blurIntensity_5)); }
	inline float get_blurIntensity_5() const { return ___blurIntensity_5; }
	inline float* get_address_of_blurIntensity_5() { return &___blurIntensity_5; }
	inline void set_blurIntensity_5(float value)
	{
		___blurIntensity_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of PresetSelector/Preset
struct Preset_t1494305476_marshaled_pinvoke
{
	char* ___name_0;
	int32_t ___downsampleFactor_1;
	int32_t ___iterations_2;
	float ___blurMinSpread_3;
	float ___blurSpread_4;
	float ___blurIntensity_5;
};
// Native definition for COM marshalling of PresetSelector/Preset
struct Preset_t1494305476_marshaled_com
{
	Il2CppChar* ___name_0;
	int32_t ___downsampleFactor_1;
	int32_t ___iterations_2;
	float ___blurMinSpread_3;
	float ___blurSpread_4;
	float ___blurIntensity_5;
};
