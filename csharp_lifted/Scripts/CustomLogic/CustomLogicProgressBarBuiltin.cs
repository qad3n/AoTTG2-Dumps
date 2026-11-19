// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicProgressBarBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicProgressBarBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.UIElements;

namespace CustomLogic;

[Token(Token = "0x20005F5")]
[CompilerGenerated]
internal class CustomLogicProgressBarBuiltin : CustomLogicVisualElementBuiltin
{
	[Token(Token = "0x20005F6")]
	public new static class Factory
	{
		[Token(Token = "0x6003743")]
		[Address(RVA = "0x5A01280", Offset = "0x5A00280", VA = "0x5A01280")]
		public static CustomLogicProgressBarBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProgressBarBuiltin.c (CustomLogic.CustomLogicProgressBarBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			String pSVar1;
			String str0;
			String str2;
			Il2CppClass klass;
			ArgumentException __this;
			MethodInfo lastManagedFrame;
			int local_14;

			pSVar1 = local_14.ToString();
			str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicProgressBarBuiltin constructor found that takes ");
			str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
			pSVar1 = String.Concat(str0, pSVar1, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this = (ArgumentException)il2cpp_codegen_object_new(klass);
			__this = new ArgumentException(pSVar1);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Factory_CreateInstance);
			throw (object)__this;
		}
	}

