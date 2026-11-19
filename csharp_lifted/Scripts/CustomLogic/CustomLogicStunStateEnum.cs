// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicStunStateEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicStunStateEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000578")]
[CompilerGenerated]
internal class CustomLogicStunStateEnum : BuiltinClassInstance
{
	[Token(Token = "0x2000579")]
	public static class Factory
	{
		[Token(Token = "0x60030B3")]
		[Address(RVA = "0x59AD540", Offset = "0x59AC540", VA = "0x59AD540")]
		public static CustomLogicStunStateEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicStunStateEnum.c (CustomLogic.CustomLogicStunStateEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicStunStateEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicStunStateEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicStunStateEnum();
			return (CustomLogicStunStateEnum)__this;
		}
	}

	[Token(Token = "0x200057A")]
	public static class Bindings
	{
		[Token(Token = "0x4001885")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60030B4")]
		[Address(RVA = "0x59AD660", Offset = "0x59AC660", VA = "0x59AD660")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicStunStateEnum.c (CustomLogic.CustomLogicStunStateEnum.Bindings$$CreateMemberBinding): 8 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicStunStateEnum> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "None");
			if (bVar1) {
				if ((typeof(CustomLogicStunStateEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicStunStateEnum.Bindings)) ;
					pCVar2 = CustomLogicStunStateEnum.Bindings.__CreatePropertyBinding__None();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicStunStateEnum.Bindings.__CreatePropertyBinding__None();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Stunned");
			if (bVar1) {
				if ((typeof(CustomLogicStunStateEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicStunStateEnum.Bindings)) ;
					pCVar2 = CustomLogicStunStateEnum.Bindings.__CreatePropertyBinding__Stunned();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicStunStateEnum.Bindings.__CreatePropertyBinding__Stunned();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Recovering");
			if (!bVar1) {
				pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
				str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicStunStateEnum not found");
				pSVar3 = String.Concat(pSVar3, name, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this = (Exception)il2cpp_codegen_object_new(klass);
				__this = new Exception(pSVar3);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicStunStateEnum_Bindings_CreateMemberBinding);
				throw (object)__this;
			}
			if ((typeof(CustomLogicStunStateEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
				pCVar2 = CustomLogicStunStateEnum.Bindings.__CreatePropertyBinding__Recovering();
				return (ICLMemberBinding)pCVar2;
			}
			pCVar2 = CustomLogicStunStateEnum.Bindings.__CreatePropertyBinding__Recovering();
			return (ICLMemberBinding)pCVar2;
		}

		[Token(Token = "0x60030B5")]
		[Address(RVA = "0x59AD7F0", Offset = "0x59AC7F0", VA = "0x59AD7F0")]
		public static CLPropertyBinding<CustomLogicStunStateEnum> __CreatePropertyBinding__None()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicStunStateEnum.c (CustomLogic.CustomLogicStunStateEnum.Bindings$$__CreatePropertyBinding__None): 2 lines keep C-only constructs
			Func<CustomLogicStunStateEnum, object> __this;
			CLPropertyBinding<CustomLogicStunStateEnum> __this_00;

			__this = new Func<CustomLogicStunStateEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicStunStateEnum_Bindings___CreatePropertyBinding__None_g____getter_2_0);
			__this_00 = new CLPropertyBinding<CustomLogicStunStateEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60030B6")]
		[Address(RVA = "0x59AD890", Offset = "0x59AC890", VA = "0x59AD890")]
		public static CLPropertyBinding<CustomLogicStunStateEnum> __CreatePropertyBinding__Stunned()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicStunStateEnum.c (CustomLogic.CustomLogicStunStateEnum.Bindings$$__CreatePropertyBinding__Stunned): 2 lines keep C-only constructs
			Func<CustomLogicStunStateEnum, object> __this;
			CLPropertyBinding<CustomLogicStunStateEnum> __this_00;

			__this = new Func<CustomLogicStunStateEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicStunStateEnum_Bindings___CreatePropertyBinding__Stunned_g____getter_3_0);
			__this_00 = new CLPropertyBinding<CustomLogicStunStateEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60030B7")]
		[Address(RVA = "0x59AD930", Offset = "0x59AC930", VA = "0x59AD930")]
		public static CLPropertyBinding<CustomLogicStunStateEnum> __CreatePropertyBinding__Recovering()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicStunStateEnum.c (CustomLogic.CustomLogicStunStateEnum.Bindings$$__CreatePropertyBinding__Recovering): 2 lines keep C-only constructs
			Func<CustomLogicStunStateEnum, object> __this;
			CLPropertyBinding<CustomLogicStunStateEnum> __this_00;

			__this = new Func<CustomLogicStunStateEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicStunStateEnum_Bindings___CreatePropertyBinding__Recovering_g____getter_4);
			__this_00 = new CLPropertyBinding<CustomLogicStunStateEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x17000866")]
	public static int None
	{
		[Token(Token = "0x60030AC")]
		[Address(RVA = "0x59AD4B0", Offset = "0x59AC4B0", VA = "0x59AD4B0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicStunStateEnum.c (CustomLogic.CustomLogicStunStateEnum$$get_None): clean
			return 0;
		}
	}

	[Token(Token = "0x17000867")]
	public static int Stunned
	{
		[Token(Token = "0x60030AD")]
		[Address(RVA = "0x59AD4C0", Offset = "0x59AC4C0", VA = "0x59AD4C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicStunStateEnum.c (CustomLogic.CustomLogicStunStateEnum$$get_Stunned): clean
			return 1;
		}
	}

	[Token(Token = "0x17000868")]
	public static int Recovering
	{
		[Token(Token = "0x60030AE")]
		[Address(RVA = "0x59AD4D0", Offset = "0x59AC4D0", VA = "0x59AD4D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicStunStateEnum.c (CustomLogic.CustomLogicStunStateEnum$$get_Recovering): clean
			return 2;
		}
	}

	[Token(Token = "0x17000869")]
	public override string ClassName
	{
		[Token(Token = "0x60030AF")]
		[Address(RVA = "0x59AD4E0", Offset = "0x59AC4E0", VA = "0x59AD4E0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicStunStateEnum.c (CustomLogic.CustomLogicStunStateEnum$$get_ClassName): clean
			return "StunStateEnum";
		}
	}

	[Token(Token = "0x1700086A")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60030B0")]
		[Address(RVA = "0x59AD510", Offset = "0x59AC510", VA = "0x59AD510", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicStunStateEnum.c (CustomLogic.CustomLogicStunStateEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x1700086B")]
	public override bool IsStatic
	{
		[Token(Token = "0x60030B1")]
		[Address(RVA = "0x59AD520", Offset = "0x59AC520", VA = "0x59AD520", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicStunStateEnum.c (CustomLogic.CustomLogicStunStateEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x1700086C")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60030B2")]
		[Address(RVA = "0x59AD530", Offset = "0x59AC530", VA = "0x59AD530", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicStunStateEnum.c (CustomLogic.CustomLogicStunStateEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x60030AB")]
	[Address(RVA = "0x59AD440", Offset = "0x59AC440", VA = "0x59AD440")]
	public CustomLogicStunStateEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicStunStateEnum.c (CustomLogic.CustomLogicStunStateEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07546a95 == false) {
			Il2CppMethodInitialized_07546a95 = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicStunStateEnum.c.

	// CustomLogic.CustomLogicStunStateEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"None");
		__this.Add((Il2CppObject *)"Stunned");
		__this.Add((Il2CppObject *)"Recovering");
		CustomLogicStunStateEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicStunStateEnum.Bindings$$<__CreatePropertyBinding__None>g____getter|2_0: 3 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__None_g____getter_2_0(CustomLogicStunStateEnum __i)
	{
		uint in_EAX;
		object pIVar1;
		ulong uStack_8;

		uStack_8 = (ulong)in_EAX;
		pIVar1 = (object)(((long)&uStack_8 + 4));
		return pIVar1;
	}

	// CustomLogic.CustomLogicStunStateEnum.Bindings$$<__CreatePropertyBinding__Stunned>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Stunned_g____getter_3_0(CustomLogicStunStateEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicStunStateEnum.Bindings$$<__CreatePropertyBinding__Recovering>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Recovering_g____getter_4_0(CustomLogicStunStateEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}
}
