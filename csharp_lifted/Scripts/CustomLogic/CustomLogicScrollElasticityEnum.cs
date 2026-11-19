// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicScrollElasticityEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicScrollElasticityEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000563")]
[CompilerGenerated]
internal class CustomLogicScrollElasticityEnum : BuiltinClassInstance
{
	[Token(Token = "0x2000564")]
	public static class Factory
	{
		[Token(Token = "0x6002FFA")]
		[Address(RVA = "0x59A7F10", Offset = "0x59A6F10", VA = "0x59A7F10")]
		public static CustomLogicScrollElasticityEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScrollElasticityEnum.c (CustomLogic.CustomLogicScrollElasticityEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicScrollElasticityEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicScrollElasticityEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicScrollElasticityEnum();
			return (CustomLogicScrollElasticityEnum)__this;
		}
	}

	[Token(Token = "0x2000565")]
	public static class Bindings
	{
		[Token(Token = "0x400187E")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002FFB")]
		[Address(RVA = "0x59A8030", Offset = "0x59A7030", VA = "0x59A8030")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScrollElasticityEnum.c (CustomLogic.CustomLogicScrollElasticityEnum.Bindings$$CreateMemberBinding): 7 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicScrollElasticityEnum> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			if (Il2CppMethodInitialized_07546a2b == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicScrollElasticityEnum.Bindings)) ;
				Il2CppMethodInitialized_07546a2b = true;
			}
			bVar1 = (name == "Clamped");
			if (bVar1) {
				if ((typeof(CustomLogicScrollElasticityEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicScrollElasticityEnum.Bindings.__CreatePropertyBinding__Clamped();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicScrollElasticityEnum.Bindings.__CreatePropertyBinding__Clamped();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Elastic");
			if (bVar1) {
				if ((typeof(CustomLogicScrollElasticityEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicScrollElasticityEnum.Bindings.__CreatePropertyBinding__Elastic();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicScrollElasticityEnum.Bindings.__CreatePropertyBinding__Elastic();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Unrestricted");
			if (!bVar1) {
				pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
				str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicScrollElasticityEnum not found");
				pSVar3 = String.Concat(pSVar3, name, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this = (Exception)il2cpp_codegen_object_new(klass);
				__this = new Exception(pSVar3);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings_CreateMemberBinding);
				throw (object)__this;
			}
			if ((typeof(CustomLogicScrollElasticityEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
				pCVar2 = CustomLogicScrollElasticityEnum.Bindings.__CreatePropertyBinding__Unrestricted();
				return (ICLMemberBinding)pCVar2;
			}
			pCVar2 = CustomLogicScrollElasticityEnum.Bindings.__CreatePropertyBinding__Unrestricted();
			return (ICLMemberBinding)pCVar2;
		}

		[Token(Token = "0x6002FFC")]
		[Address(RVA = "0x59A81C0", Offset = "0x59A71C0", VA = "0x59A81C0")]
		public static CLPropertyBinding<CustomLogicScrollElasticityEnum> __CreatePropertyBinding__Clamped()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScrollElasticityEnum.c (CustomLogic.CustomLogicScrollElasticityEnum.Bindings$$__CreatePropertyBinding__Clamped): 3 lines keep C-only constructs
			Func<CustomLogicScrollElasticityEnum, object> __this;
			CLPropertyBinding<CustomLogicScrollElasticityEnum> __this_00;

			__this = new Func<CustomLogicScrollElasticityEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings___CreatePropertyBinding__Clamped_g____gette);
			__this_00 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicScrollElasticityEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002FFD")]
		[Address(RVA = "0x59A8260", Offset = "0x59A7260", VA = "0x59A8260")]
		public static CLPropertyBinding<CustomLogicScrollElasticityEnum> __CreatePropertyBinding__Elastic()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScrollElasticityEnum.c (CustomLogic.CustomLogicScrollElasticityEnum.Bindings$$__CreatePropertyBinding__Elastic): 3 lines keep C-only constructs
			Func<CustomLogicScrollElasticityEnum, object> __this;
			CLPropertyBinding<CustomLogicScrollElasticityEnum> __this_00;

			__this = new Func<CustomLogicScrollElasticityEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings___CreatePropertyBinding__Elastic_g____gette);
			__this_00 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicScrollElasticityEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002FFE")]
		[Address(RVA = "0x59A8300", Offset = "0x59A7300", VA = "0x59A8300")]
		public static CLPropertyBinding<CustomLogicScrollElasticityEnum> __CreatePropertyBinding__Unrestricted()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScrollElasticityEnum.c (CustomLogic.CustomLogicScrollElasticityEnum.Bindings$$__CreatePropertyBinding__Unrestricted): 3 lines keep C-only constructs
			Func<CustomLogicScrollElasticityEnum, object> __this;
			CLPropertyBinding<CustomLogicScrollElasticityEnum> __this_00;

			__this = new Func<CustomLogicScrollElasticityEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicScrollElasticityEnum_Bindings___CreatePropertyBinding__Unrestricted_g);
			__this_00 = il2cpp_codegen_object_new(typeof(CLPropertyBinding<CustomLogicScrollElasticityEnum>));
			__this_00 = new CLPropertyBinding<object>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x1700081F")]
	public static int Clamped
	{
		[Token(Token = "0x6002FF3")]
		[Address(RVA = "0x59A7E80", Offset = "0x59A6E80", VA = "0x59A7E80")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScrollElasticityEnum.c (CustomLogic.CustomLogicScrollElasticityEnum$$get_Clamped): clean
			return 2;
		}
	}

	[Token(Token = "0x17000820")]
	public static int Elastic
	{
		[Token(Token = "0x6002FF4")]
		[Address(RVA = "0x59A7E90", Offset = "0x59A6E90", VA = "0x59A7E90")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScrollElasticityEnum.c (CustomLogic.CustomLogicScrollElasticityEnum$$get_Elastic): clean
			return 1;
		}
	}

	[Token(Token = "0x17000821")]
	public static int Unrestricted
	{
		[Token(Token = "0x6002FF5")]
		[Address(RVA = "0x59A7EA0", Offset = "0x59A6EA0", VA = "0x59A7EA0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScrollElasticityEnum.c (CustomLogic.CustomLogicScrollElasticityEnum$$get_Unrestricted): clean
			return 0;
		}
	}

	[Token(Token = "0x17000822")]
	public override string ClassName
	{
		[Token(Token = "0x6002FF6")]
		[Address(RVA = "0x59A7EB0", Offset = "0x59A6EB0", VA = "0x59A7EB0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScrollElasticityEnum.c (CustomLogic.CustomLogicScrollElasticityEnum$$get_ClassName): clean
			return "ScrollElasticityEnum";
		}
	}

	[Token(Token = "0x17000823")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002FF7")]
		[Address(RVA = "0x59A7EE0", Offset = "0x59A6EE0", VA = "0x59A7EE0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScrollElasticityEnum.c (CustomLogic.CustomLogicScrollElasticityEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000824")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002FF8")]
		[Address(RVA = "0x59A7EF0", Offset = "0x59A6EF0", VA = "0x59A7EF0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScrollElasticityEnum.c (CustomLogic.CustomLogicScrollElasticityEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x17000825")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002FF9")]
		[Address(RVA = "0x59A7F00", Offset = "0x59A6F00", VA = "0x59A7F00", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScrollElasticityEnum.c (CustomLogic.CustomLogicScrollElasticityEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6002FF2")]
	[Address(RVA = "0x59A7E10", Offset = "0x59A6E10", VA = "0x59A7E10")]
	public CustomLogicScrollElasticityEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicScrollElasticityEnum.c (CustomLogic.CustomLogicScrollElasticityEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07546a28 == false) {
			Il2CppMethodInitialized_07546a28 = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicScrollElasticityEnum.c.

	// CustomLogic.CustomLogicScrollElasticityEnum.Bindings$$.cctor: 1 lines keep C-only constructs
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		if (Il2CppMethodInitialized_07546a2f == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicScrollElasticityEnum.Bindings)) ;
			Il2CppMethodInitialized_07546a2f = true;
		}
		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Clamped");
		__this.Add((Il2CppObject *)"Elastic");
		__this.Add((Il2CppObject *)"Unrestricted");
		CustomLogicScrollElasticityEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicScrollElasticityEnum.Bindings$$<__CreatePropertyBinding__Clamped>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__Clamped_g____getter_2_0(CustomLogicScrollElasticityEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicScrollElasticityEnum.Bindings$$<__CreatePropertyBinding__Elastic>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Elastic_g____getter_3_0(CustomLogicScrollElasticityEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicScrollElasticityEnum.Bindings$$<__CreatePropertyBinding__Unrestricted>g____getter|4_0: 3 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__Unrestricted_g____getter_4_0(CustomLogicScrollElasticityEnum __i)
	{
		uint in_EAX;
		object pIVar1;
		ulong uStack_8;

		uStack_8 = (ulong)in_EAX;
		pIVar1 = (object)(((long)&uStack_8 + 4));
		return pIVar1;
	}
}
