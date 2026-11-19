// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicScaleModeEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicScaleModeEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000560")]
[CompilerGenerated]
internal class CustomLogicScaleModeEnum : BuiltinClassInstance
{
	[Token(Token = "0x2000561")]
	public static class Factory
	{
		[Token(Token = "0x6002FE9")]
		[Address(RVA = "0x59A7810", Offset = "0x59A6810", VA = "0x59A7810")]
		public static CustomLogicScaleModeEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScaleModeEnum.c (CustomLogic.CustomLogicScaleModeEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicScaleModeEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicScaleModeEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicScaleModeEnum();
			return (CustomLogicScaleModeEnum)__this;
		}
	}

	[Token(Token = "0x2000562")]
	public static class Bindings
	{
		[Token(Token = "0x400187D")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002FEA")]
		[Address(RVA = "0x59A7930", Offset = "0x59A6930", VA = "0x59A7930")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScaleModeEnum.c (CustomLogic.CustomLogicScaleModeEnum.Bindings$$CreateMemberBinding): 8 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicScaleModeEnum> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "StretchToFill");
			if (bVar1) {
				if ((typeof(CustomLogicScaleModeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicScaleModeEnum.Bindings)) ;
					pCVar2 = CustomLogicScaleModeEnum.Bindings.__CreatePropertyBinding__StretchToFill();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicScaleModeEnum.Bindings.__CreatePropertyBinding__StretchToFill();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "ScaleAndCrop");
			if (bVar1) {
				if ((typeof(CustomLogicScaleModeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicScaleModeEnum.Bindings)) ;
					pCVar2 = CustomLogicScaleModeEnum.Bindings.__CreatePropertyBinding__ScaleAndCrop();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicScaleModeEnum.Bindings.__CreatePropertyBinding__ScaleAndCrop();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "ScaleToFit");
			if (!bVar1) {
				pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
				str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicScaleModeEnum not found");
				pSVar3 = String.Concat(pSVar3, name, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this = (Exception)il2cpp_codegen_object_new(klass);
				__this = new Exception(pSVar3);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings_CreateMemberBinding);
				throw (object)__this;
			}
			if ((typeof(CustomLogicScaleModeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
				pCVar2 = CustomLogicScaleModeEnum.Bindings.__CreatePropertyBinding__ScaleToFit();
				return (ICLMemberBinding)pCVar2;
			}
			pCVar2 = CustomLogicScaleModeEnum.Bindings.__CreatePropertyBinding__ScaleToFit();
			return (ICLMemberBinding)pCVar2;
		}

		[Token(Token = "0x6002FEB")]
		[Address(RVA = "0x59A7AC0", Offset = "0x59A6AC0", VA = "0x59A7AC0")]
		public static CLPropertyBinding<CustomLogicScaleModeEnum> __CreatePropertyBinding__StretchToFill()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScaleModeEnum.c (CustomLogic.CustomLogicScaleModeEnum.Bindings$$__CreatePropertyBinding__StretchToFill): 2 lines keep C-only constructs
			Func<CustomLogicScaleModeEnum, object> __this;
			CLPropertyBinding<CustomLogicScaleModeEnum> __this_00;

			__this = new Func<CustomLogicScaleModeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings___CreatePropertyBinding__StretchToFill_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicScaleModeEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002FEC")]
		[Address(RVA = "0x59A7B60", Offset = "0x59A6B60", VA = "0x59A7B60")]
		public static CLPropertyBinding<CustomLogicScaleModeEnum> __CreatePropertyBinding__ScaleAndCrop()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScaleModeEnum.c (CustomLogic.CustomLogicScaleModeEnum.Bindings$$__CreatePropertyBinding__ScaleAndCrop): 2 lines keep C-only constructs
			Func<CustomLogicScaleModeEnum, object> __this;
			CLPropertyBinding<CustomLogicScaleModeEnum> __this_00;

			__this = new Func<CustomLogicScaleModeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings___CreatePropertyBinding__ScaleAndCrop_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicScaleModeEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002FED")]
		[Address(RVA = "0x59A7C00", Offset = "0x59A6C00", VA = "0x59A7C00")]
		public static CLPropertyBinding<CustomLogicScaleModeEnum> __CreatePropertyBinding__ScaleToFit()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScaleModeEnum.c (CustomLogic.CustomLogicScaleModeEnum.Bindings$$__CreatePropertyBinding__ScaleToFit): 2 lines keep C-only constructs
			Func<CustomLogicScaleModeEnum, object> __this;
			CLPropertyBinding<CustomLogicScaleModeEnum> __this_00;

			__this = new Func<CustomLogicScaleModeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicScaleModeEnum_Bindings___CreatePropertyBinding__ScaleToFit_g____getter_4);
			__this_00 = new CLPropertyBinding<CustomLogicScaleModeEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x17000818")]
	public static int StretchToFill
	{
		[Token(Token = "0x6002FE2")]
		[Address(RVA = "0x59A7780", Offset = "0x59A6780", VA = "0x59A7780")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScaleModeEnum.c (CustomLogic.CustomLogicScaleModeEnum$$get_StretchToFill): clean
			return 0;
		}
	}

	[Token(Token = "0x17000819")]
	public static int ScaleAndCrop
	{
		[Token(Token = "0x6002FE3")]
		[Address(RVA = "0x59A7790", Offset = "0x59A6790", VA = "0x59A7790")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScaleModeEnum.c (CustomLogic.CustomLogicScaleModeEnum$$get_ScaleAndCrop): clean
			return 1;
		}
	}

	[Token(Token = "0x1700081A")]
	public static int ScaleToFit
	{
		[Token(Token = "0x6002FE4")]
		[Address(RVA = "0x59A77A0", Offset = "0x59A67A0", VA = "0x59A77A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScaleModeEnum.c (CustomLogic.CustomLogicScaleModeEnum$$get_ScaleToFit): clean
			return 2;
		}
	}

	[Token(Token = "0x1700081B")]
	public override string ClassName
	{
		[Token(Token = "0x6002FE5")]
		[Address(RVA = "0x59A77B0", Offset = "0x59A67B0", VA = "0x59A77B0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScaleModeEnum.c (CustomLogic.CustomLogicScaleModeEnum$$get_ClassName): clean
			return "ScaleModeEnum";
		}
	}

	[Token(Token = "0x1700081C")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002FE6")]
		[Address(RVA = "0x59A77E0", Offset = "0x59A67E0", VA = "0x59A77E0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScaleModeEnum.c (CustomLogic.CustomLogicScaleModeEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x1700081D")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002FE7")]
		[Address(RVA = "0x59A77F0", Offset = "0x59A67F0", VA = "0x59A77F0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScaleModeEnum.c (CustomLogic.CustomLogicScaleModeEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x1700081E")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002FE8")]
		[Address(RVA = "0x59A7800", Offset = "0x59A6800", VA = "0x59A7800", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScaleModeEnum.c (CustomLogic.CustomLogicScaleModeEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6002FE1")]
	[Address(RVA = "0x59A7710", Offset = "0x59A6710", VA = "0x59A7710")]
	public CustomLogicScaleModeEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicScaleModeEnum.c (CustomLogic.CustomLogicScaleModeEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07546a20 == false) {
			Il2CppMethodInitialized_07546a20 = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicScaleModeEnum.c.

	// CustomLogic.CustomLogicScaleModeEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"StretchToFill");
		__this.Add((Il2CppObject *)"ScaleAndCrop");
		__this.Add((Il2CppObject *)"ScaleToFit");
		CustomLogicScaleModeEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicScaleModeEnum.Bindings$$<__CreatePropertyBinding__StretchToFill>g____getter|2_0: 3 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__StretchToFill_g____getter_2_0(CustomLogicScaleModeEnum __i)
	{
		uint in_EAX;
		object pIVar1;
		ulong uStack_8;

		uStack_8 = (ulong)in_EAX;
		pIVar1 = (object)(((long)&uStack_8 + 4));
		return pIVar1;
	}

	// CustomLogic.CustomLogicScaleModeEnum.Bindings$$<__CreatePropertyBinding__ScaleAndCrop>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__ScaleAndCrop_g____getter_3_0(CustomLogicScaleModeEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicScaleModeEnum.Bindings$$<__CreatePropertyBinding__ScaleToFit>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__ScaleToFit_g____getter_4_0(CustomLogicScaleModeEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}
}
