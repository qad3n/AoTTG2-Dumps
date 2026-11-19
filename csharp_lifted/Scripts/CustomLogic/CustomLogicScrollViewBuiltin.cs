// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicScrollViewBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicScrollViewBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.UIElements;

namespace CustomLogic;

[Token(Token = "0x20005F9")]
[CompilerGenerated]
internal class CustomLogicScrollViewBuiltin : CustomLogicVisualElementBuiltin
{
	[Token(Token = "0x20005FA")]
	public new static class Factory
	{
		[Token(Token = "0x6003770")]
		[Address(RVA = "0x5A02CB0", Offset = "0x5A01CB0", VA = "0x5A02CB0")]
		public static CustomLogicScrollViewBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScrollViewBuiltin.c (CustomLogic.CustomLogicScrollViewBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			String pSVar1;
			String str0;
			String str2;
			Il2CppClass klass;
			ArgumentException __this;
			MethodInfo lastManagedFrame;
			int local_14;

			pSVar1 = local_14.ToString();
			str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicScrollViewBuiltin constructor found that takes ");
			str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
			pSVar1 = String.Concat(str0, pSVar1, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this = (ArgumentException)il2cpp_codegen_object_new(klass);
			__this = new ArgumentException(pSVar1);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Factory_CreateInstance);
			throw (object)__this;
		}
	}

