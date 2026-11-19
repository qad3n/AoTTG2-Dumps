// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicTitanTypeEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicTitanTypeEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000590")]
[CompilerGenerated]
internal class CustomLogicTitanTypeEnum : BuiltinClassInstance
{
	[Token(Token = "0x2000591")]
	public static class Factory
	{
		[Token(Token = "0x60032E5")]
		[Address(RVA = "0x59BFF60", Offset = "0x59BEF60", VA = "0x59BFF60")]
		public static CustomLogicTitanTypeEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanTypeEnum.c (CustomLogic.CustomLogicTitanTypeEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicTitanTypeEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicTitanTypeEnum();
			return (CustomLogicTitanTypeEnum)__this;
		}
	}

	[Token(Token = "0x2000592")]
	public static class Bindings
	{
		[Token(Token = "0x4001893")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60032E6")]
		[Address(RVA = "0x59C0080", Offset = "0x59BF080", VA = "0x59C0080")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanTypeEnum.c (CustomLogic.CustomLogicTitanTypeEnum.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLPropertyBinding<CustomLogicTitanTypeEnum> pCVar3;
			String pSVar4;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x4b058385) {
				if (uVar2 < 0x2f9f45fa) {
					if (uVar2 == 0x19dc307e) {
						bVar1 = (name == "Default");
						if (bVar1) {
							if ((typeof(CustomLogicTitanTypeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicTitanTypeEnum.Bindings.__CreatePropertyBinding__Default();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicTitanTypeEnum.Bindings.__CreatePropertyBinding__Default();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x2f9f45f9) {
						bVar1 = (name == "Abnormal");
						if (bVar1) {
							if ((typeof(CustomLogicTitanTypeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicTitanTypeEnum.Bindings.__CreatePropertyBinding__Abnormal();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicTitanTypeEnum.Bindings.__CreatePropertyBinding__Abnormal();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x4115d182) {
					bVar1 = (name == "Random");
					if (bVar1) {
						if ((typeof(CustomLogicTitanTypeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicTitanTypeEnum.Bindings.__CreatePropertyBinding__Random();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicTitanTypeEnum.Bindings.__CreatePropertyBinding__Random();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x4b058384) {
					bVar1 = (name == "Thrower");
					if (bVar1) {
						if ((typeof(CustomLogicTitanTypeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicTitanTypeEnum.Bindings.__CreatePropertyBinding__Thrower();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicTitanTypeEnum.Bindings.__CreatePropertyBinding__Thrower();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0x8f418f18) {
				if (uVar2 == 0x8f418f17) {
					bVar1 = (name == "Crawler");
					if (bVar1) {
						if ((typeof(CustomLogicTitanTypeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicTitanTypeEnum.Bindings.__CreatePropertyBinding__Crawler();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicTitanTypeEnum.Bindings.__CreatePropertyBinding__Crawler();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x58de2772) {
					bVar1 = (name == "Normal");
					if (bVar1) {
						if ((typeof(CustomLogicTitanTypeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicTitanTypeEnum.Bindings.__CreatePropertyBinding__Normal();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicTitanTypeEnum.Bindings.__CreatePropertyBinding__Normal();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xe5828b91) {
				bVar1 = (name == "Punk");
				if (bVar1) {
					if ((typeof(CustomLogicTitanTypeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar3 = CustomLogicTitanTypeEnum.Bindings.__CreatePropertyBinding__Punk();
						return (ICLMemberBinding)pCVar3;
					}
					pCVar3 = CustomLogicTitanTypeEnum.Bindings.__CreatePropertyBinding__Punk();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xf331d01e) {
				bVar1 = (name == "Jumper");
				if (bVar1) {
					if ((typeof(CustomLogicTitanTypeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar3 = CustomLogicTitanTypeEnum.Bindings.__CreatePropertyBinding__Jumper();
						return (ICLMemberBinding)pCVar3;
					}
					pCVar3 = CustomLogicTitanTypeEnum.Bindings.__CreatePropertyBinding__Jumper();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicTitanTypeEnum not found");
			pSVar4 = String.Concat(pSVar4, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar4);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x60032E7")]
		[Address(RVA = "0x59C0470", Offset = "0x59BF470", VA = "0x59C0470")]
		public static CLPropertyBinding<CustomLogicTitanTypeEnum> __CreatePropertyBinding__Normal()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanTypeEnum.c (CustomLogic.CustomLogicTitanTypeEnum.Bindings$$__CreatePropertyBinding__Normal): 2 lines keep C-only constructs
			Func<CustomLogicTitanTypeEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanTypeEnum> __this_00;

			__this = new Func<CustomLogicTitanTypeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Normal_g____getter_2_0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanTypeEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60032E8")]
		[Address(RVA = "0x59C0510", Offset = "0x59BF510", VA = "0x59C0510")]
		public static CLPropertyBinding<CustomLogicTitanTypeEnum> __CreatePropertyBinding__Abnormal()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanTypeEnum.c (CustomLogic.CustomLogicTitanTypeEnum.Bindings$$__CreatePropertyBinding__Abnormal): 2 lines keep C-only constructs
			Func<CustomLogicTitanTypeEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanTypeEnum> __this_00;

			__this = new Func<CustomLogicTitanTypeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Abnormal_g____getter_3_0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanTypeEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60032E9")]
		[Address(RVA = "0x59C05B0", Offset = "0x59BF5B0", VA = "0x59C05B0")]
		public static CLPropertyBinding<CustomLogicTitanTypeEnum> __CreatePropertyBinding__Jumper()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanTypeEnum.c (CustomLogic.CustomLogicTitanTypeEnum.Bindings$$__CreatePropertyBinding__Jumper): 2 lines keep C-only constructs
			Func<CustomLogicTitanTypeEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanTypeEnum> __this_00;

			__this = new Func<CustomLogicTitanTypeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Jumper_g____getter_4_0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanTypeEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60032EA")]
		[Address(RVA = "0x59C0650", Offset = "0x59BF650", VA = "0x59C0650")]
		public static CLPropertyBinding<CustomLogicTitanTypeEnum> __CreatePropertyBinding__Crawler()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanTypeEnum.c (CustomLogic.CustomLogicTitanTypeEnum.Bindings$$__CreatePropertyBinding__Crawler): 2 lines keep C-only constructs
			Func<CustomLogicTitanTypeEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanTypeEnum> __this_00;

			__this = new Func<CustomLogicTitanTypeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Crawler_g____getter_5_0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanTypeEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60032EB")]
		[Address(RVA = "0x59C06F0", Offset = "0x59BF6F0", VA = "0x59C06F0")]
		public static CLPropertyBinding<CustomLogicTitanTypeEnum> __CreatePropertyBinding__Thrower()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanTypeEnum.c (CustomLogic.CustomLogicTitanTypeEnum.Bindings$$__CreatePropertyBinding__Thrower): 2 lines keep C-only constructs
			Func<CustomLogicTitanTypeEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanTypeEnum> __this_00;

			__this = new Func<CustomLogicTitanTypeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Thrower_g____getter_6_0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanTypeEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60032EC")]
		[Address(RVA = "0x59C0790", Offset = "0x59BF790", VA = "0x59C0790")]
		public static CLPropertyBinding<CustomLogicTitanTypeEnum> __CreatePropertyBinding__Punk()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanTypeEnum.c (CustomLogic.CustomLogicTitanTypeEnum.Bindings$$__CreatePropertyBinding__Punk): 2 lines keep C-only constructs
			Func<CustomLogicTitanTypeEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanTypeEnum> __this_00;

			__this = new Func<CustomLogicTitanTypeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Punk_g____getter_7_0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanTypeEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60032ED")]
		[Address(RVA = "0x59C0830", Offset = "0x59BF830", VA = "0x59C0830")]
		public static CLPropertyBinding<CustomLogicTitanTypeEnum> __CreatePropertyBinding__Default()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanTypeEnum.c (CustomLogic.CustomLogicTitanTypeEnum.Bindings$$__CreatePropertyBinding__Default): 2 lines keep C-only constructs
			Func<CustomLogicTitanTypeEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanTypeEnum> __this_00;

			__this = new Func<CustomLogicTitanTypeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Default_g____getter_8_0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanTypeEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60032EE")]
		[Address(RVA = "0x59C08D0", Offset = "0x59BF8D0", VA = "0x59C08D0")]
		public static CLPropertyBinding<CustomLogicTitanTypeEnum> __CreatePropertyBinding__Random()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanTypeEnum.c (CustomLogic.CustomLogicTitanTypeEnum.Bindings$$__CreatePropertyBinding__Random): 2 lines keep C-only constructs
			Func<CustomLogicTitanTypeEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanTypeEnum> __this_00;

			__this = new Func<CustomLogicTitanTypeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanTypeEnum_Bindings___CreatePropertyBinding__Random_g____getter_9_0);
			__this_00 = new CLPropertyBinding<CustomLogicTitanTypeEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x1700092A")]
	public static string Normal
	{
		[Token(Token = "0x60032D9")]
		[Address(RVA = "0x59BFD80", Offset = "0x59BED80", VA = "0x59BFD80")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanTypeEnum.c (CustomLogic.CustomLogicTitanTypeEnum$$get_Normal): clean
			return "Normal";
		}
	}

	[Token(Token = "0x1700092B")]
	public static string Abnormal
	{
		[Token(Token = "0x60032DA")]
		[Address(RVA = "0x59BFDB0", Offset = "0x59BEDB0", VA = "0x59BFDB0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanTypeEnum.c (CustomLogic.CustomLogicTitanTypeEnum$$get_Abnormal): clean
			return "Abnormal";
		}
	}

	[Token(Token = "0x1700092C")]
	public static string Jumper
	{
		[Token(Token = "0x60032DB")]
		[Address(RVA = "0x59BFDE0", Offset = "0x59BEDE0", VA = "0x59BFDE0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanTypeEnum.c (CustomLogic.CustomLogicTitanTypeEnum$$get_Jumper): clean
			return "Jumper";
		}
	}

	[Token(Token = "0x1700092D")]
	public static string Crawler
	{
		[Token(Token = "0x60032DC")]
		[Address(RVA = "0x59BFE10", Offset = "0x59BEE10", VA = "0x59BFE10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanTypeEnum.c (CustomLogic.CustomLogicTitanTypeEnum$$get_Crawler): clean
			return "Crawler";
		}
	}

	[Token(Token = "0x1700092E")]
	public static string Thrower
	{
		[Token(Token = "0x60032DD")]
		[Address(RVA = "0x59BFE40", Offset = "0x59BEE40", VA = "0x59BFE40")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanTypeEnum.c (CustomLogic.CustomLogicTitanTypeEnum$$get_Thrower): clean
			return "Thrower";
		}
	}

	[Token(Token = "0x1700092F")]
	public static string Punk
	{
		[Token(Token = "0x60032DE")]
		[Address(RVA = "0x59BFE70", Offset = "0x59BEE70", VA = "0x59BFE70")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanTypeEnum.c (CustomLogic.CustomLogicTitanTypeEnum$$get_Punk): clean
			return "Punk";
		}
	}

	[Token(Token = "0x17000930")]
	public static string Default
	{
		[Token(Token = "0x60032DF")]
		[Address(RVA = "0x59BFEA0", Offset = "0x59BEEA0", VA = "0x59BFEA0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanTypeEnum.c (CustomLogic.CustomLogicTitanTypeEnum$$get_Default): clean
			return "Default";
		}
	}

	[Token(Token = "0x17000931")]
	public static string Random
	{
		[Token(Token = "0x60032E0")]
		[Address(RVA = "0x59BFED0", Offset = "0x59BEED0", VA = "0x59BFED0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanTypeEnum.c (CustomLogic.CustomLogicTitanTypeEnum$$get_Random): clean
			return "Random";
		}
	}

	[Token(Token = "0x17000932")]
	public override string ClassName
	{
		[Token(Token = "0x60032E1")]
		[Address(RVA = "0x59BFF00", Offset = "0x59BEF00", VA = "0x59BFF00", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanTypeEnum.c (CustomLogic.CustomLogicTitanTypeEnum$$get_ClassName): clean
			return "TitanTypeEnum";
		}
	}

	[Token(Token = "0x17000933")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60032E2")]
		[Address(RVA = "0x59BFF30", Offset = "0x59BEF30", VA = "0x59BFF30", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanTypeEnum.c (CustomLogic.CustomLogicTitanTypeEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000934")]
	public override bool IsStatic
	{
		[Token(Token = "0x60032E3")]
		[Address(RVA = "0x59BFF40", Offset = "0x59BEF40", VA = "0x59BFF40", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanTypeEnum.c (CustomLogic.CustomLogicTitanTypeEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x17000935")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60032E4")]
		[Address(RVA = "0x59BFF50", Offset = "0x59BEF50", VA = "0x59BFF50", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanTypeEnum.c (CustomLogic.CustomLogicTitanTypeEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x60032D8")]
	[Address(RVA = "0x59BFD10", Offset = "0x59BED10", VA = "0x59BFD10")]
	public CustomLogicTitanTypeEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicTitanTypeEnum.c (CustomLogic.CustomLogicTitanTypeEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07546bfa == false) {
			Il2CppMethodInitialized_07546bfa = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicTitanTypeEnum.c.

	// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Normal");
		__this.Add((Il2CppObject *)"Abnormal");
		__this.Add((Il2CppObject *)"Jumper");
		__this.Add((Il2CppObject *)"Crawler");
		__this.Add((Il2CppObject *)"Thrower");
		__this.Add((Il2CppObject *)"Punk");
		__this.Add((Il2CppObject *)"Default");
		__this.Add((Il2CppObject *)"Random");
		CustomLogicTitanTypeEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$<__CreatePropertyBinding__Normal>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__Normal_g____getter_2_0(CustomLogicTitanTypeEnum __i)
	{
		return (Il2CppObject *)"Normal";
	}

	// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$<__CreatePropertyBinding__Abnormal>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Abnormal_g____getter_3_0(CustomLogicTitanTypeEnum __i)
	{
		return (Il2CppObject *)"Abnormal";
	}

	// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$<__CreatePropertyBinding__Jumper>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Jumper_g____getter_4_0(CustomLogicTitanTypeEnum __i)
	{
		return (Il2CppObject *)"Jumper";
	}

	// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$<__CreatePropertyBinding__Crawler>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__Crawler_g____getter_5_0(CustomLogicTitanTypeEnum __i)
	{
		return (Il2CppObject *)"Crawler";
	}

	// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$<__CreatePropertyBinding__Thrower>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__Thrower_g____getter_6_0(CustomLogicTitanTypeEnum __i)
	{
		return (Il2CppObject *)"Thrower";
	}

	// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$<__CreatePropertyBinding__Punk>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__Punk_g____getter_7_0(CustomLogicTitanTypeEnum __i)
	{
		return (Il2CppObject *)"Punk";
	}

	// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$<__CreatePropertyBinding__Default>g____getter|8_0: clean
	private static object Bindings____CreatePropertyBinding__Default_g____getter_8_0(CustomLogicTitanTypeEnum __i)
	{
		return (Il2CppObject *)"Default";
	}

	// CustomLogic.CustomLogicTitanTypeEnum.Bindings$$<__CreatePropertyBinding__Random>g____getter|9_0: clean
	private static object Bindings____CreatePropertyBinding__Random_g____getter_9_0(CustomLogicTitanTypeEnum __i)
	{
		return (Il2CppObject *)"Random";
	}
}
