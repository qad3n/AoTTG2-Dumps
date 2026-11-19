// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicFontScaleModeEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicFontScaleModeEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200050B")]
[CompilerGenerated]
internal class CustomLogicFontScaleModeEnum : BuiltinClassInstance
{
	[Token(Token = "0x200050C")]
	public static class Factory
	{
		[Token(Token = "0x60028E1")]
		[Address(RVA = "0x5963DE0", Offset = "0x5962DE0", VA = "0x5963DE0")]
		public static CustomLogicFontScaleModeEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicFontScaleModeEnum.c (CustomLogic.CustomLogicFontScaleModeEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicFontScaleModeEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicFontScaleModeEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicFontScaleModeEnum();
			return (CustomLogicFontScaleModeEnum)__this;
		}
	}

	[Token(Token = "0x200050D")]
	public static class Bindings
	{
		[Token(Token = "0x40017CA")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60028E2")]
		[Address(RVA = "0x5963F00", Offset = "0x5962F00", VA = "0x5963F00")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicFontScaleModeEnum.c (CustomLogic.CustomLogicFontScaleModeEnum.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicFontScaleModeEnum> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "Height");
			if (bVar1) {
				if ((typeof(CustomLogicFontScaleModeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicFontScaleModeEnum.Bindings.__CreatePropertyBinding__Height();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicFontScaleModeEnum.Bindings.__CreatePropertyBinding__Height();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Width");
			if (!bVar1) {
				pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
				str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicFontScaleModeEnum not found");
				pSVar3 = String.Concat(pSVar3, name, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this = (Exception)il2cpp_codegen_object_new(klass);
				__this = new Exception(pSVar3);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicFontScaleModeEnum_Bindings_CreateMemberBinding);
				throw (object)__this;
			}
			if ((typeof(CustomLogicFontScaleModeEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
				pCVar2 = CustomLogicFontScaleModeEnum.Bindings.__CreatePropertyBinding__Width();
				return (ICLMemberBinding)pCVar2;
			}
			pCVar2 = CustomLogicFontScaleModeEnum.Bindings.__CreatePropertyBinding__Width();
			return (ICLMemberBinding)pCVar2;
		}

		[Token(Token = "0x60028E3")]
		[Address(RVA = "0x5964040", Offset = "0x5963040", VA = "0x5964040")]
		public static CLPropertyBinding<CustomLogicFontScaleModeEnum> __CreatePropertyBinding__Height()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicFontScaleModeEnum.c (CustomLogic.CustomLogicFontScaleModeEnum.Bindings$$__CreatePropertyBinding__Height): 2 lines keep C-only constructs
			Func<CustomLogicFontScaleModeEnum, object> __this;
			CLPropertyBinding<CustomLogicFontScaleModeEnum> __this_00;

			__this = new Func<CustomLogicFontScaleModeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicFontScaleModeEnum_Bindings___CreatePropertyBinding__Height_g____getter_2);
			__this_00 = new CLPropertyBinding<CustomLogicFontScaleModeEnum>((System_Func_T__object__o)__this, null) ;
			return __this_00;
		}

		[Token(Token = "0x60028E4")]
		[Address(RVA = "0x59640E0", Offset = "0x59630E0", VA = "0x59640E0")]
		public static CLPropertyBinding<CustomLogicFontScaleModeEnum> __CreatePropertyBinding__Width()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicFontScaleModeEnum.c (CustomLogic.CustomLogicFontScaleModeEnum.Bindings$$__CreatePropertyBinding__Width): 2 lines keep C-only constructs
			Func<CustomLogicFontScaleModeEnum, object> __this;
			CLPropertyBinding<CustomLogicFontScaleModeEnum> __this_00;

			__this = new Func<CustomLogicFontScaleModeEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicFontScaleModeEnum_Bindings___CreatePropertyBinding__Width_g____getter_3_0);
			__this_00 = new CLPropertyBinding<CustomLogicFontScaleModeEnum>((System_Func_T__object__o)__this, null) ;
			return __this_00;
		}
	}

	[Token(Token = "0x1700059E")]
	public static int Height
	{
		[Token(Token = "0x60028DB")]
		[Address(RVA = "0x5963D60", Offset = "0x5962D60", VA = "0x5963D60")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicFontScaleModeEnum.c (CustomLogic.CustomLogicFontScaleModeEnum$$get_Height): clean
			return 0;
		}
	}

	[Token(Token = "0x1700059F")]
	public static int Width
	{
		[Token(Token = "0x60028DC")]
		[Address(RVA = "0x5963D70", Offset = "0x5962D70", VA = "0x5963D70")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicFontScaleModeEnum.c (CustomLogic.CustomLogicFontScaleModeEnum$$get_Width): clean
			return 1;
		}
	}

	[Token(Token = "0x170005A0")]
	public override string ClassName
	{
		[Token(Token = "0x60028DD")]
		[Address(RVA = "0x5963D80", Offset = "0x5962D80", VA = "0x5963D80", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicFontScaleModeEnum.c (CustomLogic.CustomLogicFontScaleModeEnum$$get_ClassName): clean
			return "FontScaleModeEnum";
		}
	}

	[Token(Token = "0x170005A1")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60028DE")]
		[Address(RVA = "0x5963DB0", Offset = "0x5962DB0", VA = "0x5963DB0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicFontScaleModeEnum.c (CustomLogic.CustomLogicFontScaleModeEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x170005A2")]
	public override bool IsStatic
	{
		[Token(Token = "0x60028DF")]
		[Address(RVA = "0x5963DC0", Offset = "0x5962DC0", VA = "0x5963DC0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicFontScaleModeEnum.c (CustomLogic.CustomLogicFontScaleModeEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x170005A3")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60028E0")]
		[Address(RVA = "0x5963DD0", Offset = "0x5962DD0", VA = "0x5963DD0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicFontScaleModeEnum.c (CustomLogic.CustomLogicFontScaleModeEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x60028DA")]
	[Address(RVA = "0x5963CF0", Offset = "0x5962CF0", VA = "0x5963CF0")]
	public CustomLogicFontScaleModeEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicFontScaleModeEnum.c (CustomLogic.CustomLogicFontScaleModeEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_075463a5 == false) {
			Il2CppMethodInitialized_075463a5 = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicFontScaleModeEnum.c.

	// CustomLogic.CustomLogicFontScaleModeEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Height");
		__this.Add((Il2CppObject *)"Width");
		CustomLogicFontScaleModeEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicFontScaleModeEnum.Bindings$$<__CreatePropertyBinding__Height>g____getter|2_0: 3 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__Height_g____getter_2_0(CustomLogicFontScaleModeEnum __i)
	{
		uint in_EAX;
		object pIVar1;
		ulong uStack_8;

		uStack_8 = (ulong)in_EAX;
		pIVar1 = (object)(((long)&uStack_8 + 4));
		return pIVar1;
	}

	// CustomLogic.CustomLogicFontScaleModeEnum.Bindings$$<__CreatePropertyBinding__Width>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Width_g____getter_3_0(CustomLogicFontScaleModeEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}
}