	[Token(Token = "0x20005FB")]
	public new static class Bindings
	{
		[Token(Token = "0x4001992")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6003771")]
		[Address(RVA = "0x5A02D40", Offset = "0x5A01D40", VA = "0x5A02D40")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScrollViewBuiltin.c (CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLPropertyBinding<CustomLogicScrollViewBuiltin> pCVar3;
			CLMethodBinding<CustomLogicScrollViewBuiltin> pCVar4;
			String pSVar5;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x7558c33d) {
				if (uVar2 < 0x3d05784e) {
					if (uVar2 == 0x28129cd) {
						bVar1 = (name == "SetScrollOffset");
						if (bVar1) {
							if ((typeof(CustomLogicScrollViewBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								pCVar4 = CustomLogicScrollViewBuiltin.Bindings.__CreateMethodBinding__SetScrollOffset();
								return (ICLMemberBinding)pCVar4;
							}
							pCVar4 = CustomLogicScrollViewBuiltin.Bindings.__CreateMethodBinding__SetScrollOffset();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x3d05784d) {
						bVar1 = (name == "ScrollDecelerationRate");
						if (bVar1) {
							if ((typeof(CustomLogicScrollViewBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								pCVar3 = CustomLogicScrollViewBuiltin.Bindings.__CreatePropertyBinding__ScrollDecelerationRate();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicScrollViewBuiltin.Bindings.__CreatePropertyBinding__ScrollDecelerationRate();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x53995e54) {
					bVar1 = (name == "Elasticity");
					if (bVar1) {
						if ((typeof(CustomLogicScrollViewBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar4 = CustomLogicScrollViewBuiltin.Bindings.__CreateMethodBinding__Elasticity();
							return (ICLMemberBinding)pCVar4;
						}
						pCVar4 = CustomLogicScrollViewBuiltin.Bindings.__CreateMethodBinding__Elasticity();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0x6af069af) {
					bVar1 = (name == "SetScrollDecelerationRate");
					if (bVar1) {
						if ((typeof(CustomLogicScrollViewBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar4 = CustomLogicScrollViewBuiltin.Bindings.__CreateMethodBinding__SetScrollDecelerationRate();
							return (ICLMemberBinding)pCVar4;
						}
						pCVar4 = CustomLogicScrollViewBuiltin.Bindings.__CreateMethodBinding__SetScrollDecelerationRate();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0x7558c33c) {
					bVar1 = (name == "ScrollToTop");
					if (bVar1) {
						if ((typeof(CustomLogicScrollViewBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar4 = CustomLogicScrollViewBuiltin.Bindings.__CreateMethodBinding__ScrollToTop();
							return (ICLMemberBinding)pCVar4;
						}
						pCVar4 = CustomLogicScrollViewBuiltin.Bindings.__CreateMethodBinding__ScrollToTop();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 < 0xf0c8d07a) {
				if (uVar2 == 0x8e3d182a) {
					bVar1 = (name == "ScrollToBottom");
					if (bVar1) {
						if ((typeof(CustomLogicScrollViewBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar4 = CustomLogicScrollViewBuiltin.Bindings.__CreateMethodBinding__ScrollToBottom();
							return (ICLMemberBinding)pCVar4;
						}
						pCVar4 = CustomLogicScrollViewBuiltin.Bindings.__CreateMethodBinding__ScrollToBottom();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0xf0c8d079) {
					bVar1 = (name == "HorizontalScrollEnabled");
					if (bVar1) {
						if ((typeof(CustomLogicScrollViewBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicScrollViewBuiltin.Bindings.__CreatePropertyBinding__HorizontalScrollEnabled();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicScrollViewBuiltin.Bindings.__CreatePropertyBinding__HorizontalScrollEnabled();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xf2482abb) {
				bVar1 = (name == "MouseWheelScrollSize");
				if (bVar1) {
					if ((typeof(CustomLogicScrollViewBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar3 = CustomLogicScrollViewBuiltin.Bindings.__CreatePropertyBinding__MouseWheelScrollSize();
						return (ICLMemberBinding)pCVar3;
					}
					pCVar3 = CustomLogicScrollViewBuiltin.Bindings.__CreatePropertyBinding__MouseWheelScrollSize();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xfaaf0aaf) {
				bVar1 = (name == "VerticalScrollEnabled");
				if (bVar1) {
					if ((typeof(CustomLogicScrollViewBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar3 = CustomLogicScrollViewBuiltin.Bindings.__CreatePropertyBinding__VerticalScrollEnabled();
						return (ICLMemberBinding)pCVar3;
					}
					pCVar3 = CustomLogicScrollViewBuiltin.Bindings.__CreatePropertyBinding__VerticalScrollEnabled();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xfe24aa77) {
				bVar1 = (name == "ScrollOffset");
				if (bVar1) {
					if ((typeof(CustomLogicScrollViewBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar3 = CustomLogicScrollViewBuiltin.Bindings.__CreatePropertyBinding__ScrollOffset();
						return (ICLMemberBinding)pCVar3;
					}
					pCVar3 = CustomLogicScrollViewBuiltin.Bindings.__CreatePropertyBinding__ScrollOffset();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicScrollViewBuiltin not found");
			pSVar5 = String.Concat(pSVar5, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6003772")]
		[Address(RVA = "0x5A03200", Offset = "0x5A02200", VA = "0x5A03200")]
		public static CLPropertyBinding<CustomLogicScrollViewBuiltin> __CreatePropertyBinding__ScrollOffset()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScrollViewBuiltin.c (CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreatePropertyBinding__ScrollOffset): 3 lines keep C-only constructs
			Func<CustomLogicScrollViewBuiltin, object> __this;
			Action<CustomLogicScrollViewBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicScrollViewBuiltin> __this_01;

			__this = new Func<CustomLogicScrollViewBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__ScrollOffset_g____get);
			__this_00 = new Action<CustomLogicScrollViewBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__ScrollOffset_g____set);
			__this_01 = new CLPropertyBinding<CustomLogicScrollViewBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00) ;
			return __this_01;
		}

		[Token(Token = "0x6003773")]
		[Address(RVA = "0x5A032E0", Offset = "0x5A022E0", VA = "0x5A032E0")]
		public static CLPropertyBinding<CustomLogicScrollViewBuiltin> __CreatePropertyBinding__ScrollDecelerationRate()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScrollViewBuiltin.c (CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreatePropertyBinding__ScrollDecelerationRate): 3 lines keep C-only constructs
			Func<CustomLogicScrollViewBuiltin, object> __this;
			Action<CustomLogicScrollViewBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicScrollViewBuiltin> __this_01;

			__this = new Func<CustomLogicScrollViewBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__ScrollDecelerationRat);
			__this_00 = new Action<CustomLogicScrollViewBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__ScrollDecelerationRat_71c1560);
			__this_01 = new CLPropertyBinding<CustomLogicScrollViewBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00) ;
			return __this_01;
		}

		[Token(Token = "0x6003774")]
		[Address(RVA = "0x5A033C0", Offset = "0x5A023C0", VA = "0x5A033C0")]
		public static CLPropertyBinding<CustomLogicScrollViewBuiltin> __CreatePropertyBinding__MouseWheelScrollSize()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScrollViewBuiltin.c (CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreatePropertyBinding__MouseWheelScrollSize): 3 lines keep C-only constructs
			Func<CustomLogicScrollViewBuiltin, object> __this;
			Action<CustomLogicScrollViewBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicScrollViewBuiltin> __this_01;

			__this = new Func<CustomLogicScrollViewBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__MouseWheelScrollSize);
			__this_00 = new Action<CustomLogicScrollViewBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__MouseWheelScrollSize_71c1550);
			__this_01 = new CLPropertyBinding<CustomLogicScrollViewBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00) ;
			return __this_01;
		}

		[Token(Token = "0x6003775")]
		[Address(RVA = "0x5A034A0", Offset = "0x5A024A0", VA = "0x5A034A0")]
		public static CLPropertyBinding<CustomLogicScrollViewBuiltin> __CreatePropertyBinding__HorizontalScrollEnabled()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScrollViewBuiltin.c (CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreatePropertyBinding__HorizontalScrollEnabled): 3 lines keep C-only constructs
			Func<CustomLogicScrollViewBuiltin, object> __this;
			Action<CustomLogicScrollViewBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicScrollViewBuiltin> __this_01;

			__this = new Func<CustomLogicScrollViewBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__HorizontalScrollEnabl);
			__this_00 = new Action<CustomLogicScrollViewBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__HorizontalScrollEnabl_71c1540);
			__this_01 = new CLPropertyBinding<CustomLogicScrollViewBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00) ;
			return __this_01;
		}

		[Token(Token = "0x6003776")]
		[Address(RVA = "0x5A03580", Offset = "0x5A02580", VA = "0x5A03580")]
		public static CLPropertyBinding<CustomLogicScrollViewBuiltin> __CreatePropertyBinding__VerticalScrollEnabled()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScrollViewBuiltin.c (CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreatePropertyBinding__VerticalScrollEnabled): 3 lines keep C-only constructs
			Func<CustomLogicScrollViewBuiltin, object> __this;
			Action<CustomLogicScrollViewBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicScrollViewBuiltin> __this_01;

			__this = new Func<CustomLogicScrollViewBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__VerticalScrollEnabled);
			__this_00 = new Action<CustomLogicScrollViewBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings___CreatePropertyBinding__VerticalScrollEnabled_71c1580);
			__this_01 = new CLPropertyBinding<CustomLogicScrollViewBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00) ;
			return __this_01;
		}

		[Token(Token = "0x6003777")]
		[Address(RVA = "0x5A03660", Offset = "0x5A02660", VA = "0x5A03660")]
		public static CLMethodBinding<CustomLogicScrollViewBuiltin> __CreateMethodBinding__Elasticity()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScrollViewBuiltin.c (CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreateMethodBinding__Elasticity): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicScrollViewBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicScrollViewBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546f9c == false) {
				Il2CppMethodInitialized_07546f9c = true;
				uVar1 = (typeof(CustomLogicScrollViewBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicScrollViewBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicScrollViewBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__7_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicScrollViewBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__7_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicScrollViewBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicScrollViewBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicScrollViewBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c___CreateMethodBinding__Elasticity_b__7_0);
				pCVar2 = typeof(CustomLogicScrollViewBuiltin.Bindings.c).static_fields;
				pCVar2.__9__7_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicScrollViewBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003778")]
		[Address(RVA = "0x5A037A0", Offset = "0x5A027A0", VA = "0x5A037A0")]
		public static CLMethodBinding<CustomLogicScrollViewBuiltin> __CreateMethodBinding__SetScrollDecelerationRate()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScrollViewBuiltin.c (CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreateMethodBinding__SetScrollDecelerationRate): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicScrollViewBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicScrollViewBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546f9d == false) {
				Il2CppMethodInitialized_07546f9d = true;
				uVar1 = (typeof(CustomLogicScrollViewBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicScrollViewBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicScrollViewBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__8_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicScrollViewBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__8_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicScrollViewBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicScrollViewBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicScrollViewBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c___CreateMethodBinding__SetScrollDeceleration);
				pCVar2 = typeof(CustomLogicScrollViewBuiltin.Bindings.c).static_fields;
				pCVar2.__9__8_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicScrollViewBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003779")]
		[Address(RVA = "0x5A038E0", Offset = "0x5A028E0", VA = "0x5A038E0")]
		public static CLMethodBinding<CustomLogicScrollViewBuiltin> __CreateMethodBinding__SetScrollOffset()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScrollViewBuiltin.c (CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreateMethodBinding__SetScrollOffset): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicScrollViewBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicScrollViewBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546f9e == false) {
				Il2CppMethodInitialized_07546f9e = true;
				uVar1 = (typeof(CustomLogicScrollViewBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicScrollViewBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicScrollViewBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__9_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicScrollViewBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__9_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicScrollViewBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicScrollViewBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicScrollViewBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c___CreateMethodBinding__SetScrollOffset_b__9);
				pCVar2 = typeof(CustomLogicScrollViewBuiltin.Bindings.c).static_fields;
				pCVar2.__9__9_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicScrollViewBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600377A")]
		[Address(RVA = "0x5A03A20", Offset = "0x5A02A20", VA = "0x5A03A20")]
		public static CLMethodBinding<CustomLogicScrollViewBuiltin> __CreateMethodBinding__ScrollToTop()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScrollViewBuiltin.c (CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreateMethodBinding__ScrollToTop): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicScrollViewBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicScrollViewBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546f9f == false) {
				Il2CppMethodInitialized_07546f9f = true;
				uVar1 = (typeof(CustomLogicScrollViewBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicScrollViewBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicScrollViewBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__10_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicScrollViewBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__10_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicScrollViewBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicScrollViewBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicScrollViewBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c___CreateMethodBinding__ScrollToTop_b__10_0);
				pCVar2 = typeof(CustomLogicScrollViewBuiltin.Bindings.c).static_fields;
				pCVar2.__9__10_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicScrollViewBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600377B")]
		[Address(RVA = "0x5A03B60", Offset = "0x5A02B60", VA = "0x5A03B60")]
		public static CLMethodBinding<CustomLogicScrollViewBuiltin> __CreateMethodBinding__ScrollToBottom()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScrollViewBuiltin.c (CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$__CreateMethodBinding__ScrollToBottom): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicScrollViewBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicScrollViewBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicScrollViewBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546fa0 == false) {
				Il2CppMethodInitialized_07546fa0 = true;
				uVar1 = (typeof(CustomLogicScrollViewBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicScrollViewBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicScrollViewBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__11_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicScrollViewBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__11_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicScrollViewBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicScrollViewBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicScrollViewBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Bindings_c___CreateMethodBinding__ScrollToBottom_b__11);
				pCVar2 = typeof(CustomLogicScrollViewBuiltin.Bindings.c).static_fields;
				pCVar2.__9__11_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicScrollViewBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x4001991")]
	[FieldOffset(Offset = "0x60")]
	private readonly ScrollView _scrollView;

	[Token(Token = "0x17000A0A")]
	public CustomLogicVector2Builtin ScrollOffset
	{
		[Token(Token = "0x600375D")]
		[Address(RVA = "0x5A027C0", Offset = "0x5A017C0", VA = "0x5A027C0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScrollViewBuiltin.c (CustomLogic.CustomLogicScrollViewBuiltin$$get_ScrollOffset): clean
			ScrollView __this_00;
			Vector2 value;
			CustomLogicVector2Builtin __this_01;

			__this_00 = this._scrollView;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			value = __this_00.scrollOffset;
			__this_01 = new CustomLogicVector2Builtin(value);
			return __this_01;
		}
		[Token(Token = "0x600375E")]
		[Address(RVA = "0x5A02830", Offset = "0x5A01830", VA = "0x5A02830")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScrollViewBuiltin.c (CustomLogic.CustomLogicScrollViewBuiltin$$set_ScrollOffset): clean
			ScrollView __this_00;

			if ((value == null) ||(__this_00 = this._scrollView, __this_00 == null)) {
				throw new NullReferenceException();
			}
			__this_00.scrollOffset = (Vector2)value._value;
			return;
		}
	}

	[Token(Token = "0x17000A0B")]
	public float ScrollDecelerationRate
	{
		[Token(Token = "0x600375F")]
		[Address(RVA = "0x5A02860", Offset = "0x5A01860", VA = "0x5A02860")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScrollViewBuiltin.c (CustomLogic.CustomLogicScrollViewBuiltin$$get_ScrollDecelerationRate): clean
			ScrollView __this_00;
			float fVar1;

			__this_00 = this._scrollView;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return fVar1;
		}
		[Token(Token = "0x6003760")]
		[Address(RVA = "0x5A02880", Offset = "0x5A01880", VA = "0x5A02880")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScrollViewBuiltin.c (CustomLogic.CustomLogicScrollViewBuiltin$$set_ScrollDecelerationRate): clean
			ScrollView __this_00;

			__this_00 = this._scrollView;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.scrollDecelerationRate = value;
			return;
		}
	}

	[Token(Token = "0x17000A0C")]
	public float MouseWheelScrollSize
	{
		[Token(Token = "0x6003761")]
		[Address(RVA = "0x5A028A0", Offset = "0x5A018A0", VA = "0x5A028A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScrollViewBuiltin.c (CustomLogic.CustomLogicScrollViewBuiltin$$get_MouseWheelScrollSize): clean
			ScrollView __this_00;
			float fVar1;

			__this_00 = this._scrollView;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return fVar1;
		}
		[Token(Token = "0x6003762")]
		[Address(RVA = "0x5A028C0", Offset = "0x5A018C0", VA = "0x5A028C0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScrollViewBuiltin.c (CustomLogic.CustomLogicScrollViewBuiltin$$set_MouseWheelScrollSize): clean
			ScrollView __this_00;

			__this_00 = this._scrollView;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.mouseWheelScrollSize = value;
			return;
		}
	}

	[Token(Token = "0x17000A0D")]
	public bool HorizontalScrollEnabled
	{
		[Token(Token = "0x6003763")]
		[Address(RVA = "0x5A028E0", Offset = "0x5A018E0", VA = "0x5A028E0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScrollViewBuiltin.c (CustomLogic.CustomLogicScrollViewBuiltin$$get_HorizontalScrollEnabled): clean
			ScrollView pUVar1;

			pUVar1 = this._scrollView;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			return pUVar1.m_Mode - 1U < 2;
		}
		[Token(Token = "0x6003764")]
		[Address(RVA = "0x5A02900", Offset = "0x5A01900", VA = "0x5A02900")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScrollViewBuiltin.c (CustomLogic.CustomLogicScrollViewBuiltin$$set_HorizontalScrollEnabled): 2 lines keep C-only constructs
			int iVar1;
			int iVar2;
			undefined7 in_register_00000031;
			ScrollView pUVar3;

			pUVar3 = this._scrollView;
			if ((int)CONCAT71(in_register_00000031, value) == 0) {
				if (pUVar3 != null) {
					pUVar3.horizontalScrollerVisibility = 2;
					pUVar3 = this._scrollView;
					if (pUVar3 != null) {
						if (pUVar3.m_Mode == 2) {
							pUVar3.mode = 0;
							return;
						}
						return;
					}
				}
				goto label_05b0298a;
			}
			if (pUVar3 == null) goto label_05b0298a;
			iVar1 = pUVar3.m_Mode;
			if (iVar1 == 1) {
		label_05b0296b: ;
				iVar2 = 1;
		label_05b02970: ;
				pUVar3.mode = iVar2;
			}
			else {
				if (iVar1 == 0) {
					iVar2 = 2;
					goto label_05b02970;
				}
				iVar2 = pUVar3.horizontalScrollerVisibility;
				if (iVar2 == 2) {
					pUVar3 = this._scrollView;
					if (pUVar3 == null) goto label_05b0298a;
					goto label_05b0296b;
				}
			}
			pUVar3 = this._scrollView;
			if (pUVar3 != null) {
				pUVar3.horizontalScrollerVisibility = 0;
				return;
			}
		label_05b0298a: ;
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000A0E")]
	public bool VerticalScrollEnabled
	{
		[Token(Token = "0x6003765")]
		[Address(RVA = "0x5A02990", Offset = "0x5A01990", VA = "0x5A02990")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScrollViewBuiltin.c (CustomLogic.CustomLogicScrollViewBuiltin$$get_VerticalScrollEnabled): clean
			ScrollView pUVar1;

			pUVar1 = this._scrollView;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			return (pUVar1.m_Mode & 0xfffffffdU) == 0;
		}
		[Token(Token = "0x6003766")]
		[Address(RVA = "0x5A029B0", Offset = "0x5A019B0", VA = "0x5A029B0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScrollViewBuiltin.c (CustomLogic.CustomLogicScrollViewBuiltin$$set_VerticalScrollEnabled): 2 lines keep C-only constructs
			int iVar1;
			int iVar2;
			undefined7 in_register_00000031;
			ScrollView pUVar3;

			pUVar3 = this._scrollView;
			if ((int)CONCAT71(in_register_00000031, value) == 0) {
				if (pUVar3 != null) {
					pUVar3.verticalScrollerVisibility = 2;
					pUVar3 = this._scrollView;
					if (pUVar3 != null) {
						if (pUVar3.m_Mode == 2) {
							pUVar3.mode = 1;
							return;
						}
						return;
					}
				}
				goto label_05b02a3a;
			}
			if (pUVar3 == null) goto label_05b02a3a;
			iVar1 = pUVar3.m_Mode;
			if (iVar1 == 0) {
		label_05b02a1e: ;
				iVar2 = 0;
		label_05b02a20: ;
				pUVar3.mode = iVar2;
			}
			else {
				if (iVar1 == 1) {
					iVar2 = 2;
					goto label_05b02a20;
				}
				iVar2 = pUVar3.verticalScrollerVisibility;
				if (iVar2 == 2) {
					pUVar3 = this._scrollView;
					if (pUVar3 == null) goto label_05b02a3a;
					goto label_05b02a1e;
				}
			}
			pUVar3 = this._scrollView;
			if (pUVar3 != null) {
				pUVar3.verticalScrollerVisibility = 0;
				return;
			}
		label_05b02a3a: ;
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000A0F")]
	public override string ClassName
	{
		[Token(Token = "0x600376C")]
		[Address(RVA = "0x5A02C50", Offset = "0x5A01C50", VA = "0x5A02C50", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScrollViewBuiltin.c (CustomLogic.CustomLogicScrollViewBuiltin$$get_ClassName): clean
			return "ScrollView";
		}
	}

	[Token(Token = "0x17000A10")]
	public override bool IsAbstract
	{
		[Token(Token = "0x600376D")]
		[Address(RVA = "0x5A02C80", Offset = "0x5A01C80", VA = "0x5A02C80", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScrollViewBuiltin.c (CustomLogic.CustomLogicScrollViewBuiltin$$get_IsAbstract): clean
			return false;
		}
	}

	[Token(Token = "0x17000A11")]
	public override bool IsStatic
	{
		[Token(Token = "0x600376E")]
		[Address(RVA = "0x5A02C90", Offset = "0x5A01C90", VA = "0x5A02C90", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScrollViewBuiltin.c (CustomLogic.CustomLogicScrollViewBuiltin$$get_IsStatic): clean
			return false;
		}
	}

	[Token(Token = "0x17000A12")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x600376F")]
		[Address(RVA = "0x5A02CA0", Offset = "0x5A01CA0", VA = "0x5A02CA0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicScrollViewBuiltin.c (CustomLogic.CustomLogicScrollViewBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x600375C")]
	[Address(RVA = "0x5A02790", Offset = "0x5A01790", VA = "0x5A02790")]
	public CustomLogicScrollViewBuiltin(ScrollView scrollView)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicScrollViewBuiltin.c (CustomLogic.CustomLogicScrollViewBuiltin$$.ctor): clean
		base((VisualElement)scrollView);
		this._scrollView = scrollView;
		return;
	}

	[Token(Token = "0x6003767")]
	[Address(RVA = "0x5A02A40", Offset = "0x5A01A40", VA = "0x5A02A40")]
	public CustomLogicScrollViewBuiltin Elasticity(int value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicScrollViewBuiltin.c (CustomLogic.CustomLogicScrollViewBuiltin$$Elasticity): 6 lines keep C-only constructs
		ScrollView __this_00;
		Il2CppType handle;
		bool bVar1;
		Type enumType;
		object pIVar2;
		String pSVar3;
		Il2CppClass klass;
		ArgumentException __this_01;
		MethodInfo lastManagedFrame;
		int iStack_30;
		int iStack_2c;

		if (Il2CppMethodInitialized_07546f94 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UIElements_ScrollView_TouchScrollBehavior) ;
			Il2CppMethodInitialized_07546f94 = true;
		}
		handle = TypeRef_UnityEngine_UIElements_ScrollView_TouchScrollBehavior;
		enumType = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		iStack_2c = value;
		pIVar2 = (object)iStack_2c;
		bVar1 = Enum.IsDefined(enumType, pIVar2);
		if (bVar1) {
			__this_00 = __this._scrollView;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.touchScrollBehavior = value;
			return __this;
		}
		iStack_30 = value;
		pIVar2 = (object)iStack_30;
		pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Unknown elasticity value: {0}");
		pSVar3 = String.Format(pSVar3, pIVar2);
		klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
		__this_01 = (ArgumentException)il2cpp_codegen_object_new(klass);
		__this_01 = new ArgumentException(pSVar3);
		lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicScrollViewBuiltin_Elasticity);
		throw (object)__this_01;
	}

	[Token(Token = "0x6003768")]
	[Address(RVA = "0x5A02B80", Offset = "0x5A01B80", VA = "0x5A02B80")]
	public CustomLogicScrollViewBuiltin SetScrollDecelerationRate(float rate)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicScrollViewBuiltin.c (CustomLogic.CustomLogicScrollViewBuiltin$$SetScrollDecelerationRate): clean
		ScrollView __this_00;
		float fVar1;

		__this_00 = __this._scrollView;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		fVar1 = 1.0;
		if (rate <= 1.0) {
			fVar1 = rate;
		}
		__this_00.scrollDecelerationRate = (float)(-(uint)(0.0 <= rate) & (uint)fVar1);
		return __this;
	}

	[Token(Token = "0x6003769")]
	[Address(RVA = "0x5A02BC0", Offset = "0x5A01BC0", VA = "0x5A02BC0")]
	public CustomLogicScrollViewBuiltin SetScrollOffset(CustomLogicVector2Builtin offset)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicScrollViewBuiltin.c (CustomLogic.CustomLogicScrollViewBuiltin$$SetScrollOffset): clean
		ScrollView __this_00;

		if ((offset == null) ||(__this_00 = __this._scrollView, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.scrollOffset = (Vector2)offset._value;
		return __this;
	}

	[Token(Token = "0x600376A")]
	[Address(RVA = "0x5A02BF0", Offset = "0x5A01BF0", VA = "0x5A02BF0")]
	public void ScrollToTop()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicScrollViewBuiltin.c (CustomLogic.CustomLogicScrollViewBuiltin$$ScrollToTop): clean
		ScrollView __this_00;
		Vector2 UVar1;

		__this_00 = this._scrollView;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		UVar1 = __this_00.scrollOffset;
		UVar1.y = 0.0;
		__this_00.scrollOffset = UVar1;
		return;
	}

	[Token(Token = "0x600376B")]
	[Address(RVA = "0x5A02C20", Offset = "0x5A01C20", VA = "0x5A02C20")]
	public void ScrollToBottom()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicScrollViewBuiltin.c (CustomLogic.CustomLogicScrollViewBuiltin$$ScrollToBottom): clean
		ScrollView __this_00;
		VisualElement child;

		__this_00 = this._scrollView;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		child = __this_00.get_contentContainer();
		__this_00.ScrollTo(child);
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicScrollViewBuiltin.c.

	// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"ScrollOffset");
		__this.Add((Il2CppObject *)"ScrollDecelerationRate");
		__this.Add((Il2CppObject *)"MouseWheelScrollSize");
		__this.Add((Il2CppObject *)"HorizontalScrollEnabled");
		__this.Add((Il2CppObject *)"VerticalScrollEnabled");
		__this.Add((Il2CppObject *)"Elasticity");
		__this.Add((Il2CppObject *)"SetScrollDecelerationRate");
		__this.Add((Il2CppObject *)"SetScrollOffset");
		__this.Add((Il2CppObject *)"ScrollToTop");
		__this.Add((Il2CppObject *)"ScrollToBottom");
		CustomLogicScrollViewBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__ScrollOffset>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__ScrollOffset_g____getter_2_0(CustomLogicScrollViewBuiltin __i)
	{
		ScrollView __this;
		Vector2 value;
		CustomLogicVector2Builtin __this_00;

		if (__i != null) {
			__this = __i._scrollView;
			if (__this != null) {
				value = __this.scrollOffset;
				__this_00 = new CustomLogicVector2Builtin(value);
				return (object)__this_00;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__ScrollOffset>g____setter|2_1: clean
	private static void Bindings____CreatePropertyBinding__ScrollOffset_g____setter_2_1(CustomLogicScrollViewBuiltin __i, object __v)
	{
		ScrollView __this;
		CustomLogicVector2Builtin pCVar1;

		pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVector2Builtin>(__v);
		if (((__i == null) ||(pCVar1 == null)) ||(__this = __i._scrollView, __this == null)) {
			throw new NullReferenceException();
		}
		__this.scrollOffset = (Vector2)pCVar1._value;
		return;
	}

	// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__ScrollDecelerationRate>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__ScrollDecelerationRate_g____getter_3_0(CustomLogicScrollViewBuiltin __i)
	{
		ScrollView __this;
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__this = __i._scrollView, __this == null)) {
			throw new NullReferenceException();
		}
		__this.scrollDecelerationRate;
		return pIVar1;
	}

	// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__ScrollDecelerationRate>g____setter|3_1: clean
	private static void Bindings____CreatePropertyBinding__ScrollDecelerationRate_g____setter_3_1(CustomLogicScrollViewBuiltin __i, object __v)
	{
		ScrollView __this;
		float value;

		value = CustomLogicEvaluator.ConvertTo<float>(__v);
		if ((__i == null) ||(__this = __i._scrollView, __this == null)) {
			throw new NullReferenceException();
		}
		__this.scrollDecelerationRate = value;
		return;
	}

	// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__MouseWheelScrollSize>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__MouseWheelScrollSize_g____getter_4_0(CustomLogicScrollViewBuiltin __i)
	{
		ScrollView __this;
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__this = __i._scrollView, __this == null)) {
			throw new NullReferenceException();
		}
		__this.mouseWheelScrollSize;
		return pIVar1;
	}

	// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__MouseWheelScrollSize>g____setter|4_1: clean
	private static void Bindings____CreatePropertyBinding__MouseWheelScrollSize_g____setter_4_1(CustomLogicScrollViewBuiltin __i, object __v)
	{
		ScrollView __this;
		float value;

		value = CustomLogicEvaluator.ConvertTo<float>(__v);
		if ((__i == null) ||(__this = __i._scrollView, __this == null)) {
			throw new NullReferenceException();
		}
		__this.mouseWheelScrollSize = value;
		return;
	}

	// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__HorizontalScrollEnabled>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__HorizontalScrollEnabled_g____getter_5_0(CustomLogicScrollViewBuiltin __i)
	{
		object pIVar1;

		if ((__i == null) ||(__i._scrollView == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__HorizontalScrollEnabled>g____setter|5_1: clean
	private static void Bindings____CreatePropertyBinding__HorizontalScrollEnabled_g____setter_5_1(CustomLogicScrollViewBuiltin __i, object __v)
	{
		bool value;

		value = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.HorizontalScrollEnabled = value;
		return;
	}

	// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__VerticalScrollEnabled>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__VerticalScrollEnabled_g____getter_6_0(CustomLogicScrollViewBuiltin __i)
	{
		object pIVar1;

		if ((__i == null) ||(__i._scrollView == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicScrollViewBuiltin.Bindings$$<__CreatePropertyBinding__VerticalScrollEnabled>g____setter|6_1: clean
	private static void Bindings____CreatePropertyBinding__VerticalScrollEnabled_g____setter_6_1(CustomLogicScrollViewBuiltin __i, object __v)
	{
		bool value;

		value = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.VerticalScrollEnabled = value;
		return;
	}

	// CustomLogic.CustomLogicScrollViewBuiltin.Bindings.<>c$$.cctor: 1 lines keep C-only constructs
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = new CustomLogicScrollViewBuiltin.Bindings.c();
		CustomLogicScrollViewBuiltin.Bindings.c.__9 =(CustomLogicScrollViewBuiltin.Bindings.c)__this;
		Il2CppCodeGenWriteBarrier(&CustomLogicScrollViewBuiltin.Bindings.c.__9) ;
		return;
	}

	// CustomLogic.CustomLogicScrollViewBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicScrollViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__Elasticity>b__7_0: clean
	private object Bindings_c____CreateMethodBinding__Elasticity_b__7_0(CustomLogicScrollViewBuiltin __c, Object[] __a)
	{
		object obj;
		int value;
		CustomLogicScrollViewBuiltin pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			value = CustomLogicEvaluator.ConvertTo<int>(obj);
			if (__c != null) {
				pCVar1 = __c.Elasticity(value);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicScrollViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetScrollDecelerationRate>b__8_0: clean
	private object Bindings_c____CreateMethodBinding__SetScrollDecelerationRate_b__8_0(CustomLogicScrollViewBuiltin __c, Object[] __a)
	{
		object obj;
		ScrollView __this_00;
		float fVar1;
		float fVar2;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			fVar1 = CustomLogicEvaluator.ConvertTo<float>(obj);
			if ((__c != null) &&(__this_00 = __c._scrollView, __this_00 != null)) {
				fVar2 = 1.0;
				if (fVar1 <= 1.0) {
					fVar2 = fVar1;
				}
				__this_00.scrollDecelerationRate = (float)(-(uint)(0.0 <= fVar1) & (uint)fVar2);
				return (object)__c;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicScrollViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetScrollOffset>b__9_0: clean
	private object Bindings_c____CreateMethodBinding__SetScrollOffset_b__9_0(CustomLogicScrollViewBuiltin __c, Object[] __a)
	{
		object obj;
		ScrollView __this_00;
		CustomLogicVector2Builtin pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVector2Builtin>(obj);
			if (((__c != null) &&(pCVar1 != null)) &&(__this_00 = __c._scrollView, __this_00 != null)) {
				__this_00.scrollOffset = (Vector2)pCVar1._value;
				return (object)__c;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicScrollViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__ScrollToTop>b__10_0: clean
	private object Bindings_c____CreateMethodBinding__ScrollToTop_b__10_0(CustomLogicScrollViewBuiltin __c, Object[] __a)
	{
		ScrollView __this_00;
		Vector2 UVar1;

		if ((__c == null) ||(__this_00 = __c._scrollView, __this_00 == null)) {
			throw new NullReferenceException();
		}
		UVar1 = __this_00.scrollOffset;
		UVar1.y = 0.0;
		__this_00.scrollOffset = UVar1;
		return null;
	}

	// CustomLogic.CustomLogicScrollViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__ScrollToBottom>b__11_0: clean
	private object Bindings_c____CreateMethodBinding__ScrollToBottom_b__11_0(CustomLogicScrollViewBuiltin __c, Object[] __a)
	{
		ScrollView __this_00;
		VisualElement child;

		if ((__c == null) ||(__this_00 = __c._scrollView, __this_00 == null)) {
			throw new NullReferenceException();
		}
		child = __this_00.get_contentContainer();
		__this_00.ScrollTo(child);
		return null;
	}
}
