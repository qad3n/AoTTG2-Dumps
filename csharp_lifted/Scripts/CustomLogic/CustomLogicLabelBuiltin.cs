// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicLabelBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicLabelBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.UIElements;

namespace CustomLogic;

[Token(Token = "0x20005F2")]
[CompilerGenerated]
internal class CustomLogicLabelBuiltin : CustomLogicVisualElementBuiltin
{
	[Token(Token = "0x20005F3")]
	public new static class Factory
	{
		[Token(Token = "0x6003727")]
		[Address(RVA = "0x5A007C0", Offset = "0x59FF7C0", VA = "0x5A007C0")]
		public static CustomLogicLabelBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLabelBuiltin.c (CustomLogic.CustomLogicLabelBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			String pSVar1;
			String str0;
			String str2;
			Il2CppClass klass;
			ArgumentException __this;
			MethodInfo lastManagedFrame;
			int local_14;

			pSVar1 = local_14.ToString();
			str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicLabelBuiltin constructor found that takes ");
			str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
			pSVar1 = String.Concat(str0, pSVar1, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this = (ArgumentException)il2cpp_codegen_object_new(klass);
			__this = new ArgumentException(pSVar1);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicLabelBuiltin_Factory_CreateInstance);
			throw (object)__this;
		}
	}

