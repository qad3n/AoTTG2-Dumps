// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicShifterTypeEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicShifterTypeEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200056C")]
[CompilerGenerated]
internal class CustomLogicShifterTypeEnum : BuiltinClassInstance
{
	[Token(Token = "0x200056D")]
	public static class Factory
	{
		[Token(Token = "0x600303A")]
		[Address(RVA = "0x59A9DB0", Offset = "0x59A8DB0", VA = "0x59A9DB0")]
		public static CustomLogicShifterTypeEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterTypeEnum.c (CustomLogic.CustomLogicShifterTypeEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicShifterTypeEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicShifterTypeEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicShifterTypeEnum();
			return (CustomLogicShifterTypeEnum)__this;
		}
	}

	[Token(Token = "0x200056E")]
	public static class Bindings
	{
		[Token(Token = "0x4001881")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x600303B")]
		[Address(RVA = "0x59A9ED0", Offset = "0x59A8ED0", VA = "0x59A9ED0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterTypeEnum.c (CustomLogic.CustomLogicShifterTypeEnum.Bindings$$CreateMemberBinding): 7 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicShifterTypeEnum> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "Annie");
			if (bVar1) {
				if ((typeof(CustomLogicShifterTypeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicShifterTypeEnum.Bindings.__CreatePropertyBinding__Annie();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicShifterTypeEnum.Bindings.__CreatePropertyBinding__Annie();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Armored");
			if (bVar1) {
				if ((typeof(CustomLogicShifterTypeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicShifterTypeEnum.Bindings.__CreatePropertyBinding__Armored();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicShifterTypeEnum.Bindings.__CreatePropertyBinding__Armored();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Eren");
			if (bVar1) {
				if ((typeof(CustomLogicShifterTypeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicShifterTypeEnum.Bindings.__CreatePropertyBinding__Eren();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicShifterTypeEnum.Bindings.__CreatePropertyBinding__Eren();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "WallColossal");
			if (!bVar1) {
				pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
				str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicShifterTypeEnum not found");
				pSVar3 = String.Concat(pSVar3, name, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this = (Exception)il2cpp_codegen_object_new(klass);
				__this = new Exception(pSVar3);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings_CreateMemberBinding);
				throw (object)__this;
			}
			if ((typeof(CustomLogicShifterTypeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicShifterTypeEnum.Bindings)) ;
				pCVar2 = CustomLogicShifterTypeEnum.Bindings.__CreatePropertyBinding__WallColossal();
				return (ICLMemberBinding)pCVar2;
			}
			pCVar2 = CustomLogicShifterTypeEnum.Bindings.__CreatePropertyBinding__WallColossal();
			return (ICLMemberBinding)pCVar2;
		}

		[Token(Token = "0x600303C")]
		[Address(RVA = "0x59AA0B0", Offset = "0x59A90B0", VA = "0x59AA0B0")]
		public static CLPropertyBinding<CustomLogicShifterTypeEnum> __CreatePropertyBinding__Annie()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterTypeEnum.c (CustomLogic.CustomLogicShifterTypeEnum.Bindings$$__CreatePropertyBinding__Annie): 2 lines keep C-only constructs
			Func<CustomLogicShifterTypeEnum, object> __this;
			CLPropertyBinding<CustomLogicShifterTypeEnum> __this_00;

			__this = new Func<CustomLogicShifterTypeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings___CreatePropertyBinding__Annie_g____getter_2_0);
			__this_00 = new CLPropertyBinding<CustomLogicShifterTypeEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600303D")]
		[Address(RVA = "0x59AA150", Offset = "0x59A9150", VA = "0x59AA150")]
		public static CLPropertyBinding<CustomLogicShifterTypeEnum> __CreatePropertyBinding__Armored()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterTypeEnum.c (CustomLogic.CustomLogicShifterTypeEnum.Bindings$$__CreatePropertyBinding__Armored): 2 lines keep C-only constructs
			Func<CustomLogicShifterTypeEnum, object> __this;
			CLPropertyBinding<CustomLogicShifterTypeEnum> __this_00;

			__this = new Func<CustomLogicShifterTypeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings___CreatePropertyBinding__Armored_g____getter_3_0);
			__this_00 = new CLPropertyBinding<CustomLogicShifterTypeEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600303E")]
		[Address(RVA = "0x59AA1F0", Offset = "0x59A91F0", VA = "0x59AA1F0")]
		public static CLPropertyBinding<CustomLogicShifterTypeEnum> __CreatePropertyBinding__Eren()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterTypeEnum.c (CustomLogic.CustomLogicShifterTypeEnum.Bindings$$__CreatePropertyBinding__Eren): 2 lines keep C-only constructs
			Func<CustomLogicShifterTypeEnum, object> __this;
			CLPropertyBinding<CustomLogicShifterTypeEnum> __this_00;

			__this = new Func<CustomLogicShifterTypeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings___CreatePropertyBinding__Eren_g____getter_4_0);
			__this_00 = new CLPropertyBinding<CustomLogicShifterTypeEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600303F")]
		[Address(RVA = "0x59AA290", Offset = "0x59A9290", VA = "0x59AA290")]
		public static CLPropertyBinding<CustomLogicShifterTypeEnum> __CreatePropertyBinding__WallColossal()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterTypeEnum.c (CustomLogic.CustomLogicShifterTypeEnum.Bindings$$__CreatePropertyBinding__WallColossal): 2 lines keep C-only constructs
			Func<CustomLogicShifterTypeEnum, object> __this;
			CLPropertyBinding<CustomLogicShifterTypeEnum> __this_00;

			__this = new Func<CustomLogicShifterTypeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicShifterTypeEnum_Bindings___CreatePropertyBinding__WallColossal_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicShifterTypeEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x17000838")]
	public static string Annie
	{
		[Token(Token = "0x6003032")]
		[Address(RVA = "0x59A9C90", Offset = "0x59A8C90", VA = "0x59A9C90")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterTypeEnum.c (CustomLogic.CustomLogicShifterTypeEnum$$get_Annie): clean
			return "Annie";
		}
	}

	[Token(Token = "0x17000839")]
	public static string Armored
	{
		[Token(Token = "0x6003033")]
		[Address(RVA = "0x59A9CC0", Offset = "0x59A8CC0", VA = "0x59A9CC0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterTypeEnum.c (CustomLogic.CustomLogicShifterTypeEnum$$get_Armored): clean
			return "Armored";
		}
	}

	[Token(Token = "0x1700083A")]
	public static string Eren
	{
		[Token(Token = "0x6003034")]
		[Address(RVA = "0x59A9CF0", Offset = "0x59A8CF0", VA = "0x59A9CF0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterTypeEnum.c (CustomLogic.CustomLogicShifterTypeEnum$$get_Eren): clean
			return "Eren";
		}
	}

	[Token(Token = "0x1700083B")]
	public static string WallColossal
	{
		[Token(Token = "0x6003035")]
		[Address(RVA = "0x59A9D20", Offset = "0x59A8D20", VA = "0x59A9D20")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterTypeEnum.c (CustomLogic.CustomLogicShifterTypeEnum$$get_WallColossal): clean
			return "WallColossal";
		}
	}

	[Token(Token = "0x1700083C")]
	public override string ClassName
	{
		[Token(Token = "0x6003036")]
		[Address(RVA = "0x59A9D50", Offset = "0x59A8D50", VA = "0x59A9D50", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterTypeEnum.c (CustomLogic.CustomLogicShifterTypeEnum$$get_ClassName): clean
			return "ShifterTypeEnum";
		}
	}

	[Token(Token = "0x1700083D")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6003037")]
		[Address(RVA = "0x59A9D80", Offset = "0x59A8D80", VA = "0x59A9D80", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterTypeEnum.c (CustomLogic.CustomLogicShifterTypeEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x1700083E")]
	public override bool IsStatic
	{
		[Token(Token = "0x6003038")]
		[Address(RVA = "0x59A9D90", Offset = "0x59A8D90", VA = "0x59A9D90", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterTypeEnum.c (CustomLogic.CustomLogicShifterTypeEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x1700083F")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6003039")]
		[Address(RVA = "0x59A9DA0", Offset = "0x59A8DA0", VA = "0x59A9DA0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicShifterTypeEnum.c (CustomLogic.CustomLogicShifterTypeEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6003031")]
	[Address(RVA = "0x59A9C20", Offset = "0x59A8C20", VA = "0x59A9C20")]
	public CustomLogicShifterTypeEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicShifterTypeEnum.c (CustomLogic.CustomLogicShifterTypeEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07546a4a == false) {
			Il2CppMethodInitialized_07546a4a = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicShifterTypeEnum.c.

	// CustomLogic.CustomLogicShifterTypeEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Annie");
		__this.Add((Il2CppObject *)"Armored");
		__this.Add((Il2CppObject *)"Eren");
		__this.Add((Il2CppObject *)"WallColossal");
		CustomLogicShifterTypeEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicShifterTypeEnum.Bindings$$<__CreatePropertyBinding__Annie>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__Annie_g____getter_2_0(CustomLogicShifterTypeEnum __i)
	{
		return (Il2CppObject *)"Annie";
	}

	// CustomLogic.CustomLogicShifterTypeEnum.Bindings$$<__CreatePropertyBinding__Armored>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Armored_g____getter_3_0(CustomLogicShifterTypeEnum __i)
	{
		return (Il2CppObject *)"Armored";
	}

	// CustomLogic.CustomLogicShifterTypeEnum.Bindings$$<__CreatePropertyBinding__Eren>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Eren_g____getter_4_0(CustomLogicShifterTypeEnum __i)
	{
		return (Il2CppObject *)"Eren";
	}

	// CustomLogic.CustomLogicShifterTypeEnum.Bindings$$<__CreatePropertyBinding__WallColossal>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__WallColossal_g____getter_5_0(CustomLogicShifterTypeEnum __i)
	{
		return (Il2CppObject *)"WallColossal";
	}
}
