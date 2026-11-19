// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicGradientModeEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicGradientModeEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000515")]
[CompilerGenerated]
internal class CustomLogicGradientModeEnum : BuiltinClassInstance
{
	[Token(Token = "0x2000516")]
	public static class Factory
	{
		[Token(Token = "0x6002917")]
		[Address(RVA = "0x5965420", Offset = "0x5964420", VA = "0x5965420")]
		public static CustomLogicGradientModeEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGradientModeEnum.c (CustomLogic.CustomLogicGradientModeEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicGradientModeEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicGradientModeEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicGradientModeEnum();
			return (CustomLogicGradientModeEnum)__this;
		}
	}

	[Token(Token = "0x2000517")]
	public static class Bindings
	{
		[Token(Token = "0x40017D0")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002918")]
		[Address(RVA = "0x5965540", Offset = "0x5964540", VA = "0x5965540")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGradientModeEnum.c (CustomLogic.CustomLogicGradientModeEnum.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicGradientModeEnum> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "Blend");
			if (bVar1) {
				if ((typeof(CustomLogicGradientModeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicGradientModeEnum.Bindings.__CreatePropertyBinding__Blend();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicGradientModeEnum.Bindings.__CreatePropertyBinding__Blend();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Fixed");
			if (!bVar1) {
				pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
				str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicGradientModeEnum not found");
				pSVar3 = String.Concat(pSVar3, name, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this = (Exception)il2cpp_codegen_object_new(klass);
				__this = new Exception(pSVar3);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicGradientModeEnum_Bindings_CreateMemberBinding);
				throw (object)__this;
			}
			if ((typeof(CustomLogicGradientModeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
				pCVar2 = CustomLogicGradientModeEnum.Bindings.__CreatePropertyBinding__Fixed();
				return (ICLMemberBinding)pCVar2;
			}
			pCVar2 = CustomLogicGradientModeEnum.Bindings.__CreatePropertyBinding__Fixed();
			return (ICLMemberBinding)pCVar2;
		}

		[Token(Token = "0x6002919")]
		[Address(RVA = "0x5965680", Offset = "0x5964680", VA = "0x5965680")]
		public static CLPropertyBinding<CustomLogicGradientModeEnum> __CreatePropertyBinding__Blend()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGradientModeEnum.c (CustomLogic.CustomLogicGradientModeEnum.Bindings$$__CreatePropertyBinding__Blend): 2 lines keep C-only constructs
			Func<CustomLogicGradientModeEnum, object> __this;
			CLPropertyBinding<CustomLogicGradientModeEnum> __this_00;

			__this = new Func<CustomLogicGradientModeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicGradientModeEnum_Bindings___CreatePropertyBinding__Blend_g____getter_2_0);
			__this_00 = new CLPropertyBinding<CustomLogicGradientModeEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600291A")]
		[Address(RVA = "0x5965720", Offset = "0x5964720", VA = "0x5965720")]
		public static CLPropertyBinding<CustomLogicGradientModeEnum> __CreatePropertyBinding__Fixed()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGradientModeEnum.c (CustomLogic.CustomLogicGradientModeEnum.Bindings$$__CreatePropertyBinding__Fixed): 2 lines keep C-only constructs
			Func<CustomLogicGradientModeEnum, object> __this;
			CLPropertyBinding<CustomLogicGradientModeEnum> __this_00;

			__this = new Func<CustomLogicGradientModeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicGradientModeEnum_Bindings___CreatePropertyBinding__Fixed_g____getter_3_0);
			__this_00 = new CLPropertyBinding<CustomLogicGradientModeEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x170005B4")]
	public static int Blend
	{
		[Token(Token = "0x6002911")]
		[Address(RVA = "0x59653A0", Offset = "0x59643A0", VA = "0x59653A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGradientModeEnum.c (CustomLogic.CustomLogicGradientModeEnum$$get_Blend): clean
			return 0;
		}
	}

	[Token(Token = "0x170005B5")]
	public static int Fixed
	{
		[Token(Token = "0x6002912")]
		[Address(RVA = "0x59653B0", Offset = "0x59643B0", VA = "0x59653B0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGradientModeEnum.c (CustomLogic.CustomLogicGradientModeEnum$$get_Fixed): clean
			return 1;
		}
	}

	[Token(Token = "0x170005B6")]
	public override string ClassName
	{
		[Token(Token = "0x6002913")]
		[Address(RVA = "0x59653C0", Offset = "0x59643C0", VA = "0x59653C0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGradientModeEnum.c (CustomLogic.CustomLogicGradientModeEnum$$get_ClassName): clean
			return "GradientModeEnum";
		}
	}

	[Token(Token = "0x170005B7")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002914")]
		[Address(RVA = "0x59653F0", Offset = "0x59643F0", VA = "0x59653F0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGradientModeEnum.c (CustomLogic.CustomLogicGradientModeEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x170005B8")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002915")]
		[Address(RVA = "0x5965400", Offset = "0x5964400", VA = "0x5965400", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGradientModeEnum.c (CustomLogic.CustomLogicGradientModeEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x170005B9")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002916")]
		[Address(RVA = "0x5965410", Offset = "0x5964410", VA = "0x5965410", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicGradientModeEnum.c (CustomLogic.CustomLogicGradientModeEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6002910")]
	[Address(RVA = "0x5965330", Offset = "0x5964330", VA = "0x5965330")]
	public CustomLogicGradientModeEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicGradientModeEnum.c (CustomLogic.CustomLogicGradientModeEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_075463be == false) {
			Il2CppMethodInitialized_075463be = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicGradientModeEnum.c.

	// CustomLogic.CustomLogicGradientModeEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Blend");
		__this.Add((Il2CppObject *)"Fixed");
		CustomLogicGradientModeEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicGradientModeEnum.Bindings$$<__CreatePropertyBinding__Blend>g____getter|2_0: 3 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__Blend_g____getter_2_0(CustomLogicGradientModeEnum __i)
	{
		uint in_EAX;
		object pIVar1;
		ulong uStack_8;

		uStack_8 = (ulong)in_EAX;
		pIVar1 = (object)(((long)&uStack_8 + 4));
		return pIVar1;
	}

	// CustomLogic.CustomLogicGradientModeEnum.Bindings$$<__CreatePropertyBinding__Fixed>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Fixed_g____getter_3_0(CustomLogicGradientModeEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}
}
