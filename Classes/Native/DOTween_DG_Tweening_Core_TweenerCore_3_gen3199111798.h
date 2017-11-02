﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "DOTween_DG_Tweening_Tweener760404022.h"
#include "DOTween_DG_Tweening_Plugins_Options_NoOptions2508431845.h"

// DG.Tweening.Core.DOGetter`1<System.Int64>
struct DOGetter_1_t2691184179;
// DG.Tweening.Core.DOSetter`1<System.Int64>
struct DOSetter_1_t2567307023;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Int64,System.Int64,DG.Tweening.Plugins.Options.NoOptions>
struct ABSTweenPlugin_3_t2106574801;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Core.TweenerCore`3<System.Int64,System.Int64,DG.Tweening.Plugins.Options.NoOptions>
struct  TweenerCore_3_t3199111798  : public Tweener_t760404022
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	int64_t ___startValue_53;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	int64_t ___endValue_54;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	int64_t ___changeValue_55;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	NoOptions_t2508431845  ___plugOptions_56;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t2691184179 * ___getter_57;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t2567307023 * ___setter_58;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t2106574801 * ___tweenPlugin_59;

public:
	inline static int32_t get_offset_of_startValue_53() { return static_cast<int32_t>(offsetof(TweenerCore_3_t3199111798, ___startValue_53)); }
	inline int64_t get_startValue_53() const { return ___startValue_53; }
	inline int64_t* get_address_of_startValue_53() { return &___startValue_53; }
	inline void set_startValue_53(int64_t value)
	{
		___startValue_53 = value;
	}

	inline static int32_t get_offset_of_endValue_54() { return static_cast<int32_t>(offsetof(TweenerCore_3_t3199111798, ___endValue_54)); }
	inline int64_t get_endValue_54() const { return ___endValue_54; }
	inline int64_t* get_address_of_endValue_54() { return &___endValue_54; }
	inline void set_endValue_54(int64_t value)
	{
		___endValue_54 = value;
	}

	inline static int32_t get_offset_of_changeValue_55() { return static_cast<int32_t>(offsetof(TweenerCore_3_t3199111798, ___changeValue_55)); }
	inline int64_t get_changeValue_55() const { return ___changeValue_55; }
	inline int64_t* get_address_of_changeValue_55() { return &___changeValue_55; }
	inline void set_changeValue_55(int64_t value)
	{
		___changeValue_55 = value;
	}

	inline static int32_t get_offset_of_plugOptions_56() { return static_cast<int32_t>(offsetof(TweenerCore_3_t3199111798, ___plugOptions_56)); }
	inline NoOptions_t2508431845  get_plugOptions_56() const { return ___plugOptions_56; }
	inline NoOptions_t2508431845 * get_address_of_plugOptions_56() { return &___plugOptions_56; }
	inline void set_plugOptions_56(NoOptions_t2508431845  value)
	{
		___plugOptions_56 = value;
	}

	inline static int32_t get_offset_of_getter_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_t3199111798, ___getter_57)); }
	inline DOGetter_1_t2691184179 * get_getter_57() const { return ___getter_57; }
	inline DOGetter_1_t2691184179 ** get_address_of_getter_57() { return &___getter_57; }
	inline void set_getter_57(DOGetter_1_t2691184179 * value)
	{
		___getter_57 = value;
		Il2CppCodeGenWriteBarrier(&___getter_57, value);
	}

	inline static int32_t get_offset_of_setter_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_t3199111798, ___setter_58)); }
	inline DOSetter_1_t2567307023 * get_setter_58() const { return ___setter_58; }
	inline DOSetter_1_t2567307023 ** get_address_of_setter_58() { return &___setter_58; }
	inline void set_setter_58(DOSetter_1_t2567307023 * value)
	{
		___setter_58 = value;
		Il2CppCodeGenWriteBarrier(&___setter_58, value);
	}

	inline static int32_t get_offset_of_tweenPlugin_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_t3199111798, ___tweenPlugin_59)); }
	inline ABSTweenPlugin_3_t2106574801 * get_tweenPlugin_59() const { return ___tweenPlugin_59; }
	inline ABSTweenPlugin_3_t2106574801 ** get_address_of_tweenPlugin_59() { return &___tweenPlugin_59; }
	inline void set_tweenPlugin_59(ABSTweenPlugin_3_t2106574801 * value)
	{
		___tweenPlugin_59 = value;
		Il2CppCodeGenWriteBarrier(&___tweenPlugin_59, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