	[Token(Token = "0x20005F4")]
	public new static class Bindings
	{
		[Token(Token = "0x4001988")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6003728")]
		[Address(RVA = "0x5A00850", Offset = "0x59FF850", VA = "0x5A00850")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLabelBuiltin.c (CustomLogic.CustomLogicLabelBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicLabelBuiltin> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "Text");
			if (bVar1) {
				if ((typeof(CustomLogicLabelBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicLabelBuiltin.Bindings.__CreatePropertyBinding__Text();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicLabelBuiltin.Bindings.__CreatePropertyBinding__Text();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "EnableRichText");
			if (!bVar1) {
				pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
				str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicLabelBuiltin not found");
				pSVar3 = String.Concat(pSVar3, name, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this = (Exception)il2cpp_codegen_object_new(klass);
				__this = new Exception(pSVar3);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicLabelBuiltin_Bindings_CreateMemberBinding);
				throw (object)__this;
			}
			if ((typeof(CustomLogicLabelBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
				pCVar2 = CustomLogicLabelBuiltin.Bindings.__CreatePropertyBinding__EnableRichText();
				return (ICLMemberBinding)pCVar2;
			}
			pCVar2 = CustomLogicLabelBuiltin.Bindings.__CreatePropertyBinding__EnableRichText();
			return (ICLMemberBinding)pCVar2;
		}

		[Token(Token = "0x6003729")]
		[Address(RVA = "0x5A00990", Offset = "0x59FF990", VA = "0x5A00990")]
		public static CLPropertyBinding<CustomLogicLabelBuiltin> __CreatePropertyBinding__Text()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLabelBuiltin.c (CustomLogic.CustomLogicLabelBuiltin.Bindings$$__CreatePropertyBinding__Text): 3 lines keep C-only constructs
			Func<CustomLogicLabelBuiltin, object> __this;
			Action<CustomLogicLabelBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicLabelBuiltin> __this_01;

			__this = new Func<CustomLogicLabelBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLabelBuiltin_Bindings___CreatePropertyBinding__Text_g____getter_2_0);
			__this_00 = new Action<CustomLogicLabelBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLabelBuiltin_Bindings___CreatePropertyBinding__Text_g____setter_2_1);
			__this_01 = new CLPropertyBinding<CustomLogicLabelBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x600372A")]
		[Address(RVA = "0x5A00A70", Offset = "0x59FFA70", VA = "0x5A00A70")]
		public static CLPropertyBinding<CustomLogicLabelBuiltin> __CreatePropertyBinding__EnableRichText()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLabelBuiltin.c (CustomLogic.CustomLogicLabelBuiltin.Bindings$$__CreatePropertyBinding__EnableRichText): 3 lines keep C-only constructs
			Func<CustomLogicLabelBuiltin, object> __this;
			Action<CustomLogicLabelBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicLabelBuiltin> __this_01;

			__this = new Func<CustomLogicLabelBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLabelBuiltin_Bindings___CreatePropertyBinding__EnableRichText_g____getter);
			__this_00 = new Action<CustomLogicLabelBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLabelBuiltin_Bindings___CreatePropertyBinding__EnableRichText_g____setter);
			__this_01 = new CLPropertyBinding<CustomLogicLabelBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}
	}

	[Token(Token = "0x4001987")]
	[FieldOffset(Offset = "0x60")]
	private readonly Label _label;

	[Token(Token = "0x170009FC")]
	public string Text
	{
		[Token(Token = "0x600371F")]
		[Address(RVA = "0x5A006C0", Offset = "0x59FF6C0", VA = "0x5A006C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLabelBuiltin.c (CustomLogic.CustomLogicLabelBuiltin$$get_Text): clean
			Label pUVar1;
			String pSVar2;

			pUVar1 = this._label;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			return pSVar2;
		}
		[Token(Token = "0x6003720")]
		[Address(RVA = "0x5A006F0", Offset = "0x59FF6F0", VA = "0x5A006F0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLabelBuiltin.c (CustomLogic.CustomLogicLabelBuiltin$$set_Text): clean
			Label pUVar1;

			pUVar1 = this._label;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			pUVar1.set_text(value);
			return;
		}
	}

	[Token(Token = "0x170009FD")]
	public bool EnableRichText
	{
		[Token(Token = "0x6003721")]
		[Address(RVA = "0x5A00720", Offset = "0x59FF720", VA = "0x5A00720")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLabelBuiltin.c (CustomLogic.CustomLogicLabelBuiltin$$get_EnableRichText): clean
			Label pUVar1;

			pUVar1 = this._label;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			return pUVar1.m_EnableRichText;
		}
		[Token(Token = "0x6003722")]
		[Address(RVA = "0x5A00740", Offset = "0x59FF740", VA = "0x5A00740")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLabelBuiltin.c (CustomLogic.CustomLogicLabelBuiltin$$set_EnableRichText): clean
			TextElement __this_00;

			__this_00 = (TextElement)this._label;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.enableRichText = value;
			return;
		}
	}

	[Token(Token = "0x170009FE")]
	public override string ClassName
	{
		[Token(Token = "0x6003723")]
		[Address(RVA = "0x5A00760", Offset = "0x59FF760", VA = "0x5A00760", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLabelBuiltin.c (CustomLogic.CustomLogicLabelBuiltin$$get_ClassName): clean
			return "Label";
		}
	}

	[Token(Token = "0x170009FF")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6003724")]
		[Address(RVA = "0x5A00790", Offset = "0x59FF790", VA = "0x5A00790", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLabelBuiltin.c (CustomLogic.CustomLogicLabelBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000A00")]
	public override bool IsStatic
	{
		[Token(Token = "0x6003725")]
		[Address(RVA = "0x5A007A0", Offset = "0x59FF7A0", VA = "0x5A007A0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLabelBuiltin.c (CustomLogic.CustomLogicLabelBuiltin$$get_IsStatic): clean
			return false;
		}
	}

	[Token(Token = "0x17000A01")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6003726")]
		[Address(RVA = "0x5A007B0", Offset = "0x59FF7B0", VA = "0x5A007B0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLabelBuiltin.c (CustomLogic.CustomLogicLabelBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x600371E")]
	[Address(RVA = "0x5A00690", Offset = "0x59FF690", VA = "0x5A00690")]
	public CustomLogicLabelBuiltin(Label label)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicLabelBuiltin.c (CustomLogic.CustomLogicLabelBuiltin$$.ctor): clean
		base((VisualElement)label);
		this._label = label;
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicLabelBuiltin.c.

	// CustomLogic.CustomLogicLabelBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Text");
		__this.Add((Il2CppObject *)"EnableRichText");
		CustomLogicLabelBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicLabelBuiltin.Bindings$$<__CreatePropertyBinding__Text>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__Text_g____getter_2_0(CustomLogicLabelBuiltin __i)
	{
		Label pUVar1;
		String pSVar2;

		if ((__i == null) ||(pUVar1 = __i._label, pUVar1 == null)) {
			throw new NullReferenceException();
		}
		pSVar2 = pUVar1.get_text();
		return (object)pSVar2;
	}

	// CustomLogic.CustomLogicLabelBuiltin.Bindings$$<__CreatePropertyBinding__Text>g____setter|2_1: clean
	private static void Bindings____CreatePropertyBinding__Text_g____setter_2_1(CustomLogicLabelBuiltin __i, object __v)
	{
		Label pUVar1;
		String pSVar2;

		pSVar2 = CustomLogicEvaluator.ConvertTo<string>(__v);
		if ((__i == null) ||(pUVar1 = __i._label, pUVar1 == null)) {
			throw new NullReferenceException();
		}
		pUVar1.set_text(pSVar2);
		return;
	}

	// CustomLogic.CustomLogicLabelBuiltin.Bindings$$<__CreatePropertyBinding__EnableRichText>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__EnableRichText_g____getter_3_0(CustomLogicLabelBuiltin __i)
	{
		object pIVar1;

		if ((__i == null) ||(__i._label == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicLabelBuiltin.Bindings$$<__CreatePropertyBinding__EnableRichText>g____setter|3_1: clean
	private static void Bindings____CreatePropertyBinding__EnableRichText_g____setter_3_1(CustomLogicLabelBuiltin __i, object __v)
	{
		TextElement __this;
		bool value;

		value = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if ((__i == null) ||(__this = (TextElement)__i._label, __this == null)) {
			throw new NullReferenceException();
		}
		__this.enableRichText = value;
		return;
	}
}
