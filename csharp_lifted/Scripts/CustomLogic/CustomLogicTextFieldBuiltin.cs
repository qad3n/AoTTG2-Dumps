// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicTextFieldBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicTextFieldBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.UIElements;

namespace CustomLogic;

[Token(Token = "0x2000601")]
[CompilerGenerated]
internal class CustomLogicTextFieldBuiltin : CustomLogicVisualElementBuiltin
{
	[Token(Token = "0x2000602")]
	public new static class Factory
	{
		[Token(Token = "0x60037DC")]
		[Address(RVA = "0x5A072F0", Offset = "0x5A062F0", VA = "0x5A072F0")]
		public static CustomLogicTextFieldBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextFieldBuiltin.c (CustomLogic.CustomLogicTextFieldBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			String pSVar1;
			String str0;
			String str2;
			Il2CppClass klass;
			ArgumentException __this;
			MethodInfo lastManagedFrame;
			int local_14;

			pSVar1 = local_14.ToString();
			str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicTextFieldBuiltin constructor found that takes ");
			str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
			pSVar1 = String.Concat(str0, pSVar1, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this = (ArgumentException)il2cpp_codegen_object_new(klass);
			__this = new ArgumentException(pSVar1);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Factory_CreateInstance);
			throw (object)__this;
		}
	}

