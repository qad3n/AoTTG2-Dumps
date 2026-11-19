// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicButtonBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicButtonBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.UIElements;

namespace CustomLogic;

[Token(Token = "0x20005E2")]
[CompilerGenerated]
internal class CustomLogicButtonBuiltin : CustomLogicVisualElementBuiltin
{
	[Token(Token = "0x20005E3")]
	public new static class Factory
	{
		[Token(Token = "0x60036B2")]
		[Address(RVA = "0x59FBDA0", Offset = "0x59FADA0", VA = "0x59FBDA0")]
		public static CustomLogicButtonBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicButtonBuiltin.c (CustomLogic.CustomLogicButtonBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			String pSVar1;
			String str0;
			String str2;
			Il2CppClass klass;
			ArgumentException __this;
			MethodInfo lastManagedFrame;
			int local_14;

			pSVar1 = local_14.ToString();
			str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicButtonBuiltin constructor found that takes ");
			str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
			pSVar1 = String.Concat(str0, pSVar1, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this = (ArgumentException)il2cpp_codegen_object_new(klass);
			__this = new ArgumentException(pSVar1);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicButtonBuiltin_Factory_CreateInstance);
			throw (object)__this;
		}
	}

	[Token(Token = "0x20005E4")]
	public new static class Bindings
	{
		[Token(Token = "0x400196F")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60036B3")]
		[Address(RVA = "0x59FBE30", Offset = "0x59FAE30", VA = "0x59FBE30")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicButtonBuiltin.c (CustomLogic.CustomLogicButtonBuiltin.Bindings$$CreateMemberBinding): 8 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicButtonBuiltin> pCVar2;
			CLMethodBinding<CustomLogicButtonBuiltin> pCVar3;
			String pSVar4;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "Text");
			if (bVar1) {
				if ((typeof(CustomLogicButtonBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicButtonBuiltin.Bindings)) ;
					pCVar2 = CustomLogicButtonBuiltin.Bindings.__CreatePropertyBinding__Text();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicButtonBuiltin.Bindings.__CreatePropertyBinding__Text();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "EnableRichText");
			if (bVar1) {
				if ((typeof(CustomLogicButtonBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicButtonBuiltin.Bindings)) ;
					pCVar2 = CustomLogicButtonBuiltin.Bindings.__CreatePropertyBinding__EnableRichText();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicButtonBuiltin.Bindings.__CreatePropertyBinding__EnableRichText();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "OnClick");
			if (!bVar1) {
				pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
				str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicButtonBuiltin not found");
				pSVar4 = String.Concat(pSVar4, name, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this = (Exception)il2cpp_codegen_object_new(klass);
				__this = new Exception(pSVar4);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings_CreateMemberBinding);
				throw (object)__this;
			}
			if ((typeof(CustomLogicButtonBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
				pCVar3 = CustomLogicButtonBuiltin.Bindings.__CreateMethodBinding__OnClick();
				return (ICLMemberBinding)pCVar3;
			}
			pCVar3 = CustomLogicButtonBuiltin.Bindings.__CreateMethodBinding__OnClick();
			return (ICLMemberBinding)pCVar3;
		}

		[Token(Token = "0x60036B4")]
		[Address(RVA = "0x59FBFC0", Offset = "0x59FAFC0", VA = "0x59FBFC0")]
		public static CLPropertyBinding<CustomLogicButtonBuiltin> __CreatePropertyBinding__Text()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicButtonBuiltin.c (CustomLogic.CustomLogicButtonBuiltin.Bindings$$__CreatePropertyBinding__Text): 4 lines keep C-only constructs
			Func<CustomLogicButtonBuiltin, object> __this;
			Action<CustomLogicButtonBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicButtonBuiltin> __this_01;

			__this = new Func<CustomLogicButtonBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings___CreatePropertyBinding__Text_g____getter_2_0);
			__this_00 = il2cpp_codegen_object_new(typeof(Action<CustomLogicButtonBuiltin, object>)) ;
			__this_00 = new Action<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings___CreatePropertyBinding__Text_g____setter_2_1);
			__this_01 = new CLPropertyBinding<CustomLogicButtonBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60036B5")]
		[Address(RVA = "0x59FC0A0", Offset = "0x59FB0A0", VA = "0x59FC0A0")]
		public static CLPropertyBinding<CustomLogicButtonBuiltin> __CreatePropertyBinding__EnableRichText()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicButtonBuiltin.c (CustomLogic.CustomLogicButtonBuiltin.Bindings$$__CreatePropertyBinding__EnableRichText): 4 lines keep C-only constructs
			Func<CustomLogicButtonBuiltin, object> __this;
			Action<CustomLogicButtonBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicButtonBuiltin> __this_01;

			__this = new Func<CustomLogicButtonBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings___CreatePropertyBinding__EnableRichText_g____gette);
			__this_00 = il2cpp_codegen_object_new(typeof(Action<CustomLogicButtonBuiltin, object>)) ;
			__this_00 = new Action<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings___CreatePropertyBinding__EnableRichText_g____sette);
			__this_01 = new CLPropertyBinding<CustomLogicButtonBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60036B6")]
		[Address(RVA = "0x59FC180", Offset = "0x59FB180", VA = "0x59FC180")]
		public static CLMethodBinding<CustomLogicButtonBuiltin> __CreateMethodBinding__OnClick()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicButtonBuiltin.c (CustomLogic.CustomLogicButtonBuiltin.Bindings$$__CreateMethodBinding__OnClick): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicButtonBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicButtonBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicButtonBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546f33 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicButtonBuiltin>)) ;
				Il2CppMethodInitialized_07546f33 = true;
				uVar1 = (typeof(CustomLogicButtonBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicButtonBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicButtonBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicButtonBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__4_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicButtonBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__4_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicButtonBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicButtonBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicButtonBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings_c___CreateMethodBinding__OnClick_b__4_0);
				pCVar2 = typeof(CustomLogicButtonBuiltin.Bindings.c).static_fields;
				pCVar2.__9__4_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicButtonBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x400196D")]
	[FieldOffset(Offset = "0x60")]
	private readonly Button _button;

	[Token(Token = "0x400196E")]
	[FieldOffset(Offset = "0x68")]
	private UserMethod _clickEvent;

	[Token(Token = "0x170009E3")]
	public string Text
	{
		[Token(Token = "0x60036A9")]
		[Address(RVA = "0x59FBC80", Offset = "0x59FAC80", VA = "0x59FBC80")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicButtonBuiltin.c (CustomLogic.CustomLogicButtonBuiltin$$get_Text): clean
			Button pUVar1;
			String pSVar2;

			pUVar1 = this._button;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			return pSVar2;
		}
		[Token(Token = "0x60036AA")]
		[Address(RVA = "0x59FBCB0", Offset = "0x59FACB0", VA = "0x59FBCB0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicButtonBuiltin.c (CustomLogic.CustomLogicButtonBuiltin$$set_Text): clean
			Button pUVar1;

			pUVar1 = this._button;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			pUVar1.set_text(value);
			return;
		}
	}

	[Token(Token = "0x170009E4")]
	public bool EnableRichText
	{
		[Token(Token = "0x60036AB")]
		[Address(RVA = "0x59FBCE0", Offset = "0x59FACE0", VA = "0x59FBCE0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicButtonBuiltin.c (CustomLogic.CustomLogicButtonBuiltin$$get_EnableRichText): clean
			Button pUVar1;

			pUVar1 = this._button;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			return pUVar1.m_EnableRichText;
		}
		[Token(Token = "0x60036AC")]
		[Address(RVA = "0x59FBD00", Offset = "0x59FAD00", VA = "0x59FBD00")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicButtonBuiltin.c (CustomLogic.CustomLogicButtonBuiltin$$set_EnableRichText): clean
			Button __this_00;

			__this_00 = this._button;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.enableRichText = value;
			return;
		}
	}

	[Token(Token = "0x170009E5")]
	public override string ClassName
	{
		[Token(Token = "0x60036AE")]
		[Address(RVA = "0x59FBD40", Offset = "0x59FAD40", VA = "0x59FBD40", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicButtonBuiltin.c (CustomLogic.CustomLogicButtonBuiltin$$get_ClassName): clean
			return "Button";
		}
	}

	[Token(Token = "0x170009E6")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60036AF")]
		[Address(RVA = "0x59FBD70", Offset = "0x59FAD70", VA = "0x59FBD70", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicButtonBuiltin.c (CustomLogic.CustomLogicButtonBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x170009E7")]
	public override bool IsStatic
	{
		[Token(Token = "0x60036B0")]
		[Address(RVA = "0x59FBD80", Offset = "0x59FAD80", VA = "0x59FBD80", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicButtonBuiltin.c (CustomLogic.CustomLogicButtonBuiltin$$get_IsStatic): clean
			return false;
		}
	}

	[Token(Token = "0x170009E8")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60036B1")]
		[Address(RVA = "0x59FBD90", Offset = "0x59FAD90", VA = "0x59FBD90", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicButtonBuiltin.c (CustomLogic.CustomLogicButtonBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x60036A7")]
	[Address(RVA = "0x59FBB50", Offset = "0x59FAB50", VA = "0x59FBB50")]
	public CustomLogicButtonBuiltin(Button button)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicButtonBuiltin.c (CustomLogic.CustomLogicButtonBuiltin$$.ctor): 1 lines keep C-only constructs
		Button __this_00;
		Clickable __this_01;
		Action __this_02;

		base((VisualElement)button);
		this._button = button;
		__this_00 = this._button;
		if (__this_00 != null) {
			__this_01 = __this_00.clickable;
			__this_02 = new Action((object)this, (intptr_t)MethodInfo_CustomLogic_CustomLogicButtonBuiltin_OnClick);
			if (__this_01 != null) {
				__this_01.add_clicked(__this_02);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60036A8")]
	[Address(RVA = "0x59FBC00", Offset = "0x59FAC00", VA = "0x59FBC00")]
	private void OnClick()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicButtonBuiltin.c (CustomLogic.CustomLogicButtonBuiltin$$OnClick): clean
		CustomLogicEvaluator __this_00;

		if (this._clickEvent == null) {
			return;
		}
		__this_00 = CustomLogicManager.Evaluator;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.EvaluateMethod(this._clickEvent, null);
		return;
	}

	[Token(Token = "0x60036AD")]
	[Address(RVA = "0x59FBD20", Offset = "0x59FAD20", VA = "0x59FBD20")]
	public CustomLogicButtonBuiltin OnClick(UserMethod clickEvent)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicButtonBuiltin.c (CustomLogic.CustomLogicButtonBuiltin$$OnClick): clean
		__this._clickEvent = clickEvent;
		return __this;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicButtonBuiltin.c.

	// CustomLogic.CustomLogicButtonBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Text");
		__this.Add((Il2CppObject *)"EnableRichText");
		__this.Add((Il2CppObject *)"OnClick");
		CustomLogicButtonBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicButtonBuiltin.Bindings$$<__CreatePropertyBinding__Text>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__Text_g____getter_2_0(CustomLogicButtonBuiltin __i)
	{
		Button pUVar1;
		String pSVar2;

		if ((__i == null) ||(pUVar1 = __i._button, pUVar1 == null)) {
			throw new NullReferenceException();
		}
		pSVar2 = pUVar1.get_text();
		return (object)pSVar2;
	}

	// CustomLogic.CustomLogicButtonBuiltin.Bindings$$<__CreatePropertyBinding__Text>g____setter|2_1: clean
	private static void Bindings____CreatePropertyBinding__Text_g____setter_2_1(CustomLogicButtonBuiltin __i, object __v)
	{
		Button pUVar1;
		String pSVar2;

		pSVar2 = CustomLogicEvaluator.ConvertTo<string>(__v);
		if ((__i == null) ||(pUVar1 = __i._button, pUVar1 == null)) {
			throw new NullReferenceException();
		}
		pUVar1.set_text(pSVar2);
		return;
	}

	// CustomLogic.CustomLogicButtonBuiltin.Bindings$$<__CreatePropertyBinding__EnableRichText>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__EnableRichText_g____getter_3_0(CustomLogicButtonBuiltin __i)
	{
		object pIVar1;

		if ((__i == null) ||(__i._button == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicButtonBuiltin.Bindings$$<__CreatePropertyBinding__EnableRichText>g____setter|3_1: clean
	private static void Bindings____CreatePropertyBinding__EnableRichText_g____setter_3_1(CustomLogicButtonBuiltin __i, object __v)
	{
		Button __this;
		bool value;

		value = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if ((__i == null) ||(__this = __i._button, __this == null)) {
			throw new NullReferenceException();
		}
		__this.enableRichText = value;
		return;
	}

	// CustomLogic.CustomLogicButtonBuiltin.Bindings.<>c$$.cctor: clean
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = new CustomLogicButtonBuiltin.Bindings.c();
		CustomLogicButtonBuiltin.Bindings.c.__9 =(CustomLogicButtonBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicButtonBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicButtonBuiltin.Bindings.<>c$$<__CreateMethodBinding__OnClick>b__4_0: clean
	private object Bindings_c____CreateMethodBinding__OnClick_b__4_0(CustomLogicButtonBuiltin __c, Object[] __a)
	{
		object obj;
		UserMethod pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			pCVar1 = CustomLogicEvaluator.ConvertTo<UserMethod>(obj);
			if (__c != null) {
				__c._clickEvent = pCVar1;
				return (object)__c;
			}
		}
		throw new NullReferenceException();
	}
}
