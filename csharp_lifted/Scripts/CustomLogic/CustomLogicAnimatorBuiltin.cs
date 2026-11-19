// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicAnimatorBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x2000483")]
[CompilerGenerated]
internal class CustomLogicAnimatorBuiltin : BuiltinComponentInstance
{
	[Token(Token = "0x2000484")]
	public static class Factory
	{
		[Token(Token = "0x6001DB6")]
		[Address(RVA = "0x58ECCB0", Offset = "0x58EBCB0", VA = "0x58ECCB0")]
		public static CustomLogicAnimatorBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			CustomLogicAnimatorBuiltin __this;
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicAnimatorBuiltin constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicAnimatorBuiltin(null);
			return __this;
		}
	}

	[Token(Token = "0x2000485")]
	public static class Bindings
	{
		[Token(Token = "0x400166C")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001DB7")]
		[Address(RVA = "0x58ECDA0", Offset = "0x58EBDA0", VA = "0x58ECDA0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLPropertyBinding<CustomLogicAnimatorBuiltin> pCVar3;
			CLMethodBinding<CustomLogicAnimatorBuiltin> pCVar4;
			String pSVar5;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x6e230e95) {
				if (uVar2 < 0x492a3cd0) {
					if (uVar2 < 0x185debee) {
						if (uVar2 == 0x11452a77) {
							bVar1 = (name == "SetBool");
							if (bVar1) {
								if ((typeof(CustomLogicAnimatorBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pCVar4 = CustomLogicAnimatorBuiltin.Bindings.__CreateMethodBinding__SetBool();
								return (ICLMemberBinding)pCVar4;
							}
						}
						else if (uVar2 == 0x154e2cf3) {
							bVar1 = (name == "SetInteger");
							if (bVar1) {
								if ((typeof(CustomLogicAnimatorBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pCVar4 = CustomLogicAnimatorBuiltin.Bindings.__CreateMethodBinding__SetInteger();
								return (ICLMemberBinding)pCVar4;
							}
						}
						else if (uVar2 == 0x185debed) {
							bVar1 = (name == "ApplyRootMotion");
							if (bVar1) {
								if ((typeof(CustomLogicAnimatorBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pCVar3 = CustomLogicAnimatorBuiltin.Bindings.__CreatePropertyBinding__ApplyRootMotion();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x1c21234b) {
						bVar1 = (name == "GetAnimationNormalizedTime");
						if (bVar1) {
							pCVar4 = CustomLogicAnimatorBuiltin.Bindings.__CreateMethodBinding__GetAnimationNormalizedTime();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x2f7dcbe5) {
						bVar1 = (name == "HasRootMotion");
						if (bVar1) {
							pCVar3 = CustomLogicAnimatorBuiltin.Bindings.__CreatePropertyBinding__HasRootMotion();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x492a3ccf) {
						bVar1 = (name == "GetAnimationLength");
						if (bVar1) {
							pCVar4 = CustomLogicAnimatorBuiltin.Bindings.__CreateMethodBinding__GetAnimationLength();
							return (ICLMemberBinding)pCVar4;
						}
					}
				}
				else if (uVar2 < 0x54d57509) {
					if (uVar2 == 0x525bd9f7) {
						bVar1 = (name == "GetInteger");
						if (bVar1) {
							pCVar4 = CustomLogicAnimatorBuiltin.Bindings.__CreateMethodBinding__GetInteger();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x535e4da6) {
						bVar1 = (name == "DeltaPosition");
						if (bVar1) {
							pCVar3 = CustomLogicAnimatorBuiltin.Bindings.__CreatePropertyBinding__DeltaPosition();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x54d57508) {
						bVar1 = (name == "GetTransitionDuration");
						if (bVar1) {
							pCVar4 = CustomLogicAnimatorBuiltin.Bindings.__CreateMethodBinding__GetTransitionDuration();
							return (ICLMemberBinding)pCVar4;
						}
					}
				}
				else if (uVar2 == 0x55aebb4e) {
					bVar1 = (name == "PlayAnimationAt");
					if (bVar1) {
						pCVar4 = CustomLogicAnimatorBuiltin.Bindings.__CreateMethodBinding__PlayAnimationAt();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0x63f1e834) {
					bVar1 = (name == "ApplyBuiltinRootMotion");
					if (bVar1) {
						pCVar4 = CustomLogicAnimatorBuiltin.Bindings.__CreateMethodBinding__ApplyBuiltinRootMotion();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0x6e230e94) {
					bVar1 = (name == "Update");
					if (bVar1) {
						pCVar4 = CustomLogicAnimatorBuiltin.Bindings.__CreateMethodBinding__Update();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 < 0xd64c477c) {
				if (uVar2 < 0xaef32d04) {
					if (uVar2 == 0x8a47281e) {
						bVar1 = (name == "SetSpeed");
						if (bVar1) {
							pCVar4 = CustomLogicAnimatorBuiltin.Bindings.__CreateMethodBinding__SetSpeed();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0xa90ef8b4) {
						bVar1 = (name == "GetTransitionNormalizedTime");
						if (bVar1) {
							pCVar4 = CustomLogicAnimatorBuiltin.Bindings.__CreateMethodBinding__GetTransitionNormalizedTime();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0xaef32d03) {
						bVar1 = (name == "DeltaRotation");
						if (bVar1) {
							pCVar3 = CustomLogicAnimatorBuiltin.Bindings.__CreatePropertyBinding__DeltaRotation();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0xb54e6138) {
					bVar1 = (name == "GetLayerWeight");
					if (bVar1) {
						pCVar4 = CustomLogicAnimatorBuiltin.Bindings.__CreateMethodBinding__GetLayerWeight();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0xc0749efc) {
					bVar1 = (name == "ResetTrigger");
					if (bVar1) {
						pCVar4 = CustomLogicAnimatorBuiltin.Bindings.__CreateMethodBinding__ResetTrigger();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0xd64c477b) {
					bVar1 = (name == "PlayAnimation");
					if (bVar1) {
						pCVar4 = CustomLogicAnimatorBuiltin.Bindings.__CreateMethodBinding__PlayAnimation();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 < 0xf8a12a84) {
				if (uVar2 == 0xe4b35065) {
					bVar1 = (name == "IsPlaying");
					if (bVar1) {
						pCVar4 = CustomLogicAnimatorBuiltin.Bindings.__CreateMethodBinding__IsPlaying();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0xed6289ad) {
					bVar1 = (name == "SetTrigger");
					if (bVar1) {
						pCVar4 = CustomLogicAnimatorBuiltin.Bindings.__CreateMethodBinding__SetTrigger();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0xf8a12a83) {
					bVar1 = (name == "GetBool");
					if (bVar1) {
						pCVar4 = CustomLogicAnimatorBuiltin.Bindings.__CreateMethodBinding__GetBool();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 < 0xfaf2b5a8) {
				if (uVar2 == 0xfaa10a9c) {
					bVar1 = (name == "SetLayerWeight");
					if (bVar1) {
						pCVar4 = CustomLogicAnimatorBuiltin.Bindings.__CreateMethodBinding__SetLayerWeight();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0xfaf2b5a7) {
					bVar1 = (name == "SetFloat");
					if (bVar1) {
						pCVar4 = CustomLogicAnimatorBuiltin.Bindings.__CreateMethodBinding__SetFloat();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 == 0xfc3aa213) {
				bVar1 = (name == "GetFloat");
				if (bVar1) {
					pCVar4 = CustomLogicAnimatorBuiltin.Bindings.__CreateMethodBinding__GetFloat();
					return (ICLMemberBinding)pCVar4;
				}
			}
			else if (uVar2 == 0xfe771063) {
				bVar1 = (name == "IsTag");
				if (bVar1) {
					pCVar4 = CustomLogicAnimatorBuiltin.Bindings.__CreateMethodBinding__IsTag();
					return (ICLMemberBinding)pCVar4;
				}
			}
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicAnimatorBuiltin not found");
			pSVar5 = String.Concat(pSVar5, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6001DB8")]
		[Address(RVA = "0x58ED710", Offset = "0x58EC710", VA = "0x58ED710")]
		public static CLPropertyBinding<CustomLogicAnimatorBuiltin> __CreatePropertyBinding__DeltaPosition()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreatePropertyBinding__DeltaPosition): 2 lines keep C-only constructs
			Func<CustomLogicAnimatorBuiltin, object> __this;
			CLPropertyBinding<CustomLogicAnimatorBuiltin> __this_00;

			__this = new Func<CustomLogicAnimatorBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings___CreatePropertyBinding__DeltaPosition_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicAnimatorBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001DB9")]
		[Address(RVA = "0x58ED7B0", Offset = "0x58EC7B0", VA = "0x58ED7B0")]
		public static CLPropertyBinding<CustomLogicAnimatorBuiltin> __CreatePropertyBinding__DeltaRotation()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreatePropertyBinding__DeltaRotation): 2 lines keep C-only constructs
			Func<CustomLogicAnimatorBuiltin, object> __this;
			CLPropertyBinding<CustomLogicAnimatorBuiltin> __this_00;

			__this = new Func<CustomLogicAnimatorBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings___CreatePropertyBinding__DeltaRotation_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicAnimatorBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001DBA")]
		[Address(RVA = "0x58ED850", Offset = "0x58EC850", VA = "0x58ED850")]
		public static CLPropertyBinding<CustomLogicAnimatorBuiltin> __CreatePropertyBinding__HasRootMotion()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreatePropertyBinding__HasRootMotion): 2 lines keep C-only constructs
			Func<CustomLogicAnimatorBuiltin, object> __this;
			CLPropertyBinding<CustomLogicAnimatorBuiltin> __this_00;

			__this = new Func<CustomLogicAnimatorBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings___CreatePropertyBinding__HasRootMotion_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicAnimatorBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001DBB")]
		[Address(RVA = "0x58ED8F0", Offset = "0x58EC8F0", VA = "0x58ED8F0")]
		public static CLPropertyBinding<CustomLogicAnimatorBuiltin> __CreatePropertyBinding__ApplyRootMotion()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreatePropertyBinding__ApplyRootMotion): 3 lines keep C-only constructs
			Func<CustomLogicAnimatorBuiltin, object> __this;
			Action<CustomLogicAnimatorBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicAnimatorBuiltin> __this_01;

			__this = new Func<CustomLogicAnimatorBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings___CreatePropertyBinding__ApplyRootMotion_g____ge);
			__this_00 = new Action<CustomLogicAnimatorBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings___CreatePropertyBinding__ApplyRootMotion_g____se);
			__this_01 = new CLPropertyBinding<CustomLogicAnimatorBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001DBC")]
		[Address(RVA = "0x58ED9D0", Offset = "0x58EC9D0", VA = "0x58ED9D0")]
		public static CLMethodBinding<CustomLogicAnimatorBuiltin> __CreateMethodBinding__ApplyBuiltinRootMotion()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__ApplyBuiltinRootMotion): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicAnimatorBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicAnimatorBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545d74 == false) {
				Il2CppMethodInitialized_07545d74 = true;
				uVar1 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__6_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__6_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicAnimatorBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicAnimatorBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__ApplyBuiltinRootMotion);
				pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				pCVar2.__9__6_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicAnimatorBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001DBD")]
		[Address(RVA = "0x58EDB10", Offset = "0x58ECB10", VA = "0x58EDB10")]
		public static CLMethodBinding<CustomLogicAnimatorBuiltin> __CreateMethodBinding__Update()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__Update): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicAnimatorBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicAnimatorBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545d75 == false) {
				Il2CppMethodInitialized_07545d75 = true;
				uVar1 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__7_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__7_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicAnimatorBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicAnimatorBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__Update_b__7_0);
				pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				pCVar2.__9__7_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicAnimatorBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001DBE")]
		[Address(RVA = "0x58EDC50", Offset = "0x58ECC50", VA = "0x58EDC50")]
		public static CLMethodBinding<CustomLogicAnimatorBuiltin> __CreateMethodBinding__IsPlaying()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__IsPlaying): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicAnimatorBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicAnimatorBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545d76 == false) {
				Il2CppMethodInitialized_07545d76 = true;
				uVar1 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__8_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__8_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicAnimatorBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicAnimatorBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__IsPlaying_b__8_0);
				pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				pCVar2.__9__8_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicAnimatorBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001DBF")]
		[Address(RVA = "0x58EDD90", Offset = "0x58ECD90", VA = "0x58EDD90")]
		public static CLMethodBinding<CustomLogicAnimatorBuiltin> __CreateMethodBinding__IsTag()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__IsTag): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicAnimatorBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicAnimatorBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545d77 == false) {
				Il2CppMethodInitialized_07545d77 = true;
				uVar1 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__9_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__9_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicAnimatorBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicAnimatorBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__IsTag_b__9_0);
				pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				pCVar2.__9__9_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicAnimatorBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001DC0")]
		[Address(RVA = "0x58EDED0", Offset = "0x58ECED0", VA = "0x58EDED0")]
		public static CLMethodBinding<CustomLogicAnimatorBuiltin> __CreateMethodBinding__GetTransitionDuration()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__GetTransitionDuration): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicAnimatorBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicAnimatorBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545d78 == false) {
				Il2CppMethodInitialized_07545d78 = true;
				uVar1 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__10_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__10_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicAnimatorBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicAnimatorBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetTransitionDuration_b);
				pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				pCVar2.__9__10_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicAnimatorBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001DC1")]
		[Address(RVA = "0x58EE010", Offset = "0x58ED010", VA = "0x58EE010")]
		public static CLMethodBinding<CustomLogicAnimatorBuiltin> __CreateMethodBinding__GetTransitionNormalizedTime()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__GetTransitionNormalizedTime): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicAnimatorBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicAnimatorBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545d79 == false) {
				Il2CppMethodInitialized_07545d79 = true;
				uVar1 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__11_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__11_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicAnimatorBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicAnimatorBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetTransitionNormalized);
				pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				pCVar2.__9__11_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicAnimatorBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001DC2")]
		[Address(RVA = "0x58EE150", Offset = "0x58ED150", VA = "0x58EE150")]
		public static CLMethodBinding<CustomLogicAnimatorBuiltin> __CreateMethodBinding__PlayAnimation()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__PlayAnimation): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicAnimatorBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicAnimatorBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545d7a == false) {
				Il2CppMethodInitialized_07545d7a = true;
				uVar1 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__12_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__12_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicAnimatorBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicAnimatorBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__PlayAnimation_b__12_0);
				pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				pCVar2.__9__12_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicAnimatorBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001DC3")]
		[Address(RVA = "0x58EE290", Offset = "0x58ED290", VA = "0x58EE290")]
		public static CLMethodBinding<CustomLogicAnimatorBuiltin> __CreateMethodBinding__PlayAnimationAt()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__PlayAnimationAt): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicAnimatorBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicAnimatorBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545d7b == false) {
				Il2CppMethodInitialized_07545d7b = true;
				uVar1 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__13_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__13_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicAnimatorBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicAnimatorBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__PlayAnimationAt_b__13_0);
				pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				pCVar2.__9__13_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicAnimatorBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001DC4")]
		[Address(RVA = "0x58EE3D0", Offset = "0x58ED3D0", VA = "0x58EE3D0")]
		public static CLMethodBinding<CustomLogicAnimatorBuiltin> __CreateMethodBinding__SetSpeed()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__SetSpeed): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicAnimatorBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicAnimatorBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545d7c == false) {
				Il2CppMethodInitialized_07545d7c = true;
				uVar1 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__14_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__14_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicAnimatorBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicAnimatorBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__SetSpeed_b__14_0);
				pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				pCVar2.__9__14_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicAnimatorBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001DC5")]
		[Address(RVA = "0x58EE510", Offset = "0x58ED510", VA = "0x58EE510")]
		public static CLMethodBinding<CustomLogicAnimatorBuiltin> __CreateMethodBinding__GetAnimationLength()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__GetAnimationLength): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicAnimatorBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicAnimatorBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545d7d == false) {
				Il2CppMethodInitialized_07545d7d = true;
				uVar1 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__15_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__15_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicAnimatorBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicAnimatorBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetAnimationLength_b__1);
				pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				pCVar2.__9__15_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicAnimatorBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001DC6")]
		[Address(RVA = "0x58EE650", Offset = "0x58ED650", VA = "0x58EE650")]
		public static CLMethodBinding<CustomLogicAnimatorBuiltin> __CreateMethodBinding__GetFloat()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__GetFloat): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicAnimatorBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicAnimatorBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545d7e == false) {
				Il2CppMethodInitialized_07545d7e = true;
				uVar1 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__16_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__16_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicAnimatorBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicAnimatorBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetFloat_b__16_0);
				pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				pCVar2.__9__16_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicAnimatorBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001DC7")]
		[Address(RVA = "0x58EE790", Offset = "0x58ED790", VA = "0x58EE790")]
		public static CLMethodBinding<CustomLogicAnimatorBuiltin> __CreateMethodBinding__GetInteger()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__GetInteger): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicAnimatorBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicAnimatorBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545d7f == false) {
				Il2CppMethodInitialized_07545d7f = true;
				uVar1 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__17_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__17_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicAnimatorBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicAnimatorBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetInteger_b__17_0);
				pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				pCVar2.__9__17_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicAnimatorBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001DC8")]
		[Address(RVA = "0x58EE8D0", Offset = "0x58ED8D0", VA = "0x58EE8D0")]
		public static CLMethodBinding<CustomLogicAnimatorBuiltin> __CreateMethodBinding__GetBool()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__GetBool): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicAnimatorBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicAnimatorBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545d80 == false) {
				Il2CppMethodInitialized_07545d80 = true;
				uVar1 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__18_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__18_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicAnimatorBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicAnimatorBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetBool_b__18_0);
				pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				pCVar2.__9__18_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicAnimatorBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001DC9")]
		[Address(RVA = "0x58EEA10", Offset = "0x58EDA10", VA = "0x58EEA10")]
		public static CLMethodBinding<CustomLogicAnimatorBuiltin> __CreateMethodBinding__SetFloat()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__SetFloat): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicAnimatorBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicAnimatorBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545d81 == false) {
				Il2CppMethodInitialized_07545d81 = true;
				uVar1 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__19_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__19_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicAnimatorBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicAnimatorBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__SetFloat_b__19_0);
				pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				pCVar2.__9__19_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicAnimatorBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001DCA")]
		[Address(RVA = "0x58EEB50", Offset = "0x58EDB50", VA = "0x58EEB50")]
		public static CLMethodBinding<CustomLogicAnimatorBuiltin> __CreateMethodBinding__SetInteger()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__SetInteger): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicAnimatorBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicAnimatorBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545d82 == false) {
				Il2CppMethodInitialized_07545d82 = true;
				uVar1 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__20_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__20_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicAnimatorBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicAnimatorBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__SetInteger_b__20_0);
				pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				pCVar2.__9__20_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicAnimatorBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001DCB")]
		[Address(RVA = "0x58EEC90", Offset = "0x58EDC90", VA = "0x58EEC90")]
		public static CLMethodBinding<CustomLogicAnimatorBuiltin> __CreateMethodBinding__SetBool()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__SetBool): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicAnimatorBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicAnimatorBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545d83 == false) {
				Il2CppMethodInitialized_07545d83 = true;
				uVar1 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__21_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__21_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicAnimatorBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicAnimatorBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__SetBool_b__21_0);
				pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				pCVar2.__9__21_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicAnimatorBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001DCC")]
		[Address(RVA = "0x58EEDD0", Offset = "0x58EDDD0", VA = "0x58EEDD0")]
		public static CLMethodBinding<CustomLogicAnimatorBuiltin> __CreateMethodBinding__SetTrigger()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__SetTrigger): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicAnimatorBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicAnimatorBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545d84 == false) {
				Il2CppMethodInitialized_07545d84 = true;
				uVar1 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__22_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__22_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicAnimatorBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicAnimatorBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__SetTrigger_b__22_0);
				pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				pCVar2.__9__22_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicAnimatorBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001DCD")]
		[Address(RVA = "0x58EEF10", Offset = "0x58EDF10", VA = "0x58EEF10")]
		public static CLMethodBinding<CustomLogicAnimatorBuiltin> __CreateMethodBinding__ResetTrigger()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__ResetTrigger): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicAnimatorBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicAnimatorBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545d85 == false) {
				Il2CppMethodInitialized_07545d85 = true;
				uVar1 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__23_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__23_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicAnimatorBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicAnimatorBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__ResetTrigger_b__23_0);
				pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				pCVar2.__9__23_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicAnimatorBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001DCE")]
		[Address(RVA = "0x58EF050", Offset = "0x58EE050", VA = "0x58EF050")]
		public static CLMethodBinding<CustomLogicAnimatorBuiltin> __CreateMethodBinding__SetLayerWeight()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__SetLayerWeight): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicAnimatorBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicAnimatorBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545d86 == false) {
				Il2CppMethodInitialized_07545d86 = true;
				uVar1 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__24_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__24_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicAnimatorBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicAnimatorBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__SetLayerWeight_b__24_0);
				pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				pCVar2.__9__24_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicAnimatorBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001DCF")]
		[Address(RVA = "0x58EF190", Offset = "0x58EE190", VA = "0x58EF190")]
		public static CLMethodBinding<CustomLogicAnimatorBuiltin> __CreateMethodBinding__GetLayerWeight()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__GetLayerWeight): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicAnimatorBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicAnimatorBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545d87 == false) {
				Il2CppMethodInitialized_07545d87 = true;
				uVar1 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__25_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__25_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicAnimatorBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicAnimatorBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetLayerWeight_b__25_0);
				pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				pCVar2.__9__25_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicAnimatorBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001DD0")]
		[Address(RVA = "0x58EF2D0", Offset = "0x58EE2D0", VA = "0x58EF2D0")]
		public static CLMethodBinding<CustomLogicAnimatorBuiltin> __CreateMethodBinding__GetAnimationNormalizedTime()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$__CreateMethodBinding__GetAnimationNormalizedTime): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicAnimatorBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicAnimatorBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicAnimatorBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545d88 == false) {
				Il2CppMethodInitialized_07545d88 = true;
				uVar1 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__26_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicAnimatorBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__26_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicAnimatorBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicAnimatorBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnimatorBuiltin_Bindings_c___CreateMethodBinding__GetAnimationNormalizedT);
				pCVar2 = typeof(CustomLogicAnimatorBuiltin.Bindings.c).static_fields;
				pCVar2.__9__26_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicAnimatorBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x4001669")]
	[FieldOffset(Offset = "0x38")]
	public Animator Value;

	[Token(Token = "0x400166A")]
	[FieldOffset(Offset = "0x40")]
	public BuiltinClassInstance OwnerBuiltin;

	[Token(Token = "0x400166B")]
	[FieldOffset(Offset = "0x48")]
	private readonly Dictionary<string, AnimationClip> _animatorClips;

	[Token(Token = "0x17000339")]
	public CustomLogicVector3Builtin DeltaPosition
	{
		[Token(Token = "0x6001D97")]
		[Address(RVA = "0x58EC610", Offset = "0x58EB610", VA = "0x58EC610")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin$$get_DeltaPosition): clean
			Animator __this_00;
			CustomLogicVector3Builtin __this_01;
			Vector3 UVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			UVar1 = __this_00.deltaPosition;
			__this_01 = new CustomLogicVector3Builtin();
			__this_01.Value.x = UVar1.x;
			__this_01.Value.y = UVar1.y;
			__this_01.Value.z = UVar1.z;
			return __this_01;
		}
	}

	[Token(Token = "0x1700033A")]
	public CustomLogicQuaternionBuiltin DeltaRotation
	{
		[Token(Token = "0x6001D98")]
		[Address(RVA = "0x58EC6D0", Offset = "0x58EB6D0", VA = "0x58EC6D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin$$get_DeltaRotation): clean
			Animator __this_00;
			CustomLogicQuaternionBuiltin pCVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return pCVar1;
		}
	}

	[Token(Token = "0x1700033B")]
	public bool HasRootMotion
	{
		[Token(Token = "0x6001D99")]
		[Address(RVA = "0x58EC6F0", Offset = "0x58EB6F0", VA = "0x58EC6F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin$$get_HasRootMotion): clean
			Animator __this_00;
			bool bVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return bVar1;
		}
	}

	[Token(Token = "0x1700033C")]
	public bool ApplyRootMotion
	{
		[Token(Token = "0x6001D9A")]
		[Address(RVA = "0x58EC710", Offset = "0x58EB710", VA = "0x58EC710")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin$$get_ApplyRootMotion): clean
			Animator __this_00;
			bool bVar1;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return bVar1;
		}
		[Token(Token = "0x6001D9B")]
		[Address(RVA = "0x58EC730", Offset = "0x58EB730", VA = "0x58EC730")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin$$set_ApplyRootMotion): clean
			Animator __this_00;

			__this_00 = this.Value;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.applyRootMotion = value;
			return;
		}
	}

	[Token(Token = "0x1700033D")]
	public override string ClassName
	{
		[Token(Token = "0x6001DB2")]
		[Address(RVA = "0x58ECC50", Offset = "0x58EBC50", VA = "0x58ECC50", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin$$get_ClassName): clean
			return "Animator";
		}
	}

	[Token(Token = "0x1700033E")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001DB3")]
		[Address(RVA = "0x58ECC80", Offset = "0x58EBC80", VA = "0x58ECC80", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x1700033F")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001DB4")]
		[Address(RVA = "0x58ECC90", Offset = "0x58EBC90", VA = "0x58ECC90", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin$$get_IsStatic): clean
			return false;
		}
	}

	[Token(Token = "0x17000340")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001DB5")]
		[Address(RVA = "0x58ECCA0", Offset = "0x58EBCA0", VA = "0x58ECCA0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6001D95")]
	[Address(RVA = "0x58EC430", Offset = "0x58EB430", VA = "0x58EC430")]
	public CustomLogicAnimatorBuiltin()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin$$.ctor): clean
		base(null);
		return;
	}

	[Token(Token = "0x6001D96")]
	[Address(RVA = "0x58EC440", Offset = "0x58EB440", VA = "0x58EC440")]
	public CustomLogicAnimatorBuiltin(BuiltinClassInstance owner, Animator animator)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin$$.ctor): 3 lines keep C-only constructs
		Dictionary<string, AnimationClip>* targetAddress;
		byte bVar1;
		Component pUVar2;
		Animator __this_00;
		AnimationClip __this_01;
		Dictionary<object, object> __this_02;
		Animator pUVar3;
		uint uVar4;
		Dictionary<string, AnimationClip> __this_03;
		RuntimeAnimatorController __this_04;
		AnimationClip[] pUVar5;
		String key;
		uint uVar6;

		base((Component)animator);
		this.OwnerBuiltin = owner;
		pUVar3 = typeof(Animator);
		pUVar2 = this.Component;
		if (pUVar2 != null) {
			bVar1 = (typeof(Animator)._2).typeHierarchyDepth;
			if ((bVar1 <= (pUVar2.klass._2).typeHierarchyDepth) &&((pUVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(Animator))) {
				this.Value = (Animator)pUVar2;
				if ((bVar1 <= (pUVar2.klass._2).typeHierarchyDepth) &&((pUVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass)pUVar3)) goto label_059ec523;
			}
			throw new InvalidCastException();
		}
		this.Value = null;
	label_059ec523: ;
		__this_03 = new Dictionary<string, AnimationClip>() ;
		targetAddress = &this._animatorClips;
		this._animatorClips = __this_03;
		__this_00 = this.Value;
		if (((__this_00 == null) ||(__this_04 = __this_00.runtimeAnimatorController, __this_04 == null)) ||(pUVar5 = __this_04.animationClips, pUVar5 == null)) {
	label_059ec5f1: ;
			throw new NullReferenceException();
		}
		uVar4 = (uint)pUVar5.Length;
		if (0 < (int)uVar4) {
			uVar6 = 0;
			do {
				if (uVar4 <= uVar6) {
					throw new IndexOutOfRangeException();
				}
				__this_01 = pUVar5[(int)uVar6];
				if (__this_01 == null) goto label_059ec5f1;
				__this_02 = (Dictionary<object, object>)*targetAddress;
				key = __this_01.name;
				if (__this_02 == null) goto label_059ec5f1;
				__this_02.set_Item((object)key, (object)__this_01);
				uVar6 = uVar6 + 1;
				uVar4 = (uint)pUVar5.Length;
			} while ((int)uVar6 < (int)uVar4);
		}
		return;
	}

	[Token(Token = "0x6001D9C")]
	[Address(RVA = "0x58EC750", Offset = "0x58EB750", VA = "0x58EC750")]
	public void ApplyBuiltinRootMotion()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin$$ApplyBuiltinRootMotion): clean
		Animator __this_00;

		__this_00 = this.Value;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.ApplyBuiltinRootMotion();
		return;
	}

	[Token(Token = "0x6001D9D")]
	[Address(RVA = "0x58EC770", Offset = "0x58EB770", VA = "0x58EC770")]
	public void Update(float deltaTime)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin$$Update): clean
		Animator __this_00;

		__this_00 = this.Value;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Update(deltaTime);
		return;
	}

	[Token(Token = "0x6001D9E")]
	[Address(RVA = "0x58EC790", Offset = "0x58EB790", VA = "0x58EC790")]
	public bool IsPlaying(string anim, int layer = 0)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin$$IsPlaying): clean
		Animator pUVar1;
		bool bVar2;
		AnimatorStateInfo local_70;
		AnimatorStateInfo local_48;

		pUVar1 = this.Value;
		if (pUVar1 == null) {
	label_059ec816: ;
			throw new NullReferenceException();
		}
		bVar2 = pUVar1.IsInTransition(layer);
		pUVar1 = this.Value;
		if (bVar2) {
			if (pUVar1 == null) goto label_059ec816;
			local_70 = pUVar1.GetNextAnimatorStateInfo(layer);
		}
		else {
			if (pUVar1 == null) goto label_059ec816;
			local_70 = pUVar1.GetCurrentAnimatorStateInfo(layer);
		}
		local_48.m_Loop = local_70.m_Loop;
		local_48.m_Length = local_70.m_Length;
		local_48.m_Speed = local_70.m_Speed;
		local_48.m_SpeedMultiplier = local_70.m_SpeedMultiplier;
		local_48.m_Tag = local_70.m_Tag;
		local_48.m_Name = local_70.m_Name;
		local_48.m_Path = local_70.m_Path;
		local_48.m_FullPath = local_70.m_FullPath;
		local_48.m_NormalizedTime = local_70.m_NormalizedTime;
		bVar2 = local_48.IsName(anim);
		return bVar2;
	}

	[Token(Token = "0x6001D9F")]
	[Address(RVA = "0x58EC8A0", Offset = "0x58EB8A0", VA = "0x58EC8A0")]
	public bool IsTag(string tag, int layer = 0)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin$$IsTag): clean
		Animator pUVar1;
		bool bVar2;
		AnimatorStateInfo local_70;
		AnimatorStateInfo local_48;

		pUVar1 = this.Value;
		if (pUVar1 == null) {
	label_059ec926: ;
			throw new NullReferenceException();
		}
		bVar2 = pUVar1.IsInTransition(layer);
		pUVar1 = this.Value;
		if (bVar2) {
			if (pUVar1 == null) goto label_059ec926;
			local_70 = pUVar1.GetNextAnimatorStateInfo(layer);
		}
		else {
			if (pUVar1 == null) goto label_059ec926;
			local_70 = pUVar1.GetCurrentAnimatorStateInfo(layer);
		}
		local_48.m_Loop = local_70.m_Loop;
		local_48.m_Length = local_70.m_Length;
		local_48.m_Speed = local_70.m_Speed;
		local_48.m_SpeedMultiplier = local_70.m_SpeedMultiplier;
		local_48.m_Tag = local_70.m_Tag;
		local_48.m_Name = local_70.m_Name;
		local_48.m_Path = local_70.m_Path;
		local_48.m_FullPath = local_70.m_FullPath;
		local_48.m_NormalizedTime = local_70.m_NormalizedTime;
		bVar2 = local_48.IsTag(tag);
		return bVar2;
	}

	[Token(Token = "0x6001DA0")]
	[Address(RVA = "0x58EC930", Offset = "0x58EB930", VA = "0x58EC930")]
	public float GetTransitionDuration(int layer = 0)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin$$GetTransitionDuration): 2 lines keep C-only constructs
		Animator __this_00;
		float fVar1;
		AnimatorTransitionInfo UStack_48;
		AnimatorTransitionInfo UStack_20;

		__this_00 = this.Value;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		UStack_20 = __this_00.GetAnimatorTransitionInfo(layer);
		UStack_48.m_Duration = UStack_20.m_Duration;
		UStack_48.m_NormalizedTime = UStack_20.m_NormalizedTime;
		UStack_48.m_AnyState = UStack_20.m_AnyState;
		UStack_48._25_3_ = UStack_20._25_3_;
		UStack_48.m_TransitionType = UStack_20.m_TransitionType;
		UStack_48.m_FullPath = UStack_20.m_FullPath;
		UStack_48.m_UserName = UStack_20.m_UserName;
		UStack_48.m_Name = UStack_20.m_Name;
		UStack_48.m_HasFixedDuration = UStack_20.m_HasFixedDuration;
		UStack_48._13_3_ = UStack_20._13_3_;
		return fVar1;
	}

	[Token(Token = "0x6001DA1")]
	[Address(RVA = "0x58EC980", Offset = "0x58EB980", VA = "0x58EC980")]
	public float GetTransitionNormalizedTime(int layer = 0)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin$$GetTransitionNormalizedTime): 2 lines keep C-only constructs
		Animator __this_00;
		float fVar1;
		AnimatorTransitionInfo UStack_48;
		AnimatorTransitionInfo UStack_20;

		__this_00 = this.Value;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		UStack_20 = __this_00.GetAnimatorTransitionInfo(layer);
		UStack_48.m_Duration = UStack_20.m_Duration;
		UStack_48.m_NormalizedTime = UStack_20.m_NormalizedTime;
		UStack_48.m_AnyState = UStack_20.m_AnyState;
		UStack_48._25_3_ = UStack_20._25_3_;
		UStack_48.m_TransitionType = UStack_20.m_TransitionType;
		UStack_48.m_FullPath = UStack_20.m_FullPath;
		UStack_48.m_UserName = UStack_20.m_UserName;
		UStack_48.m_Name = UStack_20.m_Name;
		UStack_48.m_HasFixedDuration = UStack_20.m_HasFixedDuration;
		UStack_48._13_3_ = UStack_20._13_3_;
		return fVar1;
	}

	[Token(Token = "0x6001DA2")]
	[Address(RVA = "0x58EC9D0", Offset = "0x58EB9D0", VA = "0x58EC9D0")]
	public void PlayAnimation(string anim, float fade = 0.1f, int layer = 0)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin$$PlayAnimation): clean
		Animator __this_00;

		__this_00 = this.Value;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.CrossFade(anim, fade, layer);
		return;
	}

	[Token(Token = "0x6001DA3")]
	[Address(RVA = "0x58EC9F0", Offset = "0x58EB9F0", VA = "0x58EC9F0")]
	public void PlayAnimationAt(string anim, float normalizedTime, float fade = 0.1f, int layer = 0)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin$$PlayAnimationAt): clean
		Animator __this_00;

		__this_00 = this.Value;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.CrossFade(anim, fade, layer, normalizedTime);
		return;
	}

	[Token(Token = "0x6001DA4")]
	[Address(RVA = "0x58ECA10", Offset = "0x58EBA10", VA = "0x58ECA10")]
	public void SetSpeed(float speed)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin$$SetSpeed): clean
		Animator __this_00;

		__this_00 = this.Value;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.speed = speed;
		return;
	}

	[Token(Token = "0x6001DA5")]
	[Address(RVA = "0x58ECA30", Offset = "0x58EBA30", VA = "0x58ECA30")]
	public float GetAnimationLength(string anim)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin$$GetAnimationLength): clean
		Dictionary<object, object> __this_00;
		AnimationClip __this_01;
		float fVar1;

		__this_00 = (Dictionary<object, object>)this._animatorClips;
		if (__this_00 != null) {
			__this_01 = __this_00.get_Item((object)anim);
			if (__this_01 != null) {
				return fVar1;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001DA6")]
	[Address(RVA = "0x58ECA90", Offset = "0x58EBA90", VA = "0x58ECA90")]
	public float GetFloat(string name)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin$$GetFloat): clean
		Animator __this_00;
		float fVar1;

		__this_00 = this.Value;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		return fVar1;
	}

	[Token(Token = "0x6001DA7")]
	[Address(RVA = "0x58ECAB0", Offset = "0x58EBAB0", VA = "0x58ECAB0")]
	public int GetInteger(string name)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin$$GetInteger): clean
		Animator __this_00;
		int iVar1;

		__this_00 = this.Value;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		return iVar1;
	}

	[Token(Token = "0x6001DA8")]
	[Address(RVA = "0x58ECAD0", Offset = "0x58EBAD0", VA = "0x58ECAD0")]
	public bool GetBool(string name)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin$$GetBool): clean
		Animator __this_00;
		bool bVar1;

		__this_00 = this.Value;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		return bVar1;
	}

	[Token(Token = "0x6001DA9")]
	[Address(RVA = "0x58ECAF0", Offset = "0x58EBAF0", VA = "0x58ECAF0")]
	public void SetFloat(string name, float value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin$$SetFloat): clean
		Animator __this_00;

		__this_00 = this.Value;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.SetFloat(name, value);
		return;
	}

	[Token(Token = "0x6001DAA")]
	[Address(RVA = "0x58ECB10", Offset = "0x58EBB10", VA = "0x58ECB10")]
	public void SetInteger(string name, int value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin$$SetInteger): clean
		Animator __this_00;

		__this_00 = this.Value;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.SetInteger(name, value);
		return;
	}

	[Token(Token = "0x6001DAB")]
	[Address(RVA = "0x58ECB30", Offset = "0x58EBB30", VA = "0x58ECB30")]
	public void SetBool(string name, bool value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin$$SetBool): clean
		Animator __this_00;

		__this_00 = this.Value;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.SetBool(name, value);
		return;
	}

	[Token(Token = "0x6001DAC")]
	[Address(RVA = "0x58ECB50", Offset = "0x58EBB50", VA = "0x58ECB50")]
	public void SetTrigger(string name)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin$$SetTrigger): clean
		Animator __this_00;

		__this_00 = this.Value;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.SetTrigger(name);
		return;
	}

	[Token(Token = "0x6001DAD")]
	[Address(RVA = "0x58ECB70", Offset = "0x58EBB70", VA = "0x58ECB70")]
	public void ResetTrigger(string name)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin$$ResetTrigger): clean
		Animator __this_00;

		__this_00 = this.Value;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.ResetTrigger(name);
		return;
	}

	[Token(Token = "0x6001DAE")]
	[Address(RVA = "0x58ECB90", Offset = "0x58EBB90", VA = "0x58ECB90")]
	public void SetLayerWeight(int layer, float weight)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin$$SetLayerWeight): clean
		Animator __this_00;

		__this_00 = this.Value;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.SetLayerWeight(layer, weight);
		return;
	}

	[Token(Token = "0x6001DAF")]
	[Address(RVA = "0x58ECBB0", Offset = "0x58EBBB0", VA = "0x58ECBB0")]
	public float GetLayerWeight(int layer)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin$$GetLayerWeight): clean
		Animator __this_00;
		float fVar1;

		__this_00 = this.Value;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		return fVar1;
	}

	[Token(Token = "0x6001DB0")]
	[Address(RVA = "0x58ECBD0", Offset = "0x58EBBD0", VA = "0x58ECBD0")]
	public float GetAnimationNormalizedTime(int layer = 0)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin$$GetAnimationNormalizedTime): clean
		Animator pUVar1;
		bool bVar2;
		float fVar3;
		AnimatorStateInfo local_60;
		AnimatorStateInfo local_38;

		pUVar1 = this.Value;
		if (pUVar1 == null) {
	label_059ecc4a: ;
			throw new NullReferenceException();
		}
		bVar2 = pUVar1.IsInTransition(layer);
		pUVar1 = this.Value;
		if (bVar2) {
			if (pUVar1 == null) goto label_059ecc4a;
			local_60 = pUVar1.GetNextAnimatorStateInfo(layer);
		}
		else {
			if (pUVar1 == null) goto label_059ecc4a;
			local_60 = pUVar1.GetCurrentAnimatorStateInfo(layer);
		}
		local_38.m_Loop = local_60.m_Loop;
		local_38.m_Length = local_60.m_Length;
		local_38.m_Speed = local_60.m_Speed;
		local_38.m_SpeedMultiplier = local_60.m_SpeedMultiplier;
		local_38.m_Tag = local_60.m_Tag;
		local_38.m_Name = local_60.m_Name;
		local_38.m_Path = local_60.m_Path;
		local_38.m_FullPath = local_60.m_FullPath;
		local_38.m_NormalizedTime = local_60.m_NormalizedTime;
		return fVar3;
	}

	[Token(Token = "0x6001DB1")]
	[Address(RVA = "0x58EC820", Offset = "0x58EB820", VA = "0x58EC820")]
	private AnimatorStateInfo GetCurrentStateInfo(int layer = 0)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c (CustomLogic.CustomLogicAnimatorBuiltin$$GetCurrentStateInfo): clean
		Animator pUVar1;
		bool bVar2;
		AnimatorStateInfo UStack_40;

		pUVar1 = this.Value;
		if (pUVar1 == null) {
	label_059ec899: ;
			throw new NullReferenceException();
		}
		bVar2 = pUVar1.IsInTransition(layer);
		pUVar1 = this.Value;
		if (bVar2) {
			if (pUVar1 == null) goto label_059ec899;
			UStack_40 = pUVar1.GetNextAnimatorStateInfo(layer);
		}
		else {
			if (pUVar1 == null) goto label_059ec899;
			UStack_40 = pUVar1.GetCurrentAnimatorStateInfo(layer);
		}
		__return_storage_ptr__.m_Loop = UStack_40.m_Loop;
		__return_storage_ptr__.m_Length = UStack_40.m_Length;
		__return_storage_ptr__.m_Speed = UStack_40.m_Speed;
		__return_storage_ptr__.m_SpeedMultiplier = UStack_40.m_SpeedMultiplier;
		__return_storage_ptr__.m_Tag = UStack_40.m_Tag;
		__return_storage_ptr__.m_Name = UStack_40.m_Name;
		__return_storage_ptr__.m_Path = UStack_40.m_Path;
		__return_storage_ptr__.m_FullPath = UStack_40.m_FullPath;
		__return_storage_ptr__.m_NormalizedTime = UStack_40.m_NormalizedTime;
		return __return_storage_ptr__;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicAnimatorBuiltin.c.

	// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"DeltaPosition");
		__this.Add((Il2CppObject *)"DeltaRotation");
		__this.Add((Il2CppObject *)"HasRootMotion");
		__this.Add((Il2CppObject *)"ApplyRootMotion");
		__this.Add((Il2CppObject *)"ApplyBuiltinRootMotion");
		__this.Add((Il2CppObject *)"Update");
		__this.Add((Il2CppObject *)"IsPlaying");
		__this.Add((Il2CppObject *)"IsTag");
		__this.Add((Il2CppObject *)"GetTransitionDuration");
		__this.Add((Il2CppObject *)"GetTransitionNormalizedTime");
		__this.Add((Il2CppObject *)"PlayAnimation");
		__this.Add((Il2CppObject *)"PlayAnimationAt");
		__this.Add((Il2CppObject *)"SetSpeed");
		__this.Add((Il2CppObject *)"GetAnimationLength");
		__this.Add((Il2CppObject *)"GetFloat");
		__this.Add((Il2CppObject *)"GetInteger");
		__this.Add((Il2CppObject *)"GetBool");
		__this.Add((Il2CppObject *)"SetFloat");
		__this.Add((Il2CppObject *)"SetInteger");
		__this.Add((Il2CppObject *)"SetBool");
		__this.Add((Il2CppObject *)"SetTrigger");
		__this.Add((Il2CppObject *)"ResetTrigger");
		__this.Add((Il2CppObject *)"SetLayerWeight");
		__this.Add((Il2CppObject *)"GetLayerWeight");
		__this.Add((Il2CppObject *)"GetAnimationNormalizedTime");
		CustomLogicAnimatorBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$<__CreatePropertyBinding__DeltaPosition>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__DeltaPosition_g____getter_2_0(CustomLogicAnimatorBuiltin __i)
	{
		CustomLogicVector3Builtin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.DeltaPosition;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$<__CreatePropertyBinding__DeltaRotation>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__DeltaRotation_g____getter_3_0(CustomLogicAnimatorBuiltin __i)
	{
		Animator __this;
		CustomLogicQuaternionBuiltin pCVar1;
		Quaternion q;

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		q = __this.deltaRotation;
		pCVar1 = ((CustomLogicQuaternionBuiltin)q);
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$<__CreatePropertyBinding__HasRootMotion>g____getter|4_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__HasRootMotion_g____getter_4_0(CustomLogicAnimatorBuiltin __i)
	{
		Animator __this;
		bool bVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		bVar1 = __this.hasRootMotion;
		uStack_8 = CONCAT17(bVar1, (undefined7)uStack_8);
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$<__CreatePropertyBinding__ApplyRootMotion>g____getter|5_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__ApplyRootMotion_g____getter_5_0(CustomLogicAnimatorBuiltin __i)
	{
		Animator __this;
		bool bVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		bVar1 = __this.applyRootMotion;
		uStack_8 = CONCAT17(bVar1, (undefined7)uStack_8);
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicAnimatorBuiltin.Bindings$$<__CreatePropertyBinding__ApplyRootMotion>g____setter|5_1: clean
	private static void Bindings____CreatePropertyBinding__ApplyRootMotion_g____setter_5_1(CustomLogicAnimatorBuiltin __i, object __v)
	{
		Animator __this;
		bool value;

		value = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if ((__i == null) ||(__this = __i.Value, __this == null)) {
			throw new NullReferenceException();
		}
		__this.applyRootMotion = value;
		return;
	}

	// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$.cctor: clean
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = new CustomLogicAnimatorBuiltin.Bindings.c();
		CustomLogicAnimatorBuiltin.Bindings.c.__9 =(CustomLogicAnimatorBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__ApplyBuiltinRootMotion>b__6_0: clean
	private object Bindings_c____CreateMethodBinding__ApplyBuiltinRootMotion_b__6_0(CustomLogicAnimatorBuiltin __c, Object[] __a)
	{
		Animator __this_00;

		if ((__c == null) ||(__this_00 = __c.Value, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.ApplyBuiltinRootMotion();
		return null;
	}

	// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__Update>b__7_0: clean
	private object Bindings_c____CreateMethodBinding__Update_b__7_0(CustomLogicAnimatorBuiltin __c, Object[] __a)
	{
		object obj;
		Animator __this_00;
		float deltaTime;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			deltaTime = CustomLogicEvaluator.ConvertTo<float>(obj);
			if ((__c != null) &&(__this_00 = __c.Value, __this_00 != null)) {
				__this_00.Update(deltaTime);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsPlaying>b__8_0: 4 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__IsPlaying_b__8_0(CustomLogicAnimatorBuiltin __c, Object[] __a)
	{
		bool bVar1;
		int layer;
		ulong in_RAX;
		String anim;
		object pIVar2;
		ulong uStack_28;

		uStack_28 = in_RAX;
		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar2 = __a[0];
			anim = CustomLogicEvaluator.ConvertTo<string>(pIVar2);
			layer = 0;
			if (1 < (int)__a.Length) {
				pIVar2 = __a[1];
				layer = CustomLogicEvaluator.ConvertTo<int>(pIVar2);
			}
			if (__c != null) {
				bVar1 = __c.IsPlaying(anim, layer);
				uStack_28 = CONCAT17(bVar1, (undefined7)uStack_28);
				pIVar2 = (object)(((long)&uStack_28 + 7));
				return pIVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsTag>b__9_0: 4 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__IsTag_b__9_0(CustomLogicAnimatorBuiltin __c, Object[] __a)
	{
		bool bVar1;
		int layer;
		ulong in_RAX;
		String tag;
		object pIVar2;
		ulong uStack_28;

		uStack_28 = in_RAX;
		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar2 = __a[0];
			tag = CustomLogicEvaluator.ConvertTo<string>(pIVar2);
			layer = 0;
			if (1 < (int)__a.Length) {
				pIVar2 = __a[1];
				layer = CustomLogicEvaluator.ConvertTo<int>(pIVar2);
			}
			if (__c != null) {
				bVar1 = __c.IsTag(tag, layer);
				uStack_28 = CONCAT17(bVar1, (undefined7)uStack_28);
				pIVar2 = (object)(((long)&uStack_28 + 7));
				return pIVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetTransitionDuration>b__10_0: 2 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__GetTransitionDuration_b__10_0(CustomLogicAnimatorBuiltin __c, Object[] __a)
	{
		Animator __this_00;
		int layerIndex;
		object pIVar1;
		float fVar2;
		AnimatorTransitionInfo UStack_58;
		AnimatorTransitionInfo UStack_30;

		if (__a != null) {
			if (__a.Length == 0) {
				layerIndex = 0;
			}
			else {
				if ((int)__a.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				pIVar1 = __a[0];
				layerIndex = CustomLogicEvaluator.ConvertTo<int>(pIVar1);
			}
			if ((__c != null) &&(__this_00 = __c.Value, __this_00 != null)) {
				UStack_30 = __this_00.GetAnimatorTransitionInfo(layerIndex);
				UStack_58.m_Duration = UStack_30.m_Duration;
				UStack_58.m_NormalizedTime = UStack_30.m_NormalizedTime;
				UStack_58.m_AnyState = UStack_30.m_AnyState;
				UStack_58._25_3_ = UStack_30._25_3_;
				UStack_58.m_TransitionType = UStack_30.m_TransitionType;
				UStack_58.m_FullPath = UStack_30.m_FullPath;
				UStack_58.m_UserName = UStack_30.m_UserName;
				UStack_58.m_Name = UStack_30.m_Name;
				UStack_58.m_HasFixedDuration = UStack_30.m_HasFixedDuration;
				UStack_58._13_3_ = UStack_30._13_3_;
				fVar2 = UStack_58.duration;
				UStack_58.m_FullPath = (int32_t)fVar2;
				pIVar1 = (object)UStack_58;
				return pIVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetTransitionNormalizedTime>b__11_0: 2 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__GetTransitionNormalizedTime_b__11_0(CustomLogicAnimatorBuiltin __c, Object[] __a)
	{
		Animator __this_00;
		int layerIndex;
		object pIVar1;
		float fVar2;
		AnimatorTransitionInfo UStack_58;
		AnimatorTransitionInfo UStack_30;

		if (__a != null) {
			if (__a.Length == 0) {
				layerIndex = 0;
			}
			else {
				if ((int)__a.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				pIVar1 = __a[0];
				layerIndex = CustomLogicEvaluator.ConvertTo<int>(pIVar1);
			}
			if ((__c != null) &&(__this_00 = __c.Value, __this_00 != null)) {
				UStack_30 = __this_00.GetAnimatorTransitionInfo(layerIndex);
				UStack_58.m_Duration = UStack_30.m_Duration;
				UStack_58.m_NormalizedTime = UStack_30.m_NormalizedTime;
				UStack_58.m_AnyState = UStack_30.m_AnyState;
				UStack_58._25_3_ = UStack_30._25_3_;
				UStack_58.m_TransitionType = UStack_30.m_TransitionType;
				UStack_58.m_FullPath = UStack_30.m_FullPath;
				UStack_58.m_UserName = UStack_30.m_UserName;
				UStack_58.m_Name = UStack_30.m_Name;
				UStack_58.m_HasFixedDuration = UStack_30.m_HasFixedDuration;
				UStack_58._13_3_ = UStack_30._13_3_;
				fVar2 = UStack_58.normalizedTime;
				UStack_58.m_FullPath = (int32_t)fVar2;
				pIVar1 = (object)UStack_58;
				return pIVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__PlayAnimation>b__12_0: clean
	private object Bindings_c____CreateMethodBinding__PlayAnimation_b__12_0(CustomLogicAnimatorBuiltin __c, Object[] __a)
	{
		object pIVar1;
		Animator __this_00;
		int layer;
		String stateName;
		float normalizedTransitionDuration;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			stateName = CustomLogicEvaluator.ConvertTo<string>(pIVar1);
			layer = 0;
			if ((int)__a.Length < 2) {
				normalizedTransitionDuration = 0.1;
			}
			else {
				pIVar1 = __a[1];
				normalizedTransitionDuration = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
				if (2 < (int)__a.Length) {
					pIVar1 = __a[2];
					layer = CustomLogicEvaluator.ConvertTo<int>(pIVar1);
				}
			}
			if ((__c != null) &&(__this_00 = __c.Value, __this_00 != null)) {
				__this_00.CrossFade(stateName, normalizedTransitionDuration, layer);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__PlayAnimationAt>b__13_0: clean
	private object Bindings_c____CreateMethodBinding__PlayAnimationAt_b__13_0(CustomLogicAnimatorBuiltin __c, Object[] __a)
	{
		object pIVar1;
		Animator __this_00;
		int layer;
		String stateName;
		float normalizedTimeOffset;
		float normalizedTransitionDuration;

		if (__a == null) {
	label_059f011e: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			stateName = CustomLogicEvaluator.ConvertTo<string>(pIVar1);
			if ((__a.Length & 0xfffffffe) != 0) {
				normalizedTimeOffset = CustomLogicEvaluator.ConvertTo<float>(__a[1]);
				layer = 0;
				if ((int)__a.Length < 3) {
					normalizedTransitionDuration = 0.1;
				}
				else {
					pIVar1 = __a[2];
					normalizedTransitionDuration = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
					if (3 < (int)__a.Length) {
						pIVar1 = __a[3];
						layer = CustomLogicEvaluator.ConvertTo<int>(pIVar1);
					}
				}
				if ((__c != null) &&(__this_00 = __c.Value, __this_00 != null)) {
					__this_00.CrossFade(stateName, normalizedTransitionDuration, layer, normalizedTimeOffset);
					return null;
				}
				goto label_059f011e;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetSpeed>b__14_0: clean
	private object Bindings_c____CreateMethodBinding__SetSpeed_b__14_0(CustomLogicAnimatorBuiltin __c, Object[] __a)
	{
		object obj;
		Animator __this_00;
		float value;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			value = CustomLogicEvaluator.ConvertTo<float>(obj);
			if ((__c != null) &&(__this_00 = __c.Value, __this_00 != null)) {
				__this_00.speed = value;
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetAnimationLength>b__15_0: clean
	private object Bindings_c____CreateMethodBinding__GetAnimationLength_b__15_0(CustomLogicAnimatorBuiltin __c, Object[] __a)
	{
		Dictionary<object, object> __this_00;
		String key;
		AnimationClip __this_01;
		object pIVar1;
		byte[] auStack_14 = new byte[4];

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			key = CustomLogicEvaluator.ConvertTo<string>(pIVar1);
			if (__c != null) {
				__this_00 = (Dictionary<object, object>)__c._animatorClips;
				if (__this_00 != null) {
					__this_01 = __this_00.get_Item((object)key) ;
					if (__this_01 != null) {
						__this_01.length;
						pIVar1 = (object)auStack_14;
						return pIVar1;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetFloat>b__16_0: clean
	private object Bindings_c____CreateMethodBinding__GetFloat_b__16_0(CustomLogicAnimatorBuiltin __c, Object[] __a)
	{
		Animator __this_00;
		String name;
		object pIVar1;
		byte[] auStack_14 = new byte[4];

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			name = CustomLogicEvaluator.ConvertTo<string>(pIVar1);
			if ((__c != null) &&(__this_00 = __c.Value, __this_00 != null)) {
				__this_00.GetFloat(name);
				pIVar1 = (object)auStack_14;
				return pIVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetInteger>b__17_0: clean
	private object Bindings_c____CreateMethodBinding__GetInteger_b__17_0(CustomLogicAnimatorBuiltin __c, Object[] __a)
	{
		Animator __this_00;
		String name;
		object pIVar1;
		byte[] auStack_14 = new byte[4];

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			name = CustomLogicEvaluator.ConvertTo<string>(pIVar1);
			if ((__c != null) &&(__this_00 = __c.Value, __this_00 != null)) {
				__this_00.GetInteger(name);
				pIVar1 = (object)auStack_14;
				return pIVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetBool>b__18_0: 4 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__GetBool_b__18_0(CustomLogicAnimatorBuiltin __c, Object[] __a)
	{
		Animator __this_00;
		bool bVar1;
		ulong in_RAX;
		String name;
		object pIVar2;
		ulong uStack_18;

		uStack_18 = in_RAX;
		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar2 = __a[0];
			name = CustomLogicEvaluator.ConvertTo<string>(pIVar2);
			if ((__c != null) &&(__this_00 = __c.Value, __this_00 != null)) {
				bVar1 = __this_00.GetBool(name);
				uStack_18 = CONCAT17(bVar1, (undefined7)uStack_18);
				pIVar2 = (object)(((long)&uStack_18 + 7));
				return pIVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetFloat>b__19_0: clean
	private object Bindings_c____CreateMethodBinding__SetFloat_b__19_0(CustomLogicAnimatorBuiltin __c, Object[] __a)
	{
		object obj;
		Animator __this_00;
		String name;
		float value;

		if (__a == null) {
	label_059f0587: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			name = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				value = CustomLogicEvaluator.ConvertTo<float>(__a[1]);
				if ((__c != null) &&(__this_00 = __c.Value, __this_00 != null)) {
					__this_00.SetFloat(name, value);
					return null;
				}
				goto label_059f0587;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetInteger>b__20_0: clean
	private object Bindings_c____CreateMethodBinding__SetInteger_b__20_0(CustomLogicAnimatorBuiltin __c, Object[] __a)
	{
		object obj;
		Animator __this_00;
		int value;
		String name;

		if (__a == null) {
	label_059f0659: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			name = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				value = CustomLogicEvaluator.ConvertTo<int>(__a[1]);
				if ((__c != null) &&(__this_00 = __c.Value, __this_00 != null)) {
					__this_00.SetInteger(name, value);
					return null;
				}
				goto label_059f0659;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetBool>b__21_0: clean
	private object Bindings_c____CreateMethodBinding__SetBool_b__21_0(CustomLogicAnimatorBuiltin __c, Object[] __a)
	{
		object obj;
		Animator __this_00;
		bool value;
		String name;

		if (__a == null) {
	label_059f072a: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			name = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				value = CustomLogicEvaluator.ConvertTo<bool>(__a[1]);
				if ((__c != null) &&(__this_00 = __c.Value, __this_00 != null)) {
					__this_00.SetBool(name, value);
					return null;
				}
				goto label_059f072a;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetTrigger>b__22_0: clean
	private object Bindings_c____CreateMethodBinding__SetTrigger_b__22_0(CustomLogicAnimatorBuiltin __c, Object[] __a)
	{
		object obj;
		Animator __this_00;
		String name;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			name = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__c != null) &&(__this_00 = __c.Value, __this_00 != null)) {
				__this_00.SetTrigger(name);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__ResetTrigger>b__23_0: clean
	private object Bindings_c____CreateMethodBinding__ResetTrigger_b__23_0(CustomLogicAnimatorBuiltin __c, Object[] __a)
	{
		object obj;
		Animator __this_00;
		String name;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			name = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__c != null) &&(__this_00 = __c.Value, __this_00 != null)) {
				__this_00.ResetTrigger(name);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetLayerWeight>b__24_0: clean
	private object Bindings_c____CreateMethodBinding__SetLayerWeight_b__24_0(CustomLogicAnimatorBuiltin __c, Object[] __a)
	{
		object obj;
		Animator __this_00;
		int layerIndex;
		float weight;

		if (__a == null) {
	label_059f0933: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			layerIndex = CustomLogicEvaluator.ConvertTo<int>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				weight = CustomLogicEvaluator.ConvertTo<float>(__a[1]);
				if ((__c != null) &&(__this_00 = __c.Value, __this_00 != null)) {
					__this_00.SetLayerWeight(layerIndex, weight);
					return null;
				}
				goto label_059f0933;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetLayerWeight>b__25_0: clean
	private object Bindings_c____CreateMethodBinding__GetLayerWeight_b__25_0(CustomLogicAnimatorBuiltin __c, Object[] __a)
	{
		Animator __this_00;
		int layerIndex;
		object pIVar1;
		byte[] auStack_14 = new byte[4];

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			layerIndex = CustomLogicEvaluator.ConvertTo<int>(pIVar1);
			if ((__c != null) &&(__this_00 = __c.Value, __this_00 != null)) {
				__this_00.GetLayerWeight(layerIndex);
				pIVar1 = (object)auStack_14;
				return pIVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicAnimatorBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetAnimationNormalizedTime>b__26_0: clean
	private object Bindings_c____CreateMethodBinding__GetAnimationNormalizedTime_b__26_0(CustomLogicAnimatorBuiltin __c, Object[] __a)
	{
		int layer;
		object pIVar1;
		byte[] auStack_14 = new byte[4];

		if (__a != null) {
			if (__a.Length == 0) {
				layer = 0;
			}
			else {
				if ((int)__a.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				pIVar1 = __a[0];
				layer = CustomLogicEvaluator.ConvertTo<int>(pIVar1);
			}
			if (__c != null) {
				__c.GetAnimationNormalizedTime(layer);
				pIVar1 = (object)auStack_14;
				return pIVar1;
			}
		}
		throw new NullReferenceException();
	}
}
