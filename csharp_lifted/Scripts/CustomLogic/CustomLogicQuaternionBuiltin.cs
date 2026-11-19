// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicQuaternionBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicQuaternionBuiltin.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x200046C")]
[CompilerGenerated]
internal class CustomLogicQuaternionBuiltin : BuiltinClassInstance, ICustomLogicMathOperators, ICustomLogicEquals, ICustomLogicCopyable
{
	[Token(Token = "0x200046D")]
	public static class Factory
	{
		[Token(Token = "0x6001BCD")]
		[Address(RVA = "0x58B5C80", Offset = "0x58B4C80", VA = "0x58B5C80")]
		public static CustomLogicQuaternionBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			object obj;
			UnityEngine_Quaternion_StaticFields pUVar1;
			float fVar2;
			float fVar3;
			float fVar4;
			CustomLogicQuaternionBuiltin pCVar5;
			String pSVar6;
			String str0;
			String str2;
			Il2CppClass klass;
			ArgumentException __this;
			MethodInfo lastManagedFrame;
			float fVar7;
			float fVar8;
			float fVar9;
			float fVar10;
			int local_1c;

			if (args == null) {
				throw new NullReferenceException();
			}
			if (args.Length == 0) {
				pUVar1 = typeof(Quaternion).static_fields;
				fVar7 = (pUVar1.identityQuaternion).y;
				fVar8 = (pUVar1.identityQuaternion).z;
				fVar9 = (pUVar1.identityQuaternion).w;
				pCVar5.Value.x = (pUVar1.identityQuaternion).x;
				pCVar5.Value.y = fVar7;
				pCVar5.Value.z = fVar8;
				pCVar5.Value.w = fVar9;
				pCVar5 = new CustomLogicQuaternionBuiltin();
				return pCVar5;
			}
			if ((int)args.Length != 4) {
				local_1c = (int32_t)args.Length;
				pSVar6 = local_1c.ToString();
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicQuaternionBuiltin constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar6 = String.Concat(str0, pSVar6, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this = new ArgumentException(pSVar6);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Factory_CreateInstance);
				throw (object)__this;
			}
			obj = args[0];
			fVar7 = CustomLogicEvaluator.ConvertTo<float>(obj);
			if ((((args.Length & 0xfffffffe) == 0) ||(fVar8 = CustomLogicEvaluator.ConvertTo<float>(args[1]),(uint)args.Length < 3)) ||(fVar9 = CustomLogicEvaluator.ConvertTo<float>(args[2]),(args.Length & 0xfffffffc) == 0)) {
				throw new IndexOutOfRangeException();
			}
			fVar10 = CustomLogicEvaluator.ConvertTo<float>(args[3]);
			pUVar1 = typeof(Quaternion).static_fields;
			fVar2 = (pUVar1.identityQuaternion).y;
			fVar3 = (pUVar1.identityQuaternion).z;
			fVar4 = (pUVar1.identityQuaternion).w;
			pCVar5.Value.x = (pUVar1.identityQuaternion).x;
			pCVar5.Value.y = fVar2;
			pCVar5.Value.z = fVar3;
			pCVar5.Value.w = fVar4;
			pCVar5 = new CustomLogicQuaternionBuiltin();
			pCVar5.Value.x = fVar7;
			pCVar5.Value.y = fVar8;
			pCVar5.Value.z = fVar9;
			pCVar5.Value.w = fVar10;
			return pCVar5;
		}
	}

	[Token(Token = "0x200046E")]
	public static class Bindings
	{
		[Token(Token = "0x40015FB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001BCE")]
		[Address(RVA = "0x58B5F50", Offset = "0x58B4F50", VA = "0x58B5F50")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLMethodBinding<CustomLogicQuaternionBuiltin> pCVar3;
			CLPropertyBinding<CustomLogicQuaternionBuiltin> pCVar4;
			String pSVar5;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x91ba4e13) {
				if (uVar2 < 0x39c493b9) {
					if (uVar2 < 0x18c37b42) {
						if (uVar2 == 0x18535612) {
							bVar1 = (name == "Euler");
							if (bVar1) {
								pCVar4 = CustomLogicQuaternionBuiltin.Bindings.__CreatePropertyBinding__Euler();
								return (ICLMemberBinding)pCVar4;
							}
						}
						else if (uVar2 == 0x18c37b41) {
							bVar1 = (name == "__Mul__");
							if (bVar1) {
								pCVar3 = CustomLogicQuaternionBuiltin.Bindings.__CreateMethodBinding____Mul__();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x27b48c82) {
						bVar1 = (name == "FromEuler");
						if (bVar1) {
							if ((typeof(CustomLogicQuaternionBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
							}
							pCVar3 = CustomLogicQuaternionBuiltin.Bindings.__CreateMethodBinding__FromEuler();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x39907617) {
						bVar1 = (name == "Slerp");
						if (bVar1) {
							if ((typeof(CustomLogicQuaternionBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
							}
							pCVar3 = CustomLogicQuaternionBuiltin.Bindings.__CreateMethodBinding__Slerp();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x39c493b8) {
						bVar1 = (name == "Angle");
						if (bVar1) {
							if ((typeof(CustomLogicQuaternionBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
							}
							pCVar3 = CustomLogicQuaternionBuiltin.Bindings.__CreateMethodBinding__Angle();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x549f4d11) {
					if (uVar2 == 0x3c0ea91a) {
						bVar1 = (name == "RotateTowards");
						if (bVar1) {
							if ((typeof(CustomLogicQuaternionBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
							}
							pCVar3 = CustomLogicQuaternionBuiltin.Bindings.__CreateMethodBinding__RotateTowards();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x549f4d10) {
						bVar1 = (name == "__Copy__");
						if (bVar1) {
							if ((typeof(CustomLogicQuaternionBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
							}
							pCVar3 = CustomLogicQuaternionBuiltin.Bindings.__CreateMethodBinding____Copy__();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x91ba4e12) {
					bVar1 = (name == "FromToRotation");
					if (bVar1) {
						pCVar3 = CustomLogicQuaternionBuiltin.Bindings.__CreateMethodBinding__FromToRotation();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x6a4c91d6) {
					bVar1 = (name == "SlerpUnclamped");
					if (bVar1) {
						pCVar3 = CustomLogicQuaternionBuiltin.Bindings.__CreateMethodBinding__SlerpUnclamped();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x792a6491) {
					bVar1 = (name == "__Hash__");
					if (bVar1) {
						pCVar3 = CustomLogicQuaternionBuiltin.Bindings.__CreateMethodBinding____Hash__();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xd20c0cd7) {
				if (uVar2 < 0x9e956089) {
					if (uVar2 == 0x91efe6d7) {
						bVar1 = (name == "__Eq__");
						if (bVar1) {
							if ((typeof(CustomLogicQuaternionBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
							}
							pCVar3 = CustomLogicQuaternionBuiltin.Bindings.__CreateMethodBinding____Eq__();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x9e956088) {
						bVar1 = (name == "Lerp");
						if (bVar1) {
							if ((typeof(CustomLogicQuaternionBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
							}
							pCVar3 = CustomLogicQuaternionBuiltin.Bindings.__CreateMethodBinding__Lerp();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0xbcf8f25c) {
					bVar1 = (name == "LookRotation");
					if (bVar1) {
						pCVar3 = CustomLogicQuaternionBuiltin.Bindings.__CreateMethodBinding__LookRotation();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xc95e1923) {
					bVar1 = (name == "Inverse");
					if (bVar1) {
						pCVar3 = CustomLogicQuaternionBuiltin.Bindings.__CreateMethodBinding__Inverse();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xd20c0cd6) {
					bVar1 = (name == "W");
					if (bVar1) {
						pCVar4 = CustomLogicQuaternionBuiltin.Bindings.__CreatePropertyBinding__W();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 < 0xdf0c214e) {
				if (uVar2 == 0xdc0c1c94) {
					bVar1 = (name == "Y");
					if (bVar1) {
						pCVar4 = CustomLogicQuaternionBuiltin.Bindings.__CreatePropertyBinding__Y();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0xdd0c1e27) {
					bVar1 = (name == "X");
					if (bVar1) {
						pCVar4 = CustomLogicQuaternionBuiltin.Bindings.__CreatePropertyBinding__X();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0xdf0c214d) {
					bVar1 = (name == "Z");
					if (bVar1) {
						pCVar4 = CustomLogicQuaternionBuiltin.Bindings.__CreatePropertyBinding__Z();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 == 0xdfc1d0bb) {
				bVar1 = (name == "Identity");
				if (bVar1) {
					pCVar4 = CustomLogicQuaternionBuiltin.Bindings.__CreatePropertyBinding__Identity();
					return (ICLMemberBinding)pCVar4;
				}
			}
			else if (uVar2 == 0xf4248f7b) {
				bVar1 = (name == "LerpUnclamped");
				if (bVar1) {
					pCVar3 = CustomLogicQuaternionBuiltin.Bindings.__CreateMethodBinding__LerpUnclamped();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xf6586339) {
				bVar1 = (name == "AngleAxis");
				if (bVar1) {
					pCVar3 = CustomLogicQuaternionBuiltin.Bindings.__CreateMethodBinding__AngleAxis();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicQuaternionBuiltin not found");
			pSVar5 = String.Concat(pSVar5, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6001BCF")]
		[Address(RVA = "0x58B6750", Offset = "0x58B5750", VA = "0x58B6750")]
		public static CLPropertyBinding<CustomLogicQuaternionBuiltin> __CreatePropertyBinding__X()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreatePropertyBinding__X): 3 lines keep C-only constructs
			Func<CustomLogicQuaternionBuiltin, object> __this;
			Action<CustomLogicQuaternionBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicQuaternionBuiltin> __this_01;

			__this = new Func<CustomLogicQuaternionBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__X_g____getter_2_0);
			__this_00 = new Action<CustomLogicQuaternionBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__X_g____setter_2_1);
			__this_01 = new CLPropertyBinding<CustomLogicQuaternionBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00) ;
			return __this_01;
		}

		[Token(Token = "0x6001BD0")]
		[Address(RVA = "0x58B6830", Offset = "0x58B5830", VA = "0x58B6830")]
		public static CLPropertyBinding<CustomLogicQuaternionBuiltin> __CreatePropertyBinding__Y()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreatePropertyBinding__Y): 3 lines keep C-only constructs
			Func<CustomLogicQuaternionBuiltin, object> __this;
			Action<CustomLogicQuaternionBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicQuaternionBuiltin> __this_01;

			__this = new Func<CustomLogicQuaternionBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__Y_g____getter_3_0);
			__this_00 = new Action<CustomLogicQuaternionBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__Y_g____setter_3_1);
			__this_01 = new CLPropertyBinding<CustomLogicQuaternionBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00) ;
			return __this_01;
		}

		[Token(Token = "0x6001BD1")]
		[Address(RVA = "0x58B6910", Offset = "0x58B5910", VA = "0x58B6910")]
		public static CLPropertyBinding<CustomLogicQuaternionBuiltin> __CreatePropertyBinding__Z()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreatePropertyBinding__Z): 3 lines keep C-only constructs
			Func<CustomLogicQuaternionBuiltin, object> __this;
			Action<CustomLogicQuaternionBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicQuaternionBuiltin> __this_01;

			__this = new Func<CustomLogicQuaternionBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__Z_g____getter_4_0);
			__this_00 = new Action<CustomLogicQuaternionBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__Z_g____setter_4_1);
			__this_01 = new CLPropertyBinding<CustomLogicQuaternionBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00) ;
			return __this_01;
		}

		[Token(Token = "0x6001BD2")]
		[Address(RVA = "0x58B69F0", Offset = "0x58B59F0", VA = "0x58B69F0")]
		public static CLPropertyBinding<CustomLogicQuaternionBuiltin> __CreatePropertyBinding__W()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreatePropertyBinding__W): 3 lines keep C-only constructs
			Func<CustomLogicQuaternionBuiltin, object> __this;
			Action<CustomLogicQuaternionBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicQuaternionBuiltin> __this_01;

			__this = new Func<CustomLogicQuaternionBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__W_g____getter_5_0);
			__this_00 = new Action<CustomLogicQuaternionBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__W_g____setter_5_1);
			__this_01 = new CLPropertyBinding<CustomLogicQuaternionBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00) ;
			return __this_01;
		}

		[Token(Token = "0x6001BD3")]
		[Address(RVA = "0x58B6AD0", Offset = "0x58B5AD0", VA = "0x58B6AD0")]
		public static CLPropertyBinding<CustomLogicQuaternionBuiltin> __CreatePropertyBinding__Euler()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreatePropertyBinding__Euler): 3 lines keep C-only constructs
			Func<CustomLogicQuaternionBuiltin, object> __this;
			Action<CustomLogicQuaternionBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicQuaternionBuiltin> __this_01;

			__this = new Func<CustomLogicQuaternionBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__Euler_g____getter_6_0);
			__this_00 = new Action<CustomLogicQuaternionBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__Euler_g____setter_6_1);
			__this_01 = new CLPropertyBinding<CustomLogicQuaternionBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00) ;
			return __this_01;
		}

		[Token(Token = "0x6001BD4")]
		[Address(RVA = "0x58B6BB0", Offset = "0x58B5BB0", VA = "0x58B6BB0")]
		public static CLPropertyBinding<CustomLogicQuaternionBuiltin> __CreatePropertyBinding__Identity()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreatePropertyBinding__Identity): 2 lines keep C-only constructs
			Func<CustomLogicQuaternionBuiltin, object> __this;
			CLPropertyBinding<CustomLogicQuaternionBuiltin> __this_00;

			__this = new Func<CustomLogicQuaternionBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings___CreatePropertyBinding__Identity_g____getter);
			__this_00 = new CLPropertyBinding<CustomLogicQuaternionBuiltin>((System_Func_T__object__o)__this, null) ;
			return __this_00;
		}

		[Token(Token = "0x6001BD5")]
		[Address(RVA = "0x58B6C50", Offset = "0x58B5C50", VA = "0x58B6C50")]
		public static CLMethodBinding<CustomLogicQuaternionBuiltin> __CreateMethodBinding__Lerp()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__Lerp): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicQuaternionBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicQuaternionBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545b7a == false) {
				Il2CppMethodInitialized_07545b7a = true;
				uVar1 = (typeof(CustomLogicQuaternionBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicQuaternionBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicQuaternionBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__8_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicQuaternionBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__8_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicQuaternionBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicQuaternionBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicQuaternionBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__Lerp_b__8_0);
				pCVar2 = typeof(CustomLogicQuaternionBuiltin.Bindings.c).static_fields;
				pCVar2.__9__8_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicQuaternionBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001BD6")]
		[Address(RVA = "0x58B6D90", Offset = "0x58B5D90", VA = "0x58B6D90")]
		public static CLMethodBinding<CustomLogicQuaternionBuiltin> __CreateMethodBinding__LerpUnclamped()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__LerpUnclamped): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicQuaternionBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicQuaternionBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545b7b == false) {
				Il2CppMethodInitialized_07545b7b = true;
				uVar1 = (typeof(CustomLogicQuaternionBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicQuaternionBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicQuaternionBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__9_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicQuaternionBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__9_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicQuaternionBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicQuaternionBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicQuaternionBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__LerpUnclamped_b__9_0);
				pCVar2 = typeof(CustomLogicQuaternionBuiltin.Bindings.c).static_fields;
				pCVar2.__9__9_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicQuaternionBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001BD7")]
		[Address(RVA = "0x58B6ED0", Offset = "0x58B5ED0", VA = "0x58B6ED0")]
		public static CLMethodBinding<CustomLogicQuaternionBuiltin> __CreateMethodBinding__Slerp()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__Slerp): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicQuaternionBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicQuaternionBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545b7c == false) {
				Il2CppMethodInitialized_07545b7c = true;
				uVar1 = (typeof(CustomLogicQuaternionBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicQuaternionBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicQuaternionBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__10_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicQuaternionBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__10_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicQuaternionBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicQuaternionBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicQuaternionBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__Slerp_b__10_0);
				pCVar2 = typeof(CustomLogicQuaternionBuiltin.Bindings.c).static_fields;
				pCVar2.__9__10_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicQuaternionBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001BD8")]
		[Address(RVA = "0x58B7010", Offset = "0x58B6010", VA = "0x58B7010")]
		public static CLMethodBinding<CustomLogicQuaternionBuiltin> __CreateMethodBinding__SlerpUnclamped()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__SlerpUnclamped): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicQuaternionBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicQuaternionBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545b7d == false) {
				Il2CppMethodInitialized_07545b7d = true;
				uVar1 = (typeof(CustomLogicQuaternionBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicQuaternionBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicQuaternionBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__11_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicQuaternionBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__11_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicQuaternionBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicQuaternionBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicQuaternionBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__SlerpUnclamped_b__11);
				pCVar2 = typeof(CustomLogicQuaternionBuiltin.Bindings.c).static_fields;
				pCVar2.__9__11_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicQuaternionBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001BD9")]
		[Address(RVA = "0x58B7150", Offset = "0x58B6150", VA = "0x58B7150")]
		public static CLMethodBinding<CustomLogicQuaternionBuiltin> __CreateMethodBinding__FromEuler()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__FromEuler): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicQuaternionBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicQuaternionBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545b7e == false) {
				Il2CppMethodInitialized_07545b7e = true;
				uVar1 = (typeof(CustomLogicQuaternionBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicQuaternionBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicQuaternionBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__12_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicQuaternionBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__12_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicQuaternionBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicQuaternionBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicQuaternionBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__FromEuler_b__12_0);
				pCVar2 = typeof(CustomLogicQuaternionBuiltin.Bindings.c).static_fields;
				pCVar2.__9__12_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicQuaternionBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001BDA")]
		[Address(RVA = "0x58B7290", Offset = "0x58B6290", VA = "0x58B7290")]
		public static CLMethodBinding<CustomLogicQuaternionBuiltin> __CreateMethodBinding__LookRotation()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__LookRotation): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicQuaternionBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicQuaternionBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545b7f == false) {
				Il2CppMethodInitialized_07545b7f = true;
				uVar1 = (typeof(CustomLogicQuaternionBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicQuaternionBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicQuaternionBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__13_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicQuaternionBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__13_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicQuaternionBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicQuaternionBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicQuaternionBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__LookRotation_b__13_0);
				pCVar2 = typeof(CustomLogicQuaternionBuiltin.Bindings.c).static_fields;
				pCVar2.__9__13_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicQuaternionBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001BDB")]
		[Address(RVA = "0x58B73D0", Offset = "0x58B63D0", VA = "0x58B73D0")]
		public static CLMethodBinding<CustomLogicQuaternionBuiltin> __CreateMethodBinding__FromToRotation()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__FromToRotation): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicQuaternionBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicQuaternionBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545b80 == false) {
				Il2CppMethodInitialized_07545b80 = true;
				uVar1 = (typeof(CustomLogicQuaternionBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicQuaternionBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicQuaternionBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__14_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicQuaternionBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__14_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicQuaternionBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicQuaternionBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicQuaternionBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__FromToRotation_b__14);
				pCVar2 = typeof(CustomLogicQuaternionBuiltin.Bindings.c).static_fields;
				pCVar2.__9__14_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicQuaternionBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001BDC")]
		[Address(RVA = "0x58B7510", Offset = "0x58B6510", VA = "0x58B7510")]
		public static CLMethodBinding<CustomLogicQuaternionBuiltin> __CreateMethodBinding__Inverse()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__Inverse): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicQuaternionBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicQuaternionBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545b81 == false) {
				Il2CppMethodInitialized_07545b81 = true;
				uVar1 = (typeof(CustomLogicQuaternionBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicQuaternionBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicQuaternionBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__15_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicQuaternionBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__15_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicQuaternionBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicQuaternionBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicQuaternionBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__Inverse_b__15_0);
				pCVar2 = typeof(CustomLogicQuaternionBuiltin.Bindings.c).static_fields;
				pCVar2.__9__15_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicQuaternionBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001BDD")]
		[Address(RVA = "0x58B7650", Offset = "0x58B6650", VA = "0x58B7650")]
		public static CLMethodBinding<CustomLogicQuaternionBuiltin> __CreateMethodBinding__RotateTowards()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__RotateTowards): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicQuaternionBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicQuaternionBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545b82 == false) {
				Il2CppMethodInitialized_07545b82 = true;
				uVar1 = (typeof(CustomLogicQuaternionBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicQuaternionBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicQuaternionBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__16_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicQuaternionBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__16_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicQuaternionBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicQuaternionBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicQuaternionBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__RotateTowards_b__16_0);
				pCVar2 = typeof(CustomLogicQuaternionBuiltin.Bindings.c).static_fields;
				pCVar2.__9__16_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicQuaternionBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001BDE")]
		[Address(RVA = "0x58B7790", Offset = "0x58B6790", VA = "0x58B7790")]
		public static CLMethodBinding<CustomLogicQuaternionBuiltin> __CreateMethodBinding__AngleAxis()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__AngleAxis): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicQuaternionBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicQuaternionBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545b83 == false) {
				Il2CppMethodInitialized_07545b83 = true;
				uVar1 = (typeof(CustomLogicQuaternionBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicQuaternionBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicQuaternionBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__17_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicQuaternionBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__17_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicQuaternionBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicQuaternionBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicQuaternionBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__AngleAxis_b__17_0);
				pCVar2 = typeof(CustomLogicQuaternionBuiltin.Bindings.c).static_fields;
				pCVar2.__9__17_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicQuaternionBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001BDF")]
		[Address(RVA = "0x58B78D0", Offset = "0x58B68D0", VA = "0x58B78D0")]
		public static CLMethodBinding<CustomLogicQuaternionBuiltin> __CreateMethodBinding__Angle()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__Angle): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicQuaternionBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicQuaternionBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545b84 == false) {
				Il2CppMethodInitialized_07545b84 = true;
				uVar1 = (typeof(CustomLogicQuaternionBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicQuaternionBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicQuaternionBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__18_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicQuaternionBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__18_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicQuaternionBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicQuaternionBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicQuaternionBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding__Angle_b__18_0);
				pCVar2 = typeof(CustomLogicQuaternionBuiltin.Bindings.c).static_fields;
				pCVar2.__9__18_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicQuaternionBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001BE0")]
		[Address(RVA = "0x58B7A10", Offset = "0x58B6A10", VA = "0x58B7A10")]
		public static CLMethodBinding<CustomLogicQuaternionBuiltin> __CreateMethodBinding____Copy__()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding____Copy__): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicQuaternionBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicQuaternionBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545b85 == false) {
				Il2CppMethodInitialized_07545b85 = true;
				uVar1 = (typeof(CustomLogicQuaternionBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicQuaternionBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicQuaternionBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__19_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicQuaternionBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__19_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicQuaternionBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicQuaternionBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicQuaternionBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding____Copy___b__19_0);
				pCVar2 = typeof(CustomLogicQuaternionBuiltin.Bindings.c).static_fields;
				pCVar2.__9__19_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicQuaternionBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001BE1")]
		[Address(RVA = "0x58B7B50", Offset = "0x58B6B50", VA = "0x58B7B50")]
		public static CLMethodBinding<CustomLogicQuaternionBuiltin> __CreateMethodBinding____Mul__()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding____Mul__): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicQuaternionBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicQuaternionBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545b86 == false) {
				Il2CppMethodInitialized_07545b86 = true;
				uVar1 = (typeof(CustomLogicQuaternionBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicQuaternionBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicQuaternionBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__20_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicQuaternionBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__20_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicQuaternionBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicQuaternionBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicQuaternionBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding____Mul___b__20_0);
				pCVar2 = typeof(CustomLogicQuaternionBuiltin.Bindings.c).static_fields;
				pCVar2.__9__20_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicQuaternionBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001BE2")]
		[Address(RVA = "0x58B7C90", Offset = "0x58B6C90", VA = "0x58B7C90")]
		public static CLMethodBinding<CustomLogicQuaternionBuiltin> __CreateMethodBinding____Eq__()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding____Eq__): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicQuaternionBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicQuaternionBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545b87 == false) {
				Il2CppMethodInitialized_07545b87 = true;
				uVar1 = (typeof(CustomLogicQuaternionBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicQuaternionBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicQuaternionBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__21_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicQuaternionBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__21_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicQuaternionBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicQuaternionBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicQuaternionBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding____Eq___b__21_0);
				pCVar2 = typeof(CustomLogicQuaternionBuiltin.Bindings.c).static_fields;
				pCVar2.__9__21_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicQuaternionBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001BE3")]
		[Address(RVA = "0x58B7DD0", Offset = "0x58B6DD0", VA = "0x58B7DD0")]
		public static CLMethodBinding<CustomLogicQuaternionBuiltin> __CreateMethodBinding____Hash__()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding____Hash__): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicQuaternionBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicQuaternionBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545b88 == false) {
				Il2CppMethodInitialized_07545b88 = true;
				uVar1 = (typeof(CustomLogicQuaternionBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicQuaternionBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicQuaternionBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__22_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicQuaternionBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__22_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicQuaternionBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicQuaternionBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicQuaternionBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin_Bindings_c___CreateMethodBinding____Hash___b__22_0);
				pCVar2 = typeof(CustomLogicQuaternionBuiltin.Bindings.c).static_fields;
				pCVar2.__9__22_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicQuaternionBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x40015FA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public Quaternion Value;

	[Token(Token = "0x170002FD")]
	public float X
	{
		[Token(Token = "0x6001BA8")]
		[Address(RVA = "0x58B4E90", Offset = "0x58B3E90", VA = "0x58B4E90")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin$$get_X): clean
			return this.Value.x;
		}
		[Token(Token = "0x6001BA9")]
		[Address(RVA = "0x58B4EA0", Offset = "0x58B3EA0", VA = "0x58B4EA0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin$$set_X): clean
			this.Value.x = value;
			return;
		}
	}

	[Token(Token = "0x170002FE")]
	public float Y
	{
		[Token(Token = "0x6001BAA")]
		[Address(RVA = "0x58B4EB0", Offset = "0x58B3EB0", VA = "0x58B4EB0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin$$get_Y): clean
			return this.Value.y;
		}
		[Token(Token = "0x6001BAB")]
		[Address(RVA = "0x58B4EC0", Offset = "0x58B3EC0", VA = "0x58B4EC0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin$$set_Y): clean
			this.Value.y = value;
			return;
		}
	}

	[Token(Token = "0x170002FF")]
	public float Z
	{
		[Token(Token = "0x6001BAC")]
		[Address(RVA = "0x58B4ED0", Offset = "0x58B3ED0", VA = "0x58B4ED0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin$$get_Z): clean
			return this.Value.z;
		}
		[Token(Token = "0x6001BAD")]
		[Address(RVA = "0x58B4EE0", Offset = "0x58B3EE0", VA = "0x58B4EE0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin$$set_Z): clean
			this.Value.z = value;
			return;
		}
	}

	[Token(Token = "0x17000300")]
	public float W
	{
		[Token(Token = "0x6001BAE")]
		[Address(RVA = "0x58B4EF0", Offset = "0x58B3EF0", VA = "0x58B4EF0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin$$get_W): clean
			return this.Value.w;
		}
		[Token(Token = "0x6001BAF")]
		[Address(RVA = "0x58B4F00", Offset = "0x58B3F00", VA = "0x58B4F00")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin$$set_W): clean
			this.Value.w = value;
			return;
		}
	}

	[Token(Token = "0x17000301")]
	public CustomLogicVector3Builtin Euler
	{
		[Token(Token = "0x6001BB0")]
		[Address(RVA = "0x58B4F10", Offset = "0x58B3F10", VA = "0x58B4F10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin$$get_Euler): clean
			CustomLogicVector3Builtin pCVar1;
			Vector3 UVar2;
			Vector3 euler;

			UVar2 = Quaternion.Internal_ToEulerRad(ref this.Value);
			euler.x = UVar2.x * 57.29578;
			euler.y = UVar2.y * 57.29578;
			euler.z = UVar2.z * 57.29578;
			UVar2 = Quaternion.Internal_MakePositive(euler);
			return pCVar1;
		}
		[Token(Token = "0x6001BB1")]
		[Address(RVA = "0x58B4F40", Offset = "0x58B3F40", VA = "0x58B4F40")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin$$set_Euler): clean
			uint uVar1;
			uint uVar2;
			Quaternion UVar3;
			Vector3 local_18;

			if (value == null) {
				throw new NullReferenceException();
			}
			uVar1 = value.Value.x;
			uVar2 = value.Value.y;
			local_18.z = value.Value.z * 0.017453292;
			local_18.y = (float)uVar2 * 0.017453292;
			local_18.x = (float)uVar1 * 0.017453292;
			UVar3 = (Quaternion)Quaternion.Internal_FromEulerRad(ref local_18);
			this.Value = UVar3;
			return;
		}
	}

	[Token(Token = "0x17000302")]
	public static CustomLogicQuaternionBuiltin Identity
	{
		[Token(Token = "0x6001BB2")]
		[Address(RVA = "0x58B4F90", Offset = "0x58B3F90", VA = "0x58B4F90")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin$$get_Identity): 3 lines keep C-only constructs
			CustomLogicQuaternionBuiltin pCVar1;
			Quaternion* ppUVar2;

			if (Il2CppMethodInitialized_0753e72b == false) {
				ppUVar2 = &typeof(Quaternion);
				Il2CppMethodInitialized_0753e72b = true;
			}
			pCVar1 = ((CustomLogicQuaternionBuiltin)(UnityEngine_Quaternion_o) *(Quaternion)typeof(Quaternion).static_fields) ;
			return pCVar1;
		}
	}

	[Token(Token = "0x17000303")]
	public override string ClassName
	{
		[Token(Token = "0x6001BC9")]
		[Address(RVA = "0x58B5C20", Offset = "0x58B4C20", VA = "0x58B5C20", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin$$get_ClassName): clean
			return "Quaternion";
		}
	}

	[Token(Token = "0x17000304")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001BCA")]
		[Address(RVA = "0x58B5C50", Offset = "0x58B4C50", VA = "0x58B5C50", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin$$get_IsAbstract): clean
			return false;
		}
	}

	[Token(Token = "0x17000305")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001BCB")]
		[Address(RVA = "0x58B5C60", Offset = "0x58B4C60", VA = "0x58B5C60", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x17000306")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001BCC")]
		[Address(RVA = "0x58B5C70", Offset = "0x58B4C70", VA = "0x58B5C70", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6001BA5")]
	[Address(RVA = "0x58B4C90", Offset = "0x58B3C90", VA = "0x58B4C90")]
	public CustomLogicQuaternionBuiltin()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin$$.ctor): clean
		float fVar2;
		float fVar3;
		float fVar4;

		fVar2 = (Quaternion.identityQuaternion).y;
		fVar3 = (Quaternion.identityQuaternion).z;
		fVar4 = (Quaternion.identityQuaternion).w;
		this.Value.x = (Quaternion.identityQuaternion).x;
		this.Value.y = fVar2;
		this.Value.z = fVar3;
		this.Value.w = fVar4;
		if ((typeof(BuiltinClassInstance)._2).cctor_finished_or_no_cctor == 0) {
			base();
			return;
		}
		base();
		return;
	}

	[Token(Token = "0x6001BA6")]
	[Address(RVA = "0x58B4D20", Offset = "0x58B3D20", VA = "0x58B4D20")]
	public CustomLogicQuaternionBuiltin(float x, float y, float z, float w)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin$$.ctor): clean
		float fVar2;
		float fVar3;
		float fVar4;

		fVar2 = (Quaternion.identityQuaternion).y;
		fVar3 = (Quaternion.identityQuaternion).z;
		fVar4 = (Quaternion.identityQuaternion).w;
		this.Value.x = (Quaternion.identityQuaternion).x;
		this.Value.y = fVar2;
		this.Value.z = fVar3;
		this.Value.w = fVar4;
		base();
		this.Value.x = x;
		this.Value.y = y;
		this.Value.z = z;
		this.Value.w = w;
		return;
	}

	[Token(Token = "0x6001BA7")]
	[Address(RVA = "0x58B4DF0", Offset = "0x58B3DF0", VA = "0x58B4DF0")]
	public CustomLogicQuaternionBuiltin(Quaternion value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin$$.ctor): clean
		float fVar2;
		float fVar3;
		float fVar4;
		float local_28;
		float fStack_24;

		fVar2 = (Quaternion.identityQuaternion).y;
		fVar3 = (Quaternion.identityQuaternion).z;
		fVar4 = (Quaternion.identityQuaternion).w;
		this.Value.x = (Quaternion.identityQuaternion).x;
		this.Value.y = fVar2;
		this.Value.z = fVar3;
		this.Value.w = fVar4;
		base();
		local_28 = value.x;
		fStack_24 = value.y;
		this.Value.x = local_28;
		this.Value.y = fStack_24;
		this.Value.z = value.z;
		this.Value.w = value.w;
		return;
	}

	[Token(Token = "0x6001BB3")]
	[Address(RVA = "0x58B50A0", Offset = "0x58B40A0", VA = "0x58B50A0")]
	public static CustomLogicQuaternionBuiltin Lerp(CustomLogicQuaternionBuiltin a, CustomLogicQuaternionBuiltin b, float t)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin$$Lerp): 3 lines keep C-only constructs
		CustomLogicQuaternionBuiltin pCVar1;
		MethodInfo method_00;
		Quaternion q;
		Quaternion local_20;
		Il2CppMethodPointer local_10;
		Il2CppMethodPointer pIStack_8;

		if ((a == null) ||(b == null)) {
			throw new NullReferenceException();
		}
		local_10 = *(Il2CppMethodPointer)&a.Value;
		pIStack_8 = *(Il2CppMethodPointer)&a.Value.z;
		local_20.x = b.Value.x;
		local_20.y = b.Value.y;
		local_20.z = b.Value.z;
		local_20.w = b.Value.w;
		method_00 = (MethodInfo)&local_10;
		q = Quaternion.Internal_Lerp((Quaternion)method_00, ref local_20, t);
		return pCVar1;
	}

	[Token(Token = "0x6001BB4")]
	[Address(RVA = "0x58B50E0", Offset = "0x58B40E0", VA = "0x58B50E0")]
	public static CustomLogicQuaternionBuiltin LerpUnclamped(CustomLogicQuaternionBuiltin a, CustomLogicQuaternionBuiltin b, float t)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin$$LerpUnclamped): 3 lines keep C-only constructs
		CustomLogicQuaternionBuiltin pCVar1;
		MethodInfo method_00;
		Quaternion q;
		Quaternion UStack_20;
		Il2CppMethodPointer pIStack_10;
		Il2CppMethodPointer pIStack_8;

		if ((a == null) ||(b == null)) {
			throw new NullReferenceException();
		}
		pIStack_10 = *(Il2CppMethodPointer)&a.Value;
		pIStack_8 = *(Il2CppMethodPointer)&a.Value.z;
		UStack_20.x = b.Value.x;
		UStack_20.y = b.Value.y;
		UStack_20.z = b.Value.z;
		UStack_20.w = b.Value.w;
		method_00 = (MethodInfo)&pIStack_10;
		q = Quaternion.Internal_LerpUnclamped((Quaternion)method_00, ref UStack_20, t);
		return pCVar1;
	}

	[Token(Token = "0x6001BB5")]
	[Address(RVA = "0x58B5120", Offset = "0x58B4120", VA = "0x58B5120")]
	public static CustomLogicQuaternionBuiltin Slerp(CustomLogicQuaternionBuiltin a, CustomLogicQuaternionBuiltin b, float t)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin$$Slerp): 3 lines keep C-only constructs
		CustomLogicQuaternionBuiltin pCVar1;
		MethodInfo method_00;
		Quaternion q;
		Quaternion UStack_20;
		Il2CppMethodPointer pIStack_10;
		Il2CppMethodPointer pIStack_8;

		if ((a == null) ||(b == null)) {
			throw new NullReferenceException();
		}
		pIStack_10 = *(Il2CppMethodPointer)&a.Value;
		pIStack_8 = *(Il2CppMethodPointer)&a.Value.z;
		UStack_20.x = b.Value.x;
		UStack_20.y = b.Value.y;
		UStack_20.z = b.Value.z;
		UStack_20.w = b.Value.w;
		method_00 = (MethodInfo)&pIStack_10;
		q = Quaternion.Internal_Slerp((Quaternion)method_00, ref UStack_20, t);
		return pCVar1;
	}

	[Token(Token = "0x6001BB6")]
	[Address(RVA = "0x58B5160", Offset = "0x58B4160", VA = "0x58B5160")]
	public static CustomLogicQuaternionBuiltin SlerpUnclamped(CustomLogicQuaternionBuiltin a, CustomLogicQuaternionBuiltin b, float t)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin$$SlerpUnclamped): 3 lines keep C-only constructs
		CustomLogicQuaternionBuiltin pCVar1;
		MethodInfo method_00;
		Quaternion q;
		Quaternion UStack_20;
		Il2CppMethodPointer pIStack_10;
		Il2CppMethodPointer pIStack_8;

		if ((a == null) ||(b == null)) {
			throw new NullReferenceException();
		}
		pIStack_10 = *(Il2CppMethodPointer)&a.Value;
		pIStack_8 = *(Il2CppMethodPointer)&a.Value.z;
		UStack_20.x = b.Value.x;
		UStack_20.y = b.Value.y;
		UStack_20.z = b.Value.z;
		UStack_20.w = b.Value.w;
		method_00 = (MethodInfo)&pIStack_10;
		q = Quaternion.Internal_SlerpUnclamped((Quaternion)method_00, ref UStack_20, t);
		return pCVar1;
	}

	[Token(Token = "0x6001BB7")]
	[Address(RVA = "0x58B51A0", Offset = "0x58B41A0", VA = "0x58B51A0")]
	public static CustomLogicQuaternionBuiltin FromEuler(CustomLogicVector3Builtin euler)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin$$FromEuler): 2 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		CustomLogicQuaternionBuiltin pCVar3;
		MethodInfo method_00;
		Quaternion q;
		Il2CppMethodPointer pIStack_10;
		float fStack_8;

		if (euler == null) {
			throw new NullReferenceException();
		}
		uVar1 = euler.Value.x;
		uVar2 = euler.Value.y;
		pIStack_10 = (Il2CppMethodPointer)CONCAT44((float)uVar2 * 0.017453292, (float)uVar1 * 0.017453292);
		fStack_8 = euler.Value.z * 0.017453292;
		method_00 = (MethodInfo)&pIStack_10;
		q = Quaternion.Internal_FromEulerRad((Vector3)method_00);
		return pCVar3;
	}

	[Token(Token = "0x6001BB8")]
	[Address(RVA = "0x58B51F0", Offset = "0x58B41F0", VA = "0x58B51F0")]
	public static CustomLogicQuaternionBuiltin LookRotation(CustomLogicVector3Builtin forward, [Optional] CustomLogicVector3Builtin upwards)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin$$LookRotation): 12 lines keep C-only constructs
		float fVar3;
		float fVar4;
		float fVar5;
		CustomLogicQuaternionBuiltin __this;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		uint uVar6;
		uint uVar7;
		Quaternion UVar8;
		Vector3 local_58;
		Vector3 local_48;
		byte[] local_38 = new byte[16];
		byte[] local_28 = new byte[24];

		if (upwards == null) {
			if (forward == null) goto label_059b536e;
			local_48.x = forward.Value.x;
			local_48.y = forward.Value.y;
			local_48.z = forward.Value.z;
			local_58.x = (Vector3.upVector).x;
			local_58.y = (Vector3.upVector).y;
			local_58.z = (Vector3.upVector).z;
		}
		else {
			if (forward == null) {
	label_059b536e: ;
				throw new NullReferenceException();
			}
			local_48.x = forward.Value.x;
			local_48.y = forward.Value.y;
			local_48.z = forward.Value.z;
			local_58.x = upwards.Value.x;
			local_58.y = upwards.Value.y;
			local_58.z = upwards.Value.z;
		}
		uVar7 = 0;
		uVar6 = 0;
		UVar8 = Quaternion.Internal_LookRotation(ref local_48, ref local_58);
		local_28._8_4_ = extraout_XMM0_Dc;
		local_28._0_8_ = UVar8._0_8_;
		local_28._12_4_ = extraout_XMM0_Dd;
		local_38._8_4_ = uVar6;
		local_38._0_8_ = UVar8._8_8_;
		local_38._12_4_ = uVar7;
		fVar3 = (Quaternion.identityQuaternion).y;
		fVar4 = (Quaternion.identityQuaternion).z;
		fVar5 = (Quaternion.identityQuaternion).w;
		__this.Value.x = (Quaternion.identityQuaternion).x;
		__this.Value.y = fVar3;
		__this.Value.z = fVar4;
		__this.Value.w = fVar5;
		__this = new CustomLogicQuaternionBuiltin();
		__this.Value.x = (float)local_28._0_4_;
		__this.Value.y = (float)local_28._4_4_;
		__this.Value.z = local_38._0_4_;
		__this.Value.w = local_38._4_4_;
		return __this;
	}

	[Token(Token = "0x6001BB9")]
	[Address(RVA = "0x58B5380", Offset = "0x58B4380", VA = "0x58B5380")]
	public static CustomLogicQuaternionBuiltin FromToRotation(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin$$FromToRotation): 2 lines keep C-only constructs
		CustomLogicQuaternionBuiltin pCVar1;
		MethodInfo method_00;
		Quaternion q;
		Vector3 UStack_20;
		Il2CppMethodPointer pIStack_10;

		if ((a == null) ||(b == null)) {
			throw new NullReferenceException();
		}
		pIStack_10 = *(Il2CppMethodPointer)&a.Value;
		UStack_20.x = b.Value.x;
		UStack_20.y = b.Value.y;
		UStack_20.z = b.Value.z;
		method_00 = (MethodInfo)&pIStack_10;
		q = Quaternion.Internal_FromToRotation((Vector3)method_00, ref UStack_20);
		return pCVar1;
	}

	[Token(Token = "0x6001BBA")]
	[Address(RVA = "0x58B53E0", Offset = "0x58B43E0", VA = "0x58B53E0")]
	public static CustomLogicQuaternionBuiltin Inverse(CustomLogicQuaternionBuiltin q)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin$$Inverse): 3 lines keep C-only constructs
		CustomLogicQuaternionBuiltin pCVar1;
		MethodInfo method_00;
		Quaternion q_00;
		Il2CppMethodPointer pIStack_10;
		Il2CppMethodPointer pIStack_8;

		if (q == null) {
			throw new NullReferenceException();
		}
		pIStack_10 = *(Il2CppMethodPointer)&q.Value;
		pIStack_8 = *(Il2CppMethodPointer)&q.Value.z;
		method_00 = (MethodInfo)&pIStack_10;
		q_00 = Quaternion.Internal_Inverse((Quaternion)method_00);
		return pCVar1;
	}

	[Token(Token = "0x6001BBB")]
	[Address(RVA = "0x58B5410", Offset = "0x58B4410", VA = "0x58B5410")]
	public static CustomLogicQuaternionBuiltin RotateTowards(CustomLogicQuaternionBuiltin from, CustomLogicQuaternionBuiltin to, float maxDegreesDelta)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin$$RotateTowards): 4 lines keep C-only constructs
		Quaternion pUVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		uint uVar8;
		uint uVar9;
		CustomLogicQuaternionBuiltin pCVar10;
		MethodInfo method_00;
		float fVar11;
		float t;
		Quaternion q_00;
		Quaternion UStack_20;
		Il2CppMethodPointer pIStack_10;
		Il2CppMethodPointer pIStack_8;

		if ((from == null) ||(to == null)) {
			throw new NullReferenceException();
		}
		uVar2 = from.Value.x;
		uVar6 = from.Value.y;
		uVar3 = from.Value.z;
		uVar7 = from.Value.w;
		pUVar1 = &to.Value;
		uVar4 = pUVar1.x;
		uVar8 = pUVar1.y;
		uVar5 = to.Value.z;
		uVar9 = to.Value.w;
		pIStack_10 = *(Il2CppMethodPointer)&from.Value;
		pIStack_8 = *(Il2CppMethodPointer)&from.Value.z;
		UStack_20.x = to.Value.x;
		UStack_20.y = to.Value.y;
		UStack_20.z = to.Value.z;
		UStack_20.w = to.Value.w;
		fVar11 = ABS((float)uVar7 * (float)uVar9 +(float)uVar6 * (float)uVar8 + (float)uVar2 * (float)uVar4 + (float)uVar3 * (float)uVar5);
		if (1.0 <= fVar11) {
			fVar11 = 1.0;
		}
		if (fVar11 <= 0.999999) {
			fVar11 = acosf(fVar11);
			fVar11 = (fVar11 + fVar11) * 57.29578;
			if ((fVar11 != 0.0) || (NAN(fVar11))) {
				t = 1.0;
				if (maxDegreesDelta / fVar11 <= 1.0) {
					t = maxDegreesDelta / fVar11;
				}
				method_00 = (MethodInfo)&pIStack_10;
				q_00 = Quaternion.Internal_SlerpUnclamped((Quaternion)method_00, ref UStack_20, t);
				return pCVar10;
			}
		}
		return pCVar10;
	}

	[Token(Token = "0x6001BBC")]
	[Address(RVA = "0x58B5510", Offset = "0x58B4510", VA = "0x58B5510")]
	public static CustomLogicQuaternionBuiltin AngleAxis(float angle, CustomLogicVector3Builtin axis)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin$$AngleAxis): 2 lines keep C-only constructs
		CustomLogicQuaternionBuiltin pCVar1;
		MethodInfo method_00;
		Quaternion q;
		Il2CppMethodPointer pIStack_10;

		if (axis == null) {
			throw new NullReferenceException();
		}
		pIStack_10 = *(Il2CppMethodPointer)&axis.Value;
		method_00 = (MethodInfo)&pIStack_10;
		q = Quaternion.Internal_AngleAxis(angle, (Vector3)method_00);
		return pCVar1;
	}

	[Token(Token = "0x6001BBD")]
	[Address(RVA = "0x58B5550", Offset = "0x58B4550", VA = "0x58B5550")]
	public static float Angle(CustomLogicQuaternionBuiltin a, CustomLogicQuaternionBuiltin b)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin$$Angle): clean
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		uint uVar8;
		float fVar9;
		float fVar10;

		if ((a == null) ||(b == null)) {
			throw new NullReferenceException();
		}
		uVar1 = a.Value.x;
		uVar5 = a.Value.y;
		uVar2 = a.Value.z;
		uVar6 = a.Value.w;
		uVar3 = b.Value.x;
		uVar7 = b.Value.y;
		uVar4 = b.Value.z;
		uVar8 = b.Value.w;
		fVar9 = ABS((float)uVar8 * (float)uVar6 +(float)uVar7 * (float)uVar5 + (float)uVar3 * (float)uVar1 + (float)uVar4 * (float)uVar2);
		if (1.0 <= fVar9) {
			fVar9 = 1.0;
		}
		if (fVar9 <= 0.999999) {
			fVar9 = acosf(fVar9);
			fVar10 = (fVar9 + fVar9) * 57.29578;
		}
		return fVar10;
	}

	[Token(Token = "0x6001BBE")]
	[Address(RVA = "0x58B55D0", Offset = "0x58B45D0", VA = "0x58B55D0", Slot = "3")]
	public override string ToString()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin$$ToString): 1 lines keep C-only constructs
		String pSVar1;

		pSVar1 = (String)il2cpp_runtime_helper_03deb510(&this.Value, 0, 0, 0);
		return pSVar1;
	}

	[Token(Token = "0x6001BBF")]
	[Address(RVA = "0x58B55E0", Offset = "0x58B45E0", VA = "0x58B55E0", Slot = "18")]
	public object __Copy__()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin$$__Copy__): clean
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		float fVar6;
		float fVar7;
		float fVar8;
		CustomLogicQuaternionBuiltin __this_00;

		uVar1 = this.Value.x;
		uVar3 = this.Value.y;
		uVar2 = this.Value.z;
		uVar4 = this.Value.w;
		fVar6 = (Quaternion.identityQuaternion).y;
		fVar7 = (Quaternion.identityQuaternion).z;
		fVar8 = (Quaternion.identityQuaternion).w;
		__this_00.Value.x = (Quaternion.identityQuaternion).x;
		__this_00.Value.y = fVar6;
		__this_00.Value.z = fVar7;
		__this_00.Value.w = fVar8;
		__this_00 = new CustomLogicQuaternionBuiltin();
		__this_00.Value.x = (float)uVar1;
		__this_00.Value.y = (float)uVar3;
		__this_00.Value.z = (float)uVar2;
		__this_00.Value.w = (float)uVar4;
		return (object)__this_00;
	}

	[Token(Token = "0x6001BC0")]
	[Address(RVA = "0x58B56C0", Offset = "0x58B46C0", VA = "0x58B56C0", Slot = "11")]
	public object __Add__(object self, object other)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin$$__Add__): 2 lines keep C-only constructs
		String operatorName;
		Exception ex;
		MethodInfo lastManagedFrame;

		operatorName = il2cpp_codegen_get_runtime_metadata(&"__Add__");
		ex = CustomLogicUtils.OperatorException(operatorName, self, other);
		lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin___Add);
		throw (object)ex;
	}

	[Token(Token = "0x6001BC1")]
	[Address(RVA = "0x58B5700", Offset = "0x58B4700", VA = "0x58B5700", Slot = "12")]
	public object __Sub__(object self, object other)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin$$__Sub__): 2 lines keep C-only constructs
		String operatorName;
		Exception ex;
		MethodInfo lastManagedFrame;

		operatorName = il2cpp_codegen_get_runtime_metadata(&"__Sub__");
		ex = CustomLogicUtils.OperatorException(operatorName, self, other);
		lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin___Sub);
		throw (object)ex;
	}

	[Token(Token = "0x6001BC2")]
	[Address(RVA = "0x58B5740", Offset = "0x58B4740", VA = "0x58B5740", Slot = "13")]
	public object __Mul__(object self, object other)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin$$__Mul__): 11 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		Il2CppClass pIVar3;
		float fVar5;
		float fVar6;
		float fVar7;
		CustomLogicQuaternionBuiltin __this_00;
		String operatorName;
		Exception ex;
		MethodInfo lastManagedFrame;
		float fVar8;
		float fVar9;
		float fVar10;
		float fVar11;
		float fVar12;
		float fVar13;
		float fVar14;
		float fVar15;
		Vector3 value;

		if (self != null) {
			bVar1 = (typeof(CustomLogicQuaternionBuiltin)._2).typeHierarchyDepth;
			if (((bVar1 <= (self.klass._2).typeHierarchyDepth) && (other != null)) &&((self.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicQuaternionBuiltin))) {
				pIVar3 = other.klass;
				bVar2 = (pIVar3._2).typeHierarchyDepth;
				if ((bVar2 < bVar1) ||((pIVar3._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CustomLogicQuaternionBuiltin))) {
					bVar1 = (typeof(CustomLogicVector3Builtin)._2).typeHierarchyDepth;
					if ((bVar2 < bVar1) ||((pIVar3._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CustomLogicVector3Builtin))) goto label_059b5a0f;
					value = ((UnityEngine_Quaternion_o)*(Quaternion)(self + 3) * (UnityEngine_Vector3_o)*(Vector3)(other + 3));
					__this_00 = new CustomLogicQuaternionBuiltin(value);
				}
				else {
					fVar8 = SUB84(self[3].klass, 0);
					fVar9 = (float)((ulong)self[3].klass >> 0x20);
					fVar12 = SUB84(self[3].monitor, 0);
					fVar13 = (float)((ulong)self[3].monitor >> 0x20);
					fVar10 = SUB84(other[3].klass, 0);
					fVar11 = (float)((ulong)other[3].klass >> 0x20);
					fVar14 = SUB84(other[3].monitor, 0);
					fVar15 = (float)((ulong)other[3].monitor >> 0x20);
					fVar5 = (Quaternion.identityQuaternion).y;
					fVar6 = (Quaternion.identityQuaternion).z;
					fVar7 = (Quaternion.identityQuaternion).w;
					__this_00.Value.x = (Quaternion.identityQuaternion).x;
					__this_00.Value.y = fVar5;
					__this_00.Value.z = fVar6;
					__this_00.Value.w = fVar7;
					__this_00 = new CustomLogicQuaternionBuiltin();
					__this_00.Value.x =(fVar14 * fVar9 + fVar8 * fVar15 + fVar13 * fVar10) - fVar12 * fVar11;
					__this_00.Value.y =(fVar10 * fVar12 + fVar9 * fVar15 + fVar13 * fVar11) - fVar8 * fVar14;
					__this_00.Value.z =(fVar12 * fVar15 + fVar13 * fVar14 + fVar11 * fVar8) - fVar10 * fVar9;
					__this_00.Value.w =((fVar15 * fVar13 - fVar8 * fVar10) - fVar9 * fVar11) - fVar12 * fVar14;
				}
				return (object)__this_00;
			}
		}
	label_059b5a0f: ;
		operatorName = il2cpp_codegen_get_runtime_metadata(&"__Mul__");
		ex = CustomLogicUtils.OperatorException(operatorName, self, other);
		lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin___Mul);
		throw (object)ex;
	}

	[Token(Token = "0x6001BC3")]
	[Address(RVA = "0x58B5A50", Offset = "0x58B4A50", VA = "0x58B5A50", Slot = "14")]
	public object __Div__(object self, object other)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin$$__Div__): 2 lines keep C-only constructs
		String operatorName;
		Exception ex;
		MethodInfo lastManagedFrame;

		operatorName = il2cpp_codegen_get_runtime_metadata(&"__Div__");
		ex = CustomLogicUtils.OperatorException(operatorName, self, other);
		lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin___Div);
		throw (object)ex;
	}

	[Token(Token = "0x6001BC4")]
	[Address(RVA = "0x58B5A90", Offset = "0x58B4A90", VA = "0x58B5A90", Slot = "16")]
	public bool __Eq__(object self, object other)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin$$__Eq__): 4 lines keep C-only constructs
		byte bVar1;

		if (other != null) {
			bVar1 = (typeof(CustomLogicQuaternionBuiltin)._2).typeHierarchyDepth;
			if (bVar1 <= (other.klass._2).typeHierarchyDepth) {
				if ((other.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CustomLogicQuaternionBuiltin)) {
					other = null;
				}
				if ((((self != null) && (other != null)) &&(bVar1 <= (self.klass._2).typeHierarchyDepth)) &&((self.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicQuaternionBuiltin))) {
					return 0.999999 <(float)((ulong)other[3].monitor >> 0x20) * (float)((ulong)self[3].monitor >> 0x20) +(float)((ulong)other[3].klass >> 0x20) * (float)((ulong)self[3].klass >> 0x20) + SUB84(other[3].klass, 0) * SUB84(self[3].klass, 0) + SUB84(other[3].monitor, 0) * SUB84(self[3].monitor, 0);
				}
			}
		}
		return false;
	}

	[Token(Token = "0x6001BC5")]
	[Address(RVA = "0x58B5B60", Offset = "0x58B4B60", VA = "0x58B5B60", Slot = "17")]
	public int __Hash__()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin$$__Hash__): clean
		uint uVar1;
		int iVar2;
		int iVar3;
		int iVar4;

		uVar1 = (this.Value).GetHashCode();
		iVar2 = (this.Value.y).GetHashCode();
		iVar3 = (this.Value.z).GetHashCode();
		iVar4 = (this.Value.w).GetHashCode();
		return iVar4 >> 1 ^ iVar3 >> 2 ^ iVar2 << 2 ^ uVar1;
	}

	[Token(Token = "0x6001BC6")]
	[Address(RVA = "0x58B5BC0", Offset = "0x58B4BC0", VA = "0x58B5BC0", Slot = "15")]
	public object __Mod__(object self, object other)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin$$__Mod__): 4 lines keep C-only constructs
		Il2CppClass klass;
		NotImplementedException __this_00;
		MethodInfo lastManagedFrame;

		klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotImplementedException));
		__this_00 = (NotImplementedException)il2cpp_codegen_object_new(klass);
		__this_00 = new NotImplementedException();
		lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicQuaternionBuiltin___Mod);
		throw (object)__this_00;
	}

	[Token(Token = "0x6001BC7")]
	[Address(RVA = "0x58B5C00", Offset = "0x58B4C00", VA = "0x58B5C00")]
	public static implicit operator Quaternion(CustomLogicQuaternionBuiltin q)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin$$op_Implicit): clean
		if (q == null) {
			throw new NullReferenceException();
		}
		return (Quaternion)q.Value;
	}

	[Token(Token = "0x6001BC8")]
	[Address(RVA = "0x58B4FD0", Offset = "0x58B3FD0", VA = "0x58B4FD0")]
	public static implicit operator CustomLogicQuaternionBuiltin(Quaternion q)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c (CustomLogic.CustomLogicQuaternionBuiltin$$op_Implicit): clean
		float fVar2;
		float fVar3;
		float fVar4;
		CustomLogicQuaternionBuiltin __this;
		float local_28;
		float fStack_24;

		fVar2 = (Quaternion.identityQuaternion).y;
		fVar3 = (Quaternion.identityQuaternion).z;
		fVar4 = (Quaternion.identityQuaternion).w;
		__this.Value.x = (Quaternion.identityQuaternion).x;
		__this.Value.y = fVar2;
		__this.Value.z = fVar3;
		__this.Value.w = fVar4;
		__this = new CustomLogicQuaternionBuiltin();
		local_28 = q.x;
		fStack_24 = q.y;
		__this.Value.x = local_28;
		__this.Value.y = fStack_24;
		__this.Value.z = q.z;
		__this.Value.w = q.w;
		return __this;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicQuaternionBuiltin.c.

	// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"X");
		__this.Add((Il2CppObject *)"Y");
		__this.Add((Il2CppObject *)"Z");
		__this.Add((Il2CppObject *)"W");
		__this.Add((Il2CppObject *)"Euler");
		__this.Add((Il2CppObject *)"Identity");
		__this.Add((Il2CppObject *)"Lerp");
		__this.Add((Il2CppObject *)"LerpUnclamped");
		__this.Add((Il2CppObject *)"Slerp");
		__this.Add((Il2CppObject *)"SlerpUnclamped");
		__this.Add((Il2CppObject *)"FromEuler");
		__this.Add((Il2CppObject *)"LookRotation");
		__this.Add((Il2CppObject *)"FromToRotation");
		__this.Add((Il2CppObject *)"Inverse");
		__this.Add((Il2CppObject *)"RotateTowards");
		__this.Add((Il2CppObject *)"AngleAxis");
		__this.Add((Il2CppObject *)"Angle");
		__this.Add((Il2CppObject *)"__Copy__");
		__this.Add((Il2CppObject *)"__Mul__");
		__this.Add((Il2CppObject *)"__Eq__");
		__this.Add((Il2CppObject *)"__Hash__");
		CustomLogicQuaternionBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__X>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__X_g____getter_2_0(CustomLogicQuaternionBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__X>g____setter|2_1: clean
	private static void Bindings____CreatePropertyBinding__X_g____setter_2_1(CustomLogicQuaternionBuiltin __i, object __v)
	{
		float fVar1;

		fVar1 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.Value.x = fVar1;
		return;
	}

	// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__Y>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__Y_g____getter_3_0(CustomLogicQuaternionBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__Y>g____setter|3_1: clean
	private static void Bindings____CreatePropertyBinding__Y_g____setter_3_1(CustomLogicQuaternionBuiltin __i, object __v)
	{
		float fVar1;

		fVar1 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.Value.y = fVar1;
		return;
	}

	// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__Z>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__Z_g____getter_4_0(CustomLogicQuaternionBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__Z>g____setter|4_1: clean
	private static void Bindings____CreatePropertyBinding__Z_g____setter_4_1(CustomLogicQuaternionBuiltin __i, object __v)
	{
		float fVar1;

		fVar1 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.Value.z = fVar1;
		return;
	}

	// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__W>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__W_g____getter_5_0(CustomLogicQuaternionBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__W>g____setter|5_1: clean
	private static void Bindings____CreatePropertyBinding__W_g____setter_5_1(CustomLogicQuaternionBuiltin __i, object __v)
	{
		float fVar1;

		fVar1 = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.Value.w = fVar1;
		return;
	}

	// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__Euler>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__Euler_g____getter_6_0(CustomLogicQuaternionBuiltin __i)
	{
		CustomLogicVector3Builtin pCVar1;
		Vector3 UVar2;
		Vector3 euler;

		if (__i == null) {
			throw new NullReferenceException();
		}
		UVar2 = Quaternion.Internal_ToEulerRad(ref __i.Value);
		euler.x = UVar2.x * 57.29578;
		euler.y = UVar2.y * 57.29578;
		euler.z = UVar2.z * 57.29578;
		UVar2 = Quaternion.Internal_MakePositive(euler);
		pCVar1 = ((CustomLogicVector3Builtin)UVar2);
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__Euler>g____setter|6_1: clean
	private static void Bindings____CreatePropertyBinding__Euler_g____setter_6_1(CustomLogicQuaternionBuiltin __i, object __v)
	{
		uint uVar1;
		uint uVar2;
		CustomLogicVector3Builtin pCVar3;
		Quaternion UVar4;
		Vector3 UStack_20;

		pCVar3 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__v);
		if ((__i == null) ||(pCVar3 == null)) {
			throw new NullReferenceException();
		}
		uVar1 = pCVar3.Value.x;
		uVar2 = pCVar3.Value.y;
		UStack_20.z = pCVar3.Value.z * 0.017453292;
		UStack_20.y = (float)uVar2 * 0.017453292;
		UStack_20.x = (float)uVar1 * 0.017453292;
		UVar4 = (Quaternion)Quaternion.Internal_FromEulerRad(ref UStack_20) ;
		__i.Value = UVar4;
		return;
	}

	// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__Identity>g____getter|7_0: 3 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__Identity_g____getter_7_0(CustomLogicQuaternionBuiltin __i)
	{
		CustomLogicQuaternionBuiltin pCVar1;
		Quaternion* ppUVar2;

		if (Il2CppMethodInitialized_0753e72b == false) {
			ppUVar2 = &typeof(Quaternion);
			Il2CppMethodInitialized_0753e72b = true;
		}
		pCVar1 = ((CustomLogicQuaternionBuiltin)(UnityEngine_Quaternion_o) *(Quaternion)typeof(Quaternion).static_fields);
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$.cctor: 1 lines keep C-only constructs
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = new CustomLogicQuaternionBuiltin.Bindings.c();
		CustomLogicQuaternionBuiltin.Bindings.c.__9 =(CustomLogicQuaternionBuiltin.Bindings.c)__this;
		Il2CppCodeGenWriteBarrier(&CustomLogicQuaternionBuiltin.Bindings.c.__9) ;
		return;
	}

	// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__Lerp>b__8_0: 3 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__Lerp_b__8_0(CustomLogicQuaternionBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicQuaternionBuiltin pCVar1;
		CustomLogicQuaternionBuiltin pCVar2;
		MethodInfo method_00;
		float t;
		Quaternion q;
		Quaternion local_38;
		Il2CppMethodPointer local_28;
		Il2CppMethodPointer pIStack_20;

		if (__a == null) {
	label_059b87e5: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicQuaternionBuiltin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				pCVar2 = CustomLogicEvaluator.ConvertTo<CustomLogicQuaternionBuiltin>(__a[1]);
				if (2 < (uint)__a.Length) {
					t = CustomLogicEvaluator.ConvertTo<float>(__a[2]);
					if ((pCVar1 != null) &&(pCVar2 != null)) {
						local_28 = *(Il2CppMethodPointer)&pCVar1.Value;
						pIStack_20 = *(Il2CppMethodPointer)&pCVar1.Value.z;
						local_38.x = pCVar2.Value.x;
						local_38.y = pCVar2.Value.y;
						local_38.z = pCVar2.Value.z;
						local_38.w = pCVar2.Value.w;
						method_00 = (MethodInfo)&local_28;
						q = Quaternion.Internal_Lerp((Quaternion)method_00, ref local_38, t);
						pCVar1 = ((CustomLogicQuaternionBuiltin)q);
						return (object)pCVar1;
					}
					goto label_059b87e5;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__LerpUnclamped>b__9_0: 3 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__LerpUnclamped_b__9_0(CustomLogicQuaternionBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicQuaternionBuiltin pCVar1;
		CustomLogicQuaternionBuiltin pCVar2;
		MethodInfo method_00;
		float t;
		Quaternion q;
		Quaternion UStack_38;
		Il2CppMethodPointer pIStack_28;
		Il2CppMethodPointer pIStack_20;

		if (__a == null) {
	label_059b88e5: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicQuaternionBuiltin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				pCVar2 = CustomLogicEvaluator.ConvertTo<CustomLogicQuaternionBuiltin>(__a[1]);
				if (2 < (uint)__a.Length) {
					t = CustomLogicEvaluator.ConvertTo<float>(__a[2]);
					if ((pCVar1 != null) &&(pCVar2 != null)) {
						pIStack_28 = *(Il2CppMethodPointer)&pCVar1.Value;
						pIStack_20 = *(Il2CppMethodPointer)&pCVar1.Value.z;
						UStack_38.x = pCVar2.Value.x;
						UStack_38.y = pCVar2.Value.y;
						UStack_38.z = pCVar2.Value.z;
						UStack_38.w = pCVar2.Value.w;
						method_00 = (MethodInfo)&pIStack_28;
						q = Quaternion.Internal_LerpUnclamped((Quaternion)method_00, ref UStack_38, t);
						pCVar1 = ((CustomLogicQuaternionBuiltin)q);
						return (object)pCVar1;
					}
					goto label_059b88e5;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__Slerp>b__10_0: 3 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__Slerp_b__10_0(CustomLogicQuaternionBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicQuaternionBuiltin pCVar1;
		CustomLogicQuaternionBuiltin pCVar2;
		MethodInfo method_00;
		float t;
		Quaternion q;
		Quaternion UStack_38;
		Il2CppMethodPointer pIStack_28;
		Il2CppMethodPointer pIStack_20;

		if (__a == null) {
	label_059b89e5: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicQuaternionBuiltin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				pCVar2 = CustomLogicEvaluator.ConvertTo<CustomLogicQuaternionBuiltin>(__a[1]);
				if (2 < (uint)__a.Length) {
					t = CustomLogicEvaluator.ConvertTo<float>(__a[2]);
					if ((pCVar1 != null) &&(pCVar2 != null)) {
						pIStack_28 = *(Il2CppMethodPointer)&pCVar1.Value;
						pIStack_20 = *(Il2CppMethodPointer)&pCVar1.Value.z;
						UStack_38.x = pCVar2.Value.x;
						UStack_38.y = pCVar2.Value.y;
						UStack_38.z = pCVar2.Value.z;
						UStack_38.w = pCVar2.Value.w;
						method_00 = (MethodInfo)&pIStack_28;
						q = Quaternion.Internal_Slerp((Quaternion)method_00, ref UStack_38, t);
						pCVar1 = ((CustomLogicQuaternionBuiltin)q);
						return (object)pCVar1;
					}
					goto label_059b89e5;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__SlerpUnclamped>b__11_0: 3 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__SlerpUnclamped_b__11_0(CustomLogicQuaternionBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicQuaternionBuiltin pCVar1;
		CustomLogicQuaternionBuiltin pCVar2;
		MethodInfo method_00;
		float t;
		Quaternion q;
		Quaternion UStack_38;
		Il2CppMethodPointer pIStack_28;
		Il2CppMethodPointer pIStack_20;

		if (__a == null) {
	label_059b8ae5: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicQuaternionBuiltin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				pCVar2 = CustomLogicEvaluator.ConvertTo<CustomLogicQuaternionBuiltin>(__a[1]);
				if (2 < (uint)__a.Length) {
					t = CustomLogicEvaluator.ConvertTo<float>(__a[2]);
					if ((pCVar1 != null) &&(pCVar2 != null)) {
						pIStack_28 = *(Il2CppMethodPointer)&pCVar1.Value;
						pIStack_20 = *(Il2CppMethodPointer)&pCVar1.Value.z;
						UStack_38.x = pCVar2.Value.x;
						UStack_38.y = pCVar2.Value.y;
						UStack_38.z = pCVar2.Value.z;
						UStack_38.w = pCVar2.Value.w;
						method_00 = (MethodInfo)&pIStack_28;
						q = Quaternion.Internal_SlerpUnclamped((Quaternion)method_00, ref UStack_38, t);
						pCVar1 = ((CustomLogicQuaternionBuiltin)q);
						return (object)pCVar1;
					}
					goto label_059b8ae5;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__FromEuler>b__12_0: 2 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__FromEuler_b__12_0(CustomLogicQuaternionBuiltin __c, Object[] __a)
	{
		uint uVar1;
		uint uVar2;
		object obj;
		CustomLogicVector3Builtin pCVar3;
		CustomLogicQuaternionBuiltin pCVar4;
		MethodInfo method_00;
		Quaternion q;
		Vector3 local_18;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			pCVar3 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
			method_00 = (MethodInfo)&local_18;
			if (pCVar3 != null) {
				uVar1 = pCVar3.Value.x;
				uVar2 = pCVar3.Value.y;
				local_18._0_8_ = CONCAT44((float)uVar2 * 0.017453292, (float)uVar1 * 0.017453292);
				local_18.z = pCVar3.Value.z * 0.017453292;
				q = Quaternion.Internal_FromEulerRad(ref local_18);
				pCVar4 = ((CustomLogicQuaternionBuiltin)q);
				return (object)pCVar4;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__LookRotation>b__13_0: clean
	private object Bindings_c____CreateMethodBinding__LookRotation_b__13_0(CustomLogicQuaternionBuiltin __c, Object[] __a)
	{
		object pIVar1;
		CustomLogicVector3Builtin forward;
		CustomLogicVector3Builtin upwards;
		CustomLogicQuaternionBuiltin pCVar2;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		pIVar1 = __a[0];
		forward = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(pIVar1) ;
		if ((int)__a.Length < 2) {
			upwards = null;
		}
		else {
			pIVar1 = __a[1];
			upwards = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(pIVar1);
		}
		pCVar2 = CustomLogicQuaternionBuiltin.LookRotation(forward, upwards);
		return (object)pCVar2;
	}

	// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__FromToRotation>b__14_0: 2 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__FromToRotation_b__14_0(CustomLogicQuaternionBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicVector3Builtin pCVar1;
		CustomLogicVector3Builtin pCVar2;
		CustomLogicQuaternionBuiltin pCVar3;
		MethodInfo method_00;
		Quaternion q;
		Vector3 UStack_38;
		Il2CppMethodPointer pIStack_28;

		if (__a == null) {
	label_059b8d42: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				pCVar2 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[1]);
				if ((pCVar1 != null) &&(pCVar2 != null)) {
					pIStack_28 = *(Il2CppMethodPointer)&pCVar1.Value;
					UStack_38.x = pCVar2.Value.x;
					UStack_38.y = pCVar2.Value.y;
					UStack_38.z = pCVar2.Value.z;
					method_00 = (MethodInfo)&pIStack_28;
					q = Quaternion.Internal_FromToRotation((Vector3)method_00, ref UStack_38);
					pCVar3 = ((CustomLogicQuaternionBuiltin)q);
					return (object)pCVar3;
				}
				goto label_059b8d42;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__Inverse>b__15_0: 2 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__Inverse_b__15_0(CustomLogicQuaternionBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicQuaternionBuiltin pCVar1;
		Quaternion q;
		byte[] local_18 = new byte[16];

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicQuaternionBuiltin>(obj);
			if (pCVar1 != null) {
				local_18._0_8_ = *(ulong)&pCVar1.Value;
				local_18._8_8_ = *(ulong)&pCVar1.Value.z;
				q = Quaternion.Internal_Inverse((Quaternion)local_18);
				pCVar1 = ((CustomLogicQuaternionBuiltin)q);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__RotateTowards>b__16_0: 3 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__RotateTowards_b__16_0(CustomLogicQuaternionBuiltin __c, Object[] __a)
	{
		uint uVar1;
		uint uVar2;
		float fVar3;
		float fVar4;
		uint uVar5;
		uint uVar6;
		float fVar7;
		float fVar8;
		object obj;
		CustomLogicQuaternionBuiltin pCVar9;
		CustomLogicQuaternionBuiltin pCVar10;
		MethodInfo method_00;
		float fVar11;
		float fVar12;
		Quaternion UVar13;
		Quaternion UStack_40;
		Il2CppMethodPointer pIStack_30;
		Il2CppMethodPointer pIStack_28;

		if (__a == null) {
	label_059b8f9f: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			pCVar9 = CustomLogicEvaluator.ConvertTo<CustomLogicQuaternionBuiltin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				pCVar10 = CustomLogicEvaluator.ConvertTo<CustomLogicQuaternionBuiltin>(__a[1]) ;
				if (2 < (uint)__a.Length) {
					method_00 = (MethodInfo)__a[2];
					fVar11 = CustomLogicEvaluator.ConvertTo<float>((object)method_00) ;
					if ((pCVar9 != null) &&(pCVar10 != null)) {
						uVar1 = pCVar9.Value.x;
						uVar5 = pCVar9.Value.y;
						uVar2 = pCVar9.Value.z;
						uVar6 = pCVar9.Value.w;
						fVar3 = pCVar10.Value.x;
						fVar7 = pCVar10.Value.y;
						fVar4 = pCVar10.Value.z;
						fVar8 = pCVar10.Value.w;
						pIStack_30 = *(Il2CppMethodPointer)&pCVar9.Value;
						pIStack_28 = *(Il2CppMethodPointer)&pCVar9.Value.z;
						UStack_40.x = pCVar10.Value.x;
						UStack_40.y = pCVar10.Value.y;
						UStack_40.z = pCVar10.Value.z;
						UStack_40.w = pCVar10.Value.w;
						fVar12 = ABS((float)uVar6 * fVar8 +(float)uVar5 * fVar7 + (float)uVar1 * fVar3 + (float)uVar2 * fVar4);
						if (1.0 <= fVar12) {
							fVar12 = 1.0;
						}
						if (fVar12 <= 0.999999) {
							fVar12 = acosf(fVar12);
							fVar12 = (fVar12 + fVar12) * 57.29578;
							if ((fVar12 != 0.0) || (NAN(fVar12))) {
								fVar3 = 1.0;
								if (fVar11 / fVar12 <= 1.0) {
									fVar3 = fVar11 / fVar12;
								}
								method_00 = (MethodInfo)&pIStack_30;
								UVar13 = Quaternion.Internal_SlerpUnclamped((Quaternion)method_00, ref UStack_40, fVar3);
								fVar4 = UVar13.z;
								fVar8 = UVar13.w;
								fVar3 = UVar13.x;
								fVar7 = UVar13.y;
							}
						}
						UVar13.y = fVar7;
						UVar13.x = fVar3;
						UVar13.w = fVar8;
						UVar13.z = fVar4;
						pCVar9 = ((CustomLogicQuaternionBuiltin)UVar13);
						return (object)pCVar9;
					}
					goto label_059b8f9f;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__AngleAxis>b__17_0: 2 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__AngleAxis_b__17_0(CustomLogicQuaternionBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicVector3Builtin pCVar1;
		CustomLogicQuaternionBuiltin pCVar2;
		MethodInfo method_00;
		float angle;
		Quaternion q;
		Il2CppMethodPointer pIStack_20;

		if (__a == null) {
	label_059b908b: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			angle = CustomLogicEvaluator.ConvertTo<float>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[1]);
				if (pCVar1 != null) {
					pIStack_20 = *(Il2CppMethodPointer)&pCVar1.Value;
					method_00 = (MethodInfo)&pIStack_20;
					q = Quaternion.Internal_AngleAxis(angle, (Vector3)method_00);
					pCVar2 = ((CustomLogicQuaternionBuiltin)q);
					return (object)pCVar2;
				}
				goto label_059b908b;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__Angle>b__18_0: clean
	private object Bindings_c____CreateMethodBinding__Angle_b__18_0(CustomLogicQuaternionBuiltin __c, Object[] __a)
	{
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		uint uVar8;
		CustomLogicQuaternionBuiltin pCVar9;
		CustomLogicQuaternionBuiltin pCVar10;
		object pIVar11;
		float fVar12;
		float fStack_1c;

		if (__a == null) {
	label_059b91ca: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar11 = __a[0];
			pCVar9 = CustomLogicEvaluator.ConvertTo<CustomLogicQuaternionBuiltin>(pIVar11);
			if ((__a.Length & 0xfffffffe) != 0) {
				pCVar10 = CustomLogicEvaluator.ConvertTo<CustomLogicQuaternionBuiltin>(__a[1]) ;
				if ((pCVar9 != null) &&(pCVar10 != null)) {
					uVar1 = pCVar9.Value.x;
					uVar5 = pCVar9.Value.y;
					uVar2 = pCVar9.Value.z;
					uVar6 = pCVar9.Value.w;
					uVar3 = pCVar10.Value.x;
					uVar7 = pCVar10.Value.y;
					uVar4 = pCVar10.Value.z;
					uVar8 = pCVar10.Value.w;
					fVar12 = ABS((float)uVar8 * (float)uVar6 +(float)uVar7 * (float)uVar5 + (float)uVar3 * (float)uVar1 + (float)uVar4 * (float)uVar2);
					if (1.0 <= fVar12) {
						fVar12 = 1.0;
					}
					fStack_1c = 0.0;
					if (fVar12 <= 0.999999) {
						fVar12 = acosf(fVar12);
						fStack_1c = (fVar12 + fVar12) * 57.29578;
					}
					pIVar11 = (object)fStack_1c;
					return pIVar11;
				}
				goto label_059b91ca;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding____Copy__>b__19_0: clean
	private object Bindings_c____CreateMethodBinding____Copy___b__19_0(CustomLogicQuaternionBuiltin __c, Object[] __a)
	{
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		float fVar6;
		float fVar7;
		float fVar8;
		CustomLogicQuaternionBuiltin __this_00;

		if (__c == null) {
			throw new NullReferenceException();
		}
		uVar1 = __c.Value.x;
		uVar3 = __c.Value.y;
		uVar2 = __c.Value.z;
		uVar4 = __c.Value.w;
		fVar6 = (Quaternion.identityQuaternion).y;
		fVar7 = (Quaternion.identityQuaternion).z;
		fVar8 = (Quaternion.identityQuaternion).w;
		__this_00.Value.x = (Quaternion.identityQuaternion).x;
		__this_00.Value.y = fVar6;
		__this_00.Value.z = fVar7;
		__this_00.Value.w = fVar8;
		__this_00 = new CustomLogicQuaternionBuiltin();
		__this_00.Value.x = (float)uVar1;
		__this_00.Value.y = (float)uVar3;
		__this_00.Value.z = (float)uVar2;
		__this_00.Value.w = (float)uVar4;
		return (object)__this_00;
	}

	// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding____Mul__>b__20_0: clean
	private object Bindings_c____CreateMethodBinding____Mul___b__20_0(CustomLogicQuaternionBuiltin __c, Object[] __a)
	{
		int iVar1;
		object pIVar2;

		if (__a != null) {
			iVar1 = (int)__a.Length;
			if ((iVar1 == 0) || (iVar1 == 1)) {
				throw new IndexOutOfRangeException();
			}
			if (__c != null) {
				pIVar2 = this.__Mul__(__a[0], __a[1]);
				return pIVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding____Eq__>b__21_0: 8 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding____Eq___b__21_0(CustomLogicQuaternionBuiltin __c, Object[] __a)
	{
		byte bVar1;
		int iVar2;
		bool bVar3;
		ulong in_RAX;
		object pIVar4;
		object pIVar5;
		ulong uStack_18;

		if (__a == null) {
	label_059b93f6: ;
			throw new NullReferenceException();
		}
		iVar2 = (int)__a.Length;
		if ((iVar2 == 0) || (iVar2 == 1)) {
			throw new IndexOutOfRangeException();
		}
		if (__c == null) goto label_059b93f6;
		pIVar4 = __a[0];
		pIVar5 = __a[1];
		uStack_18 = in_RAX;
		if (pIVar5 != null) {
			bVar1 = (typeof(CustomLogicQuaternionBuiltin)._2).typeHierarchyDepth;
			if (bVar1 <= (pIVar5.klass._2).typeHierarchyDepth) {
				bVar3 = false;
				if ((pIVar5.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CustomLogicQuaternionBuiltin)) {
					pIVar5 = null;
				}
				if ((pIVar4 == null) || (pIVar5 == null)) goto label_059b9396;
				if ((bVar1 <= (pIVar4.klass._2).typeHierarchyDepth) &&((pIVar4.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicQuaternionBuiltin))) {
					bVar3 = 0.999999 <(float)((ulong)pIVar5[3].monitor >> 0x20) * (float)((ulong)pIVar4[3].monitor >> 0x20) +(float)((ulong)pIVar5[3].klass >> 0x20) * (float)((ulong)pIVar4[3].klass >> 0x20) + SUB84(pIVar5[3].klass, 0) * SUB84(pIVar4[3].klass, 0) + SUB84(pIVar5[3].monitor, 0) * SUB84(pIVar4[3].monitor, 0);
					goto label_059b9396;
				}
			}
		}
		bVar3 = false;
	label_059b9396: ;
		uStack_18 = CONCAT17(bVar3, (undefined7)uStack_18);
		pIVar4 = (object)(((long)&uStack_18 + 7));
		return pIVar4;
	}

	// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding____Hash__>b__22_0: clean
	private object Bindings_c____CreateMethodBinding____Hash___b__22_0(CustomLogicQuaternionBuiltin __c, Object[] __a)
	{
		object pIVar1;
		byte[] auStack_24 = new byte[4];

		if (__c == null) {
			throw new NullReferenceException();
		}
		(__c.Value).GetHashCode();
		(__c.Value.y).GetHashCode();
		(__c.Value.z).GetHashCode();
		(__c.Value.w).GetHashCode();
		return pIVar1;
	}
}
