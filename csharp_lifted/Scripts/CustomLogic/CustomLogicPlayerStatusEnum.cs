// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicPlayerStatusEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicPlayerStatusEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000557")]
[CompilerGenerated]
internal class CustomLogicPlayerStatusEnum : BuiltinClassInstance
{
	[Token(Token = "0x2000558")]
	public static class Factory
	{
		[Token(Token = "0x6002E18")]
		[Address(RVA = "0x5998F60", Offset = "0x5997F60", VA = "0x5998F60")]
		public static CustomLogicPlayerStatusEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerStatusEnum.c (CustomLogic.CustomLogicPlayerStatusEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicPlayerStatusEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicPlayerStatusEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicPlayerStatusEnum();
			return (CustomLogicPlayerStatusEnum)__this;
		}
	}

	[Token(Token = "0x2000559")]
	public static class Bindings
	{
		[Token(Token = "0x400187A")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002E19")]
		[Address(RVA = "0x5999080", Offset = "0x5998080", VA = "0x5999080")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerStatusEnum.c (CustomLogic.CustomLogicPlayerStatusEnum.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicPlayerStatusEnum> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "Alive");
			if (bVar1) {
				if ((typeof(CustomLogicPlayerStatusEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicPlayerStatusEnum.Bindings.__CreatePropertyBinding__Alive();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicPlayerStatusEnum.Bindings.__CreatePropertyBinding__Alive();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Dead");
			if (bVar1) {
				if ((typeof(CustomLogicPlayerStatusEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicPlayerStatusEnum.Bindings.__CreatePropertyBinding__Dead();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicPlayerStatusEnum.Bindings.__CreatePropertyBinding__Dead();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Spectating");
			if (!bVar1) {
				pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
				str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicPlayerStatusEnum not found");
				pSVar3 = String.Concat(pSVar3, name, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this = (Exception)il2cpp_codegen_object_new(klass);
				__this = new Exception(pSVar3);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings_CreateMemberBinding);
				throw (object)__this;
			}
			if ((typeof(CustomLogicPlayerStatusEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
				pCVar2 = CustomLogicPlayerStatusEnum.Bindings.__CreatePropertyBinding__Spectating();
				return (ICLMemberBinding)pCVar2;
			}
			pCVar2 = CustomLogicPlayerStatusEnum.Bindings.__CreatePropertyBinding__Spectating();
			return (ICLMemberBinding)pCVar2;
		}

		[Token(Token = "0x6002E1A")]
		[Address(RVA = "0x5999210", Offset = "0x5998210", VA = "0x5999210")]
		public static CLPropertyBinding<CustomLogicPlayerStatusEnum> __CreatePropertyBinding__Alive()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerStatusEnum.c (CustomLogic.CustomLogicPlayerStatusEnum.Bindings$$__CreatePropertyBinding__Alive): 2 lines keep C-only constructs
			Func<CustomLogicPlayerStatusEnum, object> __this;
			CLPropertyBinding<CustomLogicPlayerStatusEnum> __this_00;

			__this = new Func<CustomLogicPlayerStatusEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings___CreatePropertyBinding__Alive_g____getter_2_0);
			__this_00 = new CLPropertyBinding<CustomLogicPlayerStatusEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002E1B")]
		[Address(RVA = "0x59992B0", Offset = "0x59982B0", VA = "0x59992B0")]
		public static CLPropertyBinding<CustomLogicPlayerStatusEnum> __CreatePropertyBinding__Dead()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerStatusEnum.c (CustomLogic.CustomLogicPlayerStatusEnum.Bindings$$__CreatePropertyBinding__Dead): 2 lines keep C-only constructs
			Func<CustomLogicPlayerStatusEnum, object> __this;
			CLPropertyBinding<CustomLogicPlayerStatusEnum> __this_00;

			__this = new Func<CustomLogicPlayerStatusEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings___CreatePropertyBinding__Dead_g____getter_3_0);
			__this_00 = new CLPropertyBinding<CustomLogicPlayerStatusEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002E1C")]
		[Address(RVA = "0x5999350", Offset = "0x5998350", VA = "0x5999350")]
		public static CLPropertyBinding<CustomLogicPlayerStatusEnum> __CreatePropertyBinding__Spectating()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerStatusEnum.c (CustomLogic.CustomLogicPlayerStatusEnum.Bindings$$__CreatePropertyBinding__Spectating): 2 lines keep C-only constructs
			Func<CustomLogicPlayerStatusEnum, object> __this;
			CLPropertyBinding<CustomLogicPlayerStatusEnum> __this_00;

			__this = new Func<CustomLogicPlayerStatusEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicPlayerStatusEnum_Bindings___CreatePropertyBinding__Spectating_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicPlayerStatusEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x17000779")]
	public static string Alive
	{
		[Token(Token = "0x6002E11")]
		[Address(RVA = "0x5998DB0", Offset = "0x5997DB0", VA = "0x5998DB0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerStatusEnum.c (CustomLogic.CustomLogicPlayerStatusEnum$$get_Alive): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754686d == false) {
				Il2CppMethodInitialized_0754686d = true;
				uVar1 = (typeof(PlayerStatus)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(PlayerStatus)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return PlayerStatus.Alive;
			}
			return *(String*)(typeof(PlayerStatus)).static_fields;
		}
	}

	[Token(Token = "0x1700077A")]
	public static string Dead
	{
		[Token(Token = "0x6002E12")]
		[Address(RVA = "0x5998E20", Offset = "0x5997E20", VA = "0x5998E20")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerStatusEnum.c (CustomLogic.CustomLogicPlayerStatusEnum$$get_Dead): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754686e == false) {
				Il2CppMethodInitialized_0754686e = true;
				uVar1 = (typeof(PlayerStatus)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(PlayerStatus)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return PlayerStatus.Dead;
			}
			return *(String*)((long)(typeof(PlayerStatus)).static_fields + 8);
		}
	}

	[Token(Token = "0x1700077B")]
	public static string Spectating
	{
		[Token(Token = "0x6002E13")]
		[Address(RVA = "0x5998E90", Offset = "0x5997E90", VA = "0x5998E90")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerStatusEnum.c (CustomLogic.CustomLogicPlayerStatusEnum$$get_Spectating): clean
			uint uVar1;

			if (Il2CppMethodInitialized_0754686f == false) {
				Il2CppMethodInitialized_0754686f = true;
				uVar1 = (typeof(PlayerStatus)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(PlayerStatus)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return PlayerStatus.Spectating;
			}
			return *(String*)((long)(typeof(PlayerStatus)).static_fields + 0x10);
		}
	}

	[Token(Token = "0x1700077C")]
	public override string ClassName
	{
		[Token(Token = "0x6002E14")]
		[Address(RVA = "0x5998F00", Offset = "0x5997F00", VA = "0x5998F00", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerStatusEnum.c (CustomLogic.CustomLogicPlayerStatusEnum$$get_ClassName): clean
			return "PlayerStatusEnum";
		}
	}

	[Token(Token = "0x1700077D")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002E15")]
		[Address(RVA = "0x5998F30", Offset = "0x5997F30", VA = "0x5998F30", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerStatusEnum.c (CustomLogic.CustomLogicPlayerStatusEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x1700077E")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002E16")]
		[Address(RVA = "0x5998F40", Offset = "0x5997F40", VA = "0x5998F40", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerStatusEnum.c (CustomLogic.CustomLogicPlayerStatusEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x1700077F")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002E17")]
		[Address(RVA = "0x5998F50", Offset = "0x5997F50", VA = "0x5998F50", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPlayerStatusEnum.c (CustomLogic.CustomLogicPlayerStatusEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6002E10")]
	[Address(RVA = "0x5998D40", Offset = "0x5997D40", VA = "0x5998D40")]
	public CustomLogicPlayerStatusEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPlayerStatusEnum.c (CustomLogic.CustomLogicPlayerStatusEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_0754686c == false) {
			Il2CppMethodInitialized_0754686c = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicPlayerStatusEnum.c.

	// CustomLogic.CustomLogicPlayerStatusEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Alive");
		__this.Add((Il2CppObject *)"Dead");
		__this.Add((Il2CppObject *)"Spectating");
		CustomLogicPlayerStatusEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicPlayerStatusEnum.Bindings$$<__CreatePropertyBinding__Alive>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__Alive_g____getter_2_0(CustomLogicPlayerStatusEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546a0a == false) {
			Il2CppMethodInitialized_07546a0a = true;
			uVar1 = (typeof(PlayerStatus)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(PlayerStatus)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)PlayerStatus.Alive;
		}
		return *(object*)(typeof(PlayerStatus)).static_fields;
	}

	// CustomLogic.CustomLogicPlayerStatusEnum.Bindings$$<__CreatePropertyBinding__Dead>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Dead_g____getter_3_0(CustomLogicPlayerStatusEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546a0b == false) {
			Il2CppMethodInitialized_07546a0b = true;
			uVar1 = (typeof(PlayerStatus)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(PlayerStatus)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)PlayerStatus.Dead;
		}
		return *(object*)((long)(typeof(PlayerStatus)).static_fields + 8);
	}

	// CustomLogic.CustomLogicPlayerStatusEnum.Bindings$$<__CreatePropertyBinding__Spectating>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Spectating_g____getter_4_0(CustomLogicPlayerStatusEnum __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546a0c == false) {
			Il2CppMethodInitialized_07546a0c = true;
			uVar1 = (typeof(PlayerStatus)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(PlayerStatus)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)PlayerStatus.Spectating;
		}
		return *(object*)((long)(typeof(PlayerStatus)).static_fields + 0x10);
	}
}
