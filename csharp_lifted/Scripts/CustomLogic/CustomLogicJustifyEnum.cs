// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicJustifyEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicJustifyEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200053F")]
[CompilerGenerated]
internal class CustomLogicJustifyEnum : BuiltinClassInstance
{
	[Token(Token = "0x2000540")]
	public static class Factory
	{
		[Token(Token = "0x6002D28")]
		[Address(RVA = "0x5991360", Offset = "0x5990360", VA = "0x5991360")]
		public static CustomLogicJustifyEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicJustifyEnum.c (CustomLogic.CustomLogicJustifyEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicJustifyEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicJustifyEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicJustifyEnum();
			return (CustomLogicJustifyEnum)__this;
		}
	}

	[Token(Token = "0x2000541")]
	public static class Bindings
	{
		[Token(Token = "0x4001868")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002D29")]
		[Address(RVA = "0x5991480", Offset = "0x5990480", VA = "0x5991480")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicJustifyEnum.c (CustomLogic.CustomLogicJustifyEnum.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicJustifyEnum> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "FlexStart");
			if (bVar1) {
				if ((typeof(CustomLogicJustifyEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicJustifyEnum.Bindings.__CreatePropertyBinding__FlexStart();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicJustifyEnum.Bindings.__CreatePropertyBinding__FlexStart();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Center");
			if (bVar1) {
				if ((typeof(CustomLogicJustifyEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicJustifyEnum.Bindings.__CreatePropertyBinding__Center();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicJustifyEnum.Bindings.__CreatePropertyBinding__Center();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "FlexEnd");
			if (bVar1) {
				if ((typeof(CustomLogicJustifyEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicJustifyEnum.Bindings.__CreatePropertyBinding__FlexEnd();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicJustifyEnum.Bindings.__CreatePropertyBinding__FlexEnd();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "SpaceBetween");
			if (bVar1) {
				pCVar2 = CustomLogicJustifyEnum.Bindings.__CreatePropertyBinding__SpaceBetween();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "SpaceAround");
			if (bVar1) {
				pCVar2 = CustomLogicJustifyEnum.Bindings.__CreatePropertyBinding__SpaceAround();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "SpaceEvenly");
			if (bVar1) {
				pCVar2 = CustomLogicJustifyEnum.Bindings.__CreatePropertyBinding__SpaceEvenly();
				return (ICLMemberBinding)pCVar2;
			}
			pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicJustifyEnum not found");
			pSVar3 = String.Concat(pSVar3, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar3);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicJustifyEnum_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6002D2A")]
		[Address(RVA = "0x59916F0", Offset = "0x59906F0", VA = "0x59916F0")]
		public static CLPropertyBinding<CustomLogicJustifyEnum> __CreatePropertyBinding__FlexStart()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicJustifyEnum.c (CustomLogic.CustomLogicJustifyEnum.Bindings$$__CreatePropertyBinding__FlexStart): 3 lines keep C-only constructs
			Func<CustomLogicJustifyEnum, object> __this;
			CLPropertyBinding<CustomLogicJustifyEnum> __this_00;

			if (Il2CppMethodInitialized_075467d4 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicJustifyEnum>)) ;
				Il2CppMethodInitialized_075467d4 = true;
			}
			__this = new Func<CustomLogicJustifyEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicJustifyEnum_Bindings___CreatePropertyBinding__FlexStart_g____getter_2_0);
			__this_00 = new CLPropertyBinding<CustomLogicJustifyEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002D2B")]
		[Address(RVA = "0x5991790", Offset = "0x5990790", VA = "0x5991790")]
		public static CLPropertyBinding<CustomLogicJustifyEnum> __CreatePropertyBinding__Center()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicJustifyEnum.c (CustomLogic.CustomLogicJustifyEnum.Bindings$$__CreatePropertyBinding__Center): 3 lines keep C-only constructs
			Func<CustomLogicJustifyEnum, object> __this;
			CLPropertyBinding<CustomLogicJustifyEnum> __this_00;

			if (Il2CppMethodInitialized_075467d5 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicJustifyEnum>)) ;
				Il2CppMethodInitialized_075467d5 = true;
			}
			__this = new Func<CustomLogicJustifyEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicJustifyEnum_Bindings___CreatePropertyBinding__Center_g____getter_3_0);
			__this_00 = new CLPropertyBinding<CustomLogicJustifyEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002D2C")]
		[Address(RVA = "0x5991830", Offset = "0x5990830", VA = "0x5991830")]
		public static CLPropertyBinding<CustomLogicJustifyEnum> __CreatePropertyBinding__FlexEnd()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicJustifyEnum.c (CustomLogic.CustomLogicJustifyEnum.Bindings$$__CreatePropertyBinding__FlexEnd): 3 lines keep C-only constructs
			Func<CustomLogicJustifyEnum, object> __this;
			CLPropertyBinding<CustomLogicJustifyEnum> __this_00;

			if (Il2CppMethodInitialized_075467d6 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicJustifyEnum>)) ;
				Il2CppMethodInitialized_075467d6 = true;
			}
			__this = new Func<CustomLogicJustifyEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicJustifyEnum_Bindings___CreatePropertyBinding__FlexEnd_g____getter_4_0);
			__this_00 = new CLPropertyBinding<CustomLogicJustifyEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002D2D")]
		[Address(RVA = "0x59918D0", Offset = "0x59908D0", VA = "0x59918D0")]
		public static CLPropertyBinding<CustomLogicJustifyEnum> __CreatePropertyBinding__SpaceBetween()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicJustifyEnum.c (CustomLogic.CustomLogicJustifyEnum.Bindings$$__CreatePropertyBinding__SpaceBetween): 3 lines keep C-only constructs
			Func<CustomLogicJustifyEnum, object> __this;
			CLPropertyBinding<CustomLogicJustifyEnum> __this_00;

			if (Il2CppMethodInitialized_075467d7 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicJustifyEnum>)) ;
				Il2CppMethodInitialized_075467d7 = true;
			}
			__this = new Func<CustomLogicJustifyEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicJustifyEnum_Bindings___CreatePropertyBinding__SpaceBetween_g____getter_5);
			__this_00 = new CLPropertyBinding<CustomLogicJustifyEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002D2E")]
		[Address(RVA = "0x5991970", Offset = "0x5990970", VA = "0x5991970")]
		public static CLPropertyBinding<CustomLogicJustifyEnum> __CreatePropertyBinding__SpaceAround()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicJustifyEnum.c (CustomLogic.CustomLogicJustifyEnum.Bindings$$__CreatePropertyBinding__SpaceAround): 3 lines keep C-only constructs
			Func<CustomLogicJustifyEnum, object> __this;
			CLPropertyBinding<CustomLogicJustifyEnum> __this_00;

