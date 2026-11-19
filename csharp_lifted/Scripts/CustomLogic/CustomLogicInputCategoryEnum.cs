// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicInputCategoryEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicInputCategoryEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200052D")]
[CompilerGenerated]
internal class CustomLogicInputCategoryEnum : BuiltinClassInstance
{
	[Token(Token = "0x200052E")]
	public static class Factory
	{
		[Token(Token = "0x6002BBB")]
		[Address(RVA = "0x5980A20", Offset = "0x597FA20", VA = "0x5980A20")]
		public static CustomLogicInputCategoryEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputCategoryEnum.c (CustomLogic.CustomLogicInputCategoryEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicInputCategoryEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicInputCategoryEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicInputCategoryEnum();
			return (CustomLogicInputCategoryEnum)__this;
		}
	}

	[Token(Token = "0x200052F")]
	public static class Bindings
	{
		[Token(Token = "0x4001800")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002BBC")]
		[Address(RVA = "0x5980B40", Offset = "0x597FB40", VA = "0x5980B40")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputCategoryEnum.c (CustomLogic.CustomLogicInputCategoryEnum.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicInputCategoryEnum> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "General");
			if (bVar1) {
				if ((typeof(CustomLogicInputCategoryEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicInputCategoryEnum.Bindings.__CreatePropertyBinding__General();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicInputCategoryEnum.Bindings.__CreatePropertyBinding__General();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Human");
			if (bVar1) {
				if ((typeof(CustomLogicInputCategoryEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicInputCategoryEnum.Bindings.__CreatePropertyBinding__Human();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicInputCategoryEnum.Bindings.__CreatePropertyBinding__Human();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Titan");
			if (bVar1) {
				if ((typeof(CustomLogicInputCategoryEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicInputCategoryEnum.Bindings.__CreatePropertyBinding__Titan();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicInputCategoryEnum.Bindings.__CreatePropertyBinding__Titan();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Interaction");
			if (bVar1) {
				pCVar2 = CustomLogicInputCategoryEnum.Bindings.__CreatePropertyBinding__Interaction();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "AnnieShifter");
			if (bVar1) {
				pCVar2 = CustomLogicInputCategoryEnum.Bindings.__CreatePropertyBinding__AnnieShifter();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "ErenShifter");
			if (bVar1) {
				pCVar2 = CustomLogicInputCategoryEnum.Bindings.__CreatePropertyBinding__ErenShifter();
				return (ICLMemberBinding)pCVar2;
			}
			pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicInputCategoryEnum not found");
			pSVar3 = String.Concat(pSVar3, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar3);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6002BBD")]
		[Address(RVA = "0x5980DB0", Offset = "0x597FDB0", VA = "0x5980DB0")]
		public static CLPropertyBinding<CustomLogicInputCategoryEnum> __CreatePropertyBinding__General()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputCategoryEnum.c (CustomLogic.CustomLogicInputCategoryEnum.Bindings$$__CreatePropertyBinding__General): 2 lines keep C-only constructs
			Func<CustomLogicInputCategoryEnum, object> __this;
			CLPropertyBinding<CustomLogicInputCategoryEnum> __this_00;

			__this = new Func<CustomLogicInputCategoryEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings___CreatePropertyBinding__General_g____getter_2);
			__this_00 = new CLPropertyBinding<CustomLogicInputCategoryEnum>((System_Func_T__object__o)__this, null) ;
			return __this_00;
		}

		[Token(Token = "0x6002BBE")]
		[Address(RVA = "0x5980E50", Offset = "0x597FE50", VA = "0x5980E50")]
		public static CLPropertyBinding<CustomLogicInputCategoryEnum> __CreatePropertyBinding__Human()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputCategoryEnum.c (CustomLogic.CustomLogicInputCategoryEnum.Bindings$$__CreatePropertyBinding__Human): 2 lines keep C-only constructs
			Func<CustomLogicInputCategoryEnum, object> __this;
			CLPropertyBinding<CustomLogicInputCategoryEnum> __this_00;

			__this = new Func<CustomLogicInputCategoryEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings___CreatePropertyBinding__Human_g____getter_3_0);
			__this_00 = new CLPropertyBinding<CustomLogicInputCategoryEnum>((System_Func_T__object__o)__this, null) ;
			return __this_00;
		}

		[Token(Token = "0x6002BBF")]
		[Address(RVA = "0x5980EF0", Offset = "0x597FEF0", VA = "0x5980EF0")]
		public static CLPropertyBinding<CustomLogicInputCategoryEnum> __CreatePropertyBinding__Titan()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputCategoryEnum.c (CustomLogic.CustomLogicInputCategoryEnum.Bindings$$__CreatePropertyBinding__Titan): 2 lines keep C-only constructs
			Func<CustomLogicInputCategoryEnum, object> __this;
			CLPropertyBinding<CustomLogicInputCategoryEnum> __this_00;

			__this = new Func<CustomLogicInputCategoryEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings___CreatePropertyBinding__Titan_g____getter_4_0);
			__this_00 = new CLPropertyBinding<CustomLogicInputCategoryEnum>((System_Func_T__object__o)__this, null) ;
			return __this_00;
		}

		[Token(Token = "0x6002BC0")]
		[Address(RVA = "0x5980F90", Offset = "0x597FF90", VA = "0x5980F90")]
		public static CLPropertyBinding<CustomLogicInputCategoryEnum> __CreatePropertyBinding__Interaction()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputCategoryEnum.c (CustomLogic.CustomLogicInputCategoryEnum.Bindings$$__CreatePropertyBinding__Interaction): 2 lines keep C-only constructs
			Func<CustomLogicInputCategoryEnum, object> __this;
			CLPropertyBinding<CustomLogicInputCategoryEnum> __this_00;

			__this = new Func<CustomLogicInputCategoryEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings___CreatePropertyBinding__Interaction_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicInputCategoryEnum>((System_Func_T__object__o)__this, null) ;
			return __this_00;
		}

		[Token(Token = "0x6002BC1")]
		[Address(RVA = "0x5981030", Offset = "0x5980030", VA = "0x5981030")]
		public static CLPropertyBinding<CustomLogicInputCategoryEnum> __CreatePropertyBinding__AnnieShifter()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputCategoryEnum.c (CustomLogic.CustomLogicInputCategoryEnum.Bindings$$__CreatePropertyBinding__AnnieShifter): 2 lines keep C-only constructs
			Func<CustomLogicInputCategoryEnum, object> __this;
			CLPropertyBinding<CustomLogicInputCategoryEnum> __this_00;

			__this = new Func<CustomLogicInputCategoryEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings___CreatePropertyBinding__AnnieShifter_g____get);
			__this_00 = new CLPropertyBinding<CustomLogicInputCategoryEnum>((System_Func_T__object__o)__this, null) ;
			return __this_00;
		}

		[Token(Token = "0x6002BC2")]
		[Address(RVA = "0x59810D0", Offset = "0x59800D0", VA = "0x59810D0")]
		public static CLPropertyBinding<CustomLogicInputCategoryEnum> __CreatePropertyBinding__ErenShifter()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputCategoryEnum.c (CustomLogic.CustomLogicInputCategoryEnum.Bindings$$__CreatePropertyBinding__ErenShifter): 2 lines keep C-only constructs
			Func<CustomLogicInputCategoryEnum, object> __this;
			CLPropertyBinding<CustomLogicInputCategoryEnum> __this_00;

			__this = new Func<CustomLogicInputCategoryEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputCategoryEnum_Bindings___CreatePropertyBinding__ErenShifter_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicInputCategoryEnum>((System_Func_T__object__o)__this, null) ;
			return __this_00;
		}
	}

	[Token(Token = "0x40017FA")]
	internal const string GeneralValue = "General";

	[Token(Token = "0x40017FB")]
	internal const string HumanValue = "Human";

	[Token(Token = "0x40017FC")]
	internal const string TitanValue = "Titan";

	[Token(Token = "0x40017FD")]
	internal const string InteractionValue = "Interaction";

	[Token(Token = "0x40017FE")]
	internal const string AnnieShifterValue = "AnnieShifter";

	[Token(Token = "0x40017FF")]
	internal const string ErenShifterValue = "ErenShifter";

	[Token(Token = "0x1700069E")]
	public static string General
	{
		[Token(Token = "0x6002BB1")]
		[Address(RVA = "0x59808A0", Offset = "0x597F8A0", VA = "0x59808A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputCategoryEnum.c (CustomLogic.CustomLogicInputCategoryEnum$$get_General): clean
			return "General";
		}
	}

	[Token(Token = "0x1700069F")]
	public static string Human
	{
		[Token(Token = "0x6002BB2")]
		[Address(RVA = "0x59808D0", Offset = "0x597F8D0", VA = "0x59808D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputCategoryEnum.c (CustomLogic.CustomLogicInputCategoryEnum$$get_Human): clean
			return "Human";
		}
	}

	[Token(Token = "0x170006A0")]
	public static string Titan
	{
		[Token(Token = "0x6002BB3")]
		[Address(RVA = "0x5980900", Offset = "0x597F900", VA = "0x5980900")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputCategoryEnum.c (CustomLogic.CustomLogicInputCategoryEnum$$get_Titan): clean
			return "Titan";
		}
	}

	[Token(Token = "0x170006A1")]
	public static string Interaction
	{
		[Token(Token = "0x6002BB4")]
		[Address(RVA = "0x5980930", Offset = "0x597F930", VA = "0x5980930")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputCategoryEnum.c (CustomLogic.CustomLogicInputCategoryEnum$$get_Interaction): clean
			return "Interaction";
		}
	}

	[Token(Token = "0x170006A2")]
	public static string AnnieShifter
	{
		[Token(Token = "0x6002BB5")]
		[Address(RVA = "0x5980960", Offset = "0x597F960", VA = "0x5980960")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputCategoryEnum.c (CustomLogic.CustomLogicInputCategoryEnum$$get_AnnieShifter): clean
			return "AnnieShifter";
		}
	}

	[Token(Token = "0x170006A3")]
	public static string ErenShifter
	{
		[Token(Token = "0x6002BB6")]
		[Address(RVA = "0x5980990", Offset = "0x597F990", VA = "0x5980990")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputCategoryEnum.c (CustomLogic.CustomLogicInputCategoryEnum$$get_ErenShifter): clean
			return "ErenShifter";
		}
	}

	[Token(Token = "0x170006A4")]
	public override string ClassName
	{
		[Token(Token = "0x6002BB7")]
		[Address(RVA = "0x59809C0", Offset = "0x597F9C0", VA = "0x59809C0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputCategoryEnum.c (CustomLogic.CustomLogicInputCategoryEnum$$get_ClassName): clean
			return "InputCategoryEnum";
		}
	}

	[Token(Token = "0x170006A5")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002BB8")]
		[Address(RVA = "0x59809F0", Offset = "0x597F9F0", VA = "0x59809F0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputCategoryEnum.c (CustomLogic.CustomLogicInputCategoryEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x170006A6")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002BB9")]
		[Address(RVA = "0x5980A00", Offset = "0x597FA00", VA = "0x5980A00", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputCategoryEnum.c (CustomLogic.CustomLogicInputCategoryEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x170006A7")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002BBA")]
		[Address(RVA = "0x5980A10", Offset = "0x597FA10", VA = "0x5980A10", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputCategoryEnum.c (CustomLogic.CustomLogicInputCategoryEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6002BB0")]
	[Address(RVA = "0x5980830", Offset = "0x597F830", VA = "0x5980830")]
	public CustomLogicInputCategoryEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicInputCategoryEnum.c (CustomLogic.CustomLogicInputCategoryEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_0754667b == false) {
			Il2CppMethodInitialized_0754667b = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicInputCategoryEnum.c.

	// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"General");
		__this.Add((Il2CppObject *)"Human");
		__this.Add((Il2CppObject *)"Titan");
		__this.Add((Il2CppObject *)"Interaction");
		__this.Add((Il2CppObject *)"AnnieShifter");
		__this.Add((Il2CppObject *)"ErenShifter");
		CustomLogicInputCategoryEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$<__CreatePropertyBinding__General>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__General_g____getter_2_0(CustomLogicInputCategoryEnum __i)
	{
		return (Il2CppObject *)"General";
	}

	// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$<__CreatePropertyBinding__Human>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Human_g____getter_3_0(CustomLogicInputCategoryEnum __i)
	{
		return (Il2CppObject *)"Human";
	}

	// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$<__CreatePropertyBinding__Titan>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Titan_g____getter_4_0(CustomLogicInputCategoryEnum __i)
	{
		return (Il2CppObject *)"Titan";
	}

	// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$<__CreatePropertyBinding__Interaction>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__Interaction_g____getter_5_0(CustomLogicInputCategoryEnum __i)
	{
		return (Il2CppObject *)"Interaction";
	}

	// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$<__CreatePropertyBinding__AnnieShifter>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__AnnieShifter_g____getter_6_0(CustomLogicInputCategoryEnum __i)
	{
		return (Il2CppObject *)"AnnieShifter";
	}

	// CustomLogic.CustomLogicInputCategoryEnum.Bindings$$<__CreatePropertyBinding__ErenShifter>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__ErenShifter_g____getter_7_0(CustomLogicInputCategoryEnum __i)
	{
		return (Il2CppObject *)"ErenShifter";
	}
}
