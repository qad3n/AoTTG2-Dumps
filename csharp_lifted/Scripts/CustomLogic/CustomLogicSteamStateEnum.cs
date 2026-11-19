// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicSteamStateEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicSteamStateEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000575")]
[CompilerGenerated]
internal class CustomLogicSteamStateEnum : BuiltinClassInstance
{
	[Token(Token = "0x2000576")]
	public static class Factory
	{
		[Token(Token = "0x60030A2")]
		[Address(RVA = "0x59ACE40", Offset = "0x59ABE40", VA = "0x59ACE40")]
		public static CustomLogicSteamStateEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSteamStateEnum.c (CustomLogic.CustomLogicSteamStateEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicSteamStateEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicSteamStateEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicSteamStateEnum();
			return (CustomLogicSteamStateEnum)__this;
		}
	}

	[Token(Token = "0x2000577")]
	public static class Bindings
	{
		[Token(Token = "0x4001884")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60030A3")]
		[Address(RVA = "0x59ACF60", Offset = "0x59ABF60", VA = "0x59ACF60")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSteamStateEnum.c (CustomLogic.CustomLogicSteamStateEnum.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicSteamStateEnum> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "Off");
			if (bVar1) {
				if ((typeof(CustomLogicSteamStateEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicSteamStateEnum.Bindings.__CreatePropertyBinding__Off();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicSteamStateEnum.Bindings.__CreatePropertyBinding__Off();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Warning");
			if (bVar1) {
				if ((typeof(CustomLogicSteamStateEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicSteamStateEnum.Bindings.__CreatePropertyBinding__Warning();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicSteamStateEnum.Bindings.__CreatePropertyBinding__Warning();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Damage");
			if (!bVar1) {
				pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
				str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicSteamStateEnum not found");
				pSVar3 = String.Concat(pSVar3, name, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this = (Exception)il2cpp_codegen_object_new(klass);
				__this = new Exception(pSVar3);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicSteamStateEnum_Bindings_CreateMemberBinding);
				throw (object)__this;
			}
			if ((typeof(CustomLogicSteamStateEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
				pCVar2 = CustomLogicSteamStateEnum.Bindings.__CreatePropertyBinding__Damage();
				return (ICLMemberBinding)pCVar2;
			}
			pCVar2 = CustomLogicSteamStateEnum.Bindings.__CreatePropertyBinding__Damage();
			return (ICLMemberBinding)pCVar2;
		}

		[Token(Token = "0x60030A4")]
		[Address(RVA = "0x59AD0F0", Offset = "0x59AC0F0", VA = "0x59AD0F0")]
		public static CLPropertyBinding<CustomLogicSteamStateEnum> __CreatePropertyBinding__Off()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSteamStateEnum.c (CustomLogic.CustomLogicSteamStateEnum.Bindings$$__CreatePropertyBinding__Off): 2 lines keep C-only constructs
			Func<CustomLogicSteamStateEnum, object> __this;
			CLPropertyBinding<CustomLogicSteamStateEnum> __this_00;

			__this = new Func<CustomLogicSteamStateEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicSteamStateEnum_Bindings___CreatePropertyBinding__Off_g____getter_2_0);
			__this_00 = new CLPropertyBinding<CustomLogicSteamStateEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60030A5")]
		[Address(RVA = "0x59AD190", Offset = "0x59AC190", VA = "0x59AD190")]
		public static CLPropertyBinding<CustomLogicSteamStateEnum> __CreatePropertyBinding__Warning()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSteamStateEnum.c (CustomLogic.CustomLogicSteamStateEnum.Bindings$$__CreatePropertyBinding__Warning): 2 lines keep C-only constructs
			Func<CustomLogicSteamStateEnum, object> __this;
			CLPropertyBinding<CustomLogicSteamStateEnum> __this_00;

			__this = new Func<CustomLogicSteamStateEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicSteamStateEnum_Bindings___CreatePropertyBinding__Warning_g____getter_3_0);
			__this_00 = new CLPropertyBinding<CustomLogicSteamStateEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60030A6")]
		[Address(RVA = "0x59AD230", Offset = "0x59AC230", VA = "0x59AD230")]
		public static CLPropertyBinding<CustomLogicSteamStateEnum> __CreatePropertyBinding__Damage()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSteamStateEnum.c (CustomLogic.CustomLogicSteamStateEnum.Bindings$$__CreatePropertyBinding__Damage): 2 lines keep C-only constructs
			Func<CustomLogicSteamStateEnum, object> __this;
			CLPropertyBinding<CustomLogicSteamStateEnum> __this_00;

			__this = new Func<CustomLogicSteamStateEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicSteamStateEnum_Bindings___CreatePropertyBinding__Damage_g____getter_4_0);
			__this_00 = new CLPropertyBinding<CustomLogicSteamStateEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x1700085F")]
	public static int Off
	{
		[Token(Token = "0x600309B")]
		[Address(RVA = "0x59ACDB0", Offset = "0x59ABDB0", VA = "0x59ACDB0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSteamStateEnum.c (CustomLogic.CustomLogicSteamStateEnum$$get_Off): clean
			return 0;
		}
	}

	[Token(Token = "0x17000860")]
	public static int Warning
	{
		[Token(Token = "0x600309C")]
		[Address(RVA = "0x59ACDC0", Offset = "0x59ABDC0", VA = "0x59ACDC0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSteamStateEnum.c (CustomLogic.CustomLogicSteamStateEnum$$get_Warning): clean
			return 1;
		}
	}

	[Token(Token = "0x17000861")]
	public static int Damage
	{
		[Token(Token = "0x600309D")]
		[Address(RVA = "0x59ACDD0", Offset = "0x59ABDD0", VA = "0x59ACDD0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSteamStateEnum.c (CustomLogic.CustomLogicSteamStateEnum$$get_Damage): clean
			return 2;
		}
	}

	[Token(Token = "0x17000862")]
	public override string ClassName
	{
		[Token(Token = "0x600309E")]
		[Address(RVA = "0x59ACDE0", Offset = "0x59ABDE0", VA = "0x59ACDE0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSteamStateEnum.c (CustomLogic.CustomLogicSteamStateEnum$$get_ClassName): clean
			return "SteamStateEnum";
		}
	}

	[Token(Token = "0x17000863")]
	public override bool IsAbstract
	{
		[Token(Token = "0x600309F")]
		[Address(RVA = "0x59ACE10", Offset = "0x59ABE10", VA = "0x59ACE10", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSteamStateEnum.c (CustomLogic.CustomLogicSteamStateEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000864")]
	public override bool IsStatic
	{
		[Token(Token = "0x60030A0")]
		[Address(RVA = "0x59ACE20", Offset = "0x59ABE20", VA = "0x59ACE20", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSteamStateEnum.c (CustomLogic.CustomLogicSteamStateEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x17000865")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60030A1")]
		[Address(RVA = "0x59ACE30", Offset = "0x59ABE30", VA = "0x59ACE30", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSteamStateEnum.c (CustomLogic.CustomLogicSteamStateEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x600309A")]
	[Address(RVA = "0x59ACD40", Offset = "0x59ABD40", VA = "0x59ACD40")]
	public CustomLogicSteamStateEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicSteamStateEnum.c (CustomLogic.CustomLogicSteamStateEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07546a8d == false) {
			Il2CppMethodInitialized_07546a8d = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicSteamStateEnum.c.

	// CustomLogic.CustomLogicSteamStateEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Off");
		__this.Add((Il2CppObject *)"Warning");
		__this.Add((Il2CppObject *)"Damage");
		CustomLogicSteamStateEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicSteamStateEnum.Bindings$$<__CreatePropertyBinding__Off>g____getter|2_0: 3 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__Off_g____getter_2_0(CustomLogicSteamStateEnum __i)
	{
		uint in_EAX;
		object pIVar1;
		ulong uStack_8;

		uStack_8 = (ulong)in_EAX;
		pIVar1 = (object)(((long)&uStack_8 + 4));
		return pIVar1;
	}

	// CustomLogic.CustomLogicSteamStateEnum.Bindings$$<__CreatePropertyBinding__Warning>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Warning_g____getter_3_0(CustomLogicSteamStateEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicSteamStateEnum.Bindings$$<__CreatePropertyBinding__Damage>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Damage_g____getter_4_0(CustomLogicSteamStateEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}
}
