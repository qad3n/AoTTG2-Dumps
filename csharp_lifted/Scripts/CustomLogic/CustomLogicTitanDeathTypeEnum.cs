// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicTitanDeathTypeEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicTitanDeathTypeEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200058A")]
[CompilerGenerated]
internal class CustomLogicTitanDeathTypeEnum : BuiltinClassInstance
{
	[Token(Token = "0x200058B")]
	public static class Factory
	{
		[Token(Token = "0x600323E")]
		[Address(RVA = "0x59B9970", Offset = "0x59B8970", VA = "0x59B9970")]
		public static CustomLogicTitanDeathTypeEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanDeathTypeEnum.c (CustomLogic.CustomLogicTitanDeathTypeEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicTitanDeathTypeEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicTitanDeathTypeEnum();
			return (CustomLogicTitanDeathTypeEnum)__this;
		}
	}

	[Token(Token = "0x200058C")]
	public static class Bindings
	{
		[Token(Token = "0x4001891")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x600323F")]
		[Address(RVA = "0x59B9A90", Offset = "0x59B8A90", VA = "0x59B9A90")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanDeathTypeEnum.c (CustomLogic.CustomLogicTitanDeathTypeEnum.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicTitanDeathTypeEnum> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "Default");
			if (bVar1) {
				if ((typeof(CustomLogicTitanDeathTypeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicTitanDeathTypeEnum.Bindings.__CreatePropertyBinding__Default();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicTitanDeathTypeEnum.Bindings.__CreatePropertyBinding__Default();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Normal");
			if (bVar1) {
				if ((typeof(CustomLogicTitanDeathTypeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicTitanDeathTypeEnum.Bindings.__CreatePropertyBinding__Normal();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicTitanDeathTypeEnum.Bindings.__CreatePropertyBinding__Normal();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Decapitate");
			if (bVar1) {
				if ((typeof(CustomLogicTitanDeathTypeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicTitanDeathTypeEnum.Bindings.__CreatePropertyBinding__Decapitate();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicTitanDeathTypeEnum.Bindings.__CreatePropertyBinding__Decapitate();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Knockback");
			if (!bVar1) {
				pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
				str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicTitanDeathTypeEnum not found");
				pSVar3 = String.Concat(pSVar3, name, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this = (Exception)il2cpp_codegen_object_new(klass);
				__this = new Exception(pSVar3);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings_CreateMemberBinding);
				throw (object)__this;
			}
			if ((typeof(CustomLogicTitanDeathTypeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
				pCVar2 = CustomLogicTitanDeathTypeEnum.Bindings.__CreatePropertyBinding__Knockback();
				return (ICLMemberBinding)pCVar2;
			}
			pCVar2 = CustomLogicTitanDeathTypeEnum.Bindings.__CreatePropertyBinding__Knockback();
			return (ICLMemberBinding)pCVar2;
		}

		[Token(Token = "0x6003240")]
		[Address(RVA = "0x59B9C70", Offset = "0x59B8C70", VA = "0x59B9C70")]
		public static CLPropertyBinding<CustomLogicTitanDeathTypeEnum> __CreatePropertyBinding__Default()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanDeathTypeEnum.c (CustomLogic.CustomLogicTitanDeathTypeEnum.Bindings$$__CreatePropertyBinding__Default): 3 lines keep C-only constructs
			Func<CustomLogicTitanDeathTypeEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanDeathTypeEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanDeathTypeEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings___CreatePropertyBinding__Default_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicTitanDeathTypeEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003241")]
		[Address(RVA = "0x59B9D10", Offset = "0x59B8D10", VA = "0x59B9D10")]
		public static CLPropertyBinding<CustomLogicTitanDeathTypeEnum> __CreatePropertyBinding__Normal()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanDeathTypeEnum.c (CustomLogic.CustomLogicTitanDeathTypeEnum.Bindings$$__CreatePropertyBinding__Normal): 3 lines keep C-only constructs
			Func<CustomLogicTitanDeathTypeEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanDeathTypeEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanDeathTypeEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings___CreatePropertyBinding__Normal_g____getter_3);
			__this_00 = new CLPropertyBinding<CustomLogicTitanDeathTypeEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003242")]
		[Address(RVA = "0x59B9DB0", Offset = "0x59B8DB0", VA = "0x59B9DB0")]
		public static CLPropertyBinding<CustomLogicTitanDeathTypeEnum> __CreatePropertyBinding__Decapitate()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanDeathTypeEnum.c (CustomLogic.CustomLogicTitanDeathTypeEnum.Bindings$$__CreatePropertyBinding__Decapitate): 3 lines keep C-only constructs
			Func<CustomLogicTitanDeathTypeEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanDeathTypeEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanDeathTypeEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings___CreatePropertyBinding__Decapitate_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicTitanDeathTypeEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003243")]
		[Address(RVA = "0x59B9E50", Offset = "0x59B8E50", VA = "0x59B9E50")]
		public static CLPropertyBinding<CustomLogicTitanDeathTypeEnum> __CreatePropertyBinding__Knockback()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanDeathTypeEnum.c (CustomLogic.CustomLogicTitanDeathTypeEnum.Bindings$$__CreatePropertyBinding__Knockback): 3 lines keep C-only constructs
			Func<CustomLogicTitanDeathTypeEnum, object> __this;
			CLPropertyBinding<CustomLogicTitanDeathTypeEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicTitanDeathTypeEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTitanDeathTypeEnum_Bindings___CreatePropertyBinding__Knockback_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicTitanDeathTypeEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x170008F1")]
	public static int Default
	{
		[Token(Token = "0x6003236")]
		[Address(RVA = "0x59B98D0", Offset = "0x59B88D0", VA = "0x59B98D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanDeathTypeEnum.c (CustomLogic.CustomLogicTitanDeathTypeEnum$$get_Default): clean
			return 0;
		}
	}

	[Token(Token = "0x170008F2")]
	public static int Normal
	{
		[Token(Token = "0x6003237")]
		[Address(RVA = "0x59B98E0", Offset = "0x59B88E0", VA = "0x59B98E0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanDeathTypeEnum.c (CustomLogic.CustomLogicTitanDeathTypeEnum$$get_Normal): clean
			return 1;
		}
	}

	[Token(Token = "0x170008F3")]
	public static int Decapitate
	{
		[Token(Token = "0x6003238")]
		[Address(RVA = "0x59B98F0", Offset = "0x59B88F0", VA = "0x59B98F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanDeathTypeEnum.c (CustomLogic.CustomLogicTitanDeathTypeEnum$$get_Decapitate): clean
			return 2;
		}
	}

	[Token(Token = "0x170008F4")]
	public static int Knockback
	{
		[Token(Token = "0x6003239")]
		[Address(RVA = "0x59B9900", Offset = "0x59B8900", VA = "0x59B9900")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanDeathTypeEnum.c (CustomLogic.CustomLogicTitanDeathTypeEnum$$get_Knockback): clean
			return 3;
		}
	}

	[Token(Token = "0x170008F5")]
	public override string ClassName
	{
		[Token(Token = "0x600323A")]
		[Address(RVA = "0x59B9910", Offset = "0x59B8910", VA = "0x59B9910", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanDeathTypeEnum.c (CustomLogic.CustomLogicTitanDeathTypeEnum$$get_ClassName): clean
			return "TitanDeathTypeEnum";
		}
	}

	[Token(Token = "0x170008F6")]
	public override bool IsAbstract
	{
		[Token(Token = "0x600323B")]
		[Address(RVA = "0x59B9940", Offset = "0x59B8940", VA = "0x59B9940", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanDeathTypeEnum.c (CustomLogic.CustomLogicTitanDeathTypeEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x170008F7")]
	public override bool IsStatic
	{
		[Token(Token = "0x600323C")]
		[Address(RVA = "0x59B9950", Offset = "0x59B8950", VA = "0x59B9950", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanDeathTypeEnum.c (CustomLogic.CustomLogicTitanDeathTypeEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x170008F8")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x600323D")]
		[Address(RVA = "0x59B9960", Offset = "0x59B8960", VA = "0x59B9960", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTitanDeathTypeEnum.c (CustomLogic.CustomLogicTitanDeathTypeEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6003235")]
	[Address(RVA = "0x59B9860", Offset = "0x59B8860", VA = "0x59B9860")]
	public CustomLogicTitanDeathTypeEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicTitanDeathTypeEnum.c (CustomLogic.CustomLogicTitanDeathTypeEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07546b92 == false) {
			Il2CppMethodInitialized_07546b92 = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicTitanDeathTypeEnum.c.

	// CustomLogic.CustomLogicTitanDeathTypeEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Default");
		__this.Add((Il2CppObject *)"Normal");
		__this.Add((Il2CppObject *)"Decapitate");
		__this.Add((Il2CppObject *)"Knockback");
		CustomLogicTitanDeathTypeEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicTitanDeathTypeEnum.Bindings$$<__CreatePropertyBinding__Default>g____getter|2_0: 3 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__Default_g____getter_2_0(CustomLogicTitanDeathTypeEnum __i)
	{
		uint in_EAX;
		object pIVar1;
		ulong uStack_8;

		uStack_8 = (ulong)in_EAX;
		pIVar1 = (object)(((long)&uStack_8 + 4));
		return pIVar1;
	}

	// CustomLogic.CustomLogicTitanDeathTypeEnum.Bindings$$<__CreatePropertyBinding__Normal>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Normal_g____getter_3_0(CustomLogicTitanDeathTypeEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicTitanDeathTypeEnum.Bindings$$<__CreatePropertyBinding__Decapitate>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Decapitate_g____getter_4_0(CustomLogicTitanDeathTypeEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicTitanDeathTypeEnum.Bindings$$<__CreatePropertyBinding__Knockback>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__Knockback_g____getter_5_0(CustomLogicTitanDeathTypeEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}
}
