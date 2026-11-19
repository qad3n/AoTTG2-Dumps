// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicDummyAnimationEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicDummyAnimationEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20004FF")]
[CompilerGenerated]
internal class CustomLogicDummyAnimationEnum : BuiltinClassInstance
{
	[Token(Token = "0x2000500")]
	public static class Factory
	{
		[Token(Token = "0x600281D")]
		[Address(RVA = "0x595D0A0", Offset = "0x595C0A0", VA = "0x595D0A0")]
		public static CustomLogicDummyAnimationEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDummyAnimationEnum.c (CustomLogic.CustomLogicDummyAnimationEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicDummyAnimationEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicDummyAnimationEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicDummyAnimationEnum();
			return (CustomLogicDummyAnimationEnum)__this;
		}
	}

	[Token(Token = "0x2000501")]
	public static class Bindings
	{
		[Token(Token = "0x40017C6")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x600281E")]
		[Address(RVA = "0x595D1C0", Offset = "0x595C1C0", VA = "0x595D1C0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDummyAnimationEnum.c (CustomLogic.CustomLogicDummyAnimationEnum.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicDummyAnimationEnum> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "Idle");
			if (bVar1) {
				if ((typeof(CustomLogicDummyAnimationEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicDummyAnimationEnum.Bindings.__CreatePropertyBinding__Idle();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicDummyAnimationEnum.Bindings.__CreatePropertyBinding__Idle();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Fall");
			if (bVar1) {
				if ((typeof(CustomLogicDummyAnimationEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicDummyAnimationEnum.Bindings.__CreatePropertyBinding__Fall();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicDummyAnimationEnum.Bindings.__CreatePropertyBinding__Fall();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Rise");
			if (!bVar1) {
				pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
				str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicDummyAnimationEnum not found");
				pSVar3 = String.Concat(pSVar3, name, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this = (Exception)il2cpp_codegen_object_new(klass);
				__this = new Exception(pSVar3);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicDummyAnimationEnum_Bindings_CreateMemberBinding);
				throw (object)__this;
			}
			if ((typeof(CustomLogicDummyAnimationEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
				pCVar2 = CustomLogicDummyAnimationEnum.Bindings.__CreatePropertyBinding__Rise();
				return (ICLMemberBinding)pCVar2;
			}
			pCVar2 = CustomLogicDummyAnimationEnum.Bindings.__CreatePropertyBinding__Rise();
			return (ICLMemberBinding)pCVar2;
		}

		[Token(Token = "0x600281F")]
		[Address(RVA = "0x595D350", Offset = "0x595C350", VA = "0x595D350")]
		public static CLPropertyBinding<CustomLogicDummyAnimationEnum> __CreatePropertyBinding__Idle()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDummyAnimationEnum.c (CustomLogic.CustomLogicDummyAnimationEnum.Bindings$$__CreatePropertyBinding__Idle): 3 lines keep C-only constructs
			Func<CustomLogicDummyAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicDummyAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicDummyAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicDummyAnimationEnum_Bindings___CreatePropertyBinding__Idle_g____getter_2_0);
			__this_00 = new CLPropertyBinding<CustomLogicDummyAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002820")]
		[Address(RVA = "0x595D3F0", Offset = "0x595C3F0", VA = "0x595D3F0")]
		public static CLPropertyBinding<CustomLogicDummyAnimationEnum> __CreatePropertyBinding__Fall()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDummyAnimationEnum.c (CustomLogic.CustomLogicDummyAnimationEnum.Bindings$$__CreatePropertyBinding__Fall): 3 lines keep C-only constructs
			Func<CustomLogicDummyAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicDummyAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicDummyAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicDummyAnimationEnum_Bindings___CreatePropertyBinding__Fall_g____getter_3_0);
			__this_00 = new CLPropertyBinding<CustomLogicDummyAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002821")]
		[Address(RVA = "0x595D490", Offset = "0x595C490", VA = "0x595D490")]
		public static CLPropertyBinding<CustomLogicDummyAnimationEnum> __CreatePropertyBinding__Rise()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDummyAnimationEnum.c (CustomLogic.CustomLogicDummyAnimationEnum.Bindings$$__CreatePropertyBinding__Rise): 3 lines keep C-only constructs
			Func<CustomLogicDummyAnimationEnum, object> __this;
			CLPropertyBinding<CustomLogicDummyAnimationEnum> __this_00;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicDummyAnimationEnum, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicDummyAnimationEnum_Bindings___CreatePropertyBinding__Rise_g____getter_4_0);
			__this_00 = new CLPropertyBinding<CustomLogicDummyAnimationEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x17000557")]
	public static string Idle
	{
		[Token(Token = "0x6002816")]
		[Address(RVA = "0x595CFB0", Offset = "0x595BFB0", VA = "0x595CFB0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDummyAnimationEnum.c (CustomLogic.CustomLogicDummyAnimationEnum$$get_Idle): clean
			return "Armature|dummy_idle";
		}
	}

	[Token(Token = "0x17000558")]
	public static string Fall
	{
		[Token(Token = "0x6002817")]
		[Address(RVA = "0x595CFE0", Offset = "0x595BFE0", VA = "0x595CFE0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDummyAnimationEnum.c (CustomLogic.CustomLogicDummyAnimationEnum$$get_Fall): clean
			return "Armature|dummy_fall";
		}
	}

	[Token(Token = "0x17000559")]
	public static string Rise
	{
		[Token(Token = "0x6002818")]
		[Address(RVA = "0x595D010", Offset = "0x595C010", VA = "0x595D010")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDummyAnimationEnum.c (CustomLogic.CustomLogicDummyAnimationEnum$$get_Rise): clean
			return "Armature|dummy_rise";
		}
	}

	[Token(Token = "0x1700055A")]
	public override string ClassName
	{
		[Token(Token = "0x6002819")]
		[Address(RVA = "0x595D040", Offset = "0x595C040", VA = "0x595D040", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDummyAnimationEnum.c (CustomLogic.CustomLogicDummyAnimationEnum$$get_ClassName): clean
			return "DummyAnimationEnum";
		}
	}

	[Token(Token = "0x1700055B")]
	public override bool IsAbstract
	{
		[Token(Token = "0x600281A")]
		[Address(RVA = "0x595D070", Offset = "0x595C070", VA = "0x595D070", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDummyAnimationEnum.c (CustomLogic.CustomLogicDummyAnimationEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x1700055C")]
	public override bool IsStatic
	{
		[Token(Token = "0x600281B")]
		[Address(RVA = "0x595D080", Offset = "0x595C080", VA = "0x595D080", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDummyAnimationEnum.c (CustomLogic.CustomLogicDummyAnimationEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x1700055D")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x600281C")]
		[Address(RVA = "0x595D090", Offset = "0x595C090", VA = "0x595D090", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDummyAnimationEnum.c (CustomLogic.CustomLogicDummyAnimationEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6002815")]
	[Address(RVA = "0x595CF40", Offset = "0x595BF40", VA = "0x595CF40")]
	public CustomLogicDummyAnimationEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicDummyAnimationEnum.c (CustomLogic.CustomLogicDummyAnimationEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07546327 == false) {
			Il2CppMethodInitialized_07546327 = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicDummyAnimationEnum.c.

	// CustomLogic.CustomLogicDummyAnimationEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Idle");
		__this.Add((Il2CppObject *)"Fall");
		__this.Add((Il2CppObject *)"Rise");
		CustomLogicDummyAnimationEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicDummyAnimationEnum.Bindings$$<__CreatePropertyBinding__Idle>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__Idle_g____getter_2_0(CustomLogicDummyAnimationEnum __i)
	{
		return (Il2CppObject *)"Armature|dummy_idle";
	}

	// CustomLogic.CustomLogicDummyAnimationEnum.Bindings$$<__CreatePropertyBinding__Fall>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Fall_g____getter_3_0(CustomLogicDummyAnimationEnum __i)
	{
		return (Il2CppObject *)"Armature|dummy_fall";
	}

	// CustomLogic.CustomLogicDummyAnimationEnum.Bindings$$<__CreatePropertyBinding__Rise>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Rise_g____getter_4_0(CustomLogicDummyAnimationEnum __i)
	{
		return (Il2CppObject *)"Armature|dummy_rise";
	}
}
