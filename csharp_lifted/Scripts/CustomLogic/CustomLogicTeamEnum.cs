// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicTeamEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicTeamEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200057E")]
[CompilerGenerated]
internal class CustomLogicTeamEnum : BuiltinClassInstance
{
	[Token(Token = "0x200057F")]
	public static class Factory
	{
		[Token(Token = "0x60030E1")]
		[Address(RVA = "0x59AF070", Offset = "0x59AE070", VA = "0x59AF070")]
		public static CustomLogicTeamEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTeamEnum.c (CustomLogic.CustomLogicTeamEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicTeamEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicTeamEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicTeamEnum();
			return (CustomLogicTeamEnum)__this;
		}
	}

	[Token(Token = "0x2000580")]
	public static class Bindings
	{
		[Token(Token = "0x400188D")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60030E2")]
		[Address(RVA = "0x59AF190", Offset = "0x59AE190", VA = "0x59AF190")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTeamEnum.c (CustomLogic.CustomLogicTeamEnum.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicTeamEnum> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "None");
			if (bVar1) {
				if ((typeof(CustomLogicTeamEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicTeamEnum.Bindings.__CreatePropertyBinding__None();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicTeamEnum.Bindings.__CreatePropertyBinding__None();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Blue");
			if (bVar1) {
				if ((typeof(CustomLogicTeamEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicTeamEnum.Bindings.__CreatePropertyBinding__Blue();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicTeamEnum.Bindings.__CreatePropertyBinding__Blue();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Red");
			if (bVar1) {
				if ((typeof(CustomLogicTeamEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicTeamEnum.Bindings.__CreatePropertyBinding__Red();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicTeamEnum.Bindings.__CreatePropertyBinding__Red();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Titan");
			if (bVar1) {
				pCVar2 = CustomLogicTeamEnum.Bindings.__CreatePropertyBinding__Titan();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Human");
			if (bVar1) {
				pCVar2 = CustomLogicTeamEnum.Bindings.__CreatePropertyBinding__Human();
				return (ICLMemberBinding)pCVar2;
			}
			pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicTeamEnum not found");
			pSVar3 = String.Concat(pSVar3, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar3);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicTeamEnum_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x60030E3")]
		[Address(RVA = "0x59AF3C0", Offset = "0x59AE3C0", VA = "0x59AF3C0")]
		public static CLPropertyBinding<CustomLogicTeamEnum> __CreatePropertyBinding__None()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTeamEnum.c (CustomLogic.CustomLogicTeamEnum.Bindings$$__CreatePropertyBinding__None): 2 lines keep C-only constructs
			Func<CustomLogicTeamEnum, object> __this;
			CLPropertyBinding<CustomLogicTeamEnum> __this_00;

			__this = new Func<CustomLogicTeamEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTeamEnum_Bindings___CreatePropertyBinding__None_g____getter_2_0);
			__this_00 = new CLPropertyBinding<CustomLogicTeamEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60030E4")]
		[Address(RVA = "0x59AF460", Offset = "0x59AE460", VA = "0x59AF460")]
		public static CLPropertyBinding<CustomLogicTeamEnum> __CreatePropertyBinding__Blue()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTeamEnum.c (CustomLogic.CustomLogicTeamEnum.Bindings$$__CreatePropertyBinding__Blue): 2 lines keep C-only constructs
			Func<CustomLogicTeamEnum, object> __this;
			CLPropertyBinding<CustomLogicTeamEnum> __this_00;

			__this = new Func<CustomLogicTeamEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTeamEnum_Bindings___CreatePropertyBinding__Blue_g____getter_3_0);
			__this_00 = new CLPropertyBinding<CustomLogicTeamEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60030E5")]
		[Address(RVA = "0x59AF500", Offset = "0x59AE500", VA = "0x59AF500")]
		public static CLPropertyBinding<CustomLogicTeamEnum> __CreatePropertyBinding__Red()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTeamEnum.c (CustomLogic.CustomLogicTeamEnum.Bindings$$__CreatePropertyBinding__Red): 2 lines keep C-only constructs
			Func<CustomLogicTeamEnum, object> __this;
			CLPropertyBinding<CustomLogicTeamEnum> __this_00;

			__this = new Func<CustomLogicTeamEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTeamEnum_Bindings___CreatePropertyBinding__Red_g____getter_4_0);
			__this_00 = new CLPropertyBinding<CustomLogicTeamEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60030E6")]
		[Address(RVA = "0x59AF5A0", Offset = "0x59AE5A0", VA = "0x59AF5A0")]
		public static CLPropertyBinding<CustomLogicTeamEnum> __CreatePropertyBinding__Titan()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTeamEnum.c (CustomLogic.CustomLogicTeamEnum.Bindings$$__CreatePropertyBinding__Titan): 2 lines keep C-only constructs
			Func<CustomLogicTeamEnum, object> __this;
			CLPropertyBinding<CustomLogicTeamEnum> __this_00;

			__this = new Func<CustomLogicTeamEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTeamEnum_Bindings___CreatePropertyBinding__Titan_g____getter_5_0);
			__this_00 = new CLPropertyBinding<CustomLogicTeamEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60030E7")]
		[Address(RVA = "0x59AF640", Offset = "0x59AE640", VA = "0x59AF640")]
		public static CLPropertyBinding<CustomLogicTeamEnum> __CreatePropertyBinding__Human()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTeamEnum.c (CustomLogic.CustomLogicTeamEnum.Bindings$$__CreatePropertyBinding__Human): 2 lines keep C-only constructs
			Func<CustomLogicTeamEnum, object> __this;
			CLPropertyBinding<CustomLogicTeamEnum> __this_00;

			__this = new Func<CustomLogicTeamEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTeamEnum_Bindings___CreatePropertyBinding__Human_g____getter_6_0);
			__this_00 = new CLPropertyBinding<CustomLogicTeamEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x17000877")]
	public static string None
	{
		[Token(Token = "0x60030D8")]
		[Address(RVA = "0x59AEDE0", Offset = "0x59ADDE0", VA = "0x59AEDE0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTeamEnum.c (CustomLogic.CustomLogicTeamEnum$$get_None): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546ab6 == false) {
				Il2CppMethodInitialized_07546ab6 = true;
				uVar1 = (typeof(TeamInfo)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TeamInfo)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TeamInfo.None;
			}
			return *(String*)((long)(typeof(TeamInfo)).static_fields + 0x10);
		}
	}

	[Token(Token = "0x17000878")]
	public static string Blue
	{
		[Token(Token = "0x60030D9")]
		[Address(RVA = "0x59AEE50", Offset = "0x59ADE50", VA = "0x59AEE50")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTeamEnum.c (CustomLogic.CustomLogicTeamEnum$$get_Blue): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546ab7 == false) {
				Il2CppMethodInitialized_07546ab7 = true;
				uVar1 = (typeof(TeamInfo)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TeamInfo)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TeamInfo.Blue;
			}
			return *(String*)(typeof(TeamInfo)).static_fields;
		}
	}

	[Token(Token = "0x17000879")]
	public static string Red
	{
		[Token(Token = "0x60030DA")]
		[Address(RVA = "0x59AEEC0", Offset = "0x59ADEC0", VA = "0x59AEEC0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTeamEnum.c (CustomLogic.CustomLogicTeamEnum$$get_Red): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546ab8 == false) {
				Il2CppMethodInitialized_07546ab8 = true;
				uVar1 = (typeof(TeamInfo)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TeamInfo)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TeamInfo.Red;
			}
			return *(String*)((long)(typeof(TeamInfo)).static_fields + 8);
		}
	}

	[Token(Token = "0x1700087A")]
	public static string Titan
	{
		[Token(Token = "0x60030DB")]
		[Address(RVA = "0x59AEF30", Offset = "0x59ADF30", VA = "0x59AEF30")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTeamEnum.c (CustomLogic.CustomLogicTeamEnum$$get_Titan): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546ab9 == false) {
				Il2CppMethodInitialized_07546ab9 = true;
				uVar1 = (typeof(TeamInfo)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TeamInfo)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TeamInfo.Titan;
			}
			return *(String*)((long)(typeof(TeamInfo)).static_fields + 0x18);
		}
	}

	[Token(Token = "0x1700087B")]
	public static string Human
	{
		[Token(Token = "0x60030DC")]
		[Address(RVA = "0x59AEFA0", Offset = "0x59ADFA0", VA = "0x59AEFA0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTeamEnum.c (CustomLogic.CustomLogicTeamEnum$$get_Human): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546aba == false) {
				Il2CppMethodInitialized_07546aba = true;
				uVar1 = (typeof(TeamInfo)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(TeamInfo)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return TeamInfo.Human;
			}
			return *(String*)((long)(typeof(TeamInfo)).static_fields + 0x20);
		}
	}

	[Token(Token = "0x1700087C")]
	public override string ClassName
	{
		[Token(Token = "0x60030DD")]
		[Address(RVA = "0x59AF010", Offset = "0x59AE010", VA = "0x59AF010", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTeamEnum.c (CustomLogic.CustomLogicTeamEnum$$get_ClassName): clean
			return "TeamEnum";
		}
	}

	[Token(Token = "0x1700087D")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60030DE")]
		[Address(RVA = "0x59AF040", Offset = "0x59AE040", VA = "0x59AF040", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTeamEnum.c (CustomLogic.CustomLogicTeamEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x1700087E")]
	public override bool IsStatic
	{
		[Token(Token = "0x60030DF")]
		[Address(RVA = "0x59AF050", Offset = "0x59AE050", VA = "0x59AF050", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTeamEnum.c (CustomLogic.CustomLogicTeamEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x1700087F")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60030E0")]
		[Address(RVA = "0x59AF060", Offset = "0x59AE060", VA = "0x59AF060", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTeamEnum.c (CustomLogic.CustomLogicTeamEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x60030D7")]
	[Address(RVA = "0x59AED70", Offset = "0x59ADD70", VA = "0x59AED70")]
	public CustomLogicTeamEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicTeamEnum.c (CustomLogic.CustomLogicTeamEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07546ab5 == false) {
			Il2CppMethodInitialized_07546ab5 = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicTeamEnum.c.

	// CustomLogic.CustomLogicTeamEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"None");
		__this.Add((Il2CppObject *)"Blue");
		__this.Add((Il2CppObject *)"Red");
		__this.Add((Il2CppObject *)"Titan");
		__this.Add((Il2CppObject *)"Human");
		CustomLogicTeamEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicTeamEnum.Bindings$$<__CreatePropertyBinding__None>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__None_g____getter_2_0(CustomLogicTeamEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546ca5 == false) {
			Il2CppMethodInitialized_07546ca5 = true;
			uVar1 = (typeof(TeamInfo)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TeamInfo)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TeamInfo.None;
		}
		return *(object*)((long)(typeof(TeamInfo)).static_fields + 0x10);
	}

	// CustomLogic.CustomLogicTeamEnum.Bindings$$<__CreatePropertyBinding__Blue>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Blue_g____getter_3_0(CustomLogicTeamEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546ca6 == false) {
			Il2CppMethodInitialized_07546ca6 = true;
			uVar1 = (typeof(TeamInfo)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TeamInfo)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TeamInfo.Blue;
		}
		return *(object*)(typeof(TeamInfo)).static_fields;
	}

	// CustomLogic.CustomLogicTeamEnum.Bindings$$<__CreatePropertyBinding__Red>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Red_g____getter_4_0(CustomLogicTeamEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546ca7 == false) {
			Il2CppMethodInitialized_07546ca7 = true;
			uVar1 = (typeof(TeamInfo)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TeamInfo)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TeamInfo.Red;
		}
		return *(object*)((long)(typeof(TeamInfo)).static_fields + 8);
	}

	// CustomLogic.CustomLogicTeamEnum.Bindings$$<__CreatePropertyBinding__Titan>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__Titan_g____getter_5_0(CustomLogicTeamEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546ca8 == false) {
			Il2CppMethodInitialized_07546ca8 = true;
			uVar1 = (typeof(TeamInfo)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TeamInfo)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TeamInfo.Titan;
		}
		return *(object*)((long)(typeof(TeamInfo)).static_fields + 0x18);
	}

	// CustomLogic.CustomLogicTeamEnum.Bindings$$<__CreatePropertyBinding__Human>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__Human_g____getter_6_0(CustomLogicTeamEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546ca9 == false) {
			Il2CppMethodInitialized_07546ca9 = true;
			uVar1 = (typeof(TeamInfo)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TeamInfo)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)TeamInfo.Human;
		}
		return *(object*)((long)(typeof(TeamInfo)).static_fields + 0x20);
	}
}
