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
// System.Collections.Generic.List`1<ConsoleApplication.LocalProcessing/DeviceDetailedInformation>
struct List_1_t1633575372;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ConsoleApplication.LocalProcessing/DeviceProperties
struct  DeviceProperties_t2192475981 
{
public:
	// System.Int32 ConsoleApplication.LocalProcessing/DeviceProperties::id
	int32_t ___id_0;
	// System.String ConsoleApplication.LocalProcessing/DeviceProperties::type
	String_t* ___type_1;
	// System.String ConsoleApplication.LocalProcessing/DeviceProperties::name
	String_t* ___name_2;
	// System.String ConsoleApplication.LocalProcessing/DeviceProperties::area
	String_t* ___area_3;
	// System.String ConsoleApplication.LocalProcessing/DeviceProperties::floor
	String_t* ___floor_4;
	// System.String ConsoleApplication.LocalProcessing/DeviceProperties::room
	String_t* ___room_5;
	// System.String ConsoleApplication.LocalProcessing/DeviceProperties::time
	String_t* ___time_6;
	// System.Boolean ConsoleApplication.LocalProcessing/DeviceProperties::isOffline
	bool ___isOffline_7;
	// System.Int32 ConsoleApplication.LocalProcessing/DeviceProperties::device_status
	int32_t ___device_status_8;
	// System.Int32 ConsoleApplication.LocalProcessing/DeviceProperties::is_distributed
	int32_t ___is_distributed_9;
	// System.Int32 ConsoleApplication.LocalProcessing/DeviceProperties::state
	int32_t ___state_10;
	// System.Int32 ConsoleApplication.LocalProcessing/DeviceProperties::active
	int32_t ___active_11;
	// System.String ConsoleApplication.LocalProcessing/DeviceProperties::project
	String_t* ___project_12;
	// System.String ConsoleApplication.LocalProcessing/DeviceProperties::building
	String_t* ___building_13;
	// System.String ConsoleApplication.LocalProcessing/DeviceProperties::block
	String_t* ___block_14;
	// System.Collections.Generic.List`1<ConsoleApplication.LocalProcessing/DeviceDetailedInformation> ConsoleApplication.LocalProcessing/DeviceProperties::DDI
	List_1_t1633575372 * ___DDI_15;
	// System.Int32 ConsoleApplication.LocalProcessing/DeviceProperties::<param_status>k__BackingField
	int32_t ___U3Cparam_statusU3Ek__BackingField_16;
	// System.String ConsoleApplication.LocalProcessing/DeviceProperties::vender
	String_t* ___vender_17;
	// System.String ConsoleApplication.LocalProcessing/DeviceProperties::spec
	String_t* ___spec_18;
	// System.String ConsoleApplication.LocalProcessing/DeviceProperties::device_usage
	String_t* ___device_usage_19;
	// System.String ConsoleApplication.LocalProcessing/DeviceProperties::after_sale
	String_t* ___after_sale_20;
	// System.String ConsoleApplication.LocalProcessing/DeviceProperties::quality_guarantee
	String_t* ___quality_guarantee_21;
	// System.String ConsoleApplication.LocalProcessing/DeviceProperties::devive_no
	String_t* ___devive_no_22;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(DeviceProperties_t2192475981, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(DeviceProperties_t2192475981, ___type_1)); }
	inline String_t* get_type_1() const { return ___type_1; }
	inline String_t** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(String_t* value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier(&___type_1, value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(DeviceProperties_t2192475981, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier(&___name_2, value);
	}

	inline static int32_t get_offset_of_area_3() { return static_cast<int32_t>(offsetof(DeviceProperties_t2192475981, ___area_3)); }
	inline String_t* get_area_3() const { return ___area_3; }
	inline String_t** get_address_of_area_3() { return &___area_3; }
	inline void set_area_3(String_t* value)
	{
		___area_3 = value;
		Il2CppCodeGenWriteBarrier(&___area_3, value);
	}

	inline static int32_t get_offset_of_floor_4() { return static_cast<int32_t>(offsetof(DeviceProperties_t2192475981, ___floor_4)); }
	inline String_t* get_floor_4() const { return ___floor_4; }
	inline String_t** get_address_of_floor_4() { return &___floor_4; }
	inline void set_floor_4(String_t* value)
	{
		___floor_4 = value;
		Il2CppCodeGenWriteBarrier(&___floor_4, value);
	}

	inline static int32_t get_offset_of_room_5() { return static_cast<int32_t>(offsetof(DeviceProperties_t2192475981, ___room_5)); }
	inline String_t* get_room_5() const { return ___room_5; }
	inline String_t** get_address_of_room_5() { return &___room_5; }
	inline void set_room_5(String_t* value)
	{
		___room_5 = value;
		Il2CppCodeGenWriteBarrier(&___room_5, value);
	}

	inline static int32_t get_offset_of_time_6() { return static_cast<int32_t>(offsetof(DeviceProperties_t2192475981, ___time_6)); }
	inline String_t* get_time_6() const { return ___time_6; }
	inline String_t** get_address_of_time_6() { return &___time_6; }
	inline void set_time_6(String_t* value)
	{
		___time_6 = value;
		Il2CppCodeGenWriteBarrier(&___time_6, value);
	}

	inline static int32_t get_offset_of_isOffline_7() { return static_cast<int32_t>(offsetof(DeviceProperties_t2192475981, ___isOffline_7)); }
	inline bool get_isOffline_7() const { return ___isOffline_7; }
	inline bool* get_address_of_isOffline_7() { return &___isOffline_7; }
	inline void set_isOffline_7(bool value)
	{
		___isOffline_7 = value;
	}

	inline static int32_t get_offset_of_device_status_8() { return static_cast<int32_t>(offsetof(DeviceProperties_t2192475981, ___device_status_8)); }
	inline int32_t get_device_status_8() const { return ___device_status_8; }
	inline int32_t* get_address_of_device_status_8() { return &___device_status_8; }
	inline void set_device_status_8(int32_t value)
	{
		___device_status_8 = value;
	}

	inline static int32_t get_offset_of_is_distributed_9() { return static_cast<int32_t>(offsetof(DeviceProperties_t2192475981, ___is_distributed_9)); }
	inline int32_t get_is_distributed_9() const { return ___is_distributed_9; }
	inline int32_t* get_address_of_is_distributed_9() { return &___is_distributed_9; }
	inline void set_is_distributed_9(int32_t value)
	{
		___is_distributed_9 = value;
	}

	inline static int32_t get_offset_of_state_10() { return static_cast<int32_t>(offsetof(DeviceProperties_t2192475981, ___state_10)); }
	inline int32_t get_state_10() const { return ___state_10; }
	inline int32_t* get_address_of_state_10() { return &___state_10; }
	inline void set_state_10(int32_t value)
	{
		___state_10 = value;
	}

	inline static int32_t get_offset_of_active_11() { return static_cast<int32_t>(offsetof(DeviceProperties_t2192475981, ___active_11)); }
	inline int32_t get_active_11() const { return ___active_11; }
	inline int32_t* get_address_of_active_11() { return &___active_11; }
	inline void set_active_11(int32_t value)
	{
		___active_11 = value;
	}

	inline static int32_t get_offset_of_project_12() { return static_cast<int32_t>(offsetof(DeviceProperties_t2192475981, ___project_12)); }
	inline String_t* get_project_12() const { return ___project_12; }
	inline String_t** get_address_of_project_12() { return &___project_12; }
	inline void set_project_12(String_t* value)
	{
		___project_12 = value;
		Il2CppCodeGenWriteBarrier(&___project_12, value);
	}

	inline static int32_t get_offset_of_building_13() { return static_cast<int32_t>(offsetof(DeviceProperties_t2192475981, ___building_13)); }
	inline String_t* get_building_13() const { return ___building_13; }
	inline String_t** get_address_of_building_13() { return &___building_13; }
	inline void set_building_13(String_t* value)
	{
		___building_13 = value;
		Il2CppCodeGenWriteBarrier(&___building_13, value);
	}

	inline static int32_t get_offset_of_block_14() { return static_cast<int32_t>(offsetof(DeviceProperties_t2192475981, ___block_14)); }
	inline String_t* get_block_14() const { return ___block_14; }
	inline String_t** get_address_of_block_14() { return &___block_14; }
	inline void set_block_14(String_t* value)
	{
		___block_14 = value;
		Il2CppCodeGenWriteBarrier(&___block_14, value);
	}

	inline static int32_t get_offset_of_DDI_15() { return static_cast<int32_t>(offsetof(DeviceProperties_t2192475981, ___DDI_15)); }
	inline List_1_t1633575372 * get_DDI_15() const { return ___DDI_15; }
	inline List_1_t1633575372 ** get_address_of_DDI_15() { return &___DDI_15; }
	inline void set_DDI_15(List_1_t1633575372 * value)
	{
		___DDI_15 = value;
		Il2CppCodeGenWriteBarrier(&___DDI_15, value);
	}

	inline static int32_t get_offset_of_U3Cparam_statusU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(DeviceProperties_t2192475981, ___U3Cparam_statusU3Ek__BackingField_16)); }
	inline int32_t get_U3Cparam_statusU3Ek__BackingField_16() const { return ___U3Cparam_statusU3Ek__BackingField_16; }
	inline int32_t* get_address_of_U3Cparam_statusU3Ek__BackingField_16() { return &___U3Cparam_statusU3Ek__BackingField_16; }
	inline void set_U3Cparam_statusU3Ek__BackingField_16(int32_t value)
	{
		___U3Cparam_statusU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_vender_17() { return static_cast<int32_t>(offsetof(DeviceProperties_t2192475981, ___vender_17)); }
	inline String_t* get_vender_17() const { return ___vender_17; }
	inline String_t** get_address_of_vender_17() { return &___vender_17; }
	inline void set_vender_17(String_t* value)
	{
		___vender_17 = value;
		Il2CppCodeGenWriteBarrier(&___vender_17, value);
	}

	inline static int32_t get_offset_of_spec_18() { return static_cast<int32_t>(offsetof(DeviceProperties_t2192475981, ___spec_18)); }
	inline String_t* get_spec_18() const { return ___spec_18; }
	inline String_t** get_address_of_spec_18() { return &___spec_18; }
	inline void set_spec_18(String_t* value)
	{
		___spec_18 = value;
		Il2CppCodeGenWriteBarrier(&___spec_18, value);
	}

	inline static int32_t get_offset_of_device_usage_19() { return static_cast<int32_t>(offsetof(DeviceProperties_t2192475981, ___device_usage_19)); }
	inline String_t* get_device_usage_19() const { return ___device_usage_19; }
	inline String_t** get_address_of_device_usage_19() { return &___device_usage_19; }
	inline void set_device_usage_19(String_t* value)
	{
		___device_usage_19 = value;
		Il2CppCodeGenWriteBarrier(&___device_usage_19, value);
	}

	inline static int32_t get_offset_of_after_sale_20() { return static_cast<int32_t>(offsetof(DeviceProperties_t2192475981, ___after_sale_20)); }
	inline String_t* get_after_sale_20() const { return ___after_sale_20; }
	inline String_t** get_address_of_after_sale_20() { return &___after_sale_20; }
	inline void set_after_sale_20(String_t* value)
	{
		___after_sale_20 = value;
		Il2CppCodeGenWriteBarrier(&___after_sale_20, value);
	}

	inline static int32_t get_offset_of_quality_guarantee_21() { return static_cast<int32_t>(offsetof(DeviceProperties_t2192475981, ___quality_guarantee_21)); }
	inline String_t* get_quality_guarantee_21() const { return ___quality_guarantee_21; }
	inline String_t** get_address_of_quality_guarantee_21() { return &___quality_guarantee_21; }
	inline void set_quality_guarantee_21(String_t* value)
	{
		___quality_guarantee_21 = value;
		Il2CppCodeGenWriteBarrier(&___quality_guarantee_21, value);
	}

	inline static int32_t get_offset_of_devive_no_22() { return static_cast<int32_t>(offsetof(DeviceProperties_t2192475981, ___devive_no_22)); }
	inline String_t* get_devive_no_22() const { return ___devive_no_22; }
	inline String_t** get_address_of_devive_no_22() { return &___devive_no_22; }
	inline void set_devive_no_22(String_t* value)
	{
		___devive_no_22 = value;
		Il2CppCodeGenWriteBarrier(&___devive_no_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of ConsoleApplication.LocalProcessing/DeviceProperties
struct DeviceProperties_t2192475981_marshaled_pinvoke
{
	int32_t ___id_0;
	char* ___type_1;
	char* ___name_2;
	char* ___area_3;
	char* ___floor_4;
	char* ___room_5;
	char* ___time_6;
	int32_t ___isOffline_7;
	int32_t ___device_status_8;
	int32_t ___is_distributed_9;
	int32_t ___state_10;
	int32_t ___active_11;
	char* ___project_12;
	char* ___building_13;
	char* ___block_14;
	List_1_t1633575372 * ___DDI_15;
	int32_t ___U3Cparam_statusU3Ek__BackingField_16;
	char* ___vender_17;
	char* ___spec_18;
	char* ___device_usage_19;
	char* ___after_sale_20;
	char* ___quality_guarantee_21;
	char* ___devive_no_22;
};
// Native definition for COM marshalling of ConsoleApplication.LocalProcessing/DeviceProperties
struct DeviceProperties_t2192475981_marshaled_com
{
	int32_t ___id_0;
	Il2CppChar* ___type_1;
	Il2CppChar* ___name_2;
	Il2CppChar* ___area_3;
	Il2CppChar* ___floor_4;
	Il2CppChar* ___room_5;
	Il2CppChar* ___time_6;
	int32_t ___isOffline_7;
	int32_t ___device_status_8;
	int32_t ___is_distributed_9;
	int32_t ___state_10;
	int32_t ___active_11;
	Il2CppChar* ___project_12;
	Il2CppChar* ___building_13;
	Il2CppChar* ___block_14;
	List_1_t1633575372 * ___DDI_15;
	int32_t ___U3Cparam_statusU3Ek__BackingField_16;
	Il2CppChar* ___vender_17;
	Il2CppChar* ___spec_18;
	Il2CppChar* ___device_usage_19;
	Il2CppChar* ___after_sale_20;
	Il2CppChar* ___quality_guarantee_21;
	Il2CppChar* ___devive_no_22;
};
