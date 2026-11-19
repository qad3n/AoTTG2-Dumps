// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicWeaponEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicWeaponEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200059C")]
[CompilerGenerated]
internal class CustomLogicWeaponEnum : BuiltinClassInstance
{
	[Token(Token = "0x200059D")]
	public static class Factory
	{
		[Token(Token = "0x6003354")]
		[Address(RVA = "0x59C3700", Offset = "0x59C2700", VA = "0x59C3700")]
		public static CustomLogicWeaponEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWeaponEnum.c (CustomLogic.CustomLogicWeaponEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicWeaponEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicWeaponEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicWeaponEnum();
			return (CustomLogicWeaponEnum)__this;
		}
	}

	[Token(Token = "0x200059E")]
	public static class Bindings
	{
		[Token(Token = "0x4001897")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6003355")]
		[Address(RVA = "0x59C3820", Offset = "0x59C2820", VA = "0x59C3820")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWeaponEnum.c (CustomLogic.CustomLogicWeaponEnum.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicWeaponEnum> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "Blade");
			if (bVar1) {
				if ((typeof(CustomLogicWeaponEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicWeaponEnum.Bindings.__CreatePropertyBinding__Blade();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicWeaponEnum.Bindings.__CreatePropertyBinding__Blade();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "AHSS");
			if (bVar1) {
				if ((typeof(CustomLogicWeaponEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicWeaponEnum.Bindings.__CreatePropertyBinding__AHSS() ;
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicWeaponEnum.Bindings.__CreatePropertyBinding__AHSS();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "APG");
			if (bVar1) {
				if ((typeof(CustomLogicWeaponEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicWeaponEnum.Bindings.__CreatePropertyBinding__APG();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicWeaponEnum.Bindings.__CreatePropertyBinding__APG();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Thunderspear");
			if (bVar1) {
				pCVar2 = CustomLogicWeaponEnum.Bindings.__CreatePropertyBinding__Thunderspear();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Unarmed");
			if (bVar1) {
				pCVar2 = CustomLogicWeaponEnum.Bindings.__CreatePropertyBinding__Unarmed();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Civilian");
			if (bVar1) {
				pCVar2 = CustomLogicWeaponEnum.Bindings.__CreatePropertyBinding__Civilian();
				return (ICLMemberBinding)pCVar2;
			}
			pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicWeaponEnum not found");
			pSVar3 = String.Concat(pSVar3, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar3);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicWeaponEnum_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6003356")]
		[Address(RVA = "0x59C3A90", Offset = "0x59C2A90", VA = "0x59C3A90")]
		public static CLPropertyBinding<CustomLogicWeaponEnum> __CreatePropertyBinding__Blade()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWeaponEnum.c (CustomLogic.CustomLogicWeaponEnum.Bindings$$__CreatePropertyBinding__Blade): 2 lines keep C-only constructs
			Func<CustomLogicWeaponEnum, object> __this;
			CLPropertyBinding<CustomLogicWeaponEnum> __this_00;

			__this = new Func<CustomLogicWeaponEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWeaponEnum_Bindings___CreatePropertyBinding__Blade_g____getter_2_0);
			__this_00 = new CLPropertyBinding<CustomLogicWeaponEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003357")]
		[Address(RVA = "0x59C3B30", Offset = "0x59C2B30", VA = "0x59C3B30")]
		public static CLPropertyBinding<CustomLogicWeaponEnum> __CreatePropertyBinding__AHSS()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWeaponEnum.c (CustomLogic.CustomLogicWeaponEnum.Bindings$$__CreatePropertyBinding__AHSS): 2 lines keep C-only constructs
			Func<CustomLogicWeaponEnum, object> __this;
			CLPropertyBinding<CustomLogicWeaponEnum> __this_00;

			__this = new Func<CustomLogicWeaponEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWeaponEnum_Bindings___CreatePropertyBinding__AHSS_g____getter_3_0);
			__this_00 = new CLPropertyBinding<CustomLogicWeaponEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003358")]
		[Address(RVA = "0x59C3BD0", Offset = "0x59C2BD0", VA = "0x59C3BD0")]
		public static CLPropertyBinding<CustomLogicWeaponEnum> __CreatePropertyBinding__APG()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWeaponEnum.c (CustomLogic.CustomLogicWeaponEnum.Bindings$$__CreatePropertyBinding__APG): 2 lines keep C-only constructs
			Func<CustomLogicWeaponEnum, object> __this;
			CLPropertyBinding<CustomLogicWeaponEnum> __this_00;

			__this = new Func<CustomLogicWeaponEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWeaponEnum_Bindings___CreatePropertyBinding__APG_g____getter_4_0);
			__this_00 = new CLPropertyBinding<CustomLogicWeaponEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003359")]
		[Address(RVA = "0x59C3C70", Offset = "0x59C2C70", VA = "0x59C3C70")]
		public static CLPropertyBinding<CustomLogicWeaponEnum> __CreatePropertyBinding__Thunderspear()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWeaponEnum.c (CustomLogic.CustomLogicWeaponEnum.Bindings$$__CreatePropertyBinding__Thunderspear): 2 lines keep C-only constructs
			Func<CustomLogicWeaponEnum, object> __this;
			CLPropertyBinding<CustomLogicWeaponEnum> __this_00;

			__this = new Func<CustomLogicWeaponEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWeaponEnum_Bindings___CreatePropertyBinding__Thunderspear_g____getter_5_0);
			__this_00 = new CLPropertyBinding<CustomLogicWeaponEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600335A")]
		[Address(RVA = "0x59C3D10", Offset = "0x59C2D10", VA = "0x59C3D10")]
		public static CLPropertyBinding<CustomLogicWeaponEnum> __CreatePropertyBinding__Unarmed()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWeaponEnum.c (CustomLogic.CustomLogicWeaponEnum.Bindings$$__CreatePropertyBinding__Unarmed): 2 lines keep C-only constructs
			Func<CustomLogicWeaponEnum, object> __this;
			CLPropertyBinding<CustomLogicWeaponEnum> __this_00;

			__this = new Func<CustomLogicWeaponEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWeaponEnum_Bindings___CreatePropertyBinding__Unarmed_g____getter_6_0);
			__this_00 = new CLPropertyBinding<CustomLogicWeaponEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x600335B")]
		[Address(RVA = "0x59C3DB0", Offset = "0x59C2DB0", VA = "0x59C3DB0")]
		public static CLPropertyBinding<CustomLogicWeaponEnum> __CreatePropertyBinding__Civilian()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWeaponEnum.c (CustomLogic.CustomLogicWeaponEnum.Bindings$$__CreatePropertyBinding__Civilian): 2 lines keep C-only constructs
			Func<CustomLogicWeaponEnum, object> __this;
			CLPropertyBinding<CustomLogicWeaponEnum> __this_00;

			__this = new Func<CustomLogicWeaponEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicWeaponEnum_Bindings___CreatePropertyBinding__Civilian_g____getter_7_0);
			__this_00 = new CLPropertyBinding<CustomLogicWeaponEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x17000955")]
	public static string Blade
	{
		[Token(Token = "0x600334A")]
		[Address(RVA = "0x59C3400", Offset = "0x59C2400", VA = "0x59C3400")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWeaponEnum.c (CustomLogic.CustomLogicWeaponEnum$$get_Blade): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546c45 == false) {
				Il2CppMethodInitialized_07546c45 = true;
				uVar1 = (typeof(HumanLoadout)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanLoadout)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanLoadout.Blade;
			}
			return *(String*)(typeof(HumanLoadout)).static_fields;
		}
	}

	[Token(Token = "0x17000956")]
	public static string AHSS
	{
		[Token(Token = "0x600334B")]
		[Address(RVA = "0x59C3470", Offset = "0x59C2470", VA = "0x59C3470")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWeaponEnum.c (CustomLogic.CustomLogicWeaponEnum$$get_AHSS): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546c46 == false) {
				Il2CppMethodInitialized_07546c46 = true;
				uVar1 = (typeof(HumanLoadout)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanLoadout)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanLoadout.AHSS;
			}
			return *(String*)((long)(typeof(HumanLoadout)).static_fields + 8);
		}
	}

	[Token(Token = "0x17000957")]
	public static string APG
	{
		[Token(Token = "0x600334C")]
		[Address(RVA = "0x59C34E0", Offset = "0x59C24E0", VA = "0x59C34E0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWeaponEnum.c (CustomLogic.CustomLogicWeaponEnum$$get_APG): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546c47 == false) {
				Il2CppMethodInitialized_07546c47 = true;
				uVar1 = (typeof(HumanLoadout)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanLoadout)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanLoadout.APG;
			}
			return *(String*)((long)(typeof(HumanLoadout)).static_fields + 0x18);
		}
	}

	[Token(Token = "0x17000958")]
	public static string Thunderspear
	{
		[Token(Token = "0x600334D")]
		[Address(RVA = "0x59C3550", Offset = "0x59C2550", VA = "0x59C3550")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWeaponEnum.c (CustomLogic.CustomLogicWeaponEnum$$get_Thunderspear): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546c48 == false) {
				Il2CppMethodInitialized_07546c48 = true;
				uVar1 = (typeof(HumanLoadout)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanLoadout)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanLoadout.Thunderspear;
			}
			return *(String*)((long)(typeof(HumanLoadout)).static_fields + 0x10);
		}
	}

	[Token(Token = "0x17000959")]
	public static string Unarmed
	{
		[Token(Token = "0x600334E")]
		[Address(RVA = "0x59C35C0", Offset = "0x59C25C0", VA = "0x59C35C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWeaponEnum.c (CustomLogic.CustomLogicWeaponEnum$$get_Unarmed): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546c49 == false) {
				Il2CppMethodInitialized_07546c49 = true;
				uVar1 = (typeof(HumanLoadout)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanLoadout)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanLoadout.Unarmed;
			}
			return *(String*)((long)(typeof(HumanLoadout)).static_fields + 0x20);
		}
	}

	[Token(Token = "0x1700095A")]
	public static string Civilian
	{
		[Token(Token = "0x600334F")]
		[Address(RVA = "0x59C3630", Offset = "0x59C2630", VA = "0x59C3630")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWeaponEnum.c (CustomLogic.CustomLogicWeaponEnum$$get_Civilian): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546c4a == false) {
				Il2CppMethodInitialized_07546c4a = true;
				uVar1 = (typeof(HumanLoadout)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(HumanLoadout)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return HumanLoadout.Civilian;
			}
			return *(String*)((long)(typeof(HumanLoadout)).static_fields + 0x28);
		}
	}

	[Token(Token = "0x1700095B")]
	public override string ClassName
	{
		[Token(Token = "0x6003350")]
		[Address(RVA = "0x59C36A0", Offset = "0x59C26A0", VA = "0x59C36A0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWeaponEnum.c (CustomLogic.CustomLogicWeaponEnum$$get_ClassName): clean
			return "WeaponEnum";
		}
	}

	[Token(Token = "0x1700095C")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6003351")]
		[Address(RVA = "0x59C36D0", Offset = "0x59C26D0", VA = "0x59C36D0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWeaponEnum.c (CustomLogic.CustomLogicWeaponEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x1700095D")]
	public override bool IsStatic
	{
		[Token(Token = "0x6003352")]
		[Address(RVA = "0x59C36E0", Offset = "0x59C26E0", VA = "0x59C36E0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWeaponEnum.c (CustomLogic.CustomLogicWeaponEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x1700095E")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6003353")]
		[Address(RVA = "0x59C36F0", Offset = "0x59C26F0", VA = "0x59C36F0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicWeaponEnum.c (CustomLogic.CustomLogicWeaponEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6003349")]
	[Address(RVA = "0x59C3390", Offset = "0x59C2390", VA = "0x59C3390")]
	public CustomLogicWeaponEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicWeaponEnum.c (CustomLogic.CustomLogicWeaponEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07546c44 == false) {
			Il2CppMethodInitialized_07546c44 = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicWeaponEnum.c.

	// CustomLogic.CustomLogicWeaponEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Blade");
		__this.Add((Il2CppObject *)"AHSS");
		__this.Add((Il2CppObject *)"APG");
		__this.Add((Il2CppObject *)"Thunderspear");
		__this.Add((Il2CppObject *)"Unarmed");
		__this.Add((Il2CppObject *)"Civilian");
		CustomLogicWeaponEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicWeaponEnum.Bindings$$<__CreatePropertyBinding__Blade>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__Blade_g____getter_2_0(CustomLogicWeaponEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07545fd3 == false) {
			Il2CppMethodInitialized_07545fd3 = true;
			uVar1 = (typeof(HumanLoadout)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanLoadout)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanLoadout.Blade;
		}
		return *(object*)(typeof(HumanLoadout)).static_fields;
	}

	// CustomLogic.CustomLogicWeaponEnum.Bindings$$<__CreatePropertyBinding__AHSS>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__AHSS_g____getter_3_0(CustomLogicWeaponEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546cd7 == false) {
			Il2CppMethodInitialized_07546cd7 = true;
			uVar1 = (typeof(HumanLoadout)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanLoadout)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanLoadout.AHSS;
		}
		return *(object*)((long)(typeof(HumanLoadout)).static_fields + 8);
	}

	// CustomLogic.CustomLogicWeaponEnum.Bindings$$<__CreatePropertyBinding__APG>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__APG_g____getter_4_0(CustomLogicWeaponEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546cd8 == false) {
			Il2CppMethodInitialized_07546cd8 = true;
			uVar1 = (typeof(HumanLoadout)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanLoadout)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanLoadout.APG;
		}
		return *(object*)((long)(typeof(HumanLoadout)).static_fields + 0x18);
	}

	// CustomLogic.CustomLogicWeaponEnum.Bindings$$<__CreatePropertyBinding__Thunderspear>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__Thunderspear_g____getter_5_0(CustomLogicWeaponEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07545fd4 == false) {
			Il2CppMethodInitialized_07545fd4 = true;
			uVar1 = (typeof(HumanLoadout)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanLoadout)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanLoadout.Thunderspear;
		}
		return *(object*)((long)(typeof(HumanLoadout)).static_fields + 0x10);
	}

	// CustomLogic.CustomLogicWeaponEnum.Bindings$$<__CreatePropertyBinding__Unarmed>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__Unarmed_g____getter_6_0(CustomLogicWeaponEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546cd9 == false) {
			Il2CppMethodInitialized_07546cd9 = true;
			uVar1 = (typeof(HumanLoadout)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanLoadout)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanLoadout.Unarmed;
		}
		return *(object*)((long)(typeof(HumanLoadout)).static_fields + 0x20);
	}

	// CustomLogic.CustomLogicWeaponEnum.Bindings$$<__CreatePropertyBinding__Civilian>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__Civilian_g____getter_7_0(CustomLogicWeaponEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546cda == false) {
			Il2CppMethodInitialized_07546cda = true;
			uVar1 = (typeof(HumanLoadout)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanLoadout)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)HumanLoadout.Civilian;
		}
		return *(object*)((long)(typeof(HumanLoadout)).static_fields + 0x28);
	}
}
