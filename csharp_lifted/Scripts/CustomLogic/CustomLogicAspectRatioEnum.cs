// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicAspectRatioEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicAspectRatioEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20004EC")]
[CompilerGenerated]
internal class CustomLogicAspectRatioEnum : BuiltinClassInstance
{
	[Token(Token = "0x20004ED")]
	public static class Factory
	{
		[Token(Token = "0x60027A0")]
		[Address(RVA = "0x5958D10", Offset = "0x5957D10", VA = "0x5958D10")]
		public static CustomLogicAspectRatioEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAspectRatioEnum.c (CustomLogic.CustomLogicAspectRatioEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicAspectRatioEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicAspectRatioEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicAspectRatioEnum();
			return (CustomLogicAspectRatioEnum)__this;
		}
	}

	[Token(Token = "0x20004EE")]
	public static class Bindings
	{
		[Token(Token = "0x40017B9")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60027A1")]
		[Address(RVA = "0x5958E30", Offset = "0x5957E30", VA = "0x5958E30")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAspectRatioEnum.c (CustomLogic.CustomLogicAspectRatioEnum.Bindings$$CreateMemberBinding): 7 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicAspectRatioEnum> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "Height");
			if (bVar1) {
				if ((typeof(CustomLogicAspectRatioEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicAspectRatioEnum.Bindings.__CreatePropertyBinding__Height();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicAspectRatioEnum.Bindings.__CreatePropertyBinding__Height();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Width");
			if (!bVar1) {
				pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
				str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicAspectRatioEnum not found");
				pSVar3 = String.Concat(pSVar3, name, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this = (Exception)il2cpp_codegen_object_new(klass);
				__this = new Exception(pSVar3);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicAspectRatioEnum_Bindings_CreateMemberBinding);
				throw (object)__this;
			}
			if ((typeof(CustomLogicAspectRatioEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicAspectRatioEnum.Bindings)) ;
				pCVar2 = CustomLogicAspectRatioEnum.Bindings.__CreatePropertyBinding__Width();
				return (ICLMemberBinding)pCVar2;
			}
			pCVar2 = CustomLogicAspectRatioEnum.Bindings.__CreatePropertyBinding__Width();
			return (ICLMemberBinding)pCVar2;
		}

		[Token(Token = "0x60027A2")]
		[Address(RVA = "0x5958F70", Offset = "0x5957F70", VA = "0x5958F70")]
		public static CLPropertyBinding<CustomLogicAspectRatioEnum> __CreatePropertyBinding__Height()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAspectRatioEnum.c (CustomLogic.CustomLogicAspectRatioEnum.Bindings$$__CreatePropertyBinding__Height): 2 lines keep C-only constructs
			Func<CustomLogicAspectRatioEnum, object> __this;
			CLPropertyBinding<CustomLogicAspectRatioEnum> __this_00;

			__this = new Func<CustomLogicAspectRatioEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAspectRatioEnum_Bindings___CreatePropertyBinding__Height_g____getter_2_0);
			__this_00 = new CLPropertyBinding<CustomLogicAspectRatioEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60027A3")]
		[Address(RVA = "0x5959010", Offset = "0x5958010", VA = "0x5959010")]
		public static CLPropertyBinding<CustomLogicAspectRatioEnum> __CreatePropertyBinding__Width()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAspectRatioEnum.c (CustomLogic.CustomLogicAspectRatioEnum.Bindings$$__CreatePropertyBinding__Width): 2 lines keep C-only constructs
			Func<CustomLogicAspectRatioEnum, object> __this;
			CLPropertyBinding<CustomLogicAspectRatioEnum> __this_00;

			__this = new Func<CustomLogicAspectRatioEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAspectRatioEnum_Bindings___CreatePropertyBinding__Width_g____getter_3_0);
			__this_00 = new CLPropertyBinding<CustomLogicAspectRatioEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x17000526")]
	public static int Height
	{
		[Token(Token = "0x600279A")]
		[Address(RVA = "0x5958C90", Offset = "0x5957C90", VA = "0x5958C90")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAspectRatioEnum.c (CustomLogic.CustomLogicAspectRatioEnum$$get_Height): clean
			return 1;
		}
	}

	[Token(Token = "0x17000527")]
	public static int Width
	{
		[Token(Token = "0x600279B")]
		[Address(RVA = "0x5958CA0", Offset = "0x5957CA0", VA = "0x5958CA0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAspectRatioEnum.c (CustomLogic.CustomLogicAspectRatioEnum$$get_Width): clean
			return 0;
		}
	}

	[Token(Token = "0x17000528")]
	public override string ClassName
	{
		[Token(Token = "0x600279C")]
		[Address(RVA = "0x5958CB0", Offset = "0x5957CB0", VA = "0x5958CB0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAspectRatioEnum.c (CustomLogic.CustomLogicAspectRatioEnum$$get_ClassName): clean
			return "AspectRatioEnum";
		}
	}

	[Token(Token = "0x17000529")]
	public override bool IsAbstract
	{
		[Token(Token = "0x600279D")]
		[Address(RVA = "0x5958CE0", Offset = "0x5957CE0", VA = "0x5958CE0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAspectRatioEnum.c (CustomLogic.CustomLogicAspectRatioEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x1700052A")]
	public override bool IsStatic
	{
		[Token(Token = "0x600279E")]
		[Address(RVA = "0x5958CF0", Offset = "0x5957CF0", VA = "0x5958CF0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAspectRatioEnum.c (CustomLogic.CustomLogicAspectRatioEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x1700052B")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x600279F")]
		[Address(RVA = "0x5958D00", Offset = "0x5957D00", VA = "0x5958D00", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAspectRatioEnum.c (CustomLogic.CustomLogicAspectRatioEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6002799")]
	[Address(RVA = "0x5958C20", Offset = "0x5957C20", VA = "0x5958C20")]
	public CustomLogicAspectRatioEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAspectRatioEnum.c (CustomLogic.CustomLogicAspectRatioEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_075462d8 == false) {
			Il2CppMethodInitialized_075462d8 = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicAspectRatioEnum.c.

	// CustomLogic.CustomLogicAspectRatioEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Height");
		__this.Add((Il2CppObject *)"Width");
		CustomLogicAspectRatioEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicAspectRatioEnum.Bindings$$<__CreatePropertyBinding__Height>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__Height_g____getter_2_0(CustomLogicAspectRatioEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicAspectRatioEnum.Bindings$$<__CreatePropertyBinding__Width>g____getter|3_0: 3 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__Width_g____getter_3_0(CustomLogicAspectRatioEnum __i)
	{
		uint in_EAX;
		object pIVar1;
		ulong uStack_8;

		uStack_8 = (ulong)in_EAX;
		pIVar1 = (object)(((long)&uStack_8 + 4));
		return pIVar1;
	}
}
