// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicWrapEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicWrapEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200059F")]
[CompilerGenerated]
internal class CustomLogicWrapEnum : BuiltinClassInstance
{
	[Token(Token = "0x20005A0")]
	public static class Factory
	{
		[Token(Token = "0x600336B")]
		[Address(RVA = "0x59C4360", Offset = "0x59C3360", VA = "0x59C4360")]
		public static CustomLogicWrapEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWrapEnum.c (CustomLogic.CustomLogicWrapEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicWrapEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicWrapEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicWrapEnum();
			return (CustomLogicWrapEnum)__this;
		}
	}

	[Token(Token = "0x20005A1")]
	public static class Bindings
	{
		[Token(Token = "0x4001898")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x600336C")]
		[Address(RVA = "0x59C4480", Offset = "0x59C3480", VA = "0x59C4480")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWrapEnum.c (CustomLogic.CustomLogicWrapEnum.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicWrapEnum> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "NoWrap");
			if (bVar1) {
				if ((typeof(CustomLogicWrapEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicWrapEnum.Bindings.__CreatePropertyBinding__NoWrap() ;
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicWrapEnum.Bindings.__CreatePropertyBinding__NoWrap();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Wrap");
			if (bVar1) {
				if ((typeof(CustomLogicWrapEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicWrapEnum.Bindings.__CreatePropertyBinding__Wrap();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicWrapEnum.Bindings.__CreatePropertyBinding__Wrap();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "WrapReverse");
			if (!bVar1) {
				pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
				str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicWrapEnum not found");
				pSVar3 = String.Concat(pSVar3, name, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this = (Exception)il2cpp_codegen_object_new(klass);
				__this = new Exception(pSVar3);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicWrapEnum_Bindings_CreateMemberBinding);
				throw (object)__this;
			}
			if ((typeof(CustomLogicWrapEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
				pCVar2 = CustomLogicWrapEnum.Bindings.__CreatePropertyBinding__WrapReverse();
				return (ICLMemberBinding)pCVar2;
			}
			pCVar2 = CustomLogicWrapEnum.Bindings.__CreatePropertyBinding__WrapReverse();
			return (ICLMemberBinding)pCVar2;
		}

		[Token(Token = "0x600336D")]
		[Address(RVA = "0x59C4610", Offset = "0x59C3610", VA = "0x59C4610")]
		public static CLPropertyBinding<CustomLogicWrapEnum> __CreatePropertyBinding__NoWrap()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWrapEnum.c (CustomLogic.CustomLogicWrapEnum.Bindings$$__CreatePropertyBinding__NoWrap): 2 lines keep C-only constructs
			Func<CustomLogicWrapEnum, object> __this;
			CLPropertyBinding<CustomLogicWrapEnum> __this_00;

			__this = new Func<CustomLogicWrapEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWrapEnum_Bindings___CreatePropertyBinding__NoWrap_g____getter_2_0);
			__this_00 = new CLPropertyBinding<CustomLogicWrapEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600336E")]
		[Address(RVA = "0x59C46B0", Offset = "0x59C36B0", VA = "0x59C46B0")]
		public static CLPropertyBinding<CustomLogicWrapEnum> __CreatePropertyBinding__Wrap()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWrapEnum.c (CustomLogic.CustomLogicWrapEnum.Bindings$$__CreatePropertyBinding__Wrap): 2 lines keep C-only constructs
			Func<CustomLogicWrapEnum, object> __this;
			CLPropertyBinding<CustomLogicWrapEnum> __this_00;

			__this = new Func<CustomLogicWrapEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWrapEnum_Bindings___CreatePropertyBinding__Wrap_g____getter_3_0);
			__this_00 = new CLPropertyBinding<CustomLogicWrapEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600336F")]
		[Address(RVA = "0x59C4750", Offset = "0x59C3750", VA = "0x59C4750")]
		public static CLPropertyBinding<CustomLogicWrapEnum> __CreatePropertyBinding__WrapReverse()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWrapEnum.c (CustomLogic.CustomLogicWrapEnum.Bindings$$__CreatePropertyBinding__WrapReverse): 2 lines keep C-only constructs
			Func<CustomLogicWrapEnum, object> __this;
			CLPropertyBinding<CustomLogicWrapEnum> __this_00;

			__this = new Func<CustomLogicWrapEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWrapEnum_Bindings___CreatePropertyBinding__WrapReverse_g____getter_4_0);
			__this_00 = new CLPropertyBinding<CustomLogicWrapEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x1700095F")]
	public static int NoWrap
	{
		[Token(Token = "0x6003364")]
		[Address(RVA = "0x59C42D0", Offset = "0x59C32D0", VA = "0x59C42D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWrapEnum.c (CustomLogic.CustomLogicWrapEnum$$get_NoWrap): clean
			return 0;
		}
	}

	[Token(Token = "0x17000960")]
	public static int Wrap
	{
		[Token(Token = "0x6003365")]
		[Address(RVA = "0x59C42E0", Offset = "0x59C32E0", VA = "0x59C42E0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWrapEnum.c (CustomLogic.CustomLogicWrapEnum$$get_Wrap): clean
			return 1;
		}
	}

	[Token(Token = "0x17000961")]
	public static int WrapReverse
	{
		[Token(Token = "0x6003366")]
		[Address(RVA = "0x59C42F0", Offset = "0x59C32F0", VA = "0x59C42F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWrapEnum.c (CustomLogic.CustomLogicWrapEnum$$get_WrapReverse): clean
			return 2;
		}
	}

	[Token(Token = "0x17000962")]
	public override string ClassName
	{
		[Token(Token = "0x6003367")]
		[Address(RVA = "0x59C4300", Offset = "0x59C3300", VA = "0x59C4300", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWrapEnum.c (CustomLogic.CustomLogicWrapEnum$$get_ClassName): clean
			return "WrapEnum";
		}
	}

	[Token(Token = "0x17000963")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6003368")]
		[Address(RVA = "0x59C4330", Offset = "0x59C3330", VA = "0x59C4330", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWrapEnum.c (CustomLogic.CustomLogicWrapEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000964")]
	public override bool IsStatic
	{
		[Token(Token = "0x6003369")]
		[Address(RVA = "0x59C4340", Offset = "0x59C3340", VA = "0x59C4340", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWrapEnum.c (CustomLogic.CustomLogicWrapEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x17000965")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x600336A")]
		[Address(RVA = "0x59C4350", Offset = "0x59C3350", VA = "0x59C4350", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWrapEnum.c (CustomLogic.CustomLogicWrapEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6003363")]
	[Address(RVA = "0x59C4260", Offset = "0x59C3260", VA = "0x59C4260")]
	public CustomLogicWrapEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicWrapEnum.c (CustomLogic.CustomLogicWrapEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07546c55 == false) {
			Il2CppMethodInitialized_07546c55 = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicWrapEnum.c.

	// CustomLogic.CustomLogicWrapEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"NoWrap");
		__this.Add((Il2CppObject *)"Wrap");
		__this.Add((Il2CppObject *)"WrapReverse");
		CustomLogicWrapEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicWrapEnum.Bindings$$<__CreatePropertyBinding__NoWrap>g____getter|2_0: 3 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__NoWrap_g____getter_2_0(CustomLogicWrapEnum __i)
	{
		uint in_EAX;
		object pIVar1;
		ulong uStack_8;

		uStack_8 = (ulong)in_EAX;
		pIVar1 = (object)(((long)&uStack_8 + 4));
		return pIVar1;
	}

	// CustomLogic.CustomLogicWrapEnum.Bindings$$<__CreatePropertyBinding__Wrap>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Wrap_g____getter_3_0(CustomLogicWrapEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicWrapEnum.Bindings$$<__CreatePropertyBinding__WrapReverse>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__WrapReverse_g____getter_4_0(CustomLogicWrapEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}
}