			if (Il2CppMethodInitialized_075467d8 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicJustifyEnum>)) ;
				Il2CppMethodInitialized_075467d8 = true;
			}
			__this = new Func<CustomLogicJustifyEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicJustifyEnum_Bindings___CreatePropertyBinding__SpaceAround_g____getter_6_0);
			__this_00 = new CLPropertyBinding<CustomLogicJustifyEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002D2F")]
		[Address(RVA = "0x5991A10", Offset = "0x5990A10", VA = "0x5991A10")]
		public static CLPropertyBinding<CustomLogicJustifyEnum> __CreatePropertyBinding__SpaceEvenly()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicJustifyEnum.c (CustomLogic.CustomLogicJustifyEnum.Bindings$$__CreatePropertyBinding__SpaceEvenly): 3 lines keep C-only constructs
			Func<CustomLogicJustifyEnum, object> __this;
			CLPropertyBinding<CustomLogicJustifyEnum> __this_00;

			if (Il2CppMethodInitialized_075467d9 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicJustifyEnum>)) ;
				Il2CppMethodInitialized_075467d9 = true;
			}
			__this = new Func<CustomLogicJustifyEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicJustifyEnum_Bindings___CreatePropertyBinding__SpaceEvenly_g____getter_7_0);
			__this_00 = new CLPropertyBinding<CustomLogicJustifyEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x1700071E")]
	public static int FlexStart
	{
		[Token(Token = "0x6002D1E")]
		[Address(RVA = "0x59912A0", Offset = "0x59902A0", VA = "0x59912A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicJustifyEnum.c (CustomLogic.CustomLogicJustifyEnum$$get_FlexStart): clean
			return 0;
		}
	}

	[Token(Token = "0x1700071F")]
	public static int Center
	{
		[Token(Token = "0x6002D1F")]
		[Address(RVA = "0x59912B0", Offset = "0x59902B0", VA = "0x59912B0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicJustifyEnum.c (CustomLogic.CustomLogicJustifyEnum$$get_Center): clean
			return 1;
		}
	}

	[Token(Token = "0x17000720")]
	public static int FlexEnd
	{
		[Token(Token = "0x6002D20")]
		[Address(RVA = "0x59912C0", Offset = "0x59902C0", VA = "0x59912C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicJustifyEnum.c (CustomLogic.CustomLogicJustifyEnum$$get_FlexEnd): clean
			return 2;
		}
	}

	[Token(Token = "0x17000721")]
	public static int SpaceBetween
	{
		[Token(Token = "0x6002D21")]
		[Address(RVA = "0x59912D0", Offset = "0x59902D0", VA = "0x59912D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicJustifyEnum.c (CustomLogic.CustomLogicJustifyEnum$$get_SpaceBetween): clean
			return 3;
		}
	}

	[Token(Token = "0x17000722")]
	public static int SpaceAround
	{
		[Token(Token = "0x6002D22")]
		[Address(RVA = "0x59912E0", Offset = "0x59902E0", VA = "0x59912E0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicJustifyEnum.c (CustomLogic.CustomLogicJustifyEnum$$get_SpaceAround): clean
			return 4;
		}
	}

	[Token(Token = "0x17000723")]
	public static int SpaceEvenly
	{
		[Token(Token = "0x6002D23")]
		[Address(RVA = "0x59912F0", Offset = "0x59902F0", VA = "0x59912F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicJustifyEnum.c (CustomLogic.CustomLogicJustifyEnum$$get_SpaceEvenly): clean
			return 5;
		}
	}

	[Token(Token = "0x17000724")]
	public override string ClassName
	{
		[Token(Token = "0x6002D24")]
		[Address(RVA = "0x5991300", Offset = "0x5990300", VA = "0x5991300", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicJustifyEnum.c (CustomLogic.CustomLogicJustifyEnum$$get_ClassName): clean
			return "JustifyEnum";
		}
	}

	[Token(Token = "0x17000725")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002D25")]
		[Address(RVA = "0x5991330", Offset = "0x5990330", VA = "0x5991330", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicJustifyEnum.c (CustomLogic.CustomLogicJustifyEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000726")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002D26")]
		[Address(RVA = "0x5991340", Offset = "0x5990340", VA = "0x5991340", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicJustifyEnum.c (CustomLogic.CustomLogicJustifyEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x17000727")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002D27")]
		[Address(RVA = "0x5991350", Offset = "0x5990350", VA = "0x5991350", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicJustifyEnum.c (CustomLogic.CustomLogicJustifyEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6002D1D")]
	[Address(RVA = "0x5991230", Offset = "0x5990230", VA = "0x5991230")]
	public CustomLogicJustifyEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicJustifyEnum.c (CustomLogic.CustomLogicJustifyEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_075467d0 == false) {
			Il2CppMethodInitialized_075467d0 = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicJustifyEnum.c.

	// CustomLogic.CustomLogicJustifyEnum.Bindings$$.cctor: 1 lines keep C-only constructs
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"FlexStart");
		__this.Add((Il2CppObject *)"Center");
		__this.Add((Il2CppObject *)"FlexEnd");
		__this.Add((Il2CppObject *)"SpaceBetween");
		__this.Add((Il2CppObject *)"SpaceAround");
		__this.Add((Il2CppObject *)"SpaceEvenly");
		CustomLogicJustifyEnum.Bindings.MemberNames = __this;
		Il2CppCodeGenWriteBarrier(&CustomLogicJustifyEnum.Bindings.MemberNames) ;
		return;
	}

	// CustomLogic.CustomLogicJustifyEnum.Bindings$$<__CreatePropertyBinding__FlexStart>g____getter|2_0: 3 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__FlexStart_g____getter_2_0(CustomLogicJustifyEnum __i)
	{
		uint in_EAX;
		object pIVar1;
		ulong uStack_8;

		uStack_8 = (ulong)in_EAX;
		pIVar1 = (object)(((long)&uStack_8 + 4));
		return pIVar1;
	}

	// CustomLogic.CustomLogicJustifyEnum.Bindings$$<__CreatePropertyBinding__Center>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Center_g____getter_3_0(CustomLogicJustifyEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicJustifyEnum.Bindings$$<__CreatePropertyBinding__FlexEnd>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__FlexEnd_g____getter_4_0(CustomLogicJustifyEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicJustifyEnum.Bindings$$<__CreatePropertyBinding__SpaceBetween>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__SpaceBetween_g____getter_5_0(CustomLogicJustifyEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicJustifyEnum.Bindings$$<__CreatePropertyBinding__SpaceAround>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__SpaceAround_g____getter_6_0(CustomLogicJustifyEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicJustifyEnum.Bindings$$<__CreatePropertyBinding__SpaceEvenly>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__SpaceEvenly_g____getter_7_0(CustomLogicJustifyEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}
}
