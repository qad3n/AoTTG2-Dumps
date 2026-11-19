// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicDropdownBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicDropdownBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.UIElements;

namespace CustomLogic;

[Token(Token = "0x20005E6")]
[CompilerGenerated]
internal class CustomLogicDropdownBuiltin : CustomLogicVisualElementBuiltin
{
	[Token(Token = "0x20005E7")]
	public new static class Factory
	{
		[Token(Token = "0x60036D4")]
		[Address(RVA = "0x59FD260", Offset = "0x59FC260", VA = "0x59FD260")]
		public static CustomLogicDropdownBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDropdownBuiltin.c (CustomLogic.CustomLogicDropdownBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			String pSVar1;
			String str0;
			String str2;
			Il2CppClass klass;
			ArgumentException __this;
			MethodInfo lastManagedFrame;
			int local_14;

			pSVar1 = local_14.ToString();
			str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicDropdownBuiltin constructor found that takes ");
			str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
			pSVar1 = String.Concat(str0, pSVar1, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this = (ArgumentException)il2cpp_codegen_object_new(klass);
			__this = new ArgumentException(pSVar1);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Factory_CreateInstance);
			throw (object)__this;
		}
	}

	[Token(Token = "0x20005E8")]
	public new static class Bindings
	{
		[Token(Token = "0x4001974")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60036D5")]
		[Address(RVA = "0x59FD2F0", Offset = "0x59FC2F0", VA = "0x59FD2F0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDropdownBuiltin.c (CustomLogic.CustomLogicDropdownBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLMethodBinding<CustomLogicDropdownBuiltin> pCVar3;
			CLPropertyBinding<CustomLogicDropdownBuiltin> pCVar4;
			String pSVar5;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x7ed1d727) {
				if (uVar2 < 0x19e378c0) {
					if (uVar2 == 0x337847e) {
						bVar1 = (name == "RemoveChoice");
						if (bVar1) {
							if ((typeof(CustomLogicDropdownBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicDropdownBuiltin.Bindings.__CreateMethodBinding__RemoveChoice();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicDropdownBuiltin.Bindings.__CreateMethodBinding__RemoveChoice();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x19e378bf) {
						bVar1 = (name == "AddChoice");
						if (bVar1) {
							if ((typeof(CustomLogicDropdownBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicDropdownBuiltin.Bindings.__CreateMethodBinding__AddChoice();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicDropdownBuiltin.Bindings.__CreateMethodBinding__AddChoice();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x31359a62) {
					bVar1 = (name == "SetIndexWithoutNotify");
					if (bVar1) {
						if ((typeof(CustomLogicDropdownBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicDropdownBuiltin.Bindings.__CreateMethodBinding__SetIndexWithoutNotify();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicDropdownBuiltin.Bindings.__CreateMethodBinding__SetIndexWithoutNotify();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x3dac88df) {
					bVar1 = (name == "Choices");
					if (bVar1) {
						if ((typeof(CustomLogicDropdownBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar4 = CustomLogicDropdownBuiltin.Bindings.__CreatePropertyBinding__Choices();
							return (ICLMemberBinding)pCVar4;
						}
						pCVar4 = CustomLogicDropdownBuiltin.Bindings.__CreatePropertyBinding__Choices();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0x7ed1d726) {
					bVar1 = (name == "ClearChoices");
					if (bVar1) {
						if ((typeof(CustomLogicDropdownBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicDropdownBuiltin.Bindings.__CreateMethodBinding__ClearChoices();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicDropdownBuiltin.Bindings.__CreateMethodBinding__ClearChoices();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xaec7ae4c) {
				if (uVar2 == 0x9eccf29d) {
					bVar1 = (name == "Label");
					if (bVar1) {
						if ((typeof(CustomLogicDropdownBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar4 = CustomLogicDropdownBuiltin.Bindings.__CreatePropertyBinding__Label();
							return (ICLMemberBinding)pCVar4;
						}
						pCVar4 = CustomLogicDropdownBuiltin.Bindings.__CreatePropertyBinding__Label();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0xaec7ae4b) {
					bVar1 = (name == "Index");
					if (bVar1) {
						if ((typeof(CustomLogicDropdownBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar4 = CustomLogicDropdownBuiltin.Bindings.__CreatePropertyBinding__Index();
							return (ICLMemberBinding)pCVar4;
						}
						pCVar4 = CustomLogicDropdownBuiltin.Bindings.__CreatePropertyBinding__Index();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 == 0xd147f96a) {
				bVar1 = (name == "Value");
				if (bVar1) {
					if ((typeof(CustomLogicDropdownBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar4 = CustomLogicDropdownBuiltin.Bindings.__CreatePropertyBinding__Value();
						return (ICLMemberBinding)pCVar4;
					}
					pCVar4 = CustomLogicDropdownBuiltin.Bindings.__CreatePropertyBinding__Value();
					return (ICLMemberBinding)pCVar4;
				}
			}
			else if (uVar2 == 0xd1dd43b5) {
				bVar1 = (name == "SetValueWithoutNotify");
				if (bVar1) {
					if ((typeof(CustomLogicDropdownBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar3 = CustomLogicDropdownBuiltin.Bindings.__CreateMethodBinding__SetValueWithoutNotify();
						return (ICLMemberBinding)pCVar3;
					}
					pCVar3 = CustomLogicDropdownBuiltin.Bindings.__CreateMethodBinding__SetValueWithoutNotify();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xf722a79f) {
				bVar1 = (name == "OnValueChanged");
				if (bVar1) {
					if ((typeof(CustomLogicDropdownBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar3 = CustomLogicDropdownBuiltin.Bindings.__CreateMethodBinding__OnValueChanged();
						return (ICLMemberBinding)pCVar3;
					}
					pCVar3 = CustomLogicDropdownBuiltin.Bindings.__CreateMethodBinding__OnValueChanged();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicDropdownBuiltin not found");
			pSVar5 = String.Concat(pSVar5, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x60036D6")]
		[Address(RVA = "0x59FD7B0", Offset = "0x59FC7B0", VA = "0x59FD7B0")]
		public static CLPropertyBinding<CustomLogicDropdownBuiltin> __CreatePropertyBinding__Label()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDropdownBuiltin.c (CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreatePropertyBinding__Label): 3 lines keep C-only constructs
			Func<CustomLogicDropdownBuiltin, object> __this;
			Action<CustomLogicDropdownBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicDropdownBuiltin> __this_01;

			__this = new Func<CustomLogicDropdownBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings___CreatePropertyBinding__Label_g____getter_2_0);
			__this_00 = new Action<CustomLogicDropdownBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings___CreatePropertyBinding__Label_g____setter_2_1);
			__this_01 = new CLPropertyBinding<CustomLogicDropdownBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60036D7")]
		[Address(RVA = "0x59FD890", Offset = "0x59FC890", VA = "0x59FD890")]
		public static CLPropertyBinding<CustomLogicDropdownBuiltin> __CreatePropertyBinding__Value()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDropdownBuiltin.c (CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreatePropertyBinding__Value): 3 lines keep C-only constructs
			Func<CustomLogicDropdownBuiltin, object> __this;
			Action<CustomLogicDropdownBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicDropdownBuiltin> __this_01;

			__this = new Func<CustomLogicDropdownBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings___CreatePropertyBinding__Value_g____getter_3_0);
			__this_00 = new Action<CustomLogicDropdownBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings___CreatePropertyBinding__Value_g____setter_3_1);
			__this_01 = new CLPropertyBinding<CustomLogicDropdownBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60036D8")]
		[Address(RVA = "0x59FD970", Offset = "0x59FC970", VA = "0x59FD970")]
		public static CLPropertyBinding<CustomLogicDropdownBuiltin> __CreatePropertyBinding__Index()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDropdownBuiltin.c (CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreatePropertyBinding__Index): 3 lines keep C-only constructs
			Func<CustomLogicDropdownBuiltin, object> __this;
			Action<CustomLogicDropdownBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicDropdownBuiltin> __this_01;

			__this = new Func<CustomLogicDropdownBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings___CreatePropertyBinding__Index_g____getter_4_0);
			__this_00 = new Action<CustomLogicDropdownBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings___CreatePropertyBinding__Index_g____setter_4_1);
			__this_01 = new CLPropertyBinding<CustomLogicDropdownBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60036D9")]
		[Address(RVA = "0x59FDA50", Offset = "0x59FCA50", VA = "0x59FDA50")]
		public static CLPropertyBinding<CustomLogicDropdownBuiltin> __CreatePropertyBinding__Choices()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDropdownBuiltin.c (CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreatePropertyBinding__Choices): 3 lines keep C-only constructs
			Func<CustomLogicDropdownBuiltin, object> __this;
			Action<CustomLogicDropdownBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicDropdownBuiltin> __this_01;

			__this = new Func<CustomLogicDropdownBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings___CreatePropertyBinding__Choices_g____getter_5_0);
			__this_00 = new Action<CustomLogicDropdownBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings___CreatePropertyBinding__Choices_g____setter_5_1);
			__this_01 = new CLPropertyBinding<CustomLogicDropdownBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x60036DA")]
		[Address(RVA = "0x59FDB30", Offset = "0x59FCB30", VA = "0x59FDB30")]
		public static CLMethodBinding<CustomLogicDropdownBuiltin> __CreateMethodBinding__OnValueChanged()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDropdownBuiltin.c (CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreateMethodBinding__OnValueChanged): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicDropdownBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicDropdownBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546f4c == false) {
				Il2CppMethodInitialized_07546f4c = true;
				uVar1 = (typeof(CustomLogicDropdownBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicDropdownBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicDropdownBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__6_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicDropdownBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__6_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicDropdownBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicDropdownBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicDropdownBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c___CreateMethodBinding__OnValueChanged_b__6_0);
				pCVar2 = typeof(CustomLogicDropdownBuiltin.Bindings.c).static_fields;
				pCVar2.__9__6_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicDropdownBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60036DB")]
		[Address(RVA = "0x59FDC70", Offset = "0x59FCC70", VA = "0x59FDC70")]
		public static CLMethodBinding<CustomLogicDropdownBuiltin> __CreateMethodBinding__SetValueWithoutNotify()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDropdownBuiltin.c (CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreateMethodBinding__SetValueWithoutNotify): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicDropdownBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicDropdownBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546f4d == false) {
				Il2CppMethodInitialized_07546f4d = true;
				uVar1 = (typeof(CustomLogicDropdownBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicDropdownBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicDropdownBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__7_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicDropdownBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__7_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicDropdownBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicDropdownBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicDropdownBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c___CreateMethodBinding__SetValueWithoutNotify_b);
				pCVar2 = typeof(CustomLogicDropdownBuiltin.Bindings.c).static_fields;
				pCVar2.__9__7_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicDropdownBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60036DC")]
		[Address(RVA = "0x59FDDB0", Offset = "0x59FCDB0", VA = "0x59FDDB0")]
		public static CLMethodBinding<CustomLogicDropdownBuiltin> __CreateMethodBinding__SetIndexWithoutNotify()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDropdownBuiltin.c (CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreateMethodBinding__SetIndexWithoutNotify): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicDropdownBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicDropdownBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546f4e == false) {
				Il2CppMethodInitialized_07546f4e = true;
				uVar1 = (typeof(CustomLogicDropdownBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicDropdownBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicDropdownBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__8_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicDropdownBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__8_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicDropdownBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicDropdownBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicDropdownBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c___CreateMethodBinding__SetIndexWithoutNotify_b);
				pCVar2 = typeof(CustomLogicDropdownBuiltin.Bindings.c).static_fields;
				pCVar2.__9__8_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicDropdownBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60036DD")]
		[Address(RVA = "0x59FDEF0", Offset = "0x59FCEF0", VA = "0x59FDEF0")]
		public static CLMethodBinding<CustomLogicDropdownBuiltin> __CreateMethodBinding__AddChoice()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDropdownBuiltin.c (CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreateMethodBinding__AddChoice): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicDropdownBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicDropdownBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546f4f == false) {
				Il2CppMethodInitialized_07546f4f = true;
				uVar1 = (typeof(CustomLogicDropdownBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicDropdownBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicDropdownBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__9_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicDropdownBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__9_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicDropdownBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicDropdownBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicDropdownBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c___CreateMethodBinding__AddChoice_b__9_0);
				pCVar2 = typeof(CustomLogicDropdownBuiltin.Bindings.c).static_fields;
				pCVar2.__9__9_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicDropdownBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60036DE")]
		[Address(RVA = "0x59FE030", Offset = "0x59FD030", VA = "0x59FE030")]
		public static CLMethodBinding<CustomLogicDropdownBuiltin> __CreateMethodBinding__RemoveChoice()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDropdownBuiltin.c (CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreateMethodBinding__RemoveChoice): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicDropdownBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicDropdownBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546f50 == false) {
				Il2CppMethodInitialized_07546f50 = true;
				uVar1 = (typeof(CustomLogicDropdownBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicDropdownBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicDropdownBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__10_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicDropdownBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__10_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicDropdownBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicDropdownBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicDropdownBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c___CreateMethodBinding__RemoveChoice_b__10_0);
				pCVar2 = typeof(CustomLogicDropdownBuiltin.Bindings.c).static_fields;
				pCVar2.__9__10_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicDropdownBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60036DF")]
		[Address(RVA = "0x59FE170", Offset = "0x59FD170", VA = "0x59FE170")]
		public static CLMethodBinding<CustomLogicDropdownBuiltin> __CreateMethodBinding__ClearChoices()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDropdownBuiltin.c (CustomLogic.CustomLogicDropdownBuiltin.Bindings$$__CreateMethodBinding__ClearChoices): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicDropdownBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicDropdownBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicDropdownBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546f51 == false) {
				Il2CppMethodInitialized_07546f51 = true;
				uVar1 = (typeof(CustomLogicDropdownBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicDropdownBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicDropdownBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__11_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicDropdownBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__11_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicDropdownBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicDropdownBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicDropdownBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_Bindings_c___CreateMethodBinding__ClearChoices_b__11_0);
				pCVar2 = typeof(CustomLogicDropdownBuiltin.Bindings.c).static_fields;
				pCVar2.__9__11_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicDropdownBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x4001972")]
	[FieldOffset(Offset = "0x60")]
	private readonly DropdownField _dropdown;

	[Token(Token = "0x4001973")]
	[FieldOffset(Offset = "0x68")]
	private UserMethod _valueChangedEvent;

	[Token(Token = "0x170009E9")]
	public string Label
	{
		[Token(Token = "0x60036C1")]
		[Address(RVA = "0x59FC820", Offset = "0x59FB820", VA = "0x59FC820")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDropdownBuiltin.c (CustomLogic.CustomLogicDropdownBuiltin$$get_Label): clean
			DropdownField __this_00;
			String pSVar1;

			__this_00 = this._dropdown;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return pSVar1;
		}
		[Token(Token = "0x60036C2")]
		[Address(RVA = "0x59FC860", Offset = "0x59FB860", VA = "0x59FC860")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDropdownBuiltin.c (CustomLogic.CustomLogicDropdownBuiltin$$set_Label): clean
			DropdownField __this_00;

			__this_00 = this._dropdown;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.label = value;
			return;
		}
	}

	[Token(Token = "0x170009EA")]
	public string Value
	{
		[Token(Token = "0x60036C3")]
		[Address(RVA = "0x59FC8B0", Offset = "0x59FB8B0", VA = "0x59FC8B0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDropdownBuiltin.c (CustomLogic.CustomLogicDropdownBuiltin$$get_Value): 3 lines keep C-only constructs
			DropdownField pUVar1;
			Il2CppMethodPointer vtableDispatch;
			String pSVar2;
			ulong in_RDX;

			pUVar1 = this._dropdown;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			vtableDispatch = (pUVar1.klass.vtable)._148_get_value.methodPtr;
			pSVar2 = (String)(*vtableDispatch)(pUVar1,(pUVar1.klass.vtable)._148_get_value.method,in_RDX,vtableDispatch);
			return pSVar2;
		}
		[Token(Token = "0x60036C4")]
		[Address(RVA = "0x59FC8E0", Offset = "0x59FB8E0", VA = "0x59FC8E0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDropdownBuiltin.c (CustomLogic.CustomLogicDropdownBuiltin$$set_Value): 2 lines keep C-only constructs
			DropdownField pUVar1;
			Il2CppMethodPointer vtableDispatch;

			pUVar1 = this._dropdown;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			vtableDispatch = (pUVar1.klass.vtable)._149_set_value.methodPtr;
			(*vtableDispatch)(pUVar1,value,(pUVar1.klass.vtable)._149_set_value.method,vtableDispatch);
			return;
		}
	}

	[Token(Token = "0x170009EB")]
	public int Index
	{
		[Token(Token = "0x60036C5")]
		[Address(RVA = "0x59FC910", Offset = "0x59FB910", VA = "0x59FC910")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDropdownBuiltin.c (CustomLogic.CustomLogicDropdownBuiltin$$get_Index): 1 lines keep C-only constructs
			PopupField<T> __this_00;
			int iVar1;

			if (Il2CppMethodInitialized_07546f3d == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_PopupField_string_get_index) ;
				Il2CppMethodInitialized_07546f3d = true;
			}
			__this_00 = (PopupField<T>)this._dropdown;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return iVar1;
		}
		[Token(Token = "0x60036C6")]
		[Address(RVA = "0x59FC950", Offset = "0x59FB950", VA = "0x59FC950")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDropdownBuiltin.c (CustomLogic.CustomLogicDropdownBuiltin$$set_Index): 1 lines keep C-only constructs
			PopupField<T> __this_00;

			if (Il2CppMethodInitialized_07546f3e == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_UIElements_PopupField_string_set_index) ;
				Il2CppMethodInitialized_07546f3e = true;
			}
			__this_00 = (PopupField<T>)this._dropdown;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.index = value;
			return;
		}
	}

	[Token(Token = "0x170009EC")]
	public CustomLogicListBuiltin Choices
	{
		[Token(Token = "0x60036C7")]
		[Address(RVA = "0x59FC9A0", Offset = "0x59FB9A0", VA = "0x59FC9A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDropdownBuiltin.c (CustomLogic.CustomLogicDropdownBuiltin$$get_Choices): 10 lines keep C-only constructs
			int piVar1;
			uint uVar2;
			DropdownField pUVar3;
			Object[] pSVar4;
			MethodInfo pMVar5;
			bool bVar6;
			CustomLogicListBuiltin __this_00;
			List<object> pSVar7;
			System_Collections_Generic_List_Enumerator_object__o SStack_58;
			byte[] auStack_38 = new byte[16];
			object pIStack_28;

			__this_00 = new CustomLogicListBuiltin();
			pUVar3 = this._dropdown;
			if ((pUVar3 == null) ||(pSVar7 = (List<object>)pUVar3.get_choices(), pSVar7 == null)) {
				throw new NullReferenceException();
			}
			auStack_38.GetEnumerator(pSVar7);
			SStack_58._current = pIStack_28;
			SStack_58._list = (List<T>)auStack_38._0_8_;
			SStack_58._index = auStack_38._8_4_;
			SStack_58._version = auStack_38._12_4_;
			auStack_38._0_8_ = null;
			auStack_38._8_8_ = &SStack_58;
			if (__this_00 == null) {
				auStack_38._8_8_ = &SStack_58;
				bVar6 = SStack_58.MoveNext();
				if (bVar6) {
					throw new NullReferenceException();
				}
			}
			else {
				while (true) {
					bVar6 = SStack_58.MoveNext();
					pMVar5 = MethodInfo_System_Collections_Generic_List_object_Add;
					if (!(bVar6)) break;
					pSVar7 = __this_00.List;
					if (pSVar7 == null) {
		label_05afcb3b: ;
						throw new NullReferenceException();
					}
					piVar1 = &pSVar7._version;
					*piVar1 = *piVar1 + 1;
					pSVar4 = pSVar7._items;
					if (pSVar4 == null) goto label_05afcb3b;
					uVar2 = pSVar7._size;
					if (uVar2 < (uint)pSVar4.Length) {
						pSVar7._size = uVar2 + 1;
						pSVar4[(int)uVar2] = SStack_58._current;
					}
					else {
						pSVar7.AddWithResize(SStack_58._current);
					}
				}
			}
			SStack_58.Dispose();
			return __this_00;
		}
		[Token(Token = "0x60036C8")]
		[Address(RVA = "0x59FCBB0", Offset = "0x59FBBB0", VA = "0x59FCBB0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDropdownBuiltin.c (CustomLogic.CustomLogicDropdownBuiltin$$set_Choices): 10 lines keep C-only constructs
			int piVar1;
			uint uVar2;
			List<object> __this_00;
			DropdownField pUVar3;
			String[] pSVar4;
			byte puVar6;
			bool bVar7;
			List<string> __this_01;
			String item;
			byte[] local_58 = new byte[16];
			object local_48;
			byte[] local_40 = new byte[16];
			object local_30;

			__this_01 = new List<string>();
			if ((value != null) &&(__this_00 = value.List, __this_00 != null)) {
				local_40.GetEnumerator(__this_00);
				local_48 = local_30;
				local_58._0_8_ = local_40._0_8_;
				local_58._8_8_ = local_40._8_8_;
				local_40._0_8_ = null;
				local_40._8_8_ = local_58;
				puVar6 = local_58;
				if (__this_01 == null) {
					do {
						local_40._8_8_ = puVar6;
						bVar7 = local_58.MoveNext();
						if (!bVar7) goto label_05afccde;
						puVar6 = (byte)local_40._8_8_;
					} while (local_48 == null);
					(*local_48.klass.vtable[3].methodPtr)(local_48,local_48.klass.vtable[3].method);
		label_05afcdaa: ;
					throw new NullReferenceException();
				}
				while (bVar7 = local_58.MoveNext()) {
					if (local_48 != null) {
						item = (String)(*local_48.klass.vtable[3].methodPtr)(local_48,local_48.klass.vtable[3].method);
						piVar1 = &__this_01._version;
						*piVar1 = *piVar1 + 1;
						pSVar4 = __this_01._items;
						if (pSVar4 == null) goto label_05afcdaa;
						uVar2 = __this_01._size;
						if (uVar2 < (uint)pSVar4.Length) {
							__this_01._size = uVar2 + 1;
							pSVar4[(int)uVar2] = item;
						}
						else {
							__this_01.AddWithResize((object)item);
						}
					}
				}
		label_05afccde: ;
				local_58.Dispose();
				pUVar3 = this._dropdown;
				if (pUVar3 != null) {
					pUVar3.set_choices(__this_01);
					return;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x170009ED")]
	public override string ClassName
	{
		[Token(Token = "0x60036CF")]
		[Address(RVA = "0x59FD1B0", Offset = "0x59FC1B0", VA = "0x59FD1B0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDropdownBuiltin.c (CustomLogic.CustomLogicDropdownBuiltin$$get_ClassName): clean
			return "Dropdown";
		}
	}

	[Token(Token = "0x170009EE")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60036D0")]
		[Address(RVA = "0x59FD1E0", Offset = "0x59FC1E0", VA = "0x59FD1E0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDropdownBuiltin.c (CustomLogic.CustomLogicDropdownBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x170009EF")]
	public override bool IsStatic
	{
		[Token(Token = "0x60036D1")]
		[Address(RVA = "0x59FD1F0", Offset = "0x59FC1F0", VA = "0x59FD1F0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDropdownBuiltin.c (CustomLogic.CustomLogicDropdownBuiltin$$get_IsStatic): clean
			return false;
		}
	}

	[Token(Token = "0x170009F0")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60036D2")]
		[Address(RVA = "0x59FD200", Offset = "0x59FC200", VA = "0x59FD200", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicDropdownBuiltin.c (CustomLogic.CustomLogicDropdownBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x60036BF")]
	[Address(RVA = "0x59FC670", Offset = "0x59FB670", VA = "0x59FC670")]
	public CustomLogicDropdownBuiltin(DropdownField dropdown)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicDropdownBuiltin.c (CustomLogic.CustomLogicDropdownBuiltin$$.ctor): 3 lines keep C-only constructs
		DropdownField control;
		EventCallback<TEventType> __this_00;

		if (Il2CppMethodInitialized_07546f39 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_ctor_b__2_0) ;
			Il2CppMethodInitialized_07546f39 = true;
		}
		base((VisualElement)dropdown);
		this._dropdown = dropdown;
		control = this._dropdown;
		__this_00 = new EventCallback<ChangeEvent<string>>((object)this, (intptr_t)MethodInfo_CustomLogic_CustomLogicDropdownBuiltin_ctor_b__2_0);
		INotifyValueChangedExtensions.RegisterValueChangedCallback<string>((INotifyValueChanged<T>)control, (UnityEngine_UIElements_EventCallback_ChangeEvent_T___o)__this_00);
		return;
	}

	[Token(Token = "0x60036C0")]
	[Address(RVA = "0x59FC720", Offset = "0x59FB720", VA = "0x59FC720")]
	private void OnValueChanged(string value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicDropdownBuiltin.c (CustomLogic.CustomLogicDropdownBuiltin$$OnValueChanged): 1 lines keep C-only constructs
		CustomLogicEvaluator __this_00;
		Object[] parameterValues;
		object pIVar1;
		UserMethod userMethod;

		userMethod = this._valueChangedEvent;
		if (userMethod == null) {
			return;
		}
		if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
			userMethod = this._valueChangedEvent;
		}
		__this_00 = CustomLogicManager.Evaluator;
		parameterValues = (Object[])new object[1];
		if (parameterValues != null) {
			if (value != null) {
				pIVar1 = il2cpp_vm_Object_IsInst((object)value, (((parameterValues.obj).klass)._1).element_class);
				if (pIVar1 == null) {
					pIVar1 = new ArrayTypeMismatchException();
					throw pIVar1;
				}
			}
			if ((int)parameterValues.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			parameterValues[0] = (object)value;
			if (__this_00 != null) {
				__this_00.EvaluateMethod(userMethod, parameterValues);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60036C9")]
	[Address(RVA = "0x59FCE20", Offset = "0x59FBE20", VA = "0x59FCE20")]
	public CustomLogicDropdownBuiltin OnValueChanged(UserMethod valueChangedEvent)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicDropdownBuiltin.c (CustomLogic.CustomLogicDropdownBuiltin$$OnValueChanged): clean
		__this._valueChangedEvent = valueChangedEvent;
		return __this;
	}

	[Token(Token = "0x60036CA")]
	[Address(RVA = "0x59FCE40", Offset = "0x59FBE40", VA = "0x59FCE40")]
	public void SetValueWithoutNotify(string value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicDropdownBuiltin.c (CustomLogic.CustomLogicDropdownBuiltin$$SetValueWithoutNotify): 2 lines keep C-only constructs
		DropdownField pUVar1;
		Il2CppMethodPointer vtableDispatch;

		pUVar1 = this._dropdown;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		vtableDispatch = (pUVar1.klass.vtable)._159_SetValueWithoutNotify.methodPtr;
		(*vtableDispatch)(pUVar1,value,(pUVar1.klass.vtable)._159_SetValueWithoutNotify.method,vtableDispatch);
		return;
	}

	[Token(Token = "0x60036CB")]
	[Address(RVA = "0x59FCE70", Offset = "0x59FBE70", VA = "0x59FCE70")]
	public void SetIndexWithoutNotify(int index)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicDropdownBuiltin.c (CustomLogic.CustomLogicDropdownBuiltin$$SetIndexWithoutNotify): 3 lines keep C-only constructs
		DropdownField pUVar1;
		DropdownField pUVar2;
		Il2CppMethodPointer vtableDispatch;
		long lVar3;
		List<object> __this_00;
		String pSVar4;

		if (index < 0) {
			return;
		}
		pUVar1 = this._dropdown;
		if ((pUVar1 != null) &&(lVar3 = pUVar1.get_choices(), lVar3 != 0)) {
			if (*(int)(lVar3 + 0x18) <= index) {
				return;
			}
			pUVar1 = this._dropdown;
			if ((pUVar1 != null) &&(__this_00 = (List<object>)pUVar1.get_choices(), __this_00 != null)) {
				pSVar4 = __this_00.get_Item(index);
				pUVar2 = pUVar1.klass;
				vtableDispatch = (pUVar2.vtable)._159_SetValueWithoutNotify.methodPtr;
				(*vtableDispatch)(pUVar1,pSVar4,(pUVar2.vtable)._159_SetValueWithoutNotify.method,pUVar2,vtableDispatch );
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60036CC")]
	[Address(RVA = "0x59FCF30", Offset = "0x59FBF30", VA = "0x59FCF30")]
	public CustomLogicDropdownBuiltin AddChoice(string choice)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicDropdownBuiltin.c (CustomLogic.CustomLogicDropdownBuiltin$$AddChoice): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		DropdownField pUVar3;
		String[] pSVar4;
		IEnumerable<T> collection;
		List<string> __this_00;

		pUVar3 = __this._dropdown;
		if (pUVar3 != null) {
			collection = (IEnumerable<T>)pUVar3.get_choices();
			__this_00 = new List<string>(collection);
			if (__this_00 != null) {
				piVar1 = &__this_00._version;
				*piVar1 = *piVar1 + 1;
				pSVar4 = __this_00._items;
				if (pSVar4 != null) {
					uVar2 = __this_00._size;
					if (uVar2 < (uint)pSVar4.Length) {
						__this_00._size = uVar2 + 1;
						pSVar4[(int)uVar2] = choice;
					}
					else {
						__this_00.AddWithResize((object)choice);
					}
					pUVar3 = __this._dropdown;
					if (pUVar3 != null) {
						pUVar3.set_choices(__this_00);
						return __this;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60036CD")]
	[Address(RVA = "0x59FD050", Offset = "0x59FC050", VA = "0x59FD050")]
	public CustomLogicDropdownBuiltin RemoveChoice(string choice)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicDropdownBuiltin.c (CustomLogic.CustomLogicDropdownBuiltin$$RemoveChoice): clean
		DropdownField pUVar1;
		IEnumerable<T> collection;
		List<string> __this_00;

		pUVar1 = __this._dropdown;
		if (pUVar1 != null) {
			collection = (IEnumerable<T>)pUVar1.get_choices();
			__this_00 = new List<string>(collection);
			if (__this_00 != null) {
				__this_00.Remove((object)choice);
				pUVar1 = __this._dropdown;
				if (pUVar1 != null) {
					pUVar1.set_choices(__this_00);
					return __this;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60036CE")]
	[Address(RVA = "0x59FD120", Offset = "0x59FC120", VA = "0x59FD120")]
	public CustomLogicDropdownBuiltin ClearChoices()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicDropdownBuiltin.c (CustomLogic.CustomLogicDropdownBuiltin$$ClearChoices): clean
		DropdownField pUVar1;
		List<string> __this_00;

		pUVar1 = __this._dropdown;
		__this_00 = new List<string>();
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pUVar1.set_choices(__this_00);
		return __this;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicDropdownBuiltin.c.

	// CustomLogic.CustomLogicDropdownBuiltin$$<.ctor>b__2_0: clean
	private void ctor_b__2_0(ChangeEvent<string> evt)
	{


		if (evt == null) {
			throw new NullReferenceException();
		}
		this.OnValueChanged(evt._newValue_k__BackingField);
		return;
	}

	// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Label");
		__this.Add((Il2CppObject *)"Value");
		__this.Add((Il2CppObject *)"Index");
		__this.Add((Il2CppObject *)"Choices");
		__this.Add((Il2CppObject *)"OnValueChanged");
		__this.Add((Il2CppObject *)"SetValueWithoutNotify");
		__this.Add((Il2CppObject *)"SetIndexWithoutNotify");
		__this.Add((Il2CppObject *)"AddChoice");
		__this.Add((Il2CppObject *)"RemoveChoice");
		__this.Add((Il2CppObject *)"ClearChoices");
		CustomLogicDropdownBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$<__CreatePropertyBinding__Label>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__Label_g____getter_2_0(CustomLogicDropdownBuiltin __i)
	{
		DropdownField __this;
		String pSVar1;

		if (__i != null) {
			__this = __i._dropdown;
			if (__this != null) {
				pSVar1 = __this.label;
				return (object)pSVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$<__CreatePropertyBinding__Label>g____setter|2_1: clean
	private static void Bindings____CreatePropertyBinding__Label_g____setter_2_1(CustomLogicDropdownBuiltin __i, object __v)
	{
		DropdownField __this;
		String value;

		value = CustomLogicEvaluator.ConvertTo<string>(__v);
		if (__i != null) {
			__this = __i._dropdown;
			if (__this != null) {
				__this.label = value;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____getter|3_0: 3 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__Value_g____getter_3_0(CustomLogicDropdownBuiltin __i)
	{
		DropdownField pUVar1;
		Il2CppMethodPointer vtableDispatch;
		object pIVar2;
		ulong in_RDX;

		if ((__i == null) ||(pUVar1 = __i._dropdown, pUVar1 == null)) {
			throw new NullReferenceException();
		}
		vtableDispatch = (pUVar1.klass.vtable)._148_get_value.methodPtr;
		pIVar2 = (object)(*vtableDispatch)(pUVar1,(pUVar1.klass.vtable)._148_get_value.method,in_RDX,vtableDispatch);
		return pIVar2;
	}

	// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$<__CreatePropertyBinding__Value>g____setter|3_1: 3 lines keep C-only constructs
	private static void Bindings____CreatePropertyBinding__Value_g____setter_3_1(CustomLogicDropdownBuiltin __i, object __v)
	{
		DropdownField pUVar1;
		DropdownField pUVar2;
		Il2CppMethodPointer vtableDispatch;
		String pSVar3;

		pSVar3 = CustomLogicEvaluator.ConvertTo<string>(__v);
		if ((__i == null) ||(pUVar1 = __i._dropdown, pUVar1 == null)) {
			throw new NullReferenceException();
		}
		pUVar2 = pUVar1.klass;
		vtableDispatch = (pUVar2.vtable)._149_set_value.methodPtr;
		(*vtableDispatch)(pUVar1,pSVar3,(pUVar2.vtable)._149_set_value.method,pUVar2,vtableDispatch);
		return;
	}

	// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$<__CreatePropertyBinding__Index>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Index_g____getter_4_0(CustomLogicDropdownBuiltin __i)
	{
		PopupField<T> __this;
		object pIVar1;

		if (__i != null) {
			__this = (PopupField<T>)__i._dropdown;
			if (__this != null) {
				return pIVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$<__CreatePropertyBinding__Index>g____setter|4_1: clean
	private static void Bindings____CreatePropertyBinding__Index_g____setter_4_1(CustomLogicDropdownBuiltin __i, object __v)
	{
		PopupField<T> __this;
		int value;

		value = CustomLogicEvaluator.ConvertTo<int>(__v);
		if (__i != null) {
			__this = (PopupField<T>)__i._dropdown;
			if (__this != null) {
				__this.index = value;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$<__CreatePropertyBinding__Choices>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__Choices_g____getter_5_0(CustomLogicDropdownBuiltin __i)
	{
		CustomLogicListBuiltin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.Choices;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicDropdownBuiltin.Bindings$$<__CreatePropertyBinding__Choices>g____setter|5_1: clean
	private static void Bindings____CreatePropertyBinding__Choices_g____setter_5_1(CustomLogicDropdownBuiltin __i, object __v)
	{
		CustomLogicListBuiltin value;

		value = CustomLogicEvaluator.ConvertTo<CustomLogicListBuiltin>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.Choices = value;
		return;
	}

	// CustomLogic.CustomLogicDropdownBuiltin.Bindings.<>c$$.cctor: clean
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = new CustomLogicDropdownBuiltin.Bindings.c();
		CustomLogicDropdownBuiltin.Bindings.c.__9 =(CustomLogicDropdownBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicDropdownBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicDropdownBuiltin.Bindings.<>c$$<__CreateMethodBinding__OnValueChanged>b__6_0: clean
	private object Bindings_c____CreateMethodBinding__OnValueChanged_b__6_0(CustomLogicDropdownBuiltin __c, Object[] __a)
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

	// CustomLogic.CustomLogicDropdownBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetValueWithoutNotify>b__7_0: clean
	private object Bindings_c____CreateMethodBinding__SetValueWithoutNotify_b__7_0(CustomLogicDropdownBuiltin __c, Object[] __a)
	{
		object obj;
		DropdownField pUVar1;
		String pSVar2;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			pSVar2 = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__c != null) &&(pUVar1 = __c._dropdown, pUVar1 != null)) {
				pUVar1.SetValueWithoutNotify(pSVar2);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicDropdownBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetIndexWithoutNotify>b__8_0: clean
	private object Bindings_c____CreateMethodBinding__SetIndexWithoutNotify_b__8_0(CustomLogicDropdownBuiltin __c, Object[] __a)
	{
		object obj;
		int index;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			index = CustomLogicEvaluator.ConvertTo<int>(obj);
			if (__c != null) {
				__c.SetIndexWithoutNotify(index);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicDropdownBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddChoice>b__9_0: clean
	private object Bindings_c____CreateMethodBinding__AddChoice_b__9_0(CustomLogicDropdownBuiltin __c, Object[] __a)
	{
		object obj;
		String choice;
		CustomLogicDropdownBuiltin pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			choice = CustomLogicEvaluator.ConvertTo<string>(obj);
			if (__c != null) {
				pCVar1 = __c.AddChoice(choice);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicDropdownBuiltin.Bindings.<>c$$<__CreateMethodBinding__RemoveChoice>b__10_0: clean
	private object Bindings_c____CreateMethodBinding__RemoveChoice_b__10_0(CustomLogicDropdownBuiltin __c, Object[] __a)
	{
		object obj;
		String choice;
		CustomLogicDropdownBuiltin pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			choice = CustomLogicEvaluator.ConvertTo<string>(obj);
			if (__c != null) {
				pCVar1 = __c.RemoveChoice(choice);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicDropdownBuiltin.Bindings.<>c$$<__CreateMethodBinding__ClearChoices>b__11_0: clean
	private object Bindings_c____CreateMethodBinding__ClearChoices_b__11_0(CustomLogicDropdownBuiltin __c, Object[] __a)
	{
		DropdownField pUVar1;
		List<string> __this_00;

		if (__c != null) {
			pUVar1 = __c._dropdown;
			__this_00 = new List<string>();
			if (pUVar1 != null) {
				pUVar1.set_choices(__this_00);
				return (object)__c;
			}
		}
		throw new NullReferenceException();
	}
}