	[Token(Token = "0x20005F7")]
	public new static class Bindings
	{
		[Token(Token = "0x400198B")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6003744")]
		[Address(RVA = "0x5A01310", Offset = "0x5A00310", VA = "0x5A01310")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProgressBarBuiltin.c (CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLPropertyBinding<CustomLogicProgressBarBuiltin> pCVar3;
			CLMethodBinding<CustomLogicProgressBarBuiltin> pCVar4;
			String pSVar5;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x8991c1ec) {
				if (uVar2 < 0x24d471aa) {
					if (uVar2 == 0xf54ee6e) {
						bVar1 = (name == "LowValue");
						if (bVar1) {
							if ((typeof(CustomLogicProgressBarBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicProgressBarBuiltin.Bindings.__CreatePropertyBinding__LowValue();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicProgressBarBuiltin.Bindings.__CreatePropertyBinding__LowValue();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x24d471a9) {
						bVar1 = (name == "Title");
						if (bVar1) {
							if ((typeof(CustomLogicProgressBarBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicProgressBarBuiltin.Bindings.__CreatePropertyBinding__Title();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicProgressBarBuiltin.Bindings.__CreatePropertyBinding__Title();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x8991c1eb) {
					bVar1 = (name == "SetPercentage");
					if (bVar1) {
						if ((typeof(CustomLogicProgressBarBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar4 = CustomLogicProgressBarBuiltin.Bindings.__CreateMethodBinding__SetPercentage();
							return (ICLMemberBinding)pCVar4;
						}
						pCVar4 = CustomLogicProgressBarBuiltin.Bindings.__CreateMethodBinding__SetPercentage();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0x4c979c42) {
					bVar1 = (name == "HighValue");
					if (bVar1) {
						if ((typeof(CustomLogicProgressBarBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicProgressBarBuiltin.Bindings.__CreatePropertyBinding__HighValue();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicProgressBarBuiltin.Bindings.__CreatePropertyBinding__HighValue();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xd1dd43b6) {
				if (uVar2 == 0xd147f96a) {
					bVar1 = (name == "Value");
					if (bVar1) {
						if ((typeof(CustomLogicProgressBarBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicProgressBarBuiltin.Bindings.__CreatePropertyBinding__Value();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicProgressBarBuiltin.Bindings.__CreatePropertyBinding__Value();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xd1dd43b5) {
					bVar1 = (name == "SetValueWithoutNotify");
					if (bVar1) {
						if ((typeof(CustomLogicProgressBarBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar4 = CustomLogicProgressBarBuiltin.Bindings.__CreateMethodBinding__SetValueWithoutNotify();
							return (ICLMemberBinding)pCVar4;
						}
						pCVar4 = CustomLogicProgressBarBuiltin.Bindings.__CreateMethodBinding__SetValueWithoutNotify();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 == 0xda3ade4f) {
				bVar1 = (name == "GetPercentage");
				if (bVar1) {
					if ((typeof(CustomLogicProgressBarBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar4 = CustomLogicProgressBarBuiltin.Bindings.__CreateMethodBinding__GetPercentage();
						return (ICLMemberBinding)pCVar4;
					}
					pCVar4 = CustomLogicProgressBarBuiltin.Bindings.__CreateMethodBinding__GetPercentage();
					return (ICLMemberBinding)pCVar4;
				}
			}
			else if (uVar2 == 0xf722a79f) {
				bVar1 = (name == "OnValueChanged");
				if (bVar1) {
					if ((typeof(CustomLogicProgressBarBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar4 = CustomLogicProgressBarBuiltin.Bindings.__CreateMethodBinding__OnValueChanged();
						return (ICLMemberBinding)pCVar4;
					}
					pCVar4 = CustomLogicProgressBarBuiltin.Bindings.__CreateMethodBinding__OnValueChanged();
					return (ICLMemberBinding)pCVar4;
				}
			}
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicProgressBarBuiltin not found");
			pSVar5 = String.Concat(pSVar5, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6003745")]
		[Address(RVA = "0x5A01700", Offset = "0x5A00700", VA = "0x5A01700")]
		public static CLPropertyBinding<CustomLogicProgressBarBuiltin> __CreatePropertyBinding__Title()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProgressBarBuiltin.c (CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$__CreatePropertyBinding__Title): 4 lines keep C-only constructs
			Func<CustomLogicProgressBarBuiltin, object> __this;
			Action<CustomLogicProgressBarBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicProgressBarBuiltin> __this_01;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicProgressBarBuiltin, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__Title_g____getter_2);
			__this_00 = new Action<CustomLogicProgressBarBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__Title_g____setter_2);
			__this_01 = new CLPropertyBinding<CustomLogicProgressBarBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6003746")]
		[Address(RVA = "0x5A017E0", Offset = "0x5A007E0", VA = "0x5A017E0")]
		public static CLPropertyBinding<CustomLogicProgressBarBuiltin> __CreatePropertyBinding__Value()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProgressBarBuiltin.c (CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$__CreatePropertyBinding__Value): 4 lines keep C-only constructs
			Func<CustomLogicProgressBarBuiltin, object> __this;
			Action<CustomLogicProgressBarBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicProgressBarBuiltin> __this_01;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicProgressBarBuiltin, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__Value_g____getter_3);
			__this_00 = new Action<CustomLogicProgressBarBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__Value_g____setter_3);
			__this_01 = new CLPropertyBinding<CustomLogicProgressBarBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6003747")]
		[Address(RVA = "0x5A018C0", Offset = "0x5A008C0", VA = "0x5A018C0")]
		public static CLPropertyBinding<CustomLogicProgressBarBuiltin> __CreatePropertyBinding__LowValue()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProgressBarBuiltin.c (CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$__CreatePropertyBinding__LowValue): 4 lines keep C-only constructs
			Func<CustomLogicProgressBarBuiltin, object> __this;
			Action<CustomLogicProgressBarBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicProgressBarBuiltin> __this_01;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicProgressBarBuiltin, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__LowValue_g____getter);
			__this_00 = new Action<CustomLogicProgressBarBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__LowValue_g____setter);
			__this_01 = new CLPropertyBinding<CustomLogicProgressBarBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6003748")]
		[Address(RVA = "0x5A019A0", Offset = "0x5A009A0", VA = "0x5A019A0")]
		public static CLPropertyBinding<CustomLogicProgressBarBuiltin> __CreatePropertyBinding__HighValue()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProgressBarBuiltin.c (CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$__CreatePropertyBinding__HighValue): 4 lines keep C-only constructs
			Func<CustomLogicProgressBarBuiltin, object> __this;
			Action<CustomLogicProgressBarBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicProgressBarBuiltin> __this_01;

			__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicProgressBarBuiltin, object>)) ;
			__this = new Func<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__HighValue_g____gette);
			__this_00 = new Action<CustomLogicProgressBarBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings___CreatePropertyBinding__HighValue_g____sette);
			__this_01 = new CLPropertyBinding<CustomLogicProgressBarBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6003749")]
		[Address(RVA = "0x5A01A80", Offset = "0x5A00A80", VA = "0x5A01A80")]
		public static CLMethodBinding<CustomLogicProgressBarBuiltin> __CreateMethodBinding__OnValueChanged()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProgressBarBuiltin.c (CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$__CreateMethodBinding__OnValueChanged): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicProgressBarBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicProgressBarBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546f86 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicProgressBarBuiltin.Bindings.c)) ;
				Il2CppMethodInitialized_07546f86 = true;
				uVar1 = (typeof(CustomLogicProgressBarBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicProgressBarBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicProgressBarBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__6_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicProgressBarBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__6_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicProgressBarBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicProgressBarBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicProgressBarBuiltin, @object[], @object>)) ;
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c___CreateMethodBinding__OnValueChanged_b__6);
				pCVar2 = typeof(CustomLogicProgressBarBuiltin.Bindings.c).static_fields;
				pCVar2.__9__6_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicProgressBarBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600374A")]
		[Address(RVA = "0x5A01BC0", Offset = "0x5A00BC0", VA = "0x5A01BC0")]
		public static CLMethodBinding<CustomLogicProgressBarBuiltin> __CreateMethodBinding__SetValueWithoutNotify()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProgressBarBuiltin.c (CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$__CreateMethodBinding__SetValueWithoutNotify): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicProgressBarBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicProgressBarBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546f87 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicProgressBarBuiltin.Bindings.c)) ;
				Il2CppMethodInitialized_07546f87 = true;
				uVar1 = (typeof(CustomLogicProgressBarBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicProgressBarBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicProgressBarBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__7_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicProgressBarBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__7_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicProgressBarBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicProgressBarBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicProgressBarBuiltin, @object[], @object>)) ;
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c___CreateMethodBinding__SetValueWithoutNotif);
				pCVar2 = typeof(CustomLogicProgressBarBuiltin.Bindings.c).static_fields;
				pCVar2.__9__7_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicProgressBarBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600374B")]
		[Address(RVA = "0x5A01D00", Offset = "0x5A00D00", VA = "0x5A01D00")]
		public static CLMethodBinding<CustomLogicProgressBarBuiltin> __CreateMethodBinding__GetPercentage()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProgressBarBuiltin.c (CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$__CreateMethodBinding__GetPercentage): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicProgressBarBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicProgressBarBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546f88 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicProgressBarBuiltin.Bindings.c)) ;
				Il2CppMethodInitialized_07546f88 = true;
				uVar1 = (typeof(CustomLogicProgressBarBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicProgressBarBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicProgressBarBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__8_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicProgressBarBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__8_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicProgressBarBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicProgressBarBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicProgressBarBuiltin, @object[], @object>)) ;
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c___CreateMethodBinding__GetPercentage_b__8_0);
				pCVar2 = typeof(CustomLogicProgressBarBuiltin.Bindings.c).static_fields;
				pCVar2.__9__8_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicProgressBarBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600374C")]
		[Address(RVA = "0x5A01E40", Offset = "0x5A00E40", VA = "0x5A01E40")]
		public static CLMethodBinding<CustomLogicProgressBarBuiltin> __CreateMethodBinding__SetPercentage()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProgressBarBuiltin.c (CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$__CreateMethodBinding__SetPercentage): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicProgressBarBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicProgressBarBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicProgressBarBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546f89 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicProgressBarBuiltin.Bindings.c)) ;
				Il2CppMethodInitialized_07546f89 = true;
				uVar1 = (typeof(CustomLogicProgressBarBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicProgressBarBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicProgressBarBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__9_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicProgressBarBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__9_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicProgressBarBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicProgressBarBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = il2cpp_codegen_object_new(typeof(Func<CustomLogicProgressBarBuiltin, @object[], @object>)) ;
				__this = new Func<@object, @object, @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_Bindings_c___CreateMethodBinding__SetPercentage_b__9_0);
				pCVar2 = typeof(CustomLogicProgressBarBuiltin.Bindings.c).static_fields;
				pCVar2.__9__9_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicProgressBarBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x4001989")]
	[FieldOffset(Offset = "0x60")]
	private readonly ProgressBar _progressBar;

	[Token(Token = "0x400198A")]
	[FieldOffset(Offset = "0x68")]
	private UserMethod _valueChangedEvent;

	[Token(Token = "0x17000A02")]
	public string Title
	{
		[Token(Token = "0x6003732")]
		[Address(RVA = "0x5A00F90", Offset = "0x59FFF90", VA = "0x5A00F90")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProgressBarBuiltin.c (CustomLogic.CustomLogicProgressBarBuiltin$$get_Title): clean
			AbstractProgressBar __this_00;
			String pSVar1;

			__this_00 = (AbstractProgressBar)this._progressBar;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return pSVar1;
		}
		[Token(Token = "0x6003733")]
		[Address(RVA = "0x5A00FB0", Offset = "0x59FFFB0", VA = "0x5A00FB0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProgressBarBuiltin.c (CustomLogic.CustomLogicProgressBarBuiltin$$set_Title): clean
			AbstractProgressBar __this_00;

			__this_00 = (AbstractProgressBar)this._progressBar;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.title = value;
			return;
		}
	}

	[Token(Token = "0x17000A03")]
	public float Value
	{
		[Token(Token = "0x6003734")]
		[Address(RVA = "0x5A00FD0", Offset = "0x59FFFD0", VA = "0x5A00FD0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProgressBarBuiltin.c (CustomLogic.CustomLogicProgressBarBuiltin$$get_Value): clean
			ProgressBar pUVar1;
			float fVar2;

			pUVar1 = this._progressBar;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			return fVar2;
		}
		[Token(Token = "0x6003735")]
		[Address(RVA = "0x5A01000", Offset = "0x5A00000", VA = "0x5A01000")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProgressBarBuiltin.c (CustomLogic.CustomLogicProgressBarBuiltin$$set_Value): clean
			ProgressBar pUVar1;

			pUVar1 = this._progressBar;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			pUVar1.set_value(value);
			return;
		}
	}

	[Token(Token = "0x17000A04")]
	public float LowValue
	{
		[Token(Token = "0x6003736")]
		[Address(RVA = "0x5A01030", Offset = "0x5A00030", VA = "0x5A01030")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProgressBarBuiltin.c (CustomLogic.CustomLogicProgressBarBuiltin$$get_LowValue): clean
			ProgressBar pUVar1;

			pUVar1 = this._progressBar;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			return pUVar1.m_LowValue;
		}
		[Token(Token = "0x6003737")]
		[Address(RVA = "0x5A01050", Offset = "0x5A00050", VA = "0x5A01050")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProgressBarBuiltin.c (CustomLogic.CustomLogicProgressBarBuiltin$$set_LowValue): clean
			AbstractProgressBar __this_00;

			__this_00 = (AbstractProgressBar)this._progressBar;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.lowValue = value;
			return;
		}
	}

	[Token(Token = "0x17000A05")]
	public float HighValue
	{
		[Token(Token = "0x6003738")]
		[Address(RVA = "0x5A01070", Offset = "0x5A00070", VA = "0x5A01070")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProgressBarBuiltin.c (CustomLogic.CustomLogicProgressBarBuiltin$$get_HighValue): clean
			ProgressBar pUVar1;

			pUVar1 = this._progressBar;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			return pUVar1.m_HighValue;
		}
		[Token(Token = "0x6003739")]
		[Address(RVA = "0x5A01090", Offset = "0x5A00090", VA = "0x5A01090")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProgressBarBuiltin.c (CustomLogic.CustomLogicProgressBarBuiltin$$set_HighValue): clean
			AbstractProgressBar __this_00;

			__this_00 = (AbstractProgressBar)this._progressBar;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.highValue = value;
			return;
		}
	}

	[Token(Token = "0x17000A06")]
	public override string ClassName
	{
		[Token(Token = "0x600373E")]
		[Address(RVA = "0x5A011D0", Offset = "0x5A001D0", VA = "0x5A011D0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProgressBarBuiltin.c (CustomLogic.CustomLogicProgressBarBuiltin$$get_ClassName): clean
			return "ProgressBar";
		}
	}

	[Token(Token = "0x17000A07")]
	public override bool IsAbstract
	{
		[Token(Token = "0x600373F")]
		[Address(RVA = "0x5A01200", Offset = "0x5A00200", VA = "0x5A01200", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProgressBarBuiltin.c (CustomLogic.CustomLogicProgressBarBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000A08")]
	public override bool IsStatic
	{
		[Token(Token = "0x6003740")]
		[Address(RVA = "0x5A01210", Offset = "0x5A00210", VA = "0x5A01210", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProgressBarBuiltin.c (CustomLogic.CustomLogicProgressBarBuiltin$$get_IsStatic): clean
			return false;
		}
	}

	[Token(Token = "0x17000A09")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6003741")]
		[Address(RVA = "0x5A01220", Offset = "0x5A00220", VA = "0x5A01220", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicProgressBarBuiltin.c (CustomLogic.CustomLogicProgressBarBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6003730")]
	[Address(RVA = "0x5A00DC0", Offset = "0x59FFDC0", VA = "0x5A00DC0")]
	public CustomLogicProgressBarBuiltin(ProgressBar progressBar)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicProgressBarBuiltin.c (CustomLogic.CustomLogicProgressBarBuiltin$$.ctor): 2 lines keep C-only constructs
		ProgressBar control;
		EventCallback<TEventType> __this_00;

		base((VisualElement)progressBar);
		this._progressBar = progressBar;
		control = this._progressBar;
		__this_00 = new EventCallback<ChangeEvent<float>>((object)this, (intptr_t)MethodInfo_CustomLogic_CustomLogicProgressBarBuiltin_ctor_b__2_0);
		INotifyValueChangedExtensions.RegisterValueChangedCallback<float>((INotifyValueChanged<T>)control, (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o)__this_00);
		return;
	}

	[Token(Token = "0x6003731")]
	[Address(RVA = "0x5A00E70", Offset = "0x59FFE70", VA = "0x5A00E70")]
	private void OnValueChanged(float value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicProgressBarBuiltin.c (CustomLogic.CustomLogicProgressBarBuiltin$$OnValueChanged): 1 lines keep C-only constructs
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

	[Token(Token = "0x600373A")]
	[Address(RVA = "0x5A010B0", Offset = "0x5A000B0", VA = "0x5A010B0")]
	public CustomLogicProgressBarBuiltin OnValueChanged(UserMethod valueChangedEvent)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicProgressBarBuiltin.c (CustomLogic.CustomLogicProgressBarBuiltin$$OnValueChanged): clean
		__this._valueChangedEvent = valueChangedEvent;
		return __this;
	}

	[Token(Token = "0x600373B")]
	[Address(RVA = "0x5A010D0", Offset = "0x5A000D0", VA = "0x5A010D0")]
	public void SetValueWithoutNotify(float value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicProgressBarBuiltin.c (CustomLogic.CustomLogicProgressBarBuiltin$$SetValueWithoutNotify): clean
		AbstractProgressBar __this_00;

		__this_00 = (AbstractProgressBar)this._progressBar;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.SetValueWithoutNotify(value);
		return;
	}

	[Token(Token = "0x600373C")]
	[Address(RVA = "0x5A010F0", Offset = "0x5A000F0", VA = "0x5A010F0")]
	public float GetPercentage()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicProgressBarBuiltin.c (CustomLogic.CustomLogicProgressBarBuiltin$$GetPercentage): 2 lines keep C-only constructs
		float pfVar1;
		float fVar2;
		ProgressBar pUVar3;
		float fVar4;

		pUVar3 = this._progressBar;
		if (pUVar3 != null) {
			fVar4 = pUVar3.m_HighValue;
			pfVar1 = &pUVar3.m_LowValue;
			if ((fVar4 == *pfVar1) && (!NAN(fVar4) && !NAN(*pfVar1))) {
				return 0.0;
			}
			fVar4 = pUVar3.get_value();
			pUVar3 = this._progressBar;
			if (pUVar3 != null) {
				fVar2 = pUVar3.m_LowValue;
				return ((fVar4 - fVar2) / (pUVar3.m_HighValue - fVar2)) * 100.0;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600373D")]
	[Address(RVA = "0x5A01160", Offset = "0x5A00160", VA = "0x5A01160")]
	public CustomLogicProgressBarBuiltin SetPercentage(float percentage)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicProgressBarBuiltin.c (CustomLogic.CustomLogicProgressBarBuiltin$$SetPercentage): clean
		float fVar1;
		ProgressBar pUVar2;
		float fVar3;

		pUVar2 = __this._progressBar;
		if (pUVar2 == null) {
			throw new NullReferenceException();
		}
		fVar3 = 100.0;
		if (percentage <= 100.0) {
			fVar3 = percentage;
		}
		fVar1 = pUVar2.m_LowValue;
		pUVar2.set_value(((pUVar2.m_HighValue - fVar1) *(float)(-(uint)(0.0 <= percentage) & (uint)fVar3)) / 100.0 + fVar1);
		return __this;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicProgressBarBuiltin.c.

	// CustomLogic.CustomLogicProgressBarBuiltin$$<.ctor>b__2_0: clean
	private void ctor_b__2_0(ChangeEvent<float> evt)
	{


		if (evt == null) {
			throw new NullReferenceException();
		}
		this.OnValueChanged(evt._newValue_k__BackingField);
		return;
	}

	// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Title");
		__this.Add((Il2CppObject *)"Value");
		__this.Add((Il2CppObject *)"LowValue");
		__this.Add((Il2CppObject *)"HighValue");
		__this.Add((Il2CppObject *)"OnValueChanged");
		__this.Add((Il2CppObject *)"SetValueWithoutNotify");
		__this.Add((Il2CppObject *)"GetPercentage");
		__this.Add((Il2CppObject *)"SetPercentage");
		CustomLogicProgressBarBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$<__CreatePropertyBinding__Title>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__Title_g____getter_2_0(CustomLogicProgressBarBuiltin __i)
	{
		AbstractProgressBar __this;
		String pSVar1;

		if ((__i == null) ||(__this = (AbstractProgressBar)__i._progressBar, __this == null)) {
			throw new NullReferenceException();
		}
		pSVar1 = __this.title;
		return (object)pSVar1;
	}

	// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$<__CreatePropertyBinding__Title>g____setter|2_1: clean
	private static void Bindings____CreatePropertyBinding__Title_g____setter_2_1(CustomLogicProgressBarBuiltin __i, object __v)
	{
		AbstractProgressBar __this;
		String value;

		value = CustomLogicEvaluator.ConvertTo<string>(__v);
		if ((__i == null) ||(__this = (AbstractProgressBar)__i._progressBar, __this == null)) {
			throw new NullReferenceException();
		}
		__this.title = value;
		return;
	}

	// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Value_g____getter_3_0(CustomLogicProgressBarBuiltin __i)
	{
		ProgressBar pUVar1;
		object pIVar2;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(pUVar1 = __i._progressBar, pUVar1 == null)) {
			throw new NullReferenceException();
		}
		pUVar1.get_value();
		return pIVar2;
	}

	// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____setter|3_1: clean
	private static void Bindings____CreatePropertyBinding__Value_g____setter_3_1(CustomLogicProgressBarBuiltin __i, object __v)
	{
		ProgressBar pUVar1;
		float fVar2;

		fVar2 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if ((__i == null) ||(pUVar1 = __i._progressBar, pUVar1 == null)) {
			throw new NullReferenceException();
		}
		pUVar1.set_value(fVar2);
		return;
	}

	// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$<__CreatePropertyBinding__LowValue>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__LowValue_g____getter_4_0(CustomLogicProgressBarBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i._progressBar == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$<__CreatePropertyBinding__LowValue>g____setter|4_1: clean
	private static void Bindings____CreatePropertyBinding__LowValue_g____setter_4_1(CustomLogicProgressBarBuiltin __i, object __v)
	{
		AbstractProgressBar __this;
		float value;

		value = CustomLogicEvaluator.ConvertTo<float>(__v);
		if ((__i == null) ||(__this = (AbstractProgressBar)__i._progressBar, __this == null)) {
			throw new NullReferenceException();
		}
		__this.lowValue = value;
		return;
	}

	// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$<__CreatePropertyBinding__HighValue>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__HighValue_g____getter_5_0(CustomLogicProgressBarBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i._progressBar == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicProgressBarBuiltin.Bindings$$<__CreatePropertyBinding__HighValue>g____setter|5_1: clean
	private static void Bindings____CreatePropertyBinding__HighValue_g____setter_5_1(CustomLogicProgressBarBuiltin __i, object __v)
	{
		AbstractProgressBar __this;
		float value;

		value = CustomLogicEvaluator.ConvertTo<float>(__v);
		if ((__i == null) ||(__this = (AbstractProgressBar)__i._progressBar, __this == null)) {
			throw new NullReferenceException();
		}
		__this.highValue = value;
		return;
	}

	// CustomLogic.CustomLogicProgressBarBuiltin.Bindings.<>c$$.cctor: 1 lines keep C-only constructs
	private static void Bindings_c__cctor()
	{
		object __this;

		if (Il2CppMethodInitialized_07546f8f == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicProgressBarBuiltin.Bindings.c)) ;
			Il2CppMethodInitialized_07546f8f = true;
		}
		__this = new CustomLogicProgressBarBuiltin.Bindings.c();
		CustomLogicProgressBarBuiltin.Bindings.c.__9 =(CustomLogicProgressBarBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicProgressBarBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicProgressBarBuiltin.Bindings.<>c$$<__CreateMethodBinding__OnValueChanged>b__6_0: clean
	private object Bindings_c____CreateMethodBinding__OnValueChanged_b__6_0(CustomLogicProgressBarBuiltin __c, Object[] __a)
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

	// CustomLogic.CustomLogicProgressBarBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetValueWithoutNotify>b__7_0: clean
	private object Bindings_c____CreateMethodBinding__SetValueWithoutNotify_b__7_0(CustomLogicProgressBarBuiltin __c, Object[] __a)
	{
		object obj;
		AbstractProgressBar __this_00;
		float newValue;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			newValue = CustomLogicEvaluator.ConvertTo<float>(obj);
			if ((__c != null) &&(__this_00 = (AbstractProgressBar)__c._progressBar, __this_00 != null)) {
				__this_00.SetValueWithoutNotify(newValue);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicProgressBarBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetPercentage>b__8_0: 2 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__GetPercentage_b__8_0(CustomLogicProgressBarBuiltin __c, Object[] __a)
	{
		float pfVar1;
		float fVar2;
		ProgressBar pUVar3;
		object pIVar4;
		float fVar5;
		float local_c;

		if ((__c == null) ||(pUVar3 = __c._progressBar, pUVar3 == null)) {
	label_05b0268e: ;
			throw new NullReferenceException();
		}
		fVar5 = pUVar3.m_HighValue;
		pfVar1 = &pUVar3.m_LowValue;
		if ((fVar5 != *pfVar1) || (NAN(fVar5) || NAN(*pfVar1))) {
			fVar5 = pUVar3.get_value();
			pUVar3 = __c._progressBar;
			if (pUVar3 == null) goto label_05b0268e;
			fVar2 = pUVar3.m_LowValue;
			local_c = ((fVar5 - fVar2) / (pUVar3.m_HighValue - fVar2)) * 100.0;
		}
		return pIVar4;
	}

	// CustomLogic.CustomLogicProgressBarBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetPercentage>b__9_0: clean
	private object Bindings_c____CreateMethodBinding__SetPercentage_b__9_0(CustomLogicProgressBarBuiltin __c, Object[] __a)
	{
		float fVar1;
		object obj;
		ProgressBar pUVar2;
		float fVar3;
		float fVar4;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			fVar3 = CustomLogicEvaluator.ConvertTo<float>(obj);
			if ((__c != null) &&(pUVar2 = __c._progressBar, pUVar2 != null)) {
				fVar4 = 100.0;
				if (fVar3 <= 100.0) {
					fVar4 = fVar3;
				}
				fVar1 = pUVar2.m_LowValue;
				pUVar2.set_value(((pUVar2.m_HighValue - fVar1) * (float)(-(uint)(0.0 <= fVar3) & (uint)fVar4) ) / 100.0 + fVar1);
				return (object)__c;
			}
		}
		throw new NullReferenceException();
	}
}
