// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicHorseAnimationEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicHorseAnimationEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200051B")]
[CompilerGenerated]
internal class CustomLogicHorseAnimationEnum : BuiltinClassInstance
{
	[Token(Token = "0x200051C")]
	public static class Factory
	{
		[Token(Token = "0x600293E")]
		[Address(RVA = "0x5966510", Offset = "0x5965510", VA = "0x5966510")]
		public static CustomLogicHorseAnimationEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHorseAnimationEnum.c (CustomLogic.CustomLogicHorseAnimationEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
			BuiltinClassInstance __this;
			String pSVar1;
			String str0;
			String str2;
			Il2CppClass klass;
			ArgumentException __this_00;
			MethodInfo lastManagedFrame;
			int local_14;

			if (args == null) {
				throw new NullReferenceException();
			}
			if (args.Length != 0) {
				pSVar1 = local_14.ToString();
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicHorseAnimationEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicHorseAnimationEnum();
			return (CustomLogicHorseAnimationEnum)__this;
		}
	}

	[Token(Token = "0x200051D")]
	public static class Bindings
	{
		[Token(Token = "0x40017D2")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x600293F")]
		[Address(RVA = "0x5966630", Offset = "0x5965630", VA = "0x5966630")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHorseAnimationEnum.c (CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLPropertyBinding<CustomLogicHorseAnimationEnum> pCVar3;
			String pSVar4;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x2bc30014) {
				if (uVar2 == 0x22ccd730) {
					bVar1 = (name == "Walk");
					if (bVar1) {
						if ((typeof(CustomLogicHorseAnimationEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicHorseAnimationEnum.Bindings.__CreatePropertyBinding__Walk();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicHorseAnimationEnum.Bindings.__CreatePropertyBinding__Walk();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x2ac2fe80) {
					bVar1 = (name == "Idle3");
					if (bVar1) {
						if ((typeof(CustomLogicHorseAnimationEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicHorseAnimationEnum.Bindings.__CreatePropertyBinding__Idle3();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicHorseAnimationEnum.Bindings.__CreatePropertyBinding__Idle3();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x2bc30013) {
					bVar1 = (name == "Idle2");
					if (bVar1) {
						if ((typeof(CustomLogicHorseAnimationEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicHorseAnimationEnum.Bindings.__CreatePropertyBinding__Idle2();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicHorseAnimationEnum.Bindings.__CreatePropertyBinding__Idle2();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0x2dc3033a) {
				if (uVar2 == 0x2cc301a6) {
					bVar1 = (name == "Idle1");
					if (bVar1) {
						if ((typeof(CustomLogicHorseAnimationEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicHorseAnimationEnum.Bindings.__CreatePropertyBinding__Idle1();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicHorseAnimationEnum.Bindings.__CreatePropertyBinding__Idle1();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x2dc30339) {
					bVar1 = (name == "Idle0");
					if (bVar1) {
						if ((typeof(CustomLogicHorseAnimationEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicHorseAnimationEnum.Bindings.__CreatePropertyBinding__Idle0();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicHorseAnimationEnum.Bindings.__CreatePropertyBinding__Idle0();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0x8d57e66a) {
				bVar1 = (name == "Run");
				if (bVar1) {
					if ((typeof(CustomLogicHorseAnimationEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar3 = CustomLogicHorseAnimationEnum.Bindings.__CreatePropertyBinding__Run();
						return (ICLMemberBinding)pCVar3;
					}
					pCVar3 = CustomLogicHorseAnimationEnum.Bindings.__CreatePropertyBinding__Run();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xbbd1f9d6) {
				bVar1 = (name == "Crazy");
				if (bVar1) {
					if ((typeof(CustomLogicHorseAnimationEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar3 = CustomLogicHorseAnimationEnum.Bindings.__CreatePropertyBinding__Crazy();
						return (ICLMemberBinding)pCVar3;
					}
					pCVar3 = CustomLogicHorseAnimationEnum.Bindings.__CreatePropertyBinding__Crazy();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicHorseAnimationEnum not found");
			pSVar4 = String.Concat(pSVar4, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar4);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6002940")]
		[Address(RVA = "0x59669B0", Offset = "0x59659B0", VA = "0x59669B0")]
		public static CLPropertyBinding<CustomLogicHorseAnimationEnum> __CreatePropertyBinding__Idle0()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHorseAnimationEnum.c (CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$__CreatePropertyBinding__Idle0): 3 lines keep C-only constructs
			Func<CustomLogicHorseAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHorseAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHorseAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Idle0_g____getter_2);
			__this_00 = new CLPropertyBinding<CustomLogicHorseAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002941")]
		[Address(RVA = "0x5966A50", Offset = "0x5965A50", VA = "0x5966A50")]
		public static CLPropertyBinding<CustomLogicHorseAnimationEnum> __CreatePropertyBinding__Idle1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHorseAnimationEnum.c (CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$__CreatePropertyBinding__Idle1): 3 lines keep C-only constructs
			Func<CustomLogicHorseAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHorseAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHorseAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Idle1_g____getter_3);
			__this_00 = new CLPropertyBinding<CustomLogicHorseAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002942")]
		[Address(RVA = "0x5966AF0", Offset = "0x5965AF0", VA = "0x5966AF0")]
		public static CLPropertyBinding<CustomLogicHorseAnimationEnum> __CreatePropertyBinding__Idle2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHorseAnimationEnum.c (CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$__CreatePropertyBinding__Idle2): 3 lines keep C-only constructs
			Func<CustomLogicHorseAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHorseAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHorseAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Idle2_g____getter_4);
			__this_00 = new CLPropertyBinding<CustomLogicHorseAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002943")]
		[Address(RVA = "0x5966B90", Offset = "0x5965B90", VA = "0x5966B90")]
		public static CLPropertyBinding<CustomLogicHorseAnimationEnum> __CreatePropertyBinding__Idle3()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHorseAnimationEnum.c (CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$__CreatePropertyBinding__Idle3): 3 lines keep C-only constructs
			Func<CustomLogicHorseAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHorseAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHorseAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Idle3_g____getter_5);
			__this_00 = new CLPropertyBinding<CustomLogicHorseAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002944")]
		[Address(RVA = "0x5966C30", Offset = "0x5965C30", VA = "0x5966C30")]
		public static CLPropertyBinding<CustomLogicHorseAnimationEnum> __CreatePropertyBinding__Crazy()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHorseAnimationEnum.c (CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$__CreatePropertyBinding__Crazy): 3 lines keep C-only constructs
			Func<CustomLogicHorseAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHorseAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHorseAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Crazy_g____getter_6);
			__this_00 = new CLPropertyBinding<CustomLogicHorseAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002945")]
		[Address(RVA = "0x5966CD0", Offset = "0x5965CD0", VA = "0x5966CD0")]
		public static CLPropertyBinding<CustomLogicHorseAnimationEnum> __CreatePropertyBinding__Run()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHorseAnimationEnum.c (CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$__CreatePropertyBinding__Run): 3 lines keep C-only constructs
			Func<CustomLogicHorseAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHorseAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHorseAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Run_g____getter_7_0);
			__this_00 = new CLPropertyBinding<CustomLogicHorseAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002946")]
		[Address(RVA = "0x5966D70", Offset = "0x5965D70", VA = "0x5966D70")]
		public static CLPropertyBinding<CustomLogicHorseAnimationEnum> __CreatePropertyBinding__Walk()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHorseAnimationEnum.c (CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$__CreatePropertyBinding__Walk): 3 lines keep C-only constructs
			Func<CustomLogicHorseAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicHorseAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicHorseAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicHorseAnimationEnum_Bindings___CreatePropertyBinding__Walk_g____getter_8_0);
			__this_00 = new CLPropertyBinding<CustomLogicHorseAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x170005C2")]
	public static string Idle0
	{
		[Token(Token = "0x6002933")]
		[Address(RVA = "0x59661A0", Offset = "0x59651A0", VA = "0x59661A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHorseAnimationEnum.c (CustomLogic.CustomLogicHorseAnimationEnum$$get_Idle0): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075463cf == false) {
				Il2CppMethodInitialized_075463cf = true;
				uVar1 = (typeof(HorseAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HorseAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HorseAnimations.Idle0;
			}
			return *(String*)(typeof(HorseAnimations)).static_fields;
		}
	}

	[Token(Token = "0x170005C3")]
	public static string Idle1
	{
		[Token(Token = "0x6002934")]
		[Address(RVA = "0x5966210", Offset = "0x5965210", VA = "0x5966210")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHorseAnimationEnum.c (CustomLogic.CustomLogicHorseAnimationEnum$$get_Idle1): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075463d0 == false) {
				Il2CppMethodInitialized_075463d0 = true;
				uVar1 = (typeof(HorseAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HorseAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HorseAnimations.Idle1;
			}
			return *(String*)((long)(typeof(HorseAnimations)).static_fields + 8);
		}
	}

	[Token(Token = "0x170005C4")]
	public static string Idle2
	{
		[Token(Token = "0x6002935")]
		[Address(RVA = "0x5966280", Offset = "0x5965280", VA = "0x5966280")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHorseAnimationEnum.c (CustomLogic.CustomLogicHorseAnimationEnum$$get_Idle2): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075463d1 == false) {
				Il2CppMethodInitialized_075463d1 = true;
				uVar1 = (typeof(HorseAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HorseAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HorseAnimations.Idle2;
			}
			return *(String*)((long)(typeof(HorseAnimations)).static_fields + 0x10);
		}
	}

	[Token(Token = "0x170005C5")]
	public static string Idle3
	{
		[Token(Token = "0x6002936")]
		[Address(RVA = "0x59662F0", Offset = "0x59652F0", VA = "0x59662F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHorseAnimationEnum.c (CustomLogic.CustomLogicHorseAnimationEnum$$get_Idle3): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075463d2 == false) {
				Il2CppMethodInitialized_075463d2 = true;
				uVar1 = (typeof(HorseAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HorseAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HorseAnimations.Idle3;
			}
			return *(String*)((long)(typeof(HorseAnimations)).static_fields + 0x18);
		}
	}

	[Token(Token = "0x170005C6")]
	public static string Crazy
	{
		[Token(Token = "0x6002937")]
		[Address(RVA = "0x5966360", Offset = "0x5965360", VA = "0x5966360")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHorseAnimationEnum.c (CustomLogic.CustomLogicHorseAnimationEnum$$get_Crazy): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075463d3 == false) {
				Il2CppMethodInitialized_075463d3 = true;
				uVar1 = (typeof(HorseAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HorseAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HorseAnimations.Crazy;
			}
			return *(String*)((long)(typeof(HorseAnimations)).static_fields + 0x20);
		}
	}

	[Token(Token = "0x170005C7")]
	public static string Run
	{
		[Token(Token = "0x6002938")]
		[Address(RVA = "0x59663D0", Offset = "0x59653D0", VA = "0x59663D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHorseAnimationEnum.c (CustomLogic.CustomLogicHorseAnimationEnum$$get_Run): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075463d4 == false) {
				Il2CppMethodInitialized_075463d4 = true;
				uVar1 = (typeof(HorseAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HorseAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HorseAnimations.Run;
			}
			return *(String*)((long)(typeof(HorseAnimations)).static_fields + 0x28);
		}
	}

	[Token(Token = "0x170005C8")]
	public static string Walk
	{
		[Token(Token = "0x6002939")]
		[Address(RVA = "0x5966440", Offset = "0x5965440", VA = "0x5966440")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHorseAnimationEnum.c (CustomLogic.CustomLogicHorseAnimationEnum$$get_Walk): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075463d5 == false) {
				Il2CppMethodInitialized_075463d5 = true;
				uVar1 = (typeof(HorseAnimations)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HorseAnimations)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HorseAnimations.Walk;
			}
			return *(String*)((long)(typeof(HorseAnimations)).static_fields + 0x30);
		}
	}

	[Token(Token = "0x170005C9")]
	public override string ClassName
	{
		[Token(Token = "0x600293A")]
		[Address(RVA = "0x59664B0", Offset = "0x59654B0", VA = "0x59664B0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHorseAnimationEnum.c (CustomLogic.CustomLogicHorseAnimationEnum$$get_ClassName): clean
			return "HorseAnimationEnum";
		}
	}

	[Token(Token = "0x170005CA")]
	public override bool IsAbstract
	{
		[Token(Token = "0x600293B")]
		[Address(RVA = "0x59664E0", Offset = "0x59654E0", VA = "0x59664E0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHorseAnimationEnum.c (CustomLogic.CustomLogicHorseAnimationEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x170005CB")]
	public override bool IsStatic
	{
		[Token(Token = "0x600293C")]
		[Address(RVA = "0x59664F0", Offset = "0x59654F0", VA = "0x59664F0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHorseAnimationEnum.c (CustomLogic.CustomLogicHorseAnimationEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x170005CC")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x600293D")]
		[Address(RVA = "0x5966500", Offset = "0x5965500", VA = "0x5966500", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicHorseAnimationEnum.c (CustomLogic.CustomLogicHorseAnimationEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6002932")]
	[Address(RVA = "0x5966130", Offset = "0x5965130", VA = "0x5966130")]
	public CustomLogicHorseAnimationEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicHorseAnimationEnum.c (CustomLogic.CustomLogicHorseAnimationEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_075463ce == false) {
			Il2CppMethodInitialized_075463ce = true;
			uVar1 = (typeof(BuiltinClassInstance)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(BuiltinClassInstance)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			base();
			return;
		}
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicHorseAnimationEnum.c.

	// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Idle0");
		__this.Add((Il2CppObject *)"Idle1");
		__this.Add((Il2CppObject *)"Idle2");
		__this.Add((Il2CppObject *)"Idle3");
		__this.Add((Il2CppObject *)"Crazy");
		__this.Add((Il2CppObject *)"Run");
		__this.Add((Il2CppObject *)"Walk");
		CustomLogicHorseAnimationEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$<__CreatePropertyBinding__Idle0>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__Idle0_g____getter_2_0(CustomLogicHorseAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465a9 == false) {
			Il2CppMethodInitialized_075465a9 = true;
			uVar1 = (typeof(HorseAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HorseAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HorseAnimations.Idle0;
		}
		return *(object*)(typeof(HorseAnimations)).static_fields;
	}

	// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$<__CreatePropertyBinding__Idle1>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Idle1_g____getter_3_0(CustomLogicHorseAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465aa == false) {
			Il2CppMethodInitialized_075465aa = true;
			uVar1 = (typeof(HorseAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HorseAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HorseAnimations.Idle1;
		}
		return *(object*)((long)(typeof(HorseAnimations)).static_fields + 8);
	}

	// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$<__CreatePropertyBinding__Idle2>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Idle2_g____getter_4_0(CustomLogicHorseAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465ab == false) {
			Il2CppMethodInitialized_075465ab = true;
			uVar1 = (typeof(HorseAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HorseAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HorseAnimations.Idle2;
		}
		return *(object*)((long)(typeof(HorseAnimations)).static_fields + 0x10);
	}

	// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$<__CreatePropertyBinding__Idle3>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__Idle3_g____getter_5_0(CustomLogicHorseAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465ac == false) {
			Il2CppMethodInitialized_075465ac = true;
			uVar1 = (typeof(HorseAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HorseAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HorseAnimations.Idle3;
		}
		return *(object*)((long)(typeof(HorseAnimations)).static_fields + 0x18);
	}

	// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$<__CreatePropertyBinding__Crazy>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__Crazy_g____getter_6_0(CustomLogicHorseAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465ad == false) {
			Il2CppMethodInitialized_075465ad = true;
			uVar1 = (typeof(HorseAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HorseAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HorseAnimations.Crazy;
		}
		return *(object*)((long)(typeof(HorseAnimations)).static_fields + 0x20);
	}

	// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$<__CreatePropertyBinding__Run>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__Run_g____getter_7_0(CustomLogicHorseAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465ae == false) {
			Il2CppMethodInitialized_075465ae = true;
			uVar1 = (typeof(HorseAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HorseAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HorseAnimations.Run;
		}
		return *(object*)((long)(typeof(HorseAnimations)).static_fields + 0x28);
	}

	// CustomLogic.CustomLogicHorseAnimationEnum.Bindings$$<__CreatePropertyBinding__Walk>g____getter|8_0: clean
	private static object Bindings____CreatePropertyBinding__Walk_g____getter_8_0(CustomLogicHorseAnimationEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_075465af == false) {
			Il2CppMethodInitialized_075465af = true;
			uVar1 = (typeof(HorseAnimations)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HorseAnimations)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HorseAnimations.Walk;
		}
		return *(object*)((long)(typeof(HorseAnimations)).static_fields + 0x30);
	}
}
