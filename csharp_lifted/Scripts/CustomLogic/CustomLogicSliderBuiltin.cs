// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicSliderBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicSliderBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.UIElements;

namespace CustomLogic;

[Token(Token = "0x20005FD")]
[CompilerGenerated]
internal class CustomLogicSliderBuiltin : CustomLogicVisualElementBuiltin
{
	[Token(Token = "0x20005FE")]
	public new static class Factory
	{
		[Token(Token = "0x60037A9")]
		[Address(RVA = "0x5A053E0", Offset = "0x5A043E0", VA = "0x5A053E0")]
		public static CustomLogicSliderBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSliderBuiltin.c (CustomLogic.CustomLogicSliderBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			String pSVar1;
			String str0;
			String str2;
			Il2CppClass klass;
			ArgumentException __this;
			MethodInfo lastManagedFrame;
			int local_14;

			pSVar1 = local_14.ToString();
			str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicSliderBuiltin constructor found that takes ");
			str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
			pSVar1 = String.Concat(str0, pSVar1, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this = (ArgumentException)il2cpp_codegen_object_new(klass);
			__this = new ArgumentException(pSVar1);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Factory_CreateInstance);
			throw (object)__this;
		}
	}

	[Token(Token = "0x20005FF")]
	public new static class Bindings
	{
		[Token(Token = "0x400199D")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60037AA")]
		[Address(RVA = "0x5A05470", Offset = "0x5A04470", VA = "0x5A05470")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSliderBuiltin.c (CustomLogic.CustomLogicSliderBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLPropertyBinding<CustomLogicSliderBuiltin> pCVar3;
			CLMethodBinding<CustomLogicSliderBuiltin> pCVar4;
			String pSVar5;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x86253654) {
				if (uVar2 < 0x3a2089b8) {
					if (uVar2 == 0xf54ee6e) {
						bVar1 = (name == "LowValue");
						if (bVar1) {
							if ((typeof(CustomLogicSliderBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicSliderBuiltin.Bindings.__CreatePropertyBinding__LowValue();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicSliderBuiltin.Bindings.__CreatePropertyBinding__LowValue();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x3a2089b7) {
						bVar1 = (name == "PageSize");
						if (bVar1) {
							if ((typeof(CustomLogicSliderBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicSliderBuiltin.Bindings.__CreatePropertyBinding__PageSize();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicSliderBuiltin.Bindings.__CreatePropertyBinding__PageSize();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x86253653) {
					bVar1 = (name == "IsIntSlider");
					if (bVar1) {
						if ((typeof(CustomLogicSliderBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicSliderBuiltin.Bindings.__CreatePropertyBinding__IsIntSlider();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicSliderBuiltin.Bindings.__CreatePropertyBinding__IsIntSlider();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x4c979c42) {
					bVar1 = (name == "HighValue");
					if (bVar1) {
						if ((typeof(CustomLogicSliderBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicSliderBuiltin.Bindings.__CreatePropertyBinding__HighValue();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicSliderBuiltin.Bindings.__CreatePropertyBinding__HighValue();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x61fefc0a) {
					bVar1 = (name == "Direction");
					if (bVar1) {
						if ((typeof(CustomLogicSliderBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicSliderBuiltin.Bindings.__CreatePropertyBinding__Direction();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicSliderBuiltin.Bindings.__CreatePropertyBinding__Direction();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xacc881fd) {
				if (uVar2 == 0x9eccf29d) {
					bVar1 = (name == "Label");
					if (bVar1) {
						if ((typeof(CustomLogicSliderBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicSliderBuiltin.Bindings.__CreatePropertyBinding__Label();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicSliderBuiltin.Bindings.__CreatePropertyBinding__Label();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xacc881fc) {
					bVar1 = (name == "ShowInputField");
					if (bVar1) {
						if ((typeof(CustomLogicSliderBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicSliderBuiltin.Bindings.__CreatePropertyBinding__ShowInputField();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicSliderBuiltin.Bindings.__CreatePropertyBinding__ShowInputField();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xd147f96a) {
				bVar1 = (name == "Value");
				if (bVar1) {
					if ((typeof(CustomLogicSliderBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar3 = CustomLogicSliderBuiltin.Bindings.__CreatePropertyBinding__Value();
						return (ICLMemberBinding)pCVar3;
					}
					pCVar3 = CustomLogicSliderBuiltin.Bindings.__CreatePropertyBinding__Value();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xd1dd43b5) {
				bVar1 = (name == "SetValueWithoutNotify");
				if (bVar1) {
					if ((typeof(CustomLogicSliderBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar4 = CustomLogicSliderBuiltin.Bindings.__CreateMethodBinding__SetValueWithoutNotify();
						return (ICLMemberBinding)pCVar4;
					}
					pCVar4 = CustomLogicSliderBuiltin.Bindings.__CreateMethodBinding__SetValueWithoutNotify();
					return (ICLMemberBinding)pCVar4;
				}
			}
			else if (uVar2 == 0xf722a79f) {
				bVar1 = (name == "OnValueChanged");
				if (bVar1) {
					if ((typeof(CustomLogicSliderBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar4 = CustomLogicSliderBuiltin.Bindings.__CreateMethodBinding__OnValueChanged();
						return (ICLMemberBinding)pCVar4;
					}
					pCVar4 = CustomLogicSliderBuiltin.Bindings.__CreateMethodBinding__OnValueChanged();
					return (ICLMemberBinding)pCVar4;
				}
			}
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicSliderBuiltin not found");
			pSVar5 = String.Concat(pSVar5, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x60037AB")]
		[Address(RVA = "0x5A05930", Offset = "0x5A04930", VA = "0x5A05930")]
		public static CLPropertyBinding<CustomLogicSliderBuiltin> __CreatePropertyBinding__Label()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSliderBuiltin.c (CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreatePropertyBinding__Label): 4 lines keep C-only constructs
			Func<CustomLogicSliderBuiltin, object> __this;
			Action<CustomLogicSliderBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicSliderBuiltin> __this_01;

			__this = new Func<CustomLogicSliderBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__Label_g____getter_2_0);
			__this_00 = il2cpp_codegen_object_new(typeof(Action<CustomLogicSliderBuiltin, object>)) ;
			__this_00 = new Action<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__Label_g____setter_2_1);
			__this_01 = new CLPropertyBinding<CustomLogicSliderBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60037AC")]
		[Address(RVA = "0x5A05A10", Offset = "0x5A04A10", VA = "0x5A05A10")]
		public static CLPropertyBinding<CustomLogicSliderBuiltin> __CreatePropertyBinding__Value()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSliderBuiltin.c (CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreatePropertyBinding__Value): 4 lines keep C-only constructs
			Func<CustomLogicSliderBuiltin, object> __this;
			Action<CustomLogicSliderBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicSliderBuiltin> __this_01;

			__this = new Func<CustomLogicSliderBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__Value_g____getter_3_0);
			__this_00 = il2cpp_codegen_object_new(typeof(Action<CustomLogicSliderBuiltin, object>)) ;
			__this_00 = new Action<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__Value_g____setter_3_1);
			__this_01 = new CLPropertyBinding<CustomLogicSliderBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60037AD")]
		[Address(RVA = "0x5A05AF0", Offset = "0x5A04AF0", VA = "0x5A05AF0")]
		public static CLPropertyBinding<CustomLogicSliderBuiltin> __CreatePropertyBinding__LowValue()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSliderBuiltin.c (CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreatePropertyBinding__LowValue): 4 lines keep C-only constructs
			Func<CustomLogicSliderBuiltin, object> __this;
			Action<CustomLogicSliderBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicSliderBuiltin> __this_01;

			__this = new Func<CustomLogicSliderBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__LowValue_g____getter_4_0);
			__this_00 = il2cpp_codegen_object_new(typeof(Action<CustomLogicSliderBuiltin, object>)) ;
			__this_00 = new Action<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__LowValue_g____setter_4_1);
			__this_01 = new CLPropertyBinding<CustomLogicSliderBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60037AE")]
		[Address(RVA = "0x5A05BD0", Offset = "0x5A04BD0", VA = "0x5A05BD0")]
		public static CLPropertyBinding<CustomLogicSliderBuiltin> __CreatePropertyBinding__HighValue()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSliderBuiltin.c (CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreatePropertyBinding__HighValue): 4 lines keep C-only constructs
			Func<CustomLogicSliderBuiltin, object> __this;
			Action<CustomLogicSliderBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicSliderBuiltin> __this_01;

			__this = new Func<CustomLogicSliderBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__HighValue_g____getter_5_0);
			__this_00 = il2cpp_codegen_object_new(typeof(Action<CustomLogicSliderBuiltin, object>)) ;
			__this_00 = new Action<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__HighValue_g____setter_5_1);
			__this_01 = new CLPropertyBinding<CustomLogicSliderBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60037AF")]
		[Address(RVA = "0x5A05CB0", Offset = "0x5A04CB0", VA = "0x5A05CB0")]
		public static CLPropertyBinding<CustomLogicSliderBuiltin> __CreatePropertyBinding__PageSize()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSliderBuiltin.c (CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreatePropertyBinding__PageSize): 4 lines keep C-only constructs
			Func<CustomLogicSliderBuiltin, object> __this;
			Action<CustomLogicSliderBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicSliderBuiltin> __this_01;

			__this = new Func<CustomLogicSliderBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__PageSize_g____getter_6_0);
			__this_00 = il2cpp_codegen_object_new(typeof(Action<CustomLogicSliderBuiltin, object>)) ;
			__this_00 = new Action<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__PageSize_g____setter_6_1);
			__this_01 = new CLPropertyBinding<CustomLogicSliderBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60037B0")]
		[Address(RVA = "0x5A05D90", Offset = "0x5A04D90", VA = "0x5A05D90")]
		public static CLPropertyBinding<CustomLogicSliderBuiltin> __CreatePropertyBinding__Direction()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSliderBuiltin.c (CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreatePropertyBinding__Direction): 4 lines keep C-only constructs
			Func<CustomLogicSliderBuiltin, object> __this;
			Action<CustomLogicSliderBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicSliderBuiltin> __this_01;

			__this = new Func<CustomLogicSliderBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__Direction_g____getter_7_0);
			__this_00 = il2cpp_codegen_object_new(typeof(Action<CustomLogicSliderBuiltin, object>)) ;
			__this_00 = new Action<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__Direction_g____setter_7_1);
			__this_01 = new CLPropertyBinding<CustomLogicSliderBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60037B1")]
		[Address(RVA = "0x5A05E70", Offset = "0x5A04E70", VA = "0x5A05E70")]
		public static CLPropertyBinding<CustomLogicSliderBuiltin> __CreatePropertyBinding__ShowInputField()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSliderBuiltin.c (CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreatePropertyBinding__ShowInputField): 4 lines keep C-only constructs
			Func<CustomLogicSliderBuiltin, object> __this;
			Action<CustomLogicSliderBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicSliderBuiltin> __this_01;

			__this = new Func<CustomLogicSliderBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__ShowInputField_g____gette);
			__this_00 = il2cpp_codegen_object_new(typeof(Action<CustomLogicSliderBuiltin, object>)) ;
			__this_00 = new Action<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__ShowInputField_g____sette);
			__this_01 = new CLPropertyBinding<CustomLogicSliderBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60037B2")]
		[Address(RVA = "0x5A05F50", Offset = "0x5A04F50", VA = "0x5A05F50")]
		public static CLPropertyBinding<CustomLogicSliderBuiltin> __CreatePropertyBinding__IsIntSlider()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSliderBuiltin.c (CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreatePropertyBinding__IsIntSlider): 2 lines keep C-only constructs
			Func<CustomLogicSliderBuiltin, object> __this;
			CLPropertyBinding<CustomLogicSliderBuiltin> __this_00;

			__this = new Func<CustomLogicSliderBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings___CreatePropertyBinding__IsIntSlider_g____getter_9);
			__this_00 = new CLPropertyBinding<CustomLogicSliderBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x60037B3")]
		[Address(RVA = "0x5A05FF0", Offset = "0x5A04FF0", VA = "0x5A05FF0")]
		public static CLMethodBinding<CustomLogicSliderBuiltin> __CreateMethodBinding__OnValueChanged()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSliderBuiltin.c (CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreateMethodBinding__OnValueChanged): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicSliderBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicSliderBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicSliderBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546fc3 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicSliderBuiltin>)) ;
				Il2CppMethodInitialized_07546fc3 = true;
				uVar1 = (typeof(CustomLogicSliderBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicSliderBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicSliderBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicSliderBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__10_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicSliderBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__10_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicSliderBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicSliderBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicSliderBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c___CreateMethodBinding__OnValueChanged_b__10_0);
				pCVar2 = typeof(CustomLogicSliderBuiltin.Bindings.c).static_fields;
				pCVar2.__9__10_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicSliderBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60037B4")]
		[Address(RVA = "0x5A06130", Offset = "0x5A05130", VA = "0x5A06130")]
		public static CLMethodBinding<CustomLogicSliderBuiltin> __CreateMethodBinding__SetValueWithoutNotify()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSliderBuiltin.c (CustomLogic.CustomLogicSliderBuiltin.Bindings$$__CreateMethodBinding__SetValueWithoutNotify): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicSliderBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicSliderBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicSliderBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546fc4 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicSliderBuiltin>)) ;
				Il2CppMethodInitialized_07546fc4 = true;
				uVar1 = (typeof(CustomLogicSliderBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicSliderBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicSliderBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicSliderBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__11_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicSliderBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__11_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicSliderBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicSliderBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicSliderBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicSliderBuiltin_Bindings_c___CreateMethodBinding__SetValueWithoutNotify_b);
				pCVar2 = typeof(CustomLogicSliderBuiltin.Bindings.c).static_fields;
				pCVar2.__9__11_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicSliderBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x4001999")]
	[FieldOffset(Offset = "0x60")]
	private readonly Slider _floatSlider;

	[Token(Token = "0x400199A")]
	[FieldOffset(Offset = "0x68")]
	private readonly SliderInt _intSlider;

	[Token(Token = "0x400199B")]
	[FieldOffset(Offset = "0x70")]
	private readonly bool _isIntSlider;

	[Token(Token = "0x400199C")]
	[FieldOffset(Offset = "0x78")]
	private UserMethod _valueChangedEvent;

	[Token(Token = "0x17000A13")]
	public string Label
	{
		[Token(Token = "0x6003792")]
		[Address(RVA = "0x5A04920", Offset = "0x5A03920", VA = "0x5A04920")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSliderBuiltin.c (CustomLogic.CustomLogicSliderBuiltin$$get_Label): clean
			SliderInt __this_00;
			Slider __this_01;
			String pSVar1;

			if (this._isIntSlider == false) {
				__this_01 = this._floatSlider;
				if (__this_01 != null) {
					return pSVar1;
				}
			}
			else {
				__this_00 = this._intSlider;
				if (__this_00 != null) {
					return pSVar1;
				}
			}
			throw new NullReferenceException();
		}
		[Token(Token = "0x6003793")]
		[Address(RVA = "0x5A04990", Offset = "0x5A03990", VA = "0x5A04990")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSliderBuiltin.c (CustomLogic.CustomLogicSliderBuiltin$$set_Label): clean
			SliderInt __this_00;
			Slider __this_01;

			if (this._isIntSlider == false) {
				__this_01 = this._floatSlider;
				if (__this_01 != null) {
					__this_01.label = value;
					return;
				}
			}
			else {
				__this_00 = this._intSlider;
				if (__this_00 != null) {
					__this_00.label = value;
					return;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000A14")]
	public object Value
	{
		[Token(Token = "0x6003794")]
		[Address(RVA = "0x5A04A20", Offset = "0x5A03A20", VA = "0x5A04A20")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSliderBuiltin.c (CustomLogic.CustomLogicSliderBuiltin$$get_Value): 5 lines keep C-only constructs
			SliderInt pUVar1;
			Slider pUVar2;
			uint uVar3;
			ulong in_RAX;
			object pIVar4;
			ulong uStack_8;

			uStack_8 = in_RAX;
			if (this._isIntSlider == false) {
				pUVar2 = this._floatSlider;
				if (pUVar2 != null) {
					uVar3 = pUVar2.get_value();
					uStack_8 = CONCAT44(uStack_8._4_4_, uVar3);
					return pIVar4;
				}
			}
			else {
				pUVar1 = this._intSlider;
				if (pUVar1 != null) {
					uVar3 = pUVar1.get_value();
					uStack_8 = CONCAT44(uVar3, (undefined4)uStack_8);
					pIVar4 = (object)(((long)&uStack_8 + 4));
					return pIVar4;
				}
			}
			throw new NullReferenceException();
		}
		[Token(Token = "0x6003795")]
		[Address(RVA = "0x5A04AA0", Offset = "0x5A03AA0", VA = "0x5A04AA0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSliderBuiltin.c (CustomLogic.CustomLogicSliderBuiltin$$set_Value): 12 lines keep C-only constructs
			Il2CppMethodPointer vtableDispatch;
			float pfVar1;
			uint puVar2;
			int piVar3;
			uint uVar4;
			SliderInt pUVar5;
			Slider pUVar6;
			float fVar7;

			if (this._isIntSlider == false) {
				if (value != null) {
					if (value.klass == g_data_07556740) {
						pfVar1 = il2cpp_vm_Object_Unbox(value);
						pUVar6 = this._floatSlider;
						if (pUVar6 != null) {
							fVar7 = *pfVar1;
							goto label_05b04b50;
						}
					}
					else {
						if (value.klass != g_data_07556710) {
							return;
						}
						piVar3 = il2cpp_vm_Object_Unbox(value);
						pUVar6 = this._floatSlider;
						if (pUVar6 != null) {
							fVar7 = (float)*piVar3;
		label_05b04b50: ;
							fVar7.set_value(pUVar6);
							return;
						}
					}
					goto label_05b04b64;
				}
			}
			else if (value != null) {
				if (value.klass == g_data_07556710) {
					puVar2 = il2cpp_vm_Object_Unbox(value);
					pUVar5 = this._intSlider;
					if (pUVar5 == null) goto label_05b04b64;
					uVar4 = *puVar2;
				}
				else {
					if (value.klass != g_data_07556740) {
						return;
					}
					pfVar1 = il2cpp_vm_Object_Unbox(value);
					pUVar5 = this._intSlider;
					if (pUVar5 == null) {
		label_05b04b64: ;
						throw new NullReferenceException();
					}
					uVar4 = (uint)*pfVar1;
				}
				vtableDispatch = (pUVar5.klass.vtable)._149_set_value.methodPtr;
				(*vtableDispatch)(pUVar5,(ulong)uVar4,(pUVar5.klass.vtable)._149_set_value.method,vtableDispatch);
				return;
			}
			return;
		}
	}

	[Token(Token = "0x17000A15")]
	public object LowValue
	{
		[Token(Token = "0x6003796")]
		[Address(RVA = "0x5A04B70", Offset = "0x5A03B70", VA = "0x5A04B70")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSliderBuiltin.c (CustomLogic.CustomLogicSliderBuiltin$$get_LowValue): 1 lines keep C-only constructs
			BaseSlider<int> __this_00;
			BaseSlider<float> __this_01;
			object pIVar1;

			if (Il2CppMethodInitialized_07546fb1 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_BaseSlider_int_get_lowValue) ;
				Il2CppMethodInitialized_07546fb1 = true;
			}
			if (this._isIntSlider == false) {
				__this_01 = (BaseSlider<float>)this._floatSlider;
				if (__this_01 != null) {
					return pIVar1;
				}
			}
			else {
				__this_00 = (BaseSlider<int>)this._intSlider;
				if (__this_00 != null) {
					return pIVar1;
				}
			}
			throw new NullReferenceException();
		}
		[Token(Token = "0x6003797")]
		[Address(RVA = "0x5A04C20", Offset = "0x5A03C20", VA = "0x5A04C20")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSliderBuiltin.c (CustomLogic.CustomLogicSliderBuiltin$$set_LowValue): 11 lines keep C-only constructs
			float pfVar1;
			int piVar2;
			int piVar3;
			int value_00;
			BaseSlider<int> __this_00;
			BaseSlider<float> __this_01;
			float value_01;

			if (Il2CppMethodInitialized_07546fb2 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_BaseSlider_int_set_lowValue) ;
				Il2CppMethodInitialized_07546fb2 = true;
			}
			if (this._isIntSlider == false) {
				if (value != null) {
					if (value.klass == g_data_07556740) {
						pfVar1 = il2cpp_vm_Object_Unbox(value);
						__this_01 = (BaseSlider<float>)this._floatSlider;
						if (__this_01 != null) {
							value_01 = *pfVar1;
							goto label_05b04d07;
						}
					}
					else {
						if (value.klass != g_data_07556710) {
							return;
						}
						piVar3 = il2cpp_vm_Object_Unbox(value);
						__this_01 = (BaseSlider<float>)this._floatSlider;
						if (__this_01 != null) {
							value_01 = (float)*piVar3;
		label_05b04d07: ;
							__this_01.lowValue = value_01;
							return;
						}
					}
					goto label_05b04d1d;
				}
			}
			else if (value != null) {
				if (value.klass == g_data_07556710) {
					piVar2 = il2cpp_vm_Object_Unbox(value);
					__this_00 = (BaseSlider<int>)this._intSlider;
					if (__this_00 == null) goto label_05b04d1d;
					value_00 = *piVar2;
				}
				else {
					if (value.klass != g_data_07556740) {
						return;
					}
					pfVar1 = il2cpp_vm_Object_Unbox(value);
					__this_00 = (BaseSlider<int>)this._intSlider;
					if (__this_00 == null) {
		label_05b04d1d: ;
						throw new NullReferenceException();
					}
					value_00 = (int32_t)*pfVar1;
				}
				__this_00.lowValue = value_00;
				return;
			}
			return;
		}
	}

	[Token(Token = "0x17000A16")]
	public object HighValue
	{
		[Token(Token = "0x6003798")]
		[Address(RVA = "0x5A04D30", Offset = "0x5A03D30", VA = "0x5A04D30")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSliderBuiltin.c (CustomLogic.CustomLogicSliderBuiltin$$get_HighValue): clean
			BaseSlider<int> __this_00;
			BaseSlider<float> __this_01;
			object pIVar1;

			if (this._isIntSlider == false) {
				__this_01 = (BaseSlider<float>)this._floatSlider;
				if (__this_01 != null) {
					return pIVar1;
				}
			}
			else {
				__this_00 = (BaseSlider<int>)this._intSlider;
				if (__this_00 != null) {
					return pIVar1;
				}
			}
			throw new NullReferenceException();
		}
		[Token(Token = "0x6003799")]
		[Address(RVA = "0x5A04DE0", Offset = "0x5A03DE0", VA = "0x5A04DE0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSliderBuiltin.c (CustomLogic.CustomLogicSliderBuiltin$$set_HighValue): 10 lines keep C-only constructs
			float pfVar1;
			int piVar2;
			int piVar3;
			int value_00;
			BaseSlider<int> __this_00;
			BaseSlider<float> __this_01;
			float value_01;

			if (this._isIntSlider == false) {
				if (value != null) {
					if (value.klass == g_data_07556740) {
						pfVar1 = il2cpp_vm_Object_Unbox(value);
						__this_01 = (BaseSlider<float>)this._floatSlider;
						if (__this_01 != null) {
							value_01 = *pfVar1;
							goto label_05b04ec7;
						}
					}
					else {
						if (value.klass != g_data_07556710) {
							return;
						}
						piVar3 = il2cpp_vm_Object_Unbox(value);
						__this_01 = (BaseSlider<float>)this._floatSlider;
						if (__this_01 != null) {
							value_01 = (float)*piVar3;
		label_05b04ec7: ;
							__this_01.highValue = value_01;
							return;
						}
					}
					goto label_05b04edd;
				}
			}
			else if (value != null) {
				if (value.klass == g_data_07556710) {
					piVar2 = il2cpp_vm_Object_Unbox(value);
					__this_00 = (BaseSlider<int>)this._intSlider;
					if (__this_00 == null) goto label_05b04edd;
					value_00 = *piVar2;
				}
				else {
					if (value.klass != g_data_07556740) {
						return;
					}
					pfVar1 = il2cpp_vm_Object_Unbox(value);
					__this_00 = (BaseSlider<int>)this._intSlider;
					if (__this_00 == null) {
		label_05b04edd: ;
						throw new NullReferenceException();
					}
					value_00 = (int32_t)*pfVar1;
				}
				__this_00.highValue = value_00;
				return;
			}
			return;
		}
	}

	[Token(Token = "0x17000A17")]
	public float PageSize
	{
		[Token(Token = "0x600379A")]
		[Address(RVA = "0x5A04EF0", Offset = "0x5A03EF0", VA = "0x5A04EF0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSliderBuiltin.c (CustomLogic.CustomLogicSliderBuiltin$$get_PageSize): clean
			SliderInt pUVar1;
			float fVar2;

			if (this._isIntSlider == false) {
				pUVar1 = (SliderInt)this._floatSlider;
			}
			else {
				pUVar1 = this._intSlider;
			}
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			return fVar2;
		}
		[Token(Token = "0x600379B")]
		[Address(RVA = "0x5A04F30", Offset = "0x5A03F30", VA = "0x5A04F30")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSliderBuiltin.c (CustomLogic.CustomLogicSliderBuiltin$$set_PageSize): clean
			SliderInt pUVar1;

			if (this._isIntSlider == false) {
				pUVar1 = (SliderInt)this._floatSlider;
			}
			else {
				pUVar1 = this._intSlider;
			}
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			pUVar1.set_pageSize(value);
			return;
		}
	}

	[Token(Token = "0x17000A18")]
	public int Direction
	{
		[Token(Token = "0x600379C")]
		[Address(RVA = "0x5A04F70", Offset = "0x5A03F70", VA = "0x5A04F70")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSliderBuiltin.c (CustomLogic.CustomLogicSliderBuiltin$$get_Direction): clean
			BaseSlider<int> __this_00;
			BaseSlider<float> __this_01;
			int iVar1;

			if (this._isIntSlider == false) {
				__this_01 = (BaseSlider<float>)this._floatSlider;
				if (__this_01 != null) {
					return iVar1;
				}
			}
			else {
				__this_00 = (BaseSlider<int>)this._intSlider;
				if (__this_00 != null) {
					iVar1 = __this_00.direction ;
					return iVar1;
				}
			}
			throw new NullReferenceException();
		}
		[Token(Token = "0x600379D")]
		[Address(RVA = "0x5A04FE0", Offset = "0x5A03FE0", VA = "0x5A04FE0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSliderBuiltin.c (CustomLogic.CustomLogicSliderBuiltin$$set_Direction): 5 lines keep C-only constructs
			BaseSlider<int> __this_00;
			BaseSlider<float> __this_01;
			Il2CppType handle;
			bool bVar1;
			Type enumType;
			object pIVar2;
			String pSVar3;
			Il2CppClass klass;
			ArgumentException __this_02;
			MethodInfo lastManagedFrame;
			int iStack_30;
			int iStack_2c;

			handle = TypeRef_UnityEngine_UIElements_SliderDirection;
			enumType = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
			iStack_2c = value;
			pIVar2 = (object)iStack_2c;
			bVar1 = Enum.IsDefined(enumType, pIVar2);
			if (!bVar1) {
				iStack_30 = value;
				pIVar2 = (object)iStack_30;
				pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Invalid slider direction: {0}");
				pSVar3 = String.Format(pSVar3, pIVar2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_02 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_02 = new ArgumentException(pSVar3);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicSliderBuiltin_set_Direction);
				throw (object)__this_02;
			}
			if (this._isIntSlider == false) {
				__this_01 = (BaseSlider<float>)this._floatSlider;
				if (__this_01 == null) goto label_05b0515a;
				__this_01.direction = value;
			}
			else {
				__this_00 = (BaseSlider<int>)this._intSlider;
				if (__this_00 == null) {
		label_05b0515a: ;
					throw new NullReferenceException();
				}
				__this_00.direction = value;
			}
			return;
		}
	}

	[Token(Token = "0x17000A19")]
	public bool ShowInputField
	{
		[Token(Token = "0x600379E")]
		[Address(RVA = "0x5A05160", Offset = "0x5A04160", VA = "0x5A05160")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSliderBuiltin.c (CustomLogic.CustomLogicSliderBuiltin$$get_ShowInputField): 3 lines keep C-only constructs
			SliderInt pUVar1;
			Il2CppMethodPointer vtableDispatch;
			byte uVar2;
			ulong in_RDX;

			if (this._isIntSlider == false) {
				pUVar1 = (SliderInt)this._floatSlider;
			}
			else {
				pUVar1 = this._intSlider;
			}
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			vtableDispatch = (pUVar1.klass.vtable)._167_get_showInputField.methodPtr;
			uVar2 = (*vtableDispatch)(pUVar1,(pUVar1.klass.vtable)._167_get_showInputField.method,in_RDX, vtableDispatch);
			return (bool)uVar2;
		}
		[Token(Token = "0x600379F")]
		[Address(RVA = "0x5A051A0", Offset = "0x5A041A0", VA = "0x5A051A0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSliderBuiltin.c (CustomLogic.CustomLogicSliderBuiltin$$set_ShowInputField): 2 lines keep C-only constructs
			SliderInt pUVar1;
			Il2CppMethodPointer vtableDispatch;

			if (this._isIntSlider == false) {
				pUVar1 = (SliderInt)this._floatSlider;
			}
			else {
				pUVar1 = this._intSlider;
			}
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			vtableDispatch = (pUVar1.klass.vtable)._168_set_showInputField.methodPtr;
			(*vtableDispatch)(pUVar1,(ulong)value,(pUVar1.klass.vtable)._168_set_showInputField.method,vtableDispatch) ;
			return;
		}
	}

	[Token(Token = "0x17000A1A")]
	public bool IsIntSlider
	{
		[Token(Token = "0x60037A0")]
		[Address(RVA = "0x5A051E0", Offset = "0x5A041E0", VA = "0x5A051E0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSliderBuiltin.c (CustomLogic.CustomLogicSliderBuiltin$$get_IsIntSlider): clean
			return this._isIntSlider;
		}
	}

	[Token(Token = "0x17000A1B")]
	public override string ClassName
	{
		[Token(Token = "0x60037A3")]
		[Address(RVA = "0x5A052E0", Offset = "0x5A042E0", VA = "0x5A052E0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSliderBuiltin.c (CustomLogic.CustomLogicSliderBuiltin$$get_ClassName): clean
			return "Slider";
		}
	}

	[Token(Token = "0x17000A1C")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60037A4")]
		[Address(RVA = "0x5A05310", Offset = "0x5A04310", VA = "0x5A05310", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSliderBuiltin.c (CustomLogic.CustomLogicSliderBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000A1D")]
	public override bool IsStatic
	{
		[Token(Token = "0x60037A5")]
		[Address(RVA = "0x5A05320", Offset = "0x5A04320", VA = "0x5A05320", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSliderBuiltin.c (CustomLogic.CustomLogicSliderBuiltin$$get_IsStatic): clean
			return false;
		}
	}

	[Token(Token = "0x17000A1E")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60037A6")]
		[Address(RVA = "0x5A05330", Offset = "0x5A04330", VA = "0x5A05330", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSliderBuiltin.c (CustomLogic.CustomLogicSliderBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x600378E")]
	[Address(RVA = "0x5A04580", Offset = "0x5A03580", VA = "0x5A04580")]
	public CustomLogicSliderBuiltin(Slider slider)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicSliderBuiltin.c (CustomLogic.CustomLogicSliderBuiltin$$.ctor): 2 lines keep C-only constructs
		Slider control;
		EventCallback<TEventType> __this_00;

		base((VisualElement)slider);
		this._floatSlider = slider;
		this._isIntSlider = false;
		control = this._floatSlider;
		__this_00 = new EventCallback<ChangeEvent<float>>((object)this, (intptr_t)MethodInfo_CustomLogic_CustomLogicSliderBuiltin_ctor_b__4_0);
		INotifyValueChangedExtensions.RegisterValueChangedCallback<float>((INotifyValueChanged<T>)control, (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o)__this_00);
		return;
	}

	[Token(Token = "0x600378F")]
	[Address(RVA = "0x5A04630", Offset = "0x5A03630", VA = "0x5A04630")]
	public CustomLogicSliderBuiltin(SliderInt sliderInt)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicSliderBuiltin.c (CustomLogic.CustomLogicSliderBuiltin$$.ctor): 3 lines keep C-only constructs
		SliderInt control;
		EventCallback<TEventType> __this_00;

		if (Il2CppMethodInitialized_07546fac == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(EventCallback<ChangeEvent<int>>)) ;
			Il2CppMethodInitialized_07546fac = true;
		}
		base((VisualElement)sliderInt);
		this._intSlider = sliderInt;
		this._isIntSlider = true;
		control = this._intSlider;
		__this_00 = new EventCallback<ChangeEvent<int>>((object)this, (intptr_t)MethodInfo_CustomLogic_CustomLogicSliderBuiltin_ctor_b__5_0);
		INotifyValueChangedExtensions.RegisterValueChangedCallback<int>((INotifyValueChanged<T>)control, (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o)__this_00) ;
		return;
	}

	[Token(Token = "0x6003790")]
	[Address(RVA = "0x5A046E0", Offset = "0x5A036E0", VA = "0x5A046E0")]
	private void OnValueChanged(float value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicSliderBuiltin.c (CustomLogic.CustomLogicSliderBuiltin$$OnValueChanged): 1 lines keep C-only constructs
		CustomLogicEvaluator __this_00;
		Object[] parameterValues;
		object pIVar1;
		object pIVar2;
		UserMethod userMethod;
		byte[] local_24 = new byte[4];

		userMethod = this._valueChangedEvent;
		if (userMethod == null) {
			return;
		}
		if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
			userMethod = this._valueChangedEvent;
		}
		__this_00 = CustomLogicManager.Evaluator;
		parameterValues = (Object[])new object[1];
		pIVar1 = (object)local_24;
		if (parameterValues != null) {
			if ((pIVar1 != null) &&(pIVar2 = il2cpp_vm_Object_IsInst(pIVar1, (((parameterValues.obj).klass)._1).element_class), pIVar2 == null)) {
				pIVar1 = new ArrayTypeMismatchException();
				throw pIVar1;
			}
			if ((int)parameterValues.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			parameterValues[0] = pIVar1;
			if (__this_00 != null) {
				__this_00.EvaluateMethod(userMethod, parameterValues);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003791")]
	[Address(RVA = "0x5A04800", Offset = "0x5A03800", VA = "0x5A04800")]
	private void OnValueChanged(int value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicSliderBuiltin.c (CustomLogic.CustomLogicSliderBuiltin$$OnValueChanged): 1 lines keep C-only constructs
		CustomLogicEvaluator __this_00;
		Object[] parameterValues;
		object pIVar1;
		object pIVar2;
		UserMethod userMethod;
		int iStack_2c;

		userMethod = this._valueChangedEvent;
		if (userMethod == null) {
			return;
		}
		if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
			userMethod = this._valueChangedEvent;
		}
		__this_00 = CustomLogicManager.Evaluator;
		parameterValues = (Object[])new object[1];
		iStack_2c = value;
		pIVar1 = (object)iStack_2c;
		if (parameterValues != null) {
			if ((pIVar1 != null) &&(pIVar2 = il2cpp_vm_Object_IsInst(pIVar1, (((parameterValues.obj).klass)._1).element_class), pIVar2 == null)) {
				pIVar1 = new ArrayTypeMismatchException();
				throw pIVar1;
			}
			if ((int)parameterValues.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			parameterValues[0] = pIVar1;
			if (__this_00 != null) {
				__this_00.EvaluateMethod(userMethod, parameterValues);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60037A1")]
	[Address(RVA = "0x5A051F0", Offset = "0x5A041F0", VA = "0x5A051F0")]
	public CustomLogicSliderBuiltin OnValueChanged(UserMethod valueChangedEvent)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicSliderBuiltin.c (CustomLogic.CustomLogicSliderBuiltin$$OnValueChanged): clean
		__this._valueChangedEvent = valueChangedEvent;
		return __this;
	}

	[Token(Token = "0x60037A2")]
	[Address(RVA = "0x5A05210", Offset = "0x5A04210", VA = "0x5A05210")]
	public void SetValueWithoutNotify(object value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicSliderBuiltin.c (CustomLogic.CustomLogicSliderBuiltin$$SetValueWithoutNotify): 12 lines keep C-only constructs
		Il2CppMethodPointer vtableDispatch;
		float pfVar1;
		uint puVar2;
		int piVar3;
		uint uVar4;
		SliderInt pUVar5;
		Slider pUVar6;
		float fVar7;

		if (this._isIntSlider == false) {
			if (value != null) {
				if (value.klass == g_data_07556740) {
					pfVar1 = il2cpp_vm_Object_Unbox(value);
					pUVar6 = this._floatSlider;
					if (pUVar6 != null) {
						fVar7 = *pfVar1;
						goto label_05b052c0;
					}
				}
				else {
					if (value.klass != g_data_07556710) {
						return;
					}
					piVar3 = il2cpp_vm_Object_Unbox(value);
					pUVar6 = this._floatSlider;
					if (pUVar6 != null) {
						fVar7 = (float)*piVar3;
	label_05b052c0: ;
						fVar7.SetValueWithoutNotify(pUVar6);
						return;
					}
				}
				goto label_05b052d4;
			}
		}
		else if (value != null) {
			if (value.klass == g_data_07556710) {
				puVar2 = il2cpp_vm_Object_Unbox(value);
				pUVar5 = this._intSlider;
				if (pUVar5 == null) goto label_05b052d4;
				uVar4 = *puVar2;
			}
			else {
				if (value.klass != g_data_07556740) {
					return;
				}
				pfVar1 = il2cpp_vm_Object_Unbox(value);
				pUVar5 = this._intSlider;
				if (pUVar5 == null) {
	label_05b052d4: ;
					throw new NullReferenceException();
				}
				uVar4 = (uint)*pfVar1;
			}
			vtableDispatch = (pUVar5.klass.vtable)._159_SetValueWithoutNotify.methodPtr;
			(*vtableDispatch)(pUVar5,(ulong)uVar4,(pUVar5.klass.vtable)._159_SetValueWithoutNotify.method, vtableDispatch);
			return;
		}
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicSliderBuiltin.c.

	// CustomLogic.CustomLogicSliderBuiltin$$<.ctor>b__4_0: clean
	private void ctor_b__4_0(ChangeEvent<float> evt)
	{


		if (evt == null) {
			throw new NullReferenceException();
		}
		this.OnValueChanged(evt._newValue_k__BackingField);
		return;
	}

	// CustomLogic.CustomLogicSliderBuiltin$$<.ctor>b__5_0: clean
	private void ctor_b__5_0(UnityEngine_UIElements_ChangeEvent_int__o evt)
	{


		if (evt == null) {
			throw new NullReferenceException();
		}
		this.OnValueChanged(evt._newValue_k__BackingField);
		return;
	}

	// CustomLogic.CustomLogicSliderBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Label");
		__this.Add((Il2CppObject *)"Value");
		__this.Add((Il2CppObject *)"LowValue");
		__this.Add((Il2CppObject *)"HighValue");
		__this.Add((Il2CppObject *)"PageSize");
		__this.Add((Il2CppObject *)"Direction");
		__this.Add((Il2CppObject *)"ShowInputField");
		__this.Add((Il2CppObject *)"IsIntSlider");
		__this.Add((Il2CppObject *)"OnValueChanged");
		__this.Add((Il2CppObject *)"SetValueWithoutNotify");
		CustomLogicSliderBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__Label>g____getter|2_0: 1 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__Label_g____getter_2_0(CustomLogicSliderBuiltin __i)
	{
		SliderInt __this;
		Slider __this_00;
		String pSVar1;

		if (__i != null) {
			if (Il2CppMethodInitialized_07546faf == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_BaseField_float_get_label) ;
				Il2CppMethodInitialized_07546faf = true;
			}
			if (__i._isIntSlider == false) {
				__this_00 = __i._floatSlider;
				if (__this_00 != null) {
					pSVar1 = __this_00.label ;
					return (object)pSVar1;
				}
			}
			else {
				__this = __i._intSlider;
				if (__this != null) {
					pSVar1 = __this.label;
					return (object)pSVar1;
				}
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__Label>g____setter|2_1: 1 lines keep C-only constructs
	private static void Bindings____CreatePropertyBinding__Label_g____setter_2_1(CustomLogicSliderBuiltin __i, object __v)
	{
		SliderInt __this;
		Slider __this_00;
		String value;

		value = CustomLogicEvaluator.ConvertTo<string>(__v);
		if (__i != null) {
			if (Il2CppMethodInitialized_07546fb0 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_BaseField_float_set_label) ;
				Il2CppMethodInitialized_07546fb0 = true;
			}
			if (__i._isIntSlider == false) {
				__this_00 = __i._floatSlider;
				if (__this_00 != null) {
					__this_00.label = value;
					return;
				}
			}
			else {
				__this = __i._intSlider;
				if (__this != null) {
					__this.label = value;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____getter|3_0: 5 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__Value_g____getter_3_0(CustomLogicSliderBuiltin __i)
	{
		SliderInt pUVar1;
		Slider pUVar2;
		uint uVar3;
		ulong in_RAX;
		object pIVar4;
		ulong uStack_8;

		if (__i != null) {
			uStack_8 = in_RAX;
			if (__i._isIntSlider == false) {
				pUVar2 = __i._floatSlider;
				if (pUVar2 != null) {
					uVar3 = pUVar2.get_value();
					uStack_8 = CONCAT44(uStack_8._4_4_, uVar3);
					return pIVar4;
				}
			}
			else {
				pUVar1 = __i._intSlider;
				if (pUVar1 != null) {
					uVar3 = pUVar1.get_value();
					uStack_8 = CONCAT44(uVar3, (undefined4)uStack_8);
					pIVar4 = (object)(((long)&uStack_8 + 4));
					return pIVar4;
				}
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____setter|3_1: clean
	private static void Bindings____CreatePropertyBinding__Value_g____setter_3_1(CustomLogicSliderBuiltin __i, object __v)
	{
		object value;

		value = CustomLogicEvaluator.ConvertTo<object>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.Value = value;
		return;
	}

	// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__LowValue>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__LowValue_g____getter_4_0(CustomLogicSliderBuiltin __i)
	{
		object pIVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__LowValue>g____setter|4_1: clean
	private static void Bindings____CreatePropertyBinding__LowValue_g____setter_4_1(CustomLogicSliderBuiltin __i, object __v)
	{
		object value;

		value = CustomLogicEvaluator.ConvertTo<object>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.LowValue = value;
		return;
	}

	// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__HighValue>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__HighValue_g____getter_5_0(CustomLogicSliderBuiltin __i)
	{
		object pIVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__HighValue>g____setter|5_1: clean
	private static void Bindings____CreatePropertyBinding__HighValue_g____setter_5_1(CustomLogicSliderBuiltin __i, object __v)
	{
		object value;

		value = CustomLogicEvaluator.ConvertTo<object>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.HighValue = value;
		return;
	}

	// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__PageSize>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__PageSize_g____getter_6_0(CustomLogicSliderBuiltin __i)
	{
		SliderInt pUVar1;
		object pIVar2;
		byte[] auStack_4 = new byte[4];

		if (__i != null) {
			if (__i._isIntSlider == false) {
				pUVar1 = (SliderInt)__i._floatSlider;
			}
			else {
				pUVar1 = __i._intSlider;
			}
			if (pUVar1 != null) {
				pUVar1.get_pageSize();
				return pIVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__PageSize>g____setter|6_1: clean
	private static void Bindings____CreatePropertyBinding__PageSize_g____setter_6_1(CustomLogicSliderBuiltin __i, object __v)
	{
		SliderInt pUVar1;
		float fVar2;

		fVar2 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i != null) {
			if (__i._isIntSlider == false) {
				pUVar1 = (SliderInt)__i._floatSlider;
			}
			else {
				pUVar1 = __i._intSlider;
			}
			if (pUVar1 != null) {
				pUVar1.set_pageSize(fVar2);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__Direction>g____getter|7_0: clean
	private static object Bindings____CreatePropertyBinding__Direction_g____getter_7_0(CustomLogicSliderBuiltin __i)
	{
		BaseSlider<int> __this;
		BaseSlider<float> __this_00;
		object pIVar1;

		if (__i == null) {
	label_05b06960: ;
			throw new NullReferenceException();
		}
		if (__i._isIntSlider == false) {
			__this_00 = (BaseSlider<float>)__i._floatSlider;
			if (__this_00 == null) goto label_05b06960;
		}
		else {
			__this = (BaseSlider<int>)__i._intSlider;
			if (__this == null) goto label_05b06960;
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__Direction>g____setter|7_1: clean
	private static void Bindings____CreatePropertyBinding__Direction_g____setter_7_1(CustomLogicSliderBuiltin __i, object __v)
	{
		int value;

		value = CustomLogicEvaluator.ConvertTo<int>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.Direction = value;
		return;
	}

	// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__ShowInputField>g____getter|8_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__ShowInputField_g____getter_8_0(CustomLogicSliderBuiltin __i)
	{
		SliderInt pUVar1;
		byte uVar2;
		ulong in_RAX;
		object pIVar3;
		ulong uStack_8;

		if (__i != null) {
			if (__i._isIntSlider == false) {
				pUVar1 = (SliderInt)__i._floatSlider;
			}
			else {
				pUVar1 = __i._intSlider;
			}
			if (pUVar1 != null) {
				uStack_8 = in_RAX;
				uVar2 = pUVar1.get_showInputField();
				uStack_8 = CONCAT17(uVar2, (undefined7)uStack_8);
				pIVar3 = (object)(((long)&uStack_8 + 7));
				return pIVar3;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__ShowInputField>g____setter|8_1: 3 lines keep C-only constructs
	private static void Bindings____CreatePropertyBinding__ShowInputField_g____setter_8_1(CustomLogicSliderBuiltin __i, object __v)
	{
		SliderInt pUVar1;
		SliderInt pUVar2;
		Il2CppMethodPointer vtableDispatch;
		bool bVar3;

		bVar3 = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if (__i != null) {
			if (__i._isIntSlider == false) {
				pUVar1 = (SliderInt)__i._floatSlider;
			}
			else {
				pUVar1 = __i._intSlider;
			}
			if (pUVar1 != null) {
				pUVar2 = pUVar1.klass;
				vtableDispatch = (pUVar2.vtable)._168_set_showInputField.methodPtr;
				(*vtableDispatch)(pUVar1,(ulong)bVar3,(pUVar2.vtable)._168_set_showInputField.method,pUVar2, vtableDispatch);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicSliderBuiltin.Bindings$$<__CreatePropertyBinding__IsIntSlider>g____getter|9_0: clean
	private static object Bindings____CreatePropertyBinding__IsIntSlider_g____getter_9_0(CustomLogicSliderBuiltin __i)
	{
		object pIVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicSliderBuiltin.Bindings.<>c$$.cctor: clean
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = new CustomLogicSliderBuiltin.Bindings.c();
		CustomLogicSliderBuiltin.Bindings.c.__9 =(CustomLogicSliderBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicSliderBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicSliderBuiltin.Bindings.<>c$$<__CreateMethodBinding__OnValueChanged>b__10_0: clean
	private object Bindings_c____CreateMethodBinding__OnValueChanged_b__10_0(CustomLogicSliderBuiltin __c, Object[] __a)
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
				__c._valueChangedEvent = pCVar1;
				return (object)__c;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicSliderBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetValueWithoutNotify>b__11_0: clean
	private object Bindings_c____CreateMethodBinding__SetValueWithoutNotify_b__11_0(CustomLogicSliderBuiltin __c, Object[] __a)
	{
		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			if (__c != null) {
				__c.SetValueWithoutNotify(__a[0]);
				return null;
			}
		}
		throw new NullReferenceException();
	}
}
