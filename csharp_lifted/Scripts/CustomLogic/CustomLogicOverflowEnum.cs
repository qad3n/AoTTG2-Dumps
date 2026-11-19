// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicOverflowEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicOverflowEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000551")]
[CompilerGenerated]
internal class CustomLogicOverflowEnum : BuiltinClassInstance
{
	[Token(Token = "0x2000552")]
	public static class Factory
	{
		[Token(Token = "0x6002DF5")]
		[Address(RVA = "0x5998030", Offset = "0x5997030", VA = "0x5998030")]
		public static CustomLogicOverflowEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicOverflowEnum.c (CustomLogic.CustomLogicOverflowEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicOverflowEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicOverflowEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicOverflowEnum();
			return (CustomLogicOverflowEnum)__this;
		}
	}

	[Token(Token = "0x2000553")]
	public static class Bindings
	{
		[Token(Token = "0x4001878")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002DF6")]
		[Address(RVA = "0x5998150", Offset = "0x5997150", VA = "0x5998150")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicOverflowEnum.c (CustomLogic.CustomLogicOverflowEnum.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicOverflowEnum> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "Visible");
			if (bVar1) {
				if ((typeof(CustomLogicOverflowEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicOverflowEnum.Bindings.__CreatePropertyBinding__Visible();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicOverflowEnum.Bindings.__CreatePropertyBinding__Visible();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Hidden");
			if (!bVar1) {
				pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
				str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicOverflowEnum not found");
				pSVar3 = String.Concat(pSVar3, name, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this = (Exception)il2cpp_codegen_object_new(klass);
				__this = new Exception(pSVar3);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicOverflowEnum_Bindings_CreateMemberBinding);
				throw (object)__this;
			}
			if ((typeof(CustomLogicOverflowEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
				pCVar2 = CustomLogicOverflowEnum.Bindings.__CreatePropertyBinding__Hidden();
				return (ICLMemberBinding)pCVar2;
			}
			pCVar2 = CustomLogicOverflowEnum.Bindings.__CreatePropertyBinding__Hidden();
			return (ICLMemberBinding)pCVar2;
		}

		[Token(Token = "0x6002DF7")]
		[Address(RVA = "0x5998290", Offset = "0x5997290", VA = "0x5998290")]
		public static CLPropertyBinding<CustomLogicOverflowEnum> __CreatePropertyBinding__Visible()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicOverflowEnum.c (CustomLogic.CustomLogicOverflowEnum.Bindings$$__CreatePropertyBinding__Visible): 2 lines keep C-only constructs
			Func<CustomLogicOverflowEnum, object> __this;
			CLPropertyBinding<CustomLogicOverflowEnum> __this_00;

			__this = new Func<CustomLogicOverflowEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicOverflowEnum_Bindings___CreatePropertyBinding__Visible_g____getter_2_0);
			__this_00 = new CLPropertyBinding<CustomLogicOverflowEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6002DF8")]
		[Address(RVA = "0x5998330", Offset = "0x5997330", VA = "0x5998330")]
		public static CLPropertyBinding<CustomLogicOverflowEnum> __CreatePropertyBinding__Hidden()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicOverflowEnum.c (CustomLogic.CustomLogicOverflowEnum.Bindings$$__CreatePropertyBinding__Hidden): 2 lines keep C-only constructs
			Func<CustomLogicOverflowEnum, object> __this;
			CLPropertyBinding<CustomLogicOverflowEnum> __this_00;

			__this = new Func<CustomLogicOverflowEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicOverflowEnum_Bindings___CreatePropertyBinding__Hidden_g____getter_3_0);
			__this_00 = new CLPropertyBinding<CustomLogicOverflowEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x1700076B")]
	public static int Visible
	{
		[Token(Token = "0x6002DEF")]
		[Address(RVA = "0x5997FB0", Offset = "0x5996FB0", VA = "0x5997FB0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicOverflowEnum.c (CustomLogic.CustomLogicOverflowEnum$$get_Visible): clean
			return 0;
		}
	}

	[Token(Token = "0x1700076C")]
	public static int Hidden
	{
		[Token(Token = "0x6002DF0")]
		[Address(RVA = "0x5997FC0", Offset = "0x5996FC0", VA = "0x5997FC0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicOverflowEnum.c (CustomLogic.CustomLogicOverflowEnum$$get_Hidden): clean
			return 1;
		}
	}

	[Token(Token = "0x1700076D")]
	public override string ClassName
	{
		[Token(Token = "0x6002DF1")]
		[Address(RVA = "0x5997FD0", Offset = "0x5996FD0", VA = "0x5997FD0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicOverflowEnum.c (CustomLogic.CustomLogicOverflowEnum$$get_ClassName): clean
			return "OverflowEnum";
		}
	}

	[Token(Token = "0x1700076E")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002DF2")]
		[Address(RVA = "0x5998000", Offset = "0x5997000", VA = "0x5998000", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicOverflowEnum.c (CustomLogic.CustomLogicOverflowEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x1700076F")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002DF3")]
		[Address(RVA = "0x5998010", Offset = "0x5997010", VA = "0x5998010", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicOverflowEnum.c (CustomLogic.CustomLogicOverflowEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x17000770")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002DF4")]
		[Address(RVA = "0x5998020", Offset = "0x5997020", VA = "0x5998020", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicOverflowEnum.c (CustomLogic.CustomLogicOverflowEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6002DEE")]
	[Address(RVA = "0x5997F40", Offset = "0x5996F40", VA = "0x5997F40")]
	public CustomLogicOverflowEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicOverflowEnum.c (CustomLogic.CustomLogicOverflowEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_0754685c == false) {
			Il2CppMethodInitialized_0754685c = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicOverflowEnum.c.

	// CustomLogic.CustomLogicOverflowEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Visible");
		__this.Add((Il2CppObject *)"Hidden");
		CustomLogicOverflowEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicOverflowEnum.Bindings$$<__CreatePropertyBinding__Visible>g____getter|2_0: 3 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__Visible_g____getter_2_0(CustomLogicOverflowEnum __i)
	{
		uint in_EAX;
		object pIVar1;
		ulong uStack_8;

		uStack_8 = (ulong)in_EAX;
		pIVar1 = (object)(((long)&uStack_8 + 4));
		return pIVar1;
	}

	// CustomLogic.CustomLogicOverflowEnum.Bindings$$<__CreatePropertyBinding__Hidden>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Hidden_g____getter_3_0(CustomLogicOverflowEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}
}