	[Token(Token = "0x2000603")]
	public new static class Bindings
	{
		[Token(Token = "0x40019A2")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60037DD")]
		[Address(RVA = "0x5A07380", Offset = "0x5A06380", VA = "0x5A07380")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextFieldBuiltin.c (CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLPropertyBinding<CustomLogicTextFieldBuiltin> pCVar3;
			CLMethodBinding<CustomLogicTextFieldBuiltin> pCVar4;
			String pSVar5;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0xd147f96b) {
				if (uVar2 < 0x6d3fc92a) {
					if (uVar2 == 0x14e6c5e8) {
						bVar1 = (name == "SelectionColor");
						if (bVar1) {
							if ((typeof(CustomLogicTextFieldBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicTextFieldBuiltin.Bindings.__CreatePropertyBinding__SelectionColor();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicTextFieldBuiltin.Bindings.__CreatePropertyBinding__SelectionColor();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x6d3fc929) {
						bVar1 = (name == "IsDelayed");
						if (bVar1) {
							if ((typeof(CustomLogicTextFieldBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicTextFieldBuiltin.Bindings.__CreatePropertyBinding__IsDelayed();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicTextFieldBuiltin.Bindings.__CreatePropertyBinding__IsDelayed();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x9eccf29d) {
					bVar1 = (name == "Label");
					if (bVar1) {
						if ((typeof(CustomLogicTextFieldBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicTextFieldBuiltin.Bindings.__CreatePropertyBinding__Label();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicTextFieldBuiltin.Bindings.__CreatePropertyBinding__Label();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xd147f96a) {
					bVar1 = (name == "Value");
					if (bVar1) {
						if ((typeof(CustomLogicTextFieldBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicTextFieldBuiltin.Bindings.__CreatePropertyBinding__Value();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicTextFieldBuiltin.Bindings.__CreatePropertyBinding__Value();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xd989409f) {
				if (uVar2 == 0xd1dd43b5) {
					bVar1 = (name == "SetValueWithoutNotify");
					if (bVar1) {
						if ((typeof(CustomLogicTextFieldBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar4 = CustomLogicTextFieldBuiltin.Bindings.__CreateMethodBinding__SetValueWithoutNotify();
							return (ICLMemberBinding)pCVar4;
						}
						pCVar4 = CustomLogicTextFieldBuiltin.Bindings.__CreateMethodBinding__SetValueWithoutNotify();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0xd989409e) {
					bVar1 = (name == "CursorColor");
					if (bVar1) {
						if ((typeof(CustomLogicTextFieldBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicTextFieldBuiltin.Bindings.__CreatePropertyBinding__CursorColor();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicTextFieldBuiltin.Bindings.__CreatePropertyBinding__CursorColor();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xe890d540) {
				bVar1 = (name == "Multiline");
				if (bVar1) {
					if ((typeof(CustomLogicTextFieldBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar3 = CustomLogicTextFieldBuiltin.Bindings.__CreatePropertyBinding__Multiline();
						return (ICLMemberBinding)pCVar3;
					}
					pCVar3 = CustomLogicTextFieldBuiltin.Bindings.__CreatePropertyBinding__Multiline();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xf35844be) {
				bVar1 = (name == "RegisterValueChangedEventCallback");
				if (bVar1) {
					if ((typeof(CustomLogicTextFieldBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar4 = CustomLogicTextFieldBuiltin.Bindings.__CreateMethodBinding__RegisterValueChangedEventCallback();
						return (ICLMemberBinding)pCVar4;
					}
					pCVar4 = CustomLogicTextFieldBuiltin.Bindings.__CreateMethodBinding__RegisterValueChangedEventCallback();
					return (ICLMemberBinding)pCVar4;
				}
			}
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicTextFieldBuiltin not found");
			pSVar5 = String.Concat(pSVar5, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x60037DE")]
		[Address(RVA = "0x5A07770", Offset = "0x5A06770", VA = "0x5A07770")]
		public static CLPropertyBinding<CustomLogicTextFieldBuiltin> __CreatePropertyBinding__IsDelayed()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextFieldBuiltin.c (CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$__CreatePropertyBinding__IsDelayed): 3 lines keep C-only constructs
			Func<CustomLogicTextFieldBuiltin, object> __this;
			Action<CustomLogicTextFieldBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicTextFieldBuiltin> __this_01;

			__this = new Func<CustomLogicTextFieldBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__IsDelayed_g____getter);
			__this_00 = new Action<CustomLogicTextFieldBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__IsDelayed_g____setter);
			__this_01 = new CLPropertyBinding<CustomLogicTextFieldBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60037DF")]
		[Address(RVA = "0x5A07850", Offset = "0x5A06850", VA = "0x5A07850")]
		public static CLPropertyBinding<CustomLogicTextFieldBuiltin> __CreatePropertyBinding__Multiline()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextFieldBuiltin.c (CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$__CreatePropertyBinding__Multiline): 3 lines keep C-only constructs
			Func<CustomLogicTextFieldBuiltin, object> __this;
			Action<CustomLogicTextFieldBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicTextFieldBuiltin> __this_01;

			__this = new Func<CustomLogicTextFieldBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__Multiline_g____getter);
			__this_00 = new Action<CustomLogicTextFieldBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__Multiline_g____setter);
			__this_01 = new CLPropertyBinding<CustomLogicTextFieldBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60037E0")]
		[Address(RVA = "0x5A07930", Offset = "0x5A06930", VA = "0x5A07930")]
		public static CLPropertyBinding<CustomLogicTextFieldBuiltin> __CreatePropertyBinding__Label()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextFieldBuiltin.c (CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$__CreatePropertyBinding__Label): 3 lines keep C-only constructs
			Func<CustomLogicTextFieldBuiltin, object> __this;
			Action<CustomLogicTextFieldBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicTextFieldBuiltin> __this_01;

			__this = new Func<CustomLogicTextFieldBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__Label_g____getter_4_0);
			__this_00 = new Action<CustomLogicTextFieldBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__Label_g____setter_4_1);
			__this_01 = new CLPropertyBinding<CustomLogicTextFieldBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60037E1")]
		[Address(RVA = "0x5A07A10", Offset = "0x5A06A10", VA = "0x5A07A10")]
		public static CLPropertyBinding<CustomLogicTextFieldBuiltin> __CreatePropertyBinding__Value()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextFieldBuiltin.c (CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$__CreatePropertyBinding__Value): 3 lines keep C-only constructs
			Func<CustomLogicTextFieldBuiltin, object> __this;
			Action<CustomLogicTextFieldBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicTextFieldBuiltin> __this_01;

			__this = new Func<CustomLogicTextFieldBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__Value_g____getter_5_0);
			__this_00 = new Action<CustomLogicTextFieldBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__Value_g____setter_5_1);
			__this_01 = new CLPropertyBinding<CustomLogicTextFieldBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60037E2")]
		[Address(RVA = "0x5A07AF0", Offset = "0x5A06AF0", VA = "0x5A07AF0")]
		public static CLPropertyBinding<CustomLogicTextFieldBuiltin> __CreatePropertyBinding__SelectionColor()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextFieldBuiltin.c (CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$__CreatePropertyBinding__SelectionColor): 3 lines keep C-only constructs
			Func<CustomLogicTextFieldBuiltin, object> __this;
			Action<CustomLogicTextFieldBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicTextFieldBuiltin> __this_01;

			__this = new Func<CustomLogicTextFieldBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__SelectionColor_g____ge);
			__this_00 = new Action<CustomLogicTextFieldBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__SelectionColor_g____se);
			__this_01 = new CLPropertyBinding<CustomLogicTextFieldBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60037E3")]
		[Address(RVA = "0x5A07BD0", Offset = "0x5A06BD0", VA = "0x5A07BD0")]
		public static CLPropertyBinding<CustomLogicTextFieldBuiltin> __CreatePropertyBinding__CursorColor()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextFieldBuiltin.c (CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$__CreatePropertyBinding__CursorColor): 3 lines keep C-only constructs
			Func<CustomLogicTextFieldBuiltin, object> __this;
			Action<CustomLogicTextFieldBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicTextFieldBuiltin> __this_01;

			__this = new Func<CustomLogicTextFieldBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__CursorColor_g____gette);
			__this_00 = new Action<CustomLogicTextFieldBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings___CreatePropertyBinding__CursorColor_g____sette);
			__this_01 = new CLPropertyBinding<CustomLogicTextFieldBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60037E4")]
		[Address(RVA = "0x5A07CB0", Offset = "0x5A06CB0", VA = "0x5A07CB0")]
		public static CLMethodBinding<CustomLogicTextFieldBuiltin> __CreateMethodBinding__RegisterValueChangedEventCallback()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextFieldBuiltin.c (CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$__CreateMethodBinding__RegisterValueChangedEventCallback): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicTextFieldBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicTextFieldBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546fe0 == false) {
				Il2CppMethodInitialized_07546fe0 = true;
				uVar1 = (typeof(CustomLogicTextFieldBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicTextFieldBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicTextFieldBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__8_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicTextFieldBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__8_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicTextFieldBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicTextFieldBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicTextFieldBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c___CreateMethodBinding__RegisterValueChangedEv);
				pCVar2 = typeof(CustomLogicTextFieldBuiltin.Bindings.c).static_fields;
				pCVar2.__9__8_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicTextFieldBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60037E5")]
		[Address(RVA = "0x5A07DF0", Offset = "0x5A06DF0", VA = "0x5A07DF0")]
		public static CLMethodBinding<CustomLogicTextFieldBuiltin> __CreateMethodBinding__SetValueWithoutNotify()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextFieldBuiltin.c (CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$__CreateMethodBinding__SetValueWithoutNotify): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicTextFieldBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicTextFieldBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicTextFieldBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546fe1 == false) {
				Il2CppMethodInitialized_07546fe1 = true;
				uVar1 = (typeof(CustomLogicTextFieldBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicTextFieldBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicTextFieldBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__9_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicTextFieldBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__9_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicTextFieldBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicTextFieldBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicTextFieldBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_Bindings_c___CreateMethodBinding__SetValueWithoutNotify);
				pCVar2 = typeof(CustomLogicTextFieldBuiltin.Bindings.c).static_fields;
				pCVar2.__9__9_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicTextFieldBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x40019A1")]
	[FieldOffset(Offset = "0x60")]
	private readonly TextField _textField;

	[Token(Token = "0x17000A1F")]
	public bool IsDelayed
	{
		[Token(Token = "0x60037CA")]
		[Address(RVA = "0x5A06C90", Offset = "0x5A05C90", VA = "0x5A06C90")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextFieldBuiltin.c (CustomLogic.CustomLogicTextFieldBuiltin$$get_IsDelayed): clean
			TextInputBaseField<TValueType> __this_00;
			bool bVar1;

			__this_00 = (TextInputBaseField<TValueType>)this._textField;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return bVar1;
		}
		[Token(Token = "0x60037CB")]
		[Address(RVA = "0x5A06CD0", Offset = "0x5A05CD0", VA = "0x5A06CD0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextFieldBuiltin.c (CustomLogic.CustomLogicTextFieldBuiltin$$set_IsDelayed): clean
			TextInputBaseField<TValueType> __this_00;

			__this_00 = (TextInputBaseField<TValueType>)this._textField;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.isDelayed = value;
			return;
		}
	}

	[Token(Token = "0x17000A20")]
	public bool Multiline
	{
		[Token(Token = "0x60037CC")]
		[Address(RVA = "0x5A06D20", Offset = "0x5A05D20", VA = "0x5A06D20")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextFieldBuiltin.c (CustomLogic.CustomLogicTextFieldBuiltin$$get_Multiline): clean
			TextField __this_00;
			bool bVar1;

			__this_00 = this._textField;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return bVar1;
		}
		[Token(Token = "0x60037CD")]
		[Address(RVA = "0x5A06D40", Offset = "0x5A05D40", VA = "0x5A06D40")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextFieldBuiltin.c (CustomLogic.CustomLogicTextFieldBuiltin$$set_Multiline): clean
			TextField __this_00;

			__this_00 = this._textField;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.multiline = value;
			return;
		}
	}

	[Token(Token = "0x17000A21")]
	public string Label
	{
		[Token(Token = "0x60037CE")]
		[Address(RVA = "0x5A06D60", Offset = "0x5A05D60", VA = "0x5A06D60")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextFieldBuiltin.c (CustomLogic.CustomLogicTextFieldBuiltin$$get_Label): clean
			TextField __this_00;
			String pSVar1;

			__this_00 = this._textField;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return pSVar1;
		}
		[Token(Token = "0x60037CF")]
		[Address(RVA = "0x5A06DA0", Offset = "0x5A05DA0", VA = "0x5A06DA0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextFieldBuiltin.c (CustomLogic.CustomLogicTextFieldBuiltin$$set_Label): clean
			TextField __this_00;

			__this_00 = this._textField;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.label = value;
			return;
		}
	}

	[Token(Token = "0x17000A22")]
	public string Value
	{
		[Token(Token = "0x60037D0")]
		[Address(RVA = "0x5A06DF0", Offset = "0x5A05DF0", VA = "0x5A06DF0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextFieldBuiltin.c (CustomLogic.CustomLogicTextFieldBuiltin$$get_Value): clean
			TextField pUVar1;
			String pSVar2;

			pUVar1 = this._textField;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			return pSVar2;
		}
		[Token(Token = "0x60037D1")]
		[Address(RVA = "0x5A06E20", Offset = "0x5A05E20", VA = "0x5A06E20")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextFieldBuiltin.c (CustomLogic.CustomLogicTextFieldBuiltin$$set_Value): clean
			TextField pUVar1;

			pUVar1 = this._textField;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			pUVar1.set_value(value);
			return;
		}
	}

	[Token(Token = "0x17000A23")]
	public CustomLogicColorBuiltin SelectionColor
	{
		[Token(Token = "0x60037D2")]
		[Address(RVA = "0x5A06E50", Offset = "0x5A05E50", VA = "0x5A06E50")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextFieldBuiltin.c (CustomLogic.CustomLogicTextFieldBuiltin$$get_SelectionColor): clean
			TextInputBaseField<TValueType> __this_00;
			CustomLogicColorBuiltin __this_01;
			Color color;

			__this_00 = (TextInputBaseField<TValueType>)this._textField;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			color = __this_00.selectionColor;
			__this_01 = new CustomLogicColorBuiltin(color);
			return __this_01;
		}
		[Token(Token = "0x60037D3")]
		[Address(RVA = "0x5A06EE0", Offset = "0x5A05EE0", VA = "0x5A06EE0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextFieldBuiltin.c (CustomLogic.CustomLogicTextFieldBuiltin$$set_SelectionColor): clean
			TextInputBaseField<TValueType> __this_00;
			Color255 __this_01;
			object obj;
			Color value_00;

			__this_00 = (TextInputBaseField<TValueType>)this._textField;
			if (__this_00 != null) {
				obj = (object)__this_00.textSelection;
				if ((value != null) &&(__this_01 = value.Value, __this_01 != null)) {
					value_00 = __this_01.ToColor();
					if (obj != null) {
						obj.set_selectionColor(value_00);
						return;
					}
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000A24")]
	public CustomLogicColorBuiltin CursorColor
	{
		[Token(Token = "0x60037D4")]
		[Address(RVA = "0x5A06FE0", Offset = "0x5A05FE0", VA = "0x5A06FE0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextFieldBuiltin.c (CustomLogic.CustomLogicTextFieldBuiltin$$get_CursorColor): clean
			TextInputBaseField<TValueType> __this_00;
			CustomLogicColorBuiltin __this_01;
			Color color;

			__this_00 = (TextInputBaseField<TValueType>)this._textField;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			color = __this_00.cursorColor;
			__this_01 = new CustomLogicColorBuiltin(color);
			return __this_01;
		}
		[Token(Token = "0x60037D5")]
		[Address(RVA = "0x5A07070", Offset = "0x5A06070", VA = "0x5A07070")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextFieldBuiltin.c (CustomLogic.CustomLogicTextFieldBuiltin$$set_CursorColor): clean
			TextInputBaseField<TValueType> __this_00;
			Color255 __this_01;
			object obj;
			Color value_00;

			__this_00 = (TextInputBaseField<TValueType>)this._textField;
			if (__this_00 != null) {
				obj = (object)__this_00.textSelection;
				if ((value != null) &&(__this_01 = value.Value, __this_01 != null)) {
					value_00 = __this_01.ToColor();
					if (obj != null) {
						obj.set_cursorColor(value_00);
						return;
					}
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000A25")]
	public override string ClassName
	{
		[Token(Token = "0x60037D8")]
		[Address(RVA = "0x5A07290", Offset = "0x5A06290", VA = "0x5A07290", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextFieldBuiltin.c (CustomLogic.CustomLogicTextFieldBuiltin$$get_ClassName): clean
			return "TextField";
		}
	}

	[Token(Token = "0x17000A26")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60037D9")]
		[Address(RVA = "0x5A072C0", Offset = "0x5A062C0", VA = "0x5A072C0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextFieldBuiltin.c (CustomLogic.CustomLogicTextFieldBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000A27")]
	public override bool IsStatic
	{
		[Token(Token = "0x60037DA")]
		[Address(RVA = "0x5A072D0", Offset = "0x5A062D0", VA = "0x5A072D0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextFieldBuiltin.c (CustomLogic.CustomLogicTextFieldBuiltin$$get_IsStatic): clean
			return false;
		}
	}

	[Token(Token = "0x17000A28")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60037DB")]
		[Address(RVA = "0x5A072E0", Offset = "0x5A062E0", VA = "0x5A072E0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicTextFieldBuiltin.c (CustomLogic.CustomLogicTextFieldBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x60037C9")]
	[Address(RVA = "0x5A06C60", Offset = "0x5A05C60", VA = "0x5A06C60")]
	public CustomLogicTextFieldBuiltin(TextField textField)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicTextFieldBuiltin.c (CustomLogic.CustomLogicTextFieldBuiltin$$.ctor): clean
		base((VisualElement)textField);
		this._textField = textField;
		return;
	}

	[Token(Token = "0x60037D6")]
	[Address(RVA = "0x5A07170", Offset = "0x5A06170", VA = "0x5A07170")]
	public CustomLogicTextFieldBuiltin RegisterValueChangedEventCallback(UserMethod changeEvent)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicTextFieldBuiltin.c (CustomLogic.CustomLogicTextFieldBuiltin$$RegisterValueChangedEventCallback): 2 lines keep C-only constructs
		TextField control;
		CustomLogicTextFieldBuiltin.c__DisplayClass20_0 __this_00;
		EventCallback<TEventType> __this_01;

		__this_00 = new CustomLogicTextFieldBuiltin.c__DisplayClass20_0();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.changeEvent = changeEvent;
		control = __this._textField;
		__this_01 = new EventCallback<ChangeEvent<string>>((object)__this_00, (intptr_t) MethodInfo_CustomLogic_CustomLogicTextFieldBuiltin_c__DisplayClass20_0_RegisterValueChangedEventCallback_b);
		INotifyValueChangedExtensions.RegisterValueChangedCallback<string>((INotifyValueChanged<T>)control, (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o)__this_01);
		return __this;
	}

	[Token(Token = "0x60037D7")]
	[Address(RVA = "0x5A07260", Offset = "0x5A06260", VA = "0x5A07260")]
	public void SetValueWithoutNotify(string value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicTextFieldBuiltin.c (CustomLogic.CustomLogicTextFieldBuiltin$$SetValueWithoutNotify): clean
		TextField pUVar1;

		pUVar1 = this._textField;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pUVar1.SetValueWithoutNotify(value);
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicTextFieldBuiltin.c.

	// CustomLogic.CustomLogicTextFieldBuiltin.<>c__DisplayClass20_0$$.ctor: clean
	private void c__DisplayClass20_0__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"IsDelayed");
		__this.Add((Il2CppObject *)"Multiline");
		__this.Add((Il2CppObject *)"Label");
		__this.Add((Il2CppObject *)"Value");
		__this.Add((Il2CppObject *)"SelectionColor");
		__this.Add((Il2CppObject *)"CursorColor");
		__this.Add((Il2CppObject *)"RegisterValueChangedEventCallback");
		__this.Add((Il2CppObject *)"SetValueWithoutNotify");
		CustomLogicTextFieldBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__IsDelayed>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__IsDelayed_g____getter_2_0(CustomLogicTextFieldBuiltin __i)
	{
		TextInputBaseField<TValueType> __this;
		object pIVar1;

		if (__i != null) {
			__this = (TextInputBaseField<TValueType>)__i._textField;
			if (__this != null) {
				return pIVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__IsDelayed>g____setter|2_1: clean
	private static void Bindings____CreatePropertyBinding__IsDelayed_g____setter_2_1(CustomLogicTextFieldBuiltin __i, object __v)
	{
		TextInputBaseField<TValueType> __this;
		bool value;

		value = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if (__i != null) {
			__this = (TextInputBaseField<TValueType>)__i._textField;
			if (__this != null) {
				__this.isDelayed = value;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__Multiline>g____getter|3_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__Multiline_g____getter_3_0(CustomLogicTextFieldBuiltin __i)
	{
		TextField __this;
		bool bVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if ((__i == null) ||(__this = __i._textField, __this == null)) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		bVar1 = __this.multiline;
		uStack_8 = CONCAT17(bVar1, (undefined7)uStack_8);
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__Multiline>g____setter|3_1: clean
	private static void Bindings____CreatePropertyBinding__Multiline_g____setter_3_1(CustomLogicTextFieldBuiltin __i, object __v)
	{
		TextField __this;
		bool value;

		value = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if ((__i == null) ||(__this = __i._textField, __this == null)) {
			throw new NullReferenceException();
		}
		__this.multiline = value;
		return;
	}

	// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__Label>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Label_g____getter_4_0(CustomLogicTextFieldBuiltin __i)
	{
		TextField __this;
		String pSVar1;

		if (__i != null) {
			__this = __i._textField;
			if (__this != null) {
				pSVar1 = __this.label;
				return (object)pSVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__Label>g____setter|4_1: clean
	private static void Bindings____CreatePropertyBinding__Label_g____setter_4_1(CustomLogicTextFieldBuiltin __i, object __v)
	{
		TextField __this;
		String value;

		value = CustomLogicEvaluator.ConvertTo<string>(__v);
		if (__i != null) {
			__this = __i._textField;
			if (__this != null) {
				__this.label = value;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__Value_g____getter_5_0(CustomLogicTextFieldBuiltin __i)
	{
		TextField pUVar1;
		String pSVar2;

		if ((__i == null) ||(pUVar1 = __i._textField, pUVar1 == null)) {
			throw new NullReferenceException();
		}
		pSVar2 = pUVar1.get_value();
		return (object)pSVar2;
	}

	// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____setter|5_1: clean
	private static void Bindings____CreatePropertyBinding__Value_g____setter_5_1(CustomLogicTextFieldBuiltin __i, object __v)
	{
		TextField pUVar1;
		String pSVar2;

		pSVar2 = CustomLogicEvaluator.ConvertTo<string>(__v);
		if ((__i == null) ||(pUVar1 = __i._textField, pUVar1 == null)) {
			throw new NullReferenceException();
		}
		pUVar1.set_value(pSVar2);
		return;
	}

	// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__SelectionColor>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__SelectionColor_g____getter_6_0(CustomLogicTextFieldBuiltin __i)
	{
		TextInputBaseField<TValueType> __this;
		CustomLogicColorBuiltin __this_00;
		Color color;

		if (__i != null) {
			__this = (TextInputBaseField<TValueType>)__i._textField;
			if (__this != null) {
				color = __this.selectionColor;
				__this_00 = new CustomLogicColorBuiltin(color);
				return (object)__this_00;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__SelectionColor>g____setter|6_1: clean
	private static void Bindings____CreatePropertyBinding__SelectionColor_g____setter_6_1(CustomLogicTextFieldBuiltin __i, object __v)
	{
		CustomLogicColorBuiltin value;

		value = CustomLogicEvaluator.ConvertTo<CustomLogicColorBuiltin>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.SelectionColor = value;
		return;
	}

	// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__CursorColor>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__CursorColor_g____getter_7_0(CustomLogicTextFieldBuiltin __i)
	{
		TextInputBaseField<TValueType> __this;
		CustomLogicColorBuiltin __this_00;
		Color color;

		if (__i != null) {
			__this = (TextInputBaseField<TValueType>)__i._textField;
			if (__this != null) {
				color = __this.cursorColor;
				__this_00 = new CustomLogicColorBuiltin(color);
				return (object)__this_00;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicTextFieldBuiltin.Bindings$$<__CreatePropertyBinding__CursorColor>g____setter|7_1: clean
	private static void Bindings____CreatePropertyBinding__CursorColor_g____setter_7_1(CustomLogicTextFieldBuiltin __i, object __v)
	{
		CustomLogicColorBuiltin value;

		value = CustomLogicEvaluator.ConvertTo<CustomLogicColorBuiltin>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.CursorColor = value;
		return;
	}

	// CustomLogic.CustomLogicTextFieldBuiltin.Bindings.<>c$$.cctor: clean
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = new CustomLogicTextFieldBuiltin.Bindings.c();
		CustomLogicTextFieldBuiltin.Bindings.c.__9 =(CustomLogicTextFieldBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicTextFieldBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicTextFieldBuiltin.Bindings.<>c$$<__CreateMethodBinding__RegisterValueChangedEventCallback>b__8_0: clean
	private object Bindings_c____CreateMethodBinding__RegisterValueChangedEventCallback_b__8_0(CustomLogicTextFieldBuiltin __c, Object[] __a)
	{
		object obj;
		UserMethod changeEvent;
		CustomLogicTextFieldBuiltin pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			changeEvent = CustomLogicEvaluator.ConvertTo<UserMethod>(obj);
			if (__c != null) {
				pCVar1 = __c.RegisterValueChangedEventCallback(changeEvent);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicTextFieldBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetValueWithoutNotify>b__9_0: clean
	private object Bindings_c____CreateMethodBinding__SetValueWithoutNotify_b__9_0(CustomLogicTextFieldBuiltin __c, Object[] __a)
	{
		object obj;
		TextField pUVar1;
		String pSVar2;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			pSVar2 = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__c != null) &&(pUVar1 = __c._textField, pUVar1 != null)) {
				pUVar1.SetValueWithoutNotify(pSVar2);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicTextFieldBuiltin.<>c__DisplayClass20_0$$<RegisterValueChangedEventCallback>b__0: 2 lines keep C-only constructs
	private void c__DisplayClass20_0__RegisterValueChangedEventCallback_b__0(ChangeEvent<string> evt)
	{
		CustomLogicEvaluator __this_00;
		UserMethod userMethod;
		String pSVar1;
		Object[] parameterValues;
		object pIVar2;

		__this_00 = CustomLogicManager.Evaluator;
		userMethod = this.changeEvent;
		parameterValues = (Object[])new object[2];
		if ((evt == null) ||(parameterValues == null)) {
	label_05b0898e: ;
			throw new NullReferenceException();
		}
		pSVar1 = evt._newValue_k__BackingField;
		if (pSVar1 != null) {
			pIVar2 = il2cpp_vm_Object_IsInst((object)pSVar1, (((parameterValues.obj).klass)._1).element_class);
			if (pIVar2 == null) goto label_05b08998;
		}
		if ((int)parameterValues.Length != 0) {
			parameterValues[0] = (object)pSVar1;
			pSVar1 = evt._previousValue_k__BackingField;
			if (pSVar1 != null) {
				pIVar2 = il2cpp_vm_Object_IsInst((object)pSVar1, (((parameterValues.obj).klass)._1).element_class);
				if (pIVar2 == null) {
	label_05b08998: ;
					pIVar2 = new ArrayTypeMismatchException();
					throw pIVar2;
				}
			}
			if ((parameterValues.Length & 0xfffffffe) != 0) {
				parameterValues[1] = (object)pSVar1;
				if (__this_00 != null) {
					__this_00.EvaluateMethod(userMethod, parameterValues);
					return;
				}
				goto label_05b0898e;
			}
		}
		throw new IndexOutOfRangeException();
	}
}
