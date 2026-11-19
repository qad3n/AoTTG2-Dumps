// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicCharacterTypeEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicCharacterTypeEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20004F3")]
[CompilerGenerated]
internal class CustomLogicCharacterTypeEnum : BuiltinClassInstance
{
	[Token(Token = "0x20004F4")]
	public static class Factory
	{
		[Token(Token = "0x60027C4")]
		[Address(RVA = "0x595A150", Offset = "0x5959150", VA = "0x595A150")]
		public static CustomLogicCharacterTypeEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterTypeEnum.c (CustomLogic.CustomLogicCharacterTypeEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicCharacterTypeEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicCharacterTypeEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicCharacterTypeEnum();
			return (CustomLogicCharacterTypeEnum)__this;
		}
	}

	[Token(Token = "0x20004F5")]
	public static class Bindings
	{
		[Token(Token = "0x40017C2")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60027C5")]
		[Address(RVA = "0x595A270", Offset = "0x5959270", VA = "0x595A270")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterTypeEnum.c (CustomLogic.CustomLogicCharacterTypeEnum.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicCharacterTypeEnum> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "Human");
			if (bVar1) {
				if ((typeof(CustomLogicCharacterTypeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicCharacterTypeEnum.Bindings.__CreatePropertyBinding__Human();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicCharacterTypeEnum.Bindings.__CreatePropertyBinding__Human();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Titan");
			if (bVar1) {
				if ((typeof(CustomLogicCharacterTypeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicCharacterTypeEnum.Bindings.__CreatePropertyBinding__Titan();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicCharacterTypeEnum.Bindings.__CreatePropertyBinding__Titan();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Shifter");
			if (!bVar1) {
				pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
				str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicCharacterTypeEnum not found");
				pSVar3 = String.Concat(pSVar3, name, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this = (Exception)il2cpp_codegen_object_new(klass);
				__this = new Exception(pSVar3);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings_CreateMemberBinding);
				throw (object)__this;
			}
			if ((typeof(CustomLogicCharacterTypeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
				pCVar2 = CustomLogicCharacterTypeEnum.Bindings.__CreatePropertyBinding__Shifter();
				return (ICLMemberBinding)pCVar2;
			}
			pCVar2 = CustomLogicCharacterTypeEnum.Bindings.__CreatePropertyBinding__Shifter();
			return (ICLMemberBinding)pCVar2;
		}

		[Token(Token = "0x60027C6")]
		[Address(RVA = "0x595A400", Offset = "0x5959400", VA = "0x595A400")]
		public static CLPropertyBinding<CustomLogicCharacterTypeEnum> __CreatePropertyBinding__Human()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterTypeEnum.c (CustomLogic.CustomLogicCharacterTypeEnum.Bindings$$__CreatePropertyBinding__Human): 2 lines keep C-only constructs
			Func<CustomLogicCharacterTypeEnum, object> __this;
			CLPropertyBinding<CustomLogicCharacterTypeEnum> __this_00;

			__this = new Func<CustomLogicCharacterTypeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings___CreatePropertyBinding__Human_g____getter_2_0);
			__this_00 = new CLPropertyBinding<CustomLogicCharacterTypeEnum>((System_Func_T__object__o)__this, null) ;
			return __this_00;
		}

		[Token(Token = "0x60027C7")]
		[Address(RVA = "0x595A4A0", Offset = "0x59594A0", VA = "0x595A4A0")]
		public static CLPropertyBinding<CustomLogicCharacterTypeEnum> __CreatePropertyBinding__Titan()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterTypeEnum.c (CustomLogic.CustomLogicCharacterTypeEnum.Bindings$$__CreatePropertyBinding__Titan): 2 lines keep C-only constructs
			Func<CustomLogicCharacterTypeEnum, object> __this;
			CLPropertyBinding<CustomLogicCharacterTypeEnum> __this_00;

			__this = new Func<CustomLogicCharacterTypeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings___CreatePropertyBinding__Titan_g____getter_3_0);
			__this_00 = new CLPropertyBinding<CustomLogicCharacterTypeEnum>((System_Func_T__object__o)__this, null) ;
			return __this_00;
		}

		[Token(Token = "0x60027C8")]
		[Address(RVA = "0x595A540", Offset = "0x5959540", VA = "0x595A540")]
		public static CLPropertyBinding<CustomLogicCharacterTypeEnum> __CreatePropertyBinding__Shifter()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterTypeEnum.c (CustomLogic.CustomLogicCharacterTypeEnum.Bindings$$__CreatePropertyBinding__Shifter): 2 lines keep C-only constructs
			Func<CustomLogicCharacterTypeEnum, object> __this;
			CLPropertyBinding<CustomLogicCharacterTypeEnum> __this_00;

			__this = new Func<CustomLogicCharacterTypeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicCharacterTypeEnum_Bindings___CreatePropertyBinding__Shifter_g____getter_4);
			__this_00 = new CLPropertyBinding<CustomLogicCharacterTypeEnum>((System_Func_T__object__o)__this, null) ;
			return __this_00;
		}
	}

	[Token(Token = "0x17000534")]
	public static string Human
	{
		[Token(Token = "0x60027BD")]
		[Address(RVA = "0x5959FA0", Offset = "0x5958FA0", VA = "0x5959FA0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterTypeEnum.c (CustomLogic.CustomLogicCharacterTypeEnum$$get_Human): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075462f2 == false) {
				Il2CppMethodInitialized_075462f2 = true;
				uVar1 = (typeof(PlayerCharacter)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(PlayerCharacter)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return PlayerCharacter.Human;
			}
			return *(String*)(typeof(PlayerCharacter)).static_fields;
		}
	}

	[Token(Token = "0x17000535")]
	public static string Titan
	{
		[Token(Token = "0x60027BE")]
		[Address(RVA = "0x595A010", Offset = "0x5959010", VA = "0x595A010")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterTypeEnum.c (CustomLogic.CustomLogicCharacterTypeEnum$$get_Titan): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075462f3 == false) {
				Il2CppMethodInitialized_075462f3 = true;
				uVar1 = (typeof(PlayerCharacter)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(PlayerCharacter)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return PlayerCharacter.Titan;
			}
			return *(String*)((long)(typeof(PlayerCharacter)).static_fields + 8);
		}
	}

	[Token(Token = "0x17000536")]
	public static string Shifter
	{
		[Token(Token = "0x60027BF")]
		[Address(RVA = "0x595A080", Offset = "0x5959080", VA = "0x595A080")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterTypeEnum.c (CustomLogic.CustomLogicCharacterTypeEnum$$get_Shifter): clean
			uint uVar1;

			if (Il2CppMethodInitialized_075462f4 == false) {
				Il2CppMethodInitialized_075462f4 = true;
				uVar1 = (typeof(PlayerCharacter)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(PlayerCharacter)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return PlayerCharacter.Shifter;
			}
			return *(String*)((long)(typeof(PlayerCharacter)).static_fields + 0x10);
		}
	}

	[Token(Token = "0x17000537")]
	public override string ClassName
	{
		[Token(Token = "0x60027C0")]
		[Address(RVA = "0x595A0F0", Offset = "0x59590F0", VA = "0x595A0F0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterTypeEnum.c (CustomLogic.CustomLogicCharacterTypeEnum$$get_ClassName): clean
			return "CharacterTypeEnum";
		}
	}

	[Token(Token = "0x17000538")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60027C1")]
		[Address(RVA = "0x595A120", Offset = "0x5959120", VA = "0x595A120", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterTypeEnum.c (CustomLogic.CustomLogicCharacterTypeEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000539")]
	public override bool IsStatic
	{
		[Token(Token = "0x60027C2")]
		[Address(RVA = "0x595A130", Offset = "0x5959130", VA = "0x595A130", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterTypeEnum.c (CustomLogic.CustomLogicCharacterTypeEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x1700053A")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60027C3")]
		[Address(RVA = "0x595A140", Offset = "0x5959140", VA = "0x595A140", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicCharacterTypeEnum.c (CustomLogic.CustomLogicCharacterTypeEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x60027BC")]
	[Address(RVA = "0x5959F30", Offset = "0x5958F30", VA = "0x5959F30")]
	public CustomLogicCharacterTypeEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCharacterTypeEnum.c (CustomLogic.CustomLogicCharacterTypeEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_075462f1 == false) {
			Il2CppMethodInitialized_075462f1 = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicCharacterTypeEnum.c.

	// CustomLogic.CustomLogicCharacterTypeEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Human");
		__this.Add((Il2CppObject *)"Titan");
		__this.Add((Il2CppObject *)"Shifter");
		CustomLogicCharacterTypeEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicCharacterTypeEnum.Bindings$$<__CreatePropertyBinding__Human>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__Human_g____getter_2_0(CustomLogicCharacterTypeEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754657a == false) {
			Il2CppMethodInitialized_0754657a = true;
			uVar1 = (typeof(PlayerCharacter)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(PlayerCharacter)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)PlayerCharacter.Human;
		}
		return *(object*)(typeof(PlayerCharacter)).static_fields;
	}

	// CustomLogic.CustomLogicCharacterTypeEnum.Bindings$$<__CreatePropertyBinding__Titan>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Titan_g____getter_3_0(CustomLogicCharacterTypeEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754657b == false) {
			Il2CppMethodInitialized_0754657b = true;
			uVar1 = (typeof(PlayerCharacter)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(PlayerCharacter)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)PlayerCharacter.Titan;
		}
		return *(object*)((long)(typeof(PlayerCharacter)).static_fields + 8);
	}

	// CustomLogic.CustomLogicCharacterTypeEnum.Bindings$$<__CreatePropertyBinding__Shifter>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Shifter_g____getter_4_0(CustomLogicCharacterTypeEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754657c == false) {
			Il2CppMethodInitialized_0754657c = true;
			uVar1 = (typeof(PlayerCharacter)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(PlayerCharacter)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)PlayerCharacter.Shifter;
		}
		return *(object*)((long)(typeof(PlayerCharacter)).static_fields + 0x10);
	}
}
