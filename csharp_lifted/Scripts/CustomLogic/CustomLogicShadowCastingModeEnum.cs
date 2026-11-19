// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicShadowCastingModeEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicShadowCastingModeEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000566")]
[CompilerGenerated]
internal class CustomLogicShadowCastingModeEnum : BuiltinClassInstance
{
	[Token(Token = "0x2000567")]
	public static class Factory
	{
		[Token(Token = "0x600300C")]
		[Address(RVA = "0x59A8620", Offset = "0x59A7620", VA = "0x59A8620")]
		public static CustomLogicShadowCastingModeEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShadowCastingModeEnum.c (CustomLogic.CustomLogicShadowCastingModeEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicShadowCastingModeEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicShadowCastingModeEnum();
			return (CustomLogicShadowCastingModeEnum)__this;
		}
	}

	[Token(Token = "0x2000568")]
	public static class Bindings
	{
		[Token(Token = "0x400187F")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x600300D")]
		[Address(RVA = "0x59A8740", Offset = "0x59A7740", VA = "0x59A8740")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShadowCastingModeEnum.c (CustomLogic.CustomLogicShadowCastingModeEnum.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicShadowCastingModeEnum> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "Off");
			if (bVar1) {
				if ((typeof(CustomLogicShadowCastingModeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicShadowCastingModeEnum.Bindings.__CreatePropertyBinding__Off();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicShadowCastingModeEnum.Bindings.__CreatePropertyBinding__Off();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "On");
			if (bVar1) {
				if ((typeof(CustomLogicShadowCastingModeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicShadowCastingModeEnum.Bindings.__CreatePropertyBinding__On();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicShadowCastingModeEnum.Bindings.__CreatePropertyBinding__On();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "TwoSided");
			if (bVar1) {
				if ((typeof(CustomLogicShadowCastingModeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicShadowCastingModeEnum.Bindings.__CreatePropertyBinding__TwoSided();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicShadowCastingModeEnum.Bindings.__CreatePropertyBinding__TwoSided();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "ShadowsOnly");
			if (!bVar1) {
				pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
				str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicShadowCastingModeEnum not found");
				pSVar3 = String.Concat(pSVar3, name, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this = (Exception)il2cpp_codegen_object_new(klass);
				__this = new Exception(pSVar3);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings_CreateMemberBinding);
				throw (object)__this;
			}
			if ((typeof(CustomLogicShadowCastingModeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
				pCVar2 = CustomLogicShadowCastingModeEnum.Bindings.__CreatePropertyBinding__ShadowsOnly();
				return (ICLMemberBinding)pCVar2;
			}
			pCVar2 = CustomLogicShadowCastingModeEnum.Bindings.__CreatePropertyBinding__ShadowsOnly();
			return (ICLMemberBinding)pCVar2;
		}

		[Token(Token = "0x600300E")]
		[Address(RVA = "0x59A8920", Offset = "0x59A7920", VA = "0x59A8920")]
		public static CLPropertyBinding<CustomLogicShadowCastingModeEnum> __CreatePropertyBinding__Off()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShadowCastingModeEnum.c (CustomLogic.CustomLogicShadowCastingModeEnum.Bindings$$__CreatePropertyBinding__Off): 3 lines keep C-only constructs
			Func<CustomLogicShadowCastingModeEnum, object> __this;
			CLPropertyBinding<CustomLogicShadowCastingModeEnum> __this_00;

			__this = new Func<CustomLogicShadowCastingModeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings___CreatePropertyBinding__Off_g____getter_2);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicShadowCastingModeEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600300F")]
		[Address(RVA = "0x59A89C0", Offset = "0x59A79C0", VA = "0x59A89C0")]
		public static CLPropertyBinding<CustomLogicShadowCastingModeEnum> __CreatePropertyBinding__On()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShadowCastingModeEnum.c (CustomLogic.CustomLogicShadowCastingModeEnum.Bindings$$__CreatePropertyBinding__On): 3 lines keep C-only constructs
			Func<CustomLogicShadowCastingModeEnum, object> __this;
			CLPropertyBinding<CustomLogicShadowCastingModeEnum> __this_00;

			__this = new Func<CustomLogicShadowCastingModeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings___CreatePropertyBinding__On_g____getter_3);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicShadowCastingModeEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003010")]
		[Address(RVA = "0x59A8A60", Offset = "0x59A7A60", VA = "0x59A8A60")]
		public static CLPropertyBinding<CustomLogicShadowCastingModeEnum> __CreatePropertyBinding__TwoSided()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShadowCastingModeEnum.c (CustomLogic.CustomLogicShadowCastingModeEnum.Bindings$$__CreatePropertyBinding__TwoSided): 3 lines keep C-only constructs
			Func<CustomLogicShadowCastingModeEnum, object> __this;
			CLPropertyBinding<CustomLogicShadowCastingModeEnum> __this_00;

			__this = new Func<CustomLogicShadowCastingModeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings___CreatePropertyBinding__TwoSided_g____get);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicShadowCastingModeEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003011")]
		[Address(RVA = "0x59A8B00", Offset = "0x59A7B00", VA = "0x59A8B00")]
		public static CLPropertyBinding<CustomLogicShadowCastingModeEnum> __CreatePropertyBinding__ShadowsOnly()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShadowCastingModeEnum.c (CustomLogic.CustomLogicShadowCastingModeEnum.Bindings$$__CreatePropertyBinding__ShadowsOnly): 3 lines keep C-only constructs
			Func<CustomLogicShadowCastingModeEnum, object> __this;
			CLPropertyBinding<CustomLogicShadowCastingModeEnum> __this_00;

			__this = new Func<CustomLogicShadowCastingModeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShadowCastingModeEnum_Bindings___CreatePropertyBinding__ShadowsOnly_g);
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CLPropertyBinding<CustomLogicShadowCastingModeEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x17000826")]
	public static int Off
	{
		[Token(Token = "0x6003004")]
		[Address(RVA = "0x59A8580", Offset = "0x59A7580", VA = "0x59A8580")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShadowCastingModeEnum.c (CustomLogic.CustomLogicShadowCastingModeEnum$$get_Off): clean
			return 0;
		}
	}

	[Token(Token = "0x17000827")]
	public static int On
	{
		[Token(Token = "0x6003005")]
		[Address(RVA = "0x59A8590", Offset = "0x59A7590", VA = "0x59A8590")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShadowCastingModeEnum.c (CustomLogic.CustomLogicShadowCastingModeEnum$$get_On): clean
			return 1;
		}
	}

	[Token(Token = "0x17000828")]
	public static int TwoSided
	{
		[Token(Token = "0x6003006")]
		[Address(RVA = "0x59A85A0", Offset = "0x59A75A0", VA = "0x59A85A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShadowCastingModeEnum.c (CustomLogic.CustomLogicShadowCastingModeEnum$$get_TwoSided): clean
			return 2;
		}
	}

	[Token(Token = "0x17000829")]
	public static int ShadowsOnly
	{
		[Token(Token = "0x6003007")]
		[Address(RVA = "0x59A85B0", Offset = "0x59A75B0", VA = "0x59A85B0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShadowCastingModeEnum.c (CustomLogic.CustomLogicShadowCastingModeEnum$$get_ShadowsOnly): clean
			return 3;
		}
	}

	[Token(Token = "0x1700082A")]
	public override string ClassName
	{
		[Token(Token = "0x6003008")]
		[Address(RVA = "0x59A85C0", Offset = "0x59A75C0", VA = "0x59A85C0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShadowCastingModeEnum.c (CustomLogic.CustomLogicShadowCastingModeEnum$$get_ClassName): clean
			return "ShadowCastingModeEnum";
		}
	}

	[Token(Token = "0x1700082B")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6003009")]
		[Address(RVA = "0x59A85F0", Offset = "0x59A75F0", VA = "0x59A85F0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShadowCastingModeEnum.c (CustomLogic.CustomLogicShadowCastingModeEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x1700082C")]
	public override bool IsStatic
	{
		[Token(Token = "0x600300A")]
		[Address(RVA = "0x59A8600", Offset = "0x59A7600", VA = "0x59A8600", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShadowCastingModeEnum.c (CustomLogic.CustomLogicShadowCastingModeEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x1700082D")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x600300B")]
		[Address(RVA = "0x59A8610", Offset = "0x59A7610", VA = "0x59A8610", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShadowCastingModeEnum.c (CustomLogic.CustomLogicShadowCastingModeEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6003003")]
	[Address(RVA = "0x59A8510", Offset = "0x59A7510", VA = "0x59A8510")]
	public CustomLogicShadowCastingModeEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicShadowCastingModeEnum.c (CustomLogic.CustomLogicShadowCastingModeEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07546a30 == false) {
			Il2CppMethodInitialized_07546a30 = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicShadowCastingModeEnum.c.

	// CustomLogic.CustomLogicShadowCastingModeEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Off");
		__this.Add((Il2CppObject *)"On");
		__this.Add((Il2CppObject *)"TwoSided");
		__this.Add((Il2CppObject *)"ShadowsOnly");
		CustomLogicShadowCastingModeEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicShadowCastingModeEnum.Bindings$$<__CreatePropertyBinding__Off>g____getter|2_0: 3 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__Off_g____getter_2_0(CustomLogicShadowCastingModeEnum __i)
	{
		uint in_EAX;
		object pIVar1;
		ulong uStack_8;

		uStack_8 = (ulong)in_EAX;
		pIVar1 = (object)(((long)&uStack_8 + 4));
		return pIVar1;
	}

	// CustomLogic.CustomLogicShadowCastingModeEnum.Bindings$$<__CreatePropertyBinding__On>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__On_g____getter_3_0(CustomLogicShadowCastingModeEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicShadowCastingModeEnum.Bindings$$<__CreatePropertyBinding__TwoSided>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__TwoSided_g____getter_4_0(CustomLogicShadowCastingModeEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicShadowCastingModeEnum.Bindings$$<__CreatePropertyBinding__ShadowsOnly>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__ShadowsOnly_g____getter_5_0(CustomLogicShadowCastingModeEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}
}
