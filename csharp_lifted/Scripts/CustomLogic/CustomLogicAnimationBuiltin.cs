// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicAnimationBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicAnimationBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x200047F")]
[CompilerGenerated]
internal class CustomLogicAnimationBuiltin : BuiltinComponentInstance
{
	[Token(Token = "0x2000480")]
	public static class Factory
	{
		[Token(Token = "0x6001D78")]
		[Address(RVA = "0x58EA130", Offset = "0x58E9130", VA = "0x58EA130")]
		public static CustomLogicAnimationBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimationBuiltin.c (CustomLogic.CustomLogicAnimationBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			CustomLogicAnimationBuiltin __this;
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicAnimationBuiltin constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicAnimationBuiltin(null);
			return __this;
		}
	}

	[Token(Token = "0x2000481")]
	public static class Bindings
	{
		[Token(Token = "0x400165B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001D79")]
		[Address(RVA = "0x58EA220", Offset = "0x58E9220", VA = "0x58EA220")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimationBuiltin.c (CustomLogic.CustomLogicAnimationBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLMethodBinding<CustomLogicAnimationBuiltin> pCVar3;
			String pSVar4;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x55aebb4f) {
				if (uVar2 < 0x1c21234c) {
					if (uVar2 == 0x812156f) {
						bVar1 = (name == "SetAnimationNormalizedTime");
						if (bVar1) {
							if ((typeof(CustomLogicAnimationBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicAnimationBuiltin.Bindings.__CreateMethodBinding__SetAnimationNormalizedTime();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicAnimationBuiltin.Bindings.__CreateMethodBinding__SetAnimationNormalizedTime();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x1ae30f5a) {
						bVar1 = (name == "GetAnimationSpeed");
						if (bVar1) {
							if ((typeof(CustomLogicAnimationBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicAnimationBuiltin.Bindings.__CreateMethodBinding__GetAnimationSpeed();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicAnimationBuiltin.Bindings.__CreateMethodBinding__GetAnimationSpeed();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x1c21234b) {
						bVar1 = (name == "GetAnimationNormalizedTime");
						if (bVar1) {
							if ((typeof(CustomLogicAnimationBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicAnimationBuiltin.Bindings.__CreateMethodBinding__GetAnimationNormalizedTime();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicAnimationBuiltin.Bindings.__CreateMethodBinding__GetAnimationNormalizedTime();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x492a3ccf) {
					bVar1 = (name == "GetAnimationLength");
					if (bVar1) {
						if ((typeof(CustomLogicAnimationBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicAnimationBuiltin.Bindings.__CreateMethodBinding__GetAnimationLength();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicAnimationBuiltin.Bindings.__CreateMethodBinding__GetAnimationLength();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x4f3aab3d) {
					bVar1 = (name == "StopAnimation");
					if (bVar1) {
						if ((typeof(CustomLogicAnimationBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicAnimationBuiltin.Bindings.__CreateMethodBinding__StopAnimation();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicAnimationBuiltin.Bindings.__CreateMethodBinding__StopAnimation();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x55aebb4e) {
					bVar1 = (name == "PlayAnimationAt");
					if (bVar1) {
						if ((typeof(CustomLogicAnimationBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicAnimationBuiltin.Bindings.__CreateMethodBinding__PlayAnimationAt();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicAnimationBuiltin.Bindings.__CreateMethodBinding__PlayAnimationAt();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xe1cff600) {
				if (uVar2 == 0xcb515bd3) {
					bVar1 = (name == "GetWeight");
					if (bVar1) {
						if ((typeof(CustomLogicAnimationBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicAnimationBuiltin.Bindings.__CreateMethodBinding__GetWeight();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicAnimationBuiltin.Bindings.__CreateMethodBinding__GetWeight();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xd64c477b) {
					bVar1 = (name == "PlayAnimation");
					if (bVar1) {
						if ((typeof(CustomLogicAnimationBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicAnimationBuiltin.Bindings.__CreateMethodBinding__PlayAnimation();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicAnimationBuiltin.Bindings.__CreateMethodBinding__PlayAnimation();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xe1cff5ff) {
					bVar1 = (name == "SetWeight");
					if (bVar1) {
						if ((typeof(CustomLogicAnimationBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicAnimationBuiltin.Bindings.__CreateMethodBinding__SetWeight();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicAnimationBuiltin.Bindings.__CreateMethodBinding__SetWeight();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xf6be6fea) {
				bVar1 = (name == "PlayAnimationQueued");
				if (bVar1) {
					if ((typeof(CustomLogicAnimationBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar3 = CustomLogicAnimationBuiltin.Bindings.__CreateMethodBinding__PlayAnimationQueued();
						return (ICLMemberBinding)pCVar3;
					}
					pCVar3 = CustomLogicAnimationBuiltin.Bindings.__CreateMethodBinding__PlayAnimationQueued();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xe5b11b66) {
				bVar1 = (name == "SetAnimationSpeed");
				if (bVar1) {
					if ((typeof(CustomLogicAnimationBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar3 = CustomLogicAnimationBuiltin.Bindings.__CreateMethodBinding__SetAnimationSpeed();
						return (ICLMemberBinding)pCVar3;
					}
					pCVar3 = CustomLogicAnimationBuiltin.Bindings.__CreateMethodBinding__SetAnimationSpeed();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xe4b35065) {
				bVar1 = (name == "IsPlaying");
				if (bVar1) {
					if ((typeof(CustomLogicAnimationBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar3 = CustomLogicAnimationBuiltin.Bindings.__CreateMethodBinding__IsPlaying();
						return (ICLMemberBinding)pCVar3;
					}
					pCVar3 = CustomLogicAnimationBuiltin.Bindings.__CreateMethodBinding__IsPlaying();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicAnimationBuiltin not found");
			pSVar4 = String.Concat(pSVar4, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar4);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6001D7A")]
		[Address(RVA = "0x58EA7B0", Offset = "0x58E97B0", VA = "0x58EA7B0")]
		public static CLMethodBinding<CustomLogicAnimationBuiltin> __CreateMethodBinding__IsPlaying()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimationBuiltin.c (CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__IsPlaying): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicAnimationBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicAnimationBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545d51 == false) {
				Il2CppMethodInitialized_07545d51 = true;
				uVar1 = (typeof(CustomLogicAnimationBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicAnimationBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicAnimationBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__2_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicAnimationBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__2_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicAnimationBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicAnimationBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicAnimationBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__IsPlaying_b__2_0);
				pCVar2 = typeof(CustomLogicAnimationBuiltin.Bindings.c).static_fields;
				pCVar2.__9__2_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicAnimationBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001D7B")]
		[Address(RVA = "0x58EA8F0", Offset = "0x58E98F0", VA = "0x58EA8F0")]
		public static CLMethodBinding<CustomLogicAnimationBuiltin> __CreateMethodBinding__PlayAnimation()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimationBuiltin.c (CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__PlayAnimation): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicAnimationBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicAnimationBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545d52 == false) {
				Il2CppMethodInitialized_07545d52 = true;
				uVar1 = (typeof(CustomLogicAnimationBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicAnimationBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicAnimationBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__3_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicAnimationBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__3_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicAnimationBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicAnimationBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicAnimationBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__PlayAnimation_b__3_0);
				pCVar2 = typeof(CustomLogicAnimationBuiltin.Bindings.c).static_fields;
				pCVar2.__9__3_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicAnimationBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001D7C")]
		[Address(RVA = "0x58EAA30", Offset = "0x58E9A30", VA = "0x58EAA30")]
		public static CLMethodBinding<CustomLogicAnimationBuiltin> __CreateMethodBinding__PlayAnimationAt()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimationBuiltin.c (CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__PlayAnimationAt): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicAnimationBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicAnimationBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545d53 == false) {
				Il2CppMethodInitialized_07545d53 = true;
				uVar1 = (typeof(CustomLogicAnimationBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicAnimationBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicAnimationBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__4_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicAnimationBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__4_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicAnimationBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicAnimationBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicAnimationBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__PlayAnimationAt_b__4_0);
				pCVar2 = typeof(CustomLogicAnimationBuiltin.Bindings.c).static_fields;
				pCVar2.__9__4_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicAnimationBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001D7D")]
		[Address(RVA = "0x58EAB70", Offset = "0x58E9B70", VA = "0x58EAB70")]
		public static CLMethodBinding<CustomLogicAnimationBuiltin> __CreateMethodBinding__PlayAnimationQueued()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimationBuiltin.c (CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__PlayAnimationQueued): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicAnimationBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicAnimationBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545d54 == false) {
				Il2CppMethodInitialized_07545d54 = true;
				uVar1 = (typeof(CustomLogicAnimationBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicAnimationBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicAnimationBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__5_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicAnimationBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__5_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicAnimationBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicAnimationBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicAnimationBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__PlayAnimationQueued_b);
				pCVar2 = typeof(CustomLogicAnimationBuiltin.Bindings.c).static_fields;
				pCVar2.__9__5_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicAnimationBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001D7E")]
		[Address(RVA = "0x58EACB0", Offset = "0x58E9CB0", VA = "0x58EACB0")]
		public static CLMethodBinding<CustomLogicAnimationBuiltin> __CreateMethodBinding__StopAnimation()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimationBuiltin.c (CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__StopAnimation): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicAnimationBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicAnimationBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545d55 == false) {
				Il2CppMethodInitialized_07545d55 = true;
				uVar1 = (typeof(CustomLogicAnimationBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicAnimationBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicAnimationBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__6_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicAnimationBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__6_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicAnimationBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicAnimationBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicAnimationBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__StopAnimation_b__6_0);
				pCVar2 = typeof(CustomLogicAnimationBuiltin.Bindings.c).static_fields;
				pCVar2.__9__6_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicAnimationBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001D7F")]
		[Address(RVA = "0x58EADF0", Offset = "0x58E9DF0", VA = "0x58EADF0")]
		public static CLMethodBinding<CustomLogicAnimationBuiltin> __CreateMethodBinding__SetAnimationSpeed()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimationBuiltin.c (CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__SetAnimationSpeed): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicAnimationBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicAnimationBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545d56 == false) {
				Il2CppMethodInitialized_07545d56 = true;
				uVar1 = (typeof(CustomLogicAnimationBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicAnimationBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicAnimationBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__7_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicAnimationBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__7_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicAnimationBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicAnimationBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicAnimationBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__SetAnimationSpeed_b__7);
				pCVar2 = typeof(CustomLogicAnimationBuiltin.Bindings.c).static_fields;
				pCVar2.__9__7_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicAnimationBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001D80")]
		[Address(RVA = "0x58EAF30", Offset = "0x58E9F30", VA = "0x58EAF30")]
		public static CLMethodBinding<CustomLogicAnimationBuiltin> __CreateMethodBinding__GetAnimationSpeed()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimationBuiltin.c (CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__GetAnimationSpeed): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicAnimationBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicAnimationBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545d57 == false) {
				Il2CppMethodInitialized_07545d57 = true;
				uVar1 = (typeof(CustomLogicAnimationBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicAnimationBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicAnimationBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__8_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicAnimationBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__8_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicAnimationBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicAnimationBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicAnimationBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__GetAnimationSpeed_b__8);
				pCVar2 = typeof(CustomLogicAnimationBuiltin.Bindings.c).static_fields;
				pCVar2.__9__8_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicAnimationBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001D81")]
		[Address(RVA = "0x58EB070", Offset = "0x58EA070", VA = "0x58EB070")]
		public static CLMethodBinding<CustomLogicAnimationBuiltin> __CreateMethodBinding__GetAnimationLength()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimationBuiltin.c (CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__GetAnimationLength): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicAnimationBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicAnimationBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545d58 == false) {
				Il2CppMethodInitialized_07545d58 = true;
				uVar1 = (typeof(CustomLogicAnimationBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicAnimationBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicAnimationBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__9_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicAnimationBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__9_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicAnimationBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicAnimationBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicAnimationBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__GetAnimationLength_b);
				pCVar2 = typeof(CustomLogicAnimationBuiltin.Bindings.c).static_fields;
				pCVar2.__9__9_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicAnimationBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001D82")]
		[Address(RVA = "0x58EB1B0", Offset = "0x58EA1B0", VA = "0x58EB1B0")]
		public static CLMethodBinding<CustomLogicAnimationBuiltin> __CreateMethodBinding__GetAnimationNormalizedTime()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimationBuiltin.c (CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__GetAnimationNormalizedTime): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicAnimationBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicAnimationBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545d59 == false) {
				Il2CppMethodInitialized_07545d59 = true;
				uVar1 = (typeof(CustomLogicAnimationBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicAnimationBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicAnimationBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__10_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicAnimationBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__10_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicAnimationBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicAnimationBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicAnimationBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__GetAnimationNormalized);
				pCVar2 = typeof(CustomLogicAnimationBuiltin.Bindings.c).static_fields;
				pCVar2.__9__10_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicAnimationBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001D83")]
		[Address(RVA = "0x58EB2F0", Offset = "0x58EA2F0", VA = "0x58EB2F0")]
		public static CLMethodBinding<CustomLogicAnimationBuiltin> __CreateMethodBinding__SetAnimationNormalizedTime()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimationBuiltin.c (CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__SetAnimationNormalizedTime): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicAnimationBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicAnimationBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545d5a == false) {
				Il2CppMethodInitialized_07545d5a = true;
				uVar1 = (typeof(CustomLogicAnimationBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicAnimationBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicAnimationBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__11_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicAnimationBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__11_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicAnimationBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicAnimationBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicAnimationBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__SetAnimationNormalized);
				pCVar2 = typeof(CustomLogicAnimationBuiltin.Bindings.c).static_fields;
				pCVar2.__9__11_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicAnimationBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001D84")]
		[Address(RVA = "0x58EB430", Offset = "0x58EA430", VA = "0x58EB430")]
		public static CLMethodBinding<CustomLogicAnimationBuiltin> __CreateMethodBinding__SetWeight()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimationBuiltin.c (CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__SetWeight): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicAnimationBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicAnimationBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545d5b == false) {
				Il2CppMethodInitialized_07545d5b = true;
				uVar1 = (typeof(CustomLogicAnimationBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicAnimationBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicAnimationBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__12_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicAnimationBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__12_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicAnimationBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicAnimationBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicAnimationBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__SetWeight_b__12_0);
				pCVar2 = typeof(CustomLogicAnimationBuiltin.Bindings.c).static_fields;
				pCVar2.__9__12_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicAnimationBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001D85")]
		[Address(RVA = "0x58EB570", Offset = "0x58EA570", VA = "0x58EB570")]
		public static CLMethodBinding<CustomLogicAnimationBuiltin> __CreateMethodBinding__GetWeight()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimationBuiltin.c (CustomLogic.CustomLogicAnimationBuiltin.Bindings$$__CreateMethodBinding__GetWeight): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicAnimationBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicAnimationBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicAnimationBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545d5c == false) {
				Il2CppMethodInitialized_07545d5c = true;
				uVar1 = (typeof(CustomLogicAnimationBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicAnimationBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicAnimationBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__13_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicAnimationBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__13_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicAnimationBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicAnimationBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicAnimationBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicAnimationBuiltin_Bindings_c___CreateMethodBinding__GetWeight_b__13_0);
				pCVar2 = typeof(CustomLogicAnimationBuiltin.Bindings.c).static_fields;
				pCVar2.__9__13_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicAnimationBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x4001659")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public Animation Value;

	[Token(Token = "0x400165A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public BuiltinClassInstance OwnerBuiltin;

	[Token(Token = "0x17000335")]
	public override string ClassName
	{
		[Token(Token = "0x6001D74")]
		[Address(RVA = "0x58EA0D0", Offset = "0x58E90D0", VA = "0x58EA0D0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimationBuiltin.c (CustomLogic.CustomLogicAnimationBuiltin$$get_ClassName): clean
			return "Animation";
		}
	}

	[Token(Token = "0x17000336")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001D75")]
		[Address(RVA = "0x58EA100", Offset = "0x58E9100", VA = "0x58EA100", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimationBuiltin.c (CustomLogic.CustomLogicAnimationBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000337")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001D76")]
		[Address(RVA = "0x58EA110", Offset = "0x58E9110", VA = "0x58EA110", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimationBuiltin.c (CustomLogic.CustomLogicAnimationBuiltin$$get_IsStatic): clean
			return false;
		}
	}

	[Token(Token = "0x17000338")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001D77")]
		[Address(RVA = "0x58EA120", Offset = "0x58E9120", VA = "0x58EA120", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicAnimationBuiltin.c (CustomLogic.CustomLogicAnimationBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6001D66")]
	[Address(RVA = "0x58E9D60", Offset = "0x58E8D60", VA = "0x58E9D60")]
	public CustomLogicAnimationBuiltin()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAnimationBuiltin.c (CustomLogic.CustomLogicAnimationBuiltin$$.ctor): clean
		base(null);
		return;
	}

	[Token(Token = "0x6001D67")]
	[Address(RVA = "0x58E9D70", Offset = "0x58E8D70", VA = "0x58E9D70")]
	public CustomLogicAnimationBuiltin(BuiltinClassInstance owner, Animation animation)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAnimationBuiltin.c (CustomLogic.CustomLogicAnimationBuiltin$$.ctor): 1 lines keep C-only constructs
		Animation pUVar1;
		Animation pUVar2;

		base((Component)animation);
		this.OwnerBuiltin = owner;
		pUVar2 = typeof(Animation);
		pUVar1 = (Animation)this.Component;
		if (pUVar1 == null) {
			this.Value = null;
		}
		else if ((pUVar1.klass != typeof(Animation)) ||(this.Value = pUVar1, pUVar1.klass != pUVar2)) {
			throw new InvalidCastException();
		}
		return;
	}

	[Token(Token = "0x6001D68")]
	[Address(RVA = "0x58E9E00", Offset = "0x58E8E00", VA = "0x58E9E00")]
	public bool IsPlaying(string anim)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAnimationBuiltin.c (CustomLogic.CustomLogicAnimationBuiltin$$IsPlaying): clean
		Animation __this_00;
		bool bVar1;

		__this_00 = this.Value;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		return bVar1;
	}

	[Token(Token = "0x6001D69")]
	[Address(RVA = "0x58E9E20", Offset = "0x58E8E20", VA = "0x58E9E20")]
	public void PlayAnimation(string anim, float fade = 0.1f, int layer = 0)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAnimationBuiltin.c (CustomLogic.CustomLogicAnimationBuiltin$$PlayAnimation): clean
		Animation pUVar1;
		AnimationState __this_00;

		pUVar1 = this.Value;
		if (pUVar1 != null) {
			pUVar1.CrossFade(anim, fade);
			pUVar1 = this.Value;
			if (pUVar1 != null) {
				__this_00 = pUVar1.get_Item(anim);
				if (__this_00 != null) {
					__this_00.layer = layer;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001D6A")]
	[Address(RVA = "0x58E9E70", Offset = "0x58E8E70", VA = "0x58E9E70")]
	public void PlayAnimationAt(string anim, float normalizedTime, float fade = 0.1f, int layer = 0)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAnimationBuiltin.c (CustomLogic.CustomLogicAnimationBuiltin$$PlayAnimationAt): clean
		Animation pUVar1;
		AnimationState pUVar2;

		pUVar1 = this.Value;
		if (pUVar1 != null) {
			pUVar1.CrossFade(anim, fade);
			pUVar1 = this.Value;
			if (pUVar1 != null) {
				pUVar2 = pUVar1.get_Item(anim);
				if (pUVar2 != null) {
					pUVar2.layer = layer;
					pUVar1 = this.Value;
					if (pUVar1 != null) {
						pUVar2 = pUVar1.get_Item(anim);
						if (pUVar2 != null) {
							pUVar2.normalizedTime = normalizedTime;
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001D6B")]
	[Address(RVA = "0x58E9F00", Offset = "0x58E8F00", VA = "0x58E9F00")]
	public void PlayAnimationQueued(string anim)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAnimationBuiltin.c (CustomLogic.CustomLogicAnimationBuiltin$$PlayAnimationQueued): clean
		Animation __this_00;

		__this_00 = this.Value;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.PlayQueued(anim);
		return;
	}

	[Token(Token = "0x6001D6C")]
	[Address(RVA = "0x58E9F20", Offset = "0x58E8F20", VA = "0x58E9F20")]
	public void StopAnimation([Optional] string anim)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAnimationBuiltin.c (CustomLogic.CustomLogicAnimationBuiltin$$StopAnimation): clean
		Animation __this_00;

		__this_00 = this.Value;
		if (anim == null) {
			if (__this_00 != null) {
				__this_00.Stop();
				return;
			}
		}
		else if (__this_00 != null) {
			__this_00.Stop(anim);
			return;
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001D6D")]
	[Address(RVA = "0x58E9F50", Offset = "0x58E8F50", VA = "0x58E9F50")]
	public void SetAnimationSpeed(string name, float speed)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAnimationBuiltin.c (CustomLogic.CustomLogicAnimationBuiltin$$SetAnimationSpeed): clean
		Animation __this_00;
		AnimationState __this_01;

		__this_00 = this.Value;
		if (__this_00 != null) {
			__this_01 = __this_00.get_Item(name);
			if (__this_01 != null) {
				__this_01.speed = speed;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001D6E")]
	[Address(RVA = "0x58E9F90", Offset = "0x58E8F90", VA = "0x58E9F90")]
	public float GetAnimationSpeed(string name)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAnimationBuiltin.c (CustomLogic.CustomLogicAnimationBuiltin$$GetAnimationSpeed): clean
		Animation __this_00;
		AnimationState __this_01;
		float fVar1;

		__this_00 = this.Value;
		if (__this_00 != null) {
			__this_01 = __this_00.get_Item(name);
			if (__this_01 != null) {
				return fVar1;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001D6F")]
	[Address(RVA = "0x58E9FC0", Offset = "0x58E8FC0", VA = "0x58E9FC0")]
	public float GetAnimationLength(string anim)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAnimationBuiltin.c (CustomLogic.CustomLogicAnimationBuiltin$$GetAnimationLength): clean
		Animation __this_00;
		AnimationState __this_01;
		float fVar1;

		__this_00 = this.Value;
		if (__this_00 != null) {
			__this_01 = __this_00.get_Item(anim);
			if (__this_01 != null) {
				return fVar1;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001D70")]
	[Address(RVA = "0x58E9FF0", Offset = "0x58E8FF0", VA = "0x58E9FF0")]
	public float GetAnimationNormalizedTime(string anim)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAnimationBuiltin.c (CustomLogic.CustomLogicAnimationBuiltin$$GetAnimationNormalizedTime): clean
		Animation __this_00;
		AnimationState __this_01;
		float fVar1;

		__this_00 = this.Value;
		if (__this_00 != null) {
			__this_01 = __this_00.get_Item(anim);
			if (__this_01 != null) {
				return fVar1;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001D71")]
	[Address(RVA = "0x58EA020", Offset = "0x58E9020", VA = "0x58EA020")]
	public void SetAnimationNormalizedTime(string anim, float normalizedTime)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAnimationBuiltin.c (CustomLogic.CustomLogicAnimationBuiltin$$SetAnimationNormalizedTime): clean
		Animation __this_00;
		AnimationState __this_01;

		__this_00 = this.Value;
		if (__this_00 != null) {
			__this_01 = __this_00.get_Item(anim);
			if (__this_01 != null) {
				__this_01.normalizedTime = normalizedTime;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001D72")]
	[Address(RVA = "0x58EA060", Offset = "0x58E9060", VA = "0x58EA060")]
	public void SetWeight(string anim, float weight)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAnimationBuiltin.c (CustomLogic.CustomLogicAnimationBuiltin$$SetWeight): clean
		Animation __this_00;
		AnimationState __this_01;

		__this_00 = this.Value;
		if (__this_00 != null) {
			__this_01 = __this_00.get_Item(anim);
			if (__this_01 != null) {
				__this_01.weight = weight;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001D73")]
	[Address(RVA = "0x58EA0A0", Offset = "0x58E90A0", VA = "0x58EA0A0")]
	public float GetWeight(string anim)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicAnimationBuiltin.c (CustomLogic.CustomLogicAnimationBuiltin$$GetWeight): clean
		Animation __this_00;
		AnimationState __this_01;
		float fVar1;

		__this_00 = this.Value;
		if (__this_00 != null) {
			__this_01 = __this_00.get_Item(anim);
			if (__this_01 != null) {
				return fVar1;
			}
		}
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicAnimationBuiltin.c.

	// CustomLogic.CustomLogicAnimationBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"IsPlaying");
		__this.Add((Il2CppObject *)"PlayAnimation");
		__this.Add((Il2CppObject *)"PlayAnimationAt");
		__this.Add((Il2CppObject *)"PlayAnimationQueued");
		__this.Add((Il2CppObject *)"StopAnimation");
		__this.Add((Il2CppObject *)"SetAnimationSpeed");
		__this.Add((Il2CppObject *)"GetAnimationSpeed");
		__this.Add((Il2CppObject *)"GetAnimationLength");
		__this.Add((Il2CppObject *)"GetAnimationNormalizedTime");
		__this.Add((Il2CppObject *)"SetAnimationNormalizedTime");
		__this.Add((Il2CppObject *)"SetWeight");
		__this.Add((Il2CppObject *)"GetWeight");
		CustomLogicAnimationBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$.cctor: clean
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = new CustomLogicAnimationBuiltin.Bindings.c();
		CustomLogicAnimationBuiltin.Bindings.c.__9 =(CustomLogicAnimationBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsPlaying>b__2_0: 4 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__IsPlaying_b__2_0(CustomLogicAnimationBuiltin __c, Object[] __a)
	{
		Animation __this_00;
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
				bVar1 = __this_00.IsPlaying(name);
				uStack_18 = CONCAT17(bVar1, (undefined7)uStack_18);
				pIVar2 = (object)(((long)&uStack_18 + 7));
				return pIVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__PlayAnimation>b__3_0: clean
	private object Bindings_c____CreateMethodBinding__PlayAnimation_b__3_0(CustomLogicAnimationBuiltin __c, Object[] __a)
	{
		object pIVar1;
		Animation pUVar2;
		int value;
		String animation;
		AnimationState __this_00;
		float fadeLength;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			animation = CustomLogicEvaluator.ConvertTo<string>(pIVar1);
			value = 0;
			if ((int)__a.Length < 2) {
				fadeLength = 0.1;
			}
			else {
				pIVar1 = __a[1];
				fadeLength = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
				if (2 < (int)__a.Length) {
					pIVar1 = __a[2];
					value = CustomLogicEvaluator.ConvertTo<int>(pIVar1);
				}
			}
			if ((__c != null) &&(pUVar2 = __c.Value, pUVar2 != null)) {
				pUVar2.CrossFade(animation, fadeLength);
				pUVar2 = __c.Value;
				if (pUVar2 != null) {
					__this_00 = pUVar2.get_Item(animation);
					if (__this_00 != null) {
						__this_00.layer = value;
						return null;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__PlayAnimationAt>b__4_0: clean
	private object Bindings_c____CreateMethodBinding__PlayAnimationAt_b__4_0(CustomLogicAnimationBuiltin __c, Object[] __a)
	{
		object pIVar1;
		int layer;
		String anim;
		float normalizedTime;
		float fade;

		if (__a == null) {
	label_059ebcf6: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			anim = CustomLogicEvaluator.ConvertTo<string>(pIVar1);
			if ((__a.Length & 0xfffffffe) != 0) {
				normalizedTime = CustomLogicEvaluator.ConvertTo<float>(__a[1]);
				layer = 0;
				if ((int)__a.Length < 3) {
					fade = 0.1;
				}
				else {
					pIVar1 = __a[2];
					fade = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
					if (3 < (int)__a.Length) {
						pIVar1 = __a[3];
						layer = CustomLogicEvaluator.ConvertTo<int>(pIVar1);
					}
				}
				if (__c != null) {
					__c.PlayAnimationAt(anim, normalizedTime, fade, layer);
					return null;
				}
				goto label_059ebcf6;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__PlayAnimationQueued>b__5_0: clean
	private object Bindings_c____CreateMethodBinding__PlayAnimationQueued_b__5_0(CustomLogicAnimationBuiltin __c, Object[] __a)
	{
		object obj;
		Animation __this_00;
		String animation;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			animation = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__c != null) &&(__this_00 = __c.Value, __this_00 != null)) {
				__this_00.PlayQueued(animation);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__StopAnimation>b__6_0: clean
	private object Bindings_c____CreateMethodBinding__StopAnimation_b__6_0(CustomLogicAnimationBuiltin __c, Object[] __a)
	{
		object obj;
		String name;
		Animation __this_00;

		if (__a == null) goto label_059ebe50;
		if (__a.Length == 0) {
			if (__c == null) goto label_059ebe50;
			__this_00 = __c.Value;
		}
		else {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			name = CustomLogicEvaluator.ConvertTo<string>(obj);
			if (__c == null) goto label_059ebe50;
			__this_00 = __c.Value;
			if (name != null) {
				if (__this_00 != null) {
					__this_00.Stop(name);
					return null;
				}
				goto label_059ebe50;
			}
		}
		if (__this_00 != null) {
			__this_00.Stop();
			return null;
		}
	label_059ebe50: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetAnimationSpeed>b__7_0: clean
	private object Bindings_c____CreateMethodBinding__SetAnimationSpeed_b__7_0(CustomLogicAnimationBuiltin __c, Object[] __a)
	{
		object obj;
		Animation __this_00;
		String name;
		AnimationState __this_01;
		float value;

		if (__a == null) {
	label_059ebf42: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			name = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				value = CustomLogicEvaluator.ConvertTo<float>(__a[1]);
				if (__c != null) {
					__this_00 = __c.Value;
					if (__this_00 != null) {
						__this_01 = __this_00.get_Item(name);
						if (__this_01 != null) {
							__this_01.speed = value;
							return null;
						}
					}
				}
				goto label_059ebf42;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetAnimationSpeed>b__8_0: clean
	private object Bindings_c____CreateMethodBinding__GetAnimationSpeed_b__8_0(CustomLogicAnimationBuiltin __c, Object[] __a)
	{
		Animation __this_00;
		String name;
		AnimationState __this_01;
		object pIVar1;
		byte[] auStack_14 = new byte[4];

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			name = CustomLogicEvaluator.ConvertTo<string>(pIVar1);
			if ((__c != null) &&(__this_00 = __c.Value, __this_00 != null)) {
				__this_01 = __this_00.get_Item(name);
				if (__this_01 != null) {
					__this_01.speed;
					pIVar1 = (object)auStack_14;
					return pIVar1;
				}
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetAnimationLength>b__9_0: clean
	private object Bindings_c____CreateMethodBinding__GetAnimationLength_b__9_0(CustomLogicAnimationBuiltin __c, Object[] __a)
	{
		Animation __this_00;
		String name;
		AnimationState __this_01;
		object pIVar1;
		byte[] auStack_14 = new byte[4];

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			name = CustomLogicEvaluator.ConvertTo<string>(pIVar1);
			if ((__c != null) &&(__this_00 = __c.Value, __this_00 != null)) {
				__this_01 = __this_00.get_Item(name);
				if (__this_01 != null) {
					__this_01.length;
					pIVar1 = (object)auStack_14;
					return pIVar1;
				}
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetAnimationNormalizedTime>b__10_0: clean
	private object Bindings_c____CreateMethodBinding__GetAnimationNormalizedTime_b__10_0(CustomLogicAnimationBuiltin __c, Object[] __a)
	{
		Animation __this_00;
		String name;
		AnimationState __this_01;
		object pIVar1;
		byte[] auStack_14 = new byte[4];

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			name = CustomLogicEvaluator.ConvertTo<string>(pIVar1);
			if ((__c != null) &&(__this_00 = __c.Value, __this_00 != null)) {
				__this_01 = __this_00.get_Item(name);
				if (__this_01 != null) {
					__this_01.normalizedTime;
					pIVar1 = (object)auStack_14;
					return pIVar1;
				}
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetAnimationNormalizedTime>b__11_0: clean
	private object Bindings_c____CreateMethodBinding__SetAnimationNormalizedTime_b__11_0(CustomLogicAnimationBuiltin __c, Object[] __a)
	{
		object obj;
		Animation __this_00;
		String name;
		AnimationState __this_01;
		float value;

		if (__a == null) {
	label_059ec272: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			name = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				value = CustomLogicEvaluator.ConvertTo<float>(__a[1]);
				if (__c != null) {
					__this_00 = __c.Value;
					if (__this_00 != null) {
						__this_01 = __this_00.get_Item(name);
						if (__this_01 != null) {
							__this_01.normalizedTime = value;
							return null;
						}
					}
				}
				goto label_059ec272;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetWeight>b__12_0: clean
	private object Bindings_c____CreateMethodBinding__SetWeight_b__12_0(CustomLogicAnimationBuiltin __c, Object[] __a)
	{
		object obj;
		Animation __this_00;
		String name;
		AnimationState __this_01;
		float value;

		if (__a == null) {
	label_059ec362: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			name = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				value = CustomLogicEvaluator.ConvertTo<float>(__a[1]);
				if (__c != null) {
					__this_00 = __c.Value;
					if (__this_00 != null) {
						__this_01 = __this_00.get_Item(name);
						if (__this_01 != null) {
							__this_01.weight = value;
							return null;
						}
					}
				}
				goto label_059ec362;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicAnimationBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetWeight>b__13_0: clean
	private object Bindings_c____CreateMethodBinding__GetWeight_b__13_0(CustomLogicAnimationBuiltin __c, Object[] __a)
	{
		Animation __this_00;
		String name;
		AnimationState __this_01;
		object pIVar1;
		byte[] auStack_14 = new byte[4];

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			name = CustomLogicEvaluator.ConvertTo<string>(pIVar1);
			if ((__c != null) &&(__this_00 = __c.Value, __this_00 != null)) {
				__this_01 = __this_00.get_Item(name);
				if (__this_01 != null) {
					__this_01.weight;
					pIVar1 = (object)auStack_14;
					return pIVar1;
				}
			}
		}
		throw new NullReferenceException();
	}
}
