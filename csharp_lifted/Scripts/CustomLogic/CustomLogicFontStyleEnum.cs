// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicFontStyleEnum
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicFontStyleEnum.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200050F")]
[CompilerGenerated]
internal class CustomLogicFontStyleEnum : BuiltinClassInstance
{
	[Token(Token = "0x2000510")]
	public static class Factory
	{
		[Token(Token = "0x60028F1")]
		[Address(RVA = "0x59643C0", Offset = "0x59633C0", VA = "0x59643C0")]
		public static CustomLogicFontStyleEnum CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicFontStyleEnum.c (CustomLogic.CustomLogicFontStyleEnum.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicFontStyleEnum constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicFontStyleEnum_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicFontStyleEnum();
			return (CustomLogicFontStyleEnum)__this;
		}
	}

	[Token(Token = "0x2000511")]
	public static class Bindings
	{
		[Token(Token = "0x40017CE")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60028F2")]
		[Address(RVA = "0x59644E0", Offset = "0x59634E0", VA = "0x59644E0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicFontStyleEnum.c (CustomLogic.CustomLogicFontStyleEnum.Bindings$$CreateMemberBinding): 9 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicFontStyleEnum> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "Normal");
			if (bVar1) {
				if ((typeof(CustomLogicFontStyleEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicFontStyleEnum.Bindings)) ;
					pCVar2 = CustomLogicFontStyleEnum.Bindings.__CreatePropertyBinding__Normal();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicFontStyleEnum.Bindings.__CreatePropertyBinding__Normal();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Bold");
			if (bVar1) {
				if ((typeof(CustomLogicFontStyleEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicFontStyleEnum.Bindings)) ;
					pCVar2 = CustomLogicFontStyleEnum.Bindings.__CreatePropertyBinding__Bold();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicFontStyleEnum.Bindings.__CreatePropertyBinding__Bold();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "Italic");
			if (bVar1) {
				if ((typeof(CustomLogicFontStyleEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicFontStyleEnum.Bindings)) ;
					pCVar2 = CustomLogicFontStyleEnum.Bindings.__CreatePropertyBinding__Italic();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicFontStyleEnum.Bindings.__CreatePropertyBinding__Italic();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "BoldAndItalic");
			if (!bVar1) {
				pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
				str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicFontStyleEnum not found");
				pSVar3 = String.Concat(pSVar3, name, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this = (Exception)il2cpp_codegen_object_new(klass);
				__this = new Exception(pSVar3);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings_CreateMemberBinding);
				throw (object)__this;
			}
			if ((typeof(CustomLogicFontStyleEnum.Bindings)._2).cctor_finished_or_no_cctor == 0) {
				pCVar2 = CustomLogicFontStyleEnum.Bindings.__CreatePropertyBinding__BoldAndItalic();
				return (ICLMemberBinding)pCVar2;
			}
			pCVar2 = CustomLogicFontStyleEnum.Bindings.__CreatePropertyBinding__BoldAndItalic();
			return (ICLMemberBinding)pCVar2;
		}

		[Token(Token = "0x60028F3")]
		[Address(RVA = "0x59646C0", Offset = "0x59636C0", VA = "0x59646C0")]
		public static CLPropertyBinding<CustomLogicFontStyleEnum> __CreatePropertyBinding__Normal()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicFontStyleEnum.c (CustomLogic.CustomLogicFontStyleEnum.Bindings$$__CreatePropertyBinding__Normal): 2 lines keep C-only constructs
			Func<CustomLogicFontStyleEnum, object> __this;
			CLPropertyBinding<CustomLogicFontStyleEnum> __this_00;

			__this = new Func<CustomLogicFontStyleEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings___CreatePropertyBinding__Normal_g____getter_2_0);
			__this_00 = new CLPropertyBinding<CustomLogicFontStyleEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60028F4")]
		[Address(RVA = "0x5964760", Offset = "0x5963760", VA = "0x5964760")]
		public static CLPropertyBinding<CustomLogicFontStyleEnum> __CreatePropertyBinding__Bold()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicFontStyleEnum.c (CustomLogic.CustomLogicFontStyleEnum.Bindings$$__CreatePropertyBinding__Bold): 2 lines keep C-only constructs
			Func<CustomLogicFontStyleEnum, object> __this;
			CLPropertyBinding<CustomLogicFontStyleEnum> __this_00;

			__this = new Func<CustomLogicFontStyleEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings___CreatePropertyBinding__Bold_g____getter_3_0);
			__this_00 = new CLPropertyBinding<CustomLogicFontStyleEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60028F5")]
		[Address(RVA = "0x5964800", Offset = "0x5963800", VA = "0x5964800")]
		public static CLPropertyBinding<CustomLogicFontStyleEnum> __CreatePropertyBinding__Italic()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicFontStyleEnum.c (CustomLogic.CustomLogicFontStyleEnum.Bindings$$__CreatePropertyBinding__Italic): 2 lines keep C-only constructs
			Func<CustomLogicFontStyleEnum, object> __this;
			CLPropertyBinding<CustomLogicFontStyleEnum> __this_00;

			__this = new Func<CustomLogicFontStyleEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings___CreatePropertyBinding__Italic_g____getter_4_0);
			__this_00 = new CLPropertyBinding<CustomLogicFontStyleEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60028F6")]
		[Address(RVA = "0x59648A0", Offset = "0x59638A0", VA = "0x59648A0")]
		public static CLPropertyBinding<CustomLogicFontStyleEnum> __CreatePropertyBinding__BoldAndItalic()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicFontStyleEnum.c (CustomLogic.CustomLogicFontStyleEnum.Bindings$$__CreatePropertyBinding__BoldAndItalic): 2 lines keep C-only constructs
			Func<CustomLogicFontStyleEnum, object> __this;
			CLPropertyBinding<CustomLogicFontStyleEnum> __this_00;

			__this = new Func<CustomLogicFontStyleEnum, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicFontStyleEnum_Bindings___CreatePropertyBinding__BoldAndItalic_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicFontStyleEnum>((System_Func_T__object__o)__this, null);
			return __this_00;
		}
	}

	[Token(Token = "0x170005A4")]
	public static int Normal
	{
		[Token(Token = "0x60028E9")]
		[Address(RVA = "0x5964320", Offset = "0x5963320", VA = "0x5964320")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicFontStyleEnum.c (CustomLogic.CustomLogicFontStyleEnum$$get_Normal): clean
			return 0;
		}
	}

	[Token(Token = "0x170005A5")]
	public static int Bold
	{
		[Token(Token = "0x60028EA")]
		[Address(RVA = "0x5964330", Offset = "0x5963330", VA = "0x5964330")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicFontStyleEnum.c (CustomLogic.CustomLogicFontStyleEnum$$get_Bold): clean
			return 1;
		}
	}

	[Token(Token = "0x170005A6")]
	public static int Italic
	{
		[Token(Token = "0x60028EB")]
		[Address(RVA = "0x5964340", Offset = "0x5963340", VA = "0x5964340")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicFontStyleEnum.c (CustomLogic.CustomLogicFontStyleEnum$$get_Italic): clean
			return 2;
		}
	}

	[Token(Token = "0x170005A7")]
	public static int BoldAndItalic
	{
		[Token(Token = "0x60028EC")]
		[Address(RVA = "0x5964350", Offset = "0x5963350", VA = "0x5964350")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicFontStyleEnum.c (CustomLogic.CustomLogicFontStyleEnum$$get_BoldAndItalic): clean
			return 3;
		}
	}

	[Token(Token = "0x170005A8")]
	public override string ClassName
	{
		[Token(Token = "0x60028ED")]
		[Address(RVA = "0x5964360", Offset = "0x5963360", VA = "0x5964360", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicFontStyleEnum.c (CustomLogic.CustomLogicFontStyleEnum$$get_ClassName): clean
			return "FontStyleEnum";
		}
	}

	[Token(Token = "0x170005A9")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60028EE")]
		[Address(RVA = "0x5964390", Offset = "0x5963390", VA = "0x5964390", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicFontStyleEnum.c (CustomLogic.CustomLogicFontStyleEnum$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x170005AA")]
	public override bool IsStatic
	{
		[Token(Token = "0x60028EF")]
		[Address(RVA = "0x59643A0", Offset = "0x59633A0", VA = "0x59643A0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicFontStyleEnum.c (CustomLogic.CustomLogicFontStyleEnum$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x170005AB")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60028F0")]
		[Address(RVA = "0x59643B0", Offset = "0x59633B0", VA = "0x59643B0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicFontStyleEnum.c (CustomLogic.CustomLogicFontStyleEnum$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x60028E8")]
	[Address(RVA = "0x59642B0", Offset = "0x59632B0", VA = "0x59642B0")]
	public CustomLogicFontStyleEnum()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicFontStyleEnum.c (CustomLogic.CustomLogicFontStyleEnum$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_075463ac == false) {
			Il2CppMethodInitialized_075463ac = true;
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
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicFontStyleEnum.c.

	// CustomLogic.CustomLogicFontStyleEnum.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Normal");
		__this.Add((Il2CppObject *)"Bold");
		__this.Add((Il2CppObject *)"Italic");
		__this.Add((Il2CppObject *)"BoldAndItalic");
		CustomLogicFontStyleEnum.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicFontStyleEnum.Bindings$$<__CreatePropertyBinding__Normal>g____getter|2_0: 3 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__Normal_g____getter_2_0(CustomLogicFontStyleEnum __i)
	{
		uint in_EAX;
		object pIVar1;
		ulong uStack_8;

		uStack_8 = (ulong)in_EAX;
		pIVar1 = (object)(((long)&uStack_8 + 4));
		return pIVar1;
	}

	// CustomLogic.CustomLogicFontStyleEnum.Bindings$$<__CreatePropertyBinding__Bold>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Bold_g____getter_3_0(CustomLogicFontStyleEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicFontStyleEnum.Bindings$$<__CreatePropertyBinding__Italic>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Italic_g____getter_4_0(CustomLogicFontStyleEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}

	// CustomLogic.CustomLogicFontStyleEnum.Bindings$$<__CreatePropertyBinding__BoldAndItalic>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__BoldAndItalic_g____getter_5_0(CustomLogicFontStyleEnum __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		return pIVar1;
	}
}
