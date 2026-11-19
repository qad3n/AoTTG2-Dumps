// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicColorBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicColorBuiltin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicColorBuiltin.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;
using Utility;

namespace CustomLogic;

[Token(Token = "0x2000455")]
[CompilerGenerated]
internal class CustomLogicColorBuiltin : BuiltinClassInstance, ICustomLogicEquals, ICustomLogicCopyable, ICustomLogicMathOperators, ICustomLogicToString
{
	[Token(Token = "0x2000456")]
	public static class Factory
	{
		[Token(Token = "0x6001ADB")]
		[Address(RVA = "0x58AB430", Offset = "0x58AA430", VA = "0x58AB430")]
		public static CustomLogicColorBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			object pIVar1;
			int iVar2;
			int a;
			int iVar3;
			int iVar4;
			int iVar5;
			String pSVar6;
			CustomLogicColorBuiltin __this;
			String str0;
			String str2;
			Il2CppClass klass;
			ArgumentException __this_00;
			MethodInfo lastManagedFrame;
			int local_34;

			if (args == null) {
				throw new NullReferenceException();
			}
			if (args.Length == 0) {
				__this = new CustomLogicColorBuiltin();
			}
			else {
				iVar2 = (int)args.Length;
				if (iVar2 == 4) {
					pIVar1 = args[0];
					iVar3 = CustomLogicEvaluator.ConvertTo<int>(pIVar1);
					if ((((args.Length & 0xfffffffe) == 0) ||(iVar4 = CustomLogicEvaluator.ConvertTo<int>(args[1]) , (uint)args.Length < 3)) ||(iVar5 = CustomLogicEvaluator.ConvertTo<int>(args[2]),(args.Length & 0xfffffffc) == 0)) {
		label_059ab679: ;
						throw new IndexOutOfRangeException();
					}
					a = CustomLogicEvaluator.ConvertTo<int>(args[3]);
					__this = new CustomLogicColorBuiltin(iVar3, iVar4, iVar5, a);
				}
				else if (iVar2 == 3) {
					pIVar1 = args[0];
					iVar3 = CustomLogicEvaluator.ConvertTo<int>(pIVar1);
					if (((args.Length & 0xfffffffe) == 0) ||(iVar4 = CustomLogicEvaluator.ConvertTo<int>(args[1]),(uint)args.Length < 3)) goto label_059ab679;
					iVar5 = CustomLogicEvaluator.ConvertTo<int>(args[2]);
					__this = new CustomLogicColorBuiltin(iVar3, iVar4, iVar5);
				}
				else {
					if (iVar2 != 1) {
						pSVar6 = local_34.ToString();
						str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicColorBuiltin constructor found that takes ");
						str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
						pSVar6 = String.Concat(str0, pSVar6, str2);
						klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
						__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
						__this_00 = new ArgumentException(pSVar6);
						lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicColorBuiltin_Factory_CreateInstance);
						throw (object)__this_00;
					}
					pIVar1 = args[0];
					pSVar6 = CustomLogicEvaluator.ConvertTo<string>(pIVar1);
					__this = new CustomLogicColorBuiltin(pSVar6);
				}
			}
			return __this;
		}
	}

	[Token(Token = "0x2000457")]
	public static class Bindings
	{
		[Token(Token = "0x40015BB")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001ADC")]
		[Address(RVA = "0x58AB710", Offset = "0x58AA710", VA = "0x58AB710")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLMethodBinding<CustomLogicColorBuiltin> pCVar3;
			CLPropertyBinding<CustomLogicColorBuiltin> pCVar4;
			String pSVar5;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x993c73c6) {
				if (uVar2 < 0x2115286d) {
					if (uVar2 == 0xdc1f3cc) {
						bVar1 = (name == "__Add__");
						if (bVar1) {
							if ((typeof(CustomLogicColorBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicColorBuiltin.Bindings.__CreateMethodBinding____Add__();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicColorBuiltin.Bindings.__CreateMethodBinding____Add__();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x18c37b41) {
						bVar1 = (name == "__Mul__");
						if (bVar1) {
							if ((typeof(CustomLogicColorBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicColorBuiltin.Bindings.__CreateMethodBinding____Mul__();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicColorBuiltin.Bindings.__CreateMethodBinding____Mul__();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x2115286c) {
						bVar1 = (name == "ToHexString");
						if (bVar1) {
							if ((typeof(CustomLogicColorBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicColorBuiltin.Bindings.__CreateMethodBinding__ToHexString();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicColorBuiltin.Bindings.__CreateMethodBinding__ToHexString();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x792a6492) {
					if (uVar2 == 0x549f4d10) {
						bVar1 = (name == "__Copy__");
						if (bVar1) {
							pCVar3 = CustomLogicColorBuiltin.Bindings.__CreateMethodBinding____Copy__();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x792a6491) {
						bVar1 = (name == "__Hash__");
						if (bVar1) {
							pCVar3 = CustomLogicColorBuiltin.Bindings.__CreateMethodBinding____Hash__();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x91efe6d7) {
					bVar1 = (name == "__Eq__");
					if (bVar1) {
						pCVar3 = CustomLogicColorBuiltin.Bindings.__CreateMethodBinding____Eq__();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x993c73c5) {
					bVar1 = (name == "Gradient");
					if (bVar1) {
						pCVar3 = CustomLogicColorBuiltin.Bindings.__CreateMethodBinding__Gradient();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xc40bf6cd) {
				if (uVar2 < 0x9f4a1a21) {
					if (uVar2 == 0x9e956088) {
						bVar1 = (name == "Lerp");
						if (bVar1) {
							pCVar3 = CustomLogicColorBuiltin.Bindings.__CreateMethodBinding__Lerp();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x9f4a1a20) {
						bVar1 = (name == "__Str__");
						if (bVar1) {
							pCVar3 = CustomLogicColorBuiltin.Bindings.__CreateMethodBinding____Str__();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0xc20bf3a6) {
					bVar1 = (name == "G");
					if (bVar1) {
						pCVar4 = CustomLogicColorBuiltin.Bindings.__CreatePropertyBinding__G();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0xc40bf6cc) {
					bVar1 = (name == "A");
					if (bVar1) {
						pCVar4 = CustomLogicColorBuiltin.Bindings.__CreatePropertyBinding__A();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 < 0xd70c14b6) {
				if (uVar2 == 0xc70bfb85) {
					bVar1 = (name == "B");
					if (bVar1) {
						pCVar4 = CustomLogicColorBuiltin.Bindings.__CreatePropertyBinding__B();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0xd70c14b5) {
					bVar1 = (name == "R");
					if (bVar1) {
						pCVar4 = CustomLogicColorBuiltin.Bindings.__CreatePropertyBinding__R();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 == 0xd7cecb55) {
				bVar1 = (name == "__Sub__");
				if (bVar1) {
					pCVar3 = CustomLogicColorBuiltin.Bindings.__CreateMethodBinding____Sub__();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xff76b6dc) {
				bVar1 = (name == "__Div__");
				if (bVar1) {
					pCVar3 = CustomLogicColorBuiltin.Bindings.__CreateMethodBinding____Div__();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicColorBuiltin not found");
			pSVar5 = String.Concat(pSVar5, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6001ADD")]
		[Address(RVA = "0x58ABD30", Offset = "0x58AAD30", VA = "0x58ABD30")]
		public static CLPropertyBinding<CustomLogicColorBuiltin> __CreatePropertyBinding__R()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreatePropertyBinding__R): 3 lines keep C-only constructs
			Func<CustomLogicColorBuiltin, object> __this;
			Action<CustomLogicColorBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicColorBuiltin> __this_01;

			__this = new Func<CustomLogicColorBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__R_g____getter_2_0);
			__this_00 = new Action<CustomLogicColorBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__R_g____setter_2_1);
			__this_01 = new CLPropertyBinding<CustomLogicColorBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001ADE")]
		[Address(RVA = "0x58ABE10", Offset = "0x58AAE10", VA = "0x58ABE10")]
		public static CLPropertyBinding<CustomLogicColorBuiltin> __CreatePropertyBinding__G()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreatePropertyBinding__G): 3 lines keep C-only constructs
			Func<CustomLogicColorBuiltin, object> __this;
			Action<CustomLogicColorBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicColorBuiltin> __this_01;

			__this = new Func<CustomLogicColorBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__G_g____getter_3_0);
			__this_00 = new Action<CustomLogicColorBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__G_g____setter_3_1);
			__this_01 = new CLPropertyBinding<CustomLogicColorBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001ADF")]
		[Address(RVA = "0x58ABEF0", Offset = "0x58AAEF0", VA = "0x58ABEF0")]
		public static CLPropertyBinding<CustomLogicColorBuiltin> __CreatePropertyBinding__B()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreatePropertyBinding__B): 3 lines keep C-only constructs
			Func<CustomLogicColorBuiltin, object> __this;
			Action<CustomLogicColorBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicColorBuiltin> __this_01;

			__this = new Func<CustomLogicColorBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__B_g____getter_4_0);
			__this_00 = new Action<CustomLogicColorBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__B_g____setter_4_1);
			__this_01 = new CLPropertyBinding<CustomLogicColorBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001AE0")]
		[Address(RVA = "0x58ABFD0", Offset = "0x58AAFD0", VA = "0x58ABFD0")]
		public static CLPropertyBinding<CustomLogicColorBuiltin> __CreatePropertyBinding__A()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreatePropertyBinding__A): 3 lines keep C-only constructs
			Func<CustomLogicColorBuiltin, object> __this;
			Action<CustomLogicColorBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicColorBuiltin> __this_01;

			__this = new Func<CustomLogicColorBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__A_g____getter_5_0);
			__this_00 = new Action<CustomLogicColorBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__A_g____setter_5_1);
			__this_01 = new CLPropertyBinding<CustomLogicColorBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001AE1")]
		[Address(RVA = "0x58AC0B0", Offset = "0x58AB0B0", VA = "0x58AC0B0")]
		public static CLMethodBinding<CustomLogicColorBuiltin> __CreateMethodBinding__ToHexString()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding__ToHexString): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicColorBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicColorBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicColorBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545af4 == false) {
				Il2CppMethodInitialized_07545af4 = true;
				uVar1 = (typeof(CustomLogicColorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicColorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicColorBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__6_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicColorBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__6_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicColorBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicColorBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicColorBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding__ToHexString_b__6_0);
				pCVar2 = typeof(CustomLogicColorBuiltin.Bindings.c).static_fields;
				pCVar2.__9__6_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicColorBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001AE2")]
		[Address(RVA = "0x58AC1F0", Offset = "0x58AB1F0", VA = "0x58AC1F0")]
		public static CLMethodBinding<CustomLogicColorBuiltin> __CreateMethodBinding__Lerp()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding__Lerp): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicColorBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicColorBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicColorBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545af5 == false) {
				Il2CppMethodInitialized_07545af5 = true;
				uVar1 = (typeof(CustomLogicColorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicColorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicColorBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__7_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicColorBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__7_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicColorBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicColorBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicColorBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding__Lerp_b__7_0);
				pCVar2 = typeof(CustomLogicColorBuiltin.Bindings.c).static_fields;
				pCVar2.__9__7_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicColorBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001AE3")]
		[Address(RVA = "0x58AC330", Offset = "0x58AB330", VA = "0x58AC330")]
		public static CLMethodBinding<CustomLogicColorBuiltin> __CreateMethodBinding__Gradient()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding__Gradient): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicColorBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicColorBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicColorBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545af6 == false) {
				Il2CppMethodInitialized_07545af6 = true;
				uVar1 = (typeof(CustomLogicColorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicColorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicColorBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__8_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicColorBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__8_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicColorBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicColorBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicColorBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding__Gradient_b__8_0);
				pCVar2 = typeof(CustomLogicColorBuiltin.Bindings.c).static_fields;
				pCVar2.__9__8_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicColorBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001AE4")]
		[Address(RVA = "0x58AC470", Offset = "0x58AB470", VA = "0x58AC470")]
		public static CLMethodBinding<CustomLogicColorBuiltin> __CreateMethodBinding____Eq__()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding____Eq__): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicColorBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicColorBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicColorBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545af7 == false) {
				Il2CppMethodInitialized_07545af7 = true;
				uVar1 = (typeof(CustomLogicColorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicColorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicColorBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__9_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicColorBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__9_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicColorBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicColorBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicColorBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Eq___b__9_0);
				pCVar2 = typeof(CustomLogicColorBuiltin.Bindings.c).static_fields;
				pCVar2.__9__9_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicColorBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001AE5")]
		[Address(RVA = "0x58AC5B0", Offset = "0x58AB5B0", VA = "0x58AC5B0")]
		public static CLMethodBinding<CustomLogicColorBuiltin> __CreateMethodBinding____Hash__()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding____Hash__): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicColorBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicColorBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicColorBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545af8 == false) {
				Il2CppMethodInitialized_07545af8 = true;
				uVar1 = (typeof(CustomLogicColorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicColorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicColorBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__10_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicColorBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__10_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicColorBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicColorBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicColorBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Hash___b__10_0);
				pCVar2 = typeof(CustomLogicColorBuiltin.Bindings.c).static_fields;
				pCVar2.__9__10_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicColorBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001AE6")]
		[Address(RVA = "0x58AC6F0", Offset = "0x58AB6F0", VA = "0x58AC6F0")]
		public static CLMethodBinding<CustomLogicColorBuiltin> __CreateMethodBinding____Copy__()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding____Copy__): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicColorBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicColorBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicColorBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545af9 == false) {
				Il2CppMethodInitialized_07545af9 = true;
				uVar1 = (typeof(CustomLogicColorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicColorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicColorBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__11_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicColorBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__11_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicColorBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicColorBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicColorBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Copy___b__11_0);
				pCVar2 = typeof(CustomLogicColorBuiltin.Bindings.c).static_fields;
				pCVar2.__9__11_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicColorBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001AE7")]
		[Address(RVA = "0x58AC830", Offset = "0x58AB830", VA = "0x58AC830")]
		public static CLMethodBinding<CustomLogicColorBuiltin> __CreateMethodBinding____Str__()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding____Str__): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicColorBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicColorBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicColorBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545afa == false) {
				Il2CppMethodInitialized_07545afa = true;
				uVar1 = (typeof(CustomLogicColorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicColorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicColorBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__12_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicColorBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__12_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicColorBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicColorBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicColorBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Str___b__12_0);
				pCVar2 = typeof(CustomLogicColorBuiltin.Bindings.c).static_fields;
				pCVar2.__9__12_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicColorBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001AE8")]
		[Address(RVA = "0x58AC970", Offset = "0x58AB970", VA = "0x58AC970")]
		public static CLMethodBinding<CustomLogicColorBuiltin> __CreateMethodBinding____Add__()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding____Add__): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicColorBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicColorBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicColorBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545afb == false) {
				Il2CppMethodInitialized_07545afb = true;
				uVar1 = (typeof(CustomLogicColorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicColorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicColorBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__13_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicColorBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__13_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicColorBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicColorBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicColorBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Add___b__13_0);
				pCVar2 = typeof(CustomLogicColorBuiltin.Bindings.c).static_fields;
				pCVar2.__9__13_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicColorBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001AE9")]
		[Address(RVA = "0x58ACAB0", Offset = "0x58ABAB0", VA = "0x58ACAB0")]
		public static CLMethodBinding<CustomLogicColorBuiltin> __CreateMethodBinding____Sub__()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding____Sub__): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicColorBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicColorBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicColorBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545afc == false) {
				Il2CppMethodInitialized_07545afc = true;
				uVar1 = (typeof(CustomLogicColorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicColorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicColorBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__14_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicColorBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__14_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicColorBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicColorBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicColorBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Sub___b__14_0);
				pCVar2 = typeof(CustomLogicColorBuiltin.Bindings.c).static_fields;
				pCVar2.__9__14_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicColorBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001AEA")]
		[Address(RVA = "0x58ACBF0", Offset = "0x58ABBF0", VA = "0x58ACBF0")]
		public static CLMethodBinding<CustomLogicColorBuiltin> __CreateMethodBinding____Mul__()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding____Mul__): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicColorBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicColorBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicColorBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545afd == false) {
				Il2CppMethodInitialized_07545afd = true;
				uVar1 = (typeof(CustomLogicColorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicColorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicColorBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__15_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicColorBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__15_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicColorBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicColorBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicColorBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Mul___b__15_0);
				pCVar2 = typeof(CustomLogicColorBuiltin.Bindings.c).static_fields;
				pCVar2.__9__15_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicColorBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001AEB")]
		[Address(RVA = "0x58ACD30", Offset = "0x58ABD30", VA = "0x58ACD30")]
		public static CLMethodBinding<CustomLogicColorBuiltin> __CreateMethodBinding____Div__()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding____Div__): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicColorBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicColorBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicColorBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545afe == false) {
				Il2CppMethodInitialized_07545afe = true;
				uVar1 = (typeof(CustomLogicColorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicColorBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicColorBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__16_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicColorBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__16_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicColorBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicColorBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicColorBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Div___b__16_0);
				pCVar2 = typeof(CustomLogicColorBuiltin.Bindings.c).static_fields;
				pCVar2.__9__16_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicColorBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x40015BA")]
	[FieldOffset(Offset = "0x30")]
	public Color255 Value;

	[Token(Token = "0x170002DE")]
	public int R
	{
		[Token(Token = "0x6001ABF")]
		[Address(RVA = "0x58AA390", Offset = "0x58A9390", VA = "0x58AA390")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin$$get_R): clean
			Color255 pUVar1;

			pUVar1 = this.Value;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			return pUVar1.R;
		}
		[Token(Token = "0x6001AC0")]
		[Address(RVA = "0x58AA3B0", Offset = "0x58A93B0", VA = "0x58AA3B0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin$$set_R): clean
			Color255 pUVar1;

			pUVar1 = this.Value;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			pUVar1.R = value;
			return;
		}
	}

	[Token(Token = "0x170002DF")]
	public int G
	{
		[Token(Token = "0x6001AC1")]
		[Address(RVA = "0x58AA3D0", Offset = "0x58A93D0", VA = "0x58AA3D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin$$get_G): clean
			Color255 pUVar1;

			pUVar1 = this.Value;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			return pUVar1.G;
		}
		[Token(Token = "0x6001AC2")]
		[Address(RVA = "0x58AA3F0", Offset = "0x58A93F0", VA = "0x58AA3F0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin$$set_G): clean
			Color255 pUVar1;

			pUVar1 = this.Value;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			pUVar1.G = value;
			return;
		}
	}

	[Token(Token = "0x170002E0")]
	public int B
	{
		[Token(Token = "0x6001AC3")]
		[Address(RVA = "0x58AA410", Offset = "0x58A9410", VA = "0x58AA410")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin$$get_B): clean
			Color255 pUVar1;

			pUVar1 = this.Value;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			return pUVar1.B;
		}
		[Token(Token = "0x6001AC4")]
		[Address(RVA = "0x58AA430", Offset = "0x58A9430", VA = "0x58AA430")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin$$set_B): clean
			Color255 pUVar1;

			pUVar1 = this.Value;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			pUVar1.B = value;
			return;
		}
	}

	[Token(Token = "0x170002E1")]
	public int A
	{
		[Token(Token = "0x6001AC5")]
		[Address(RVA = "0x58AA450", Offset = "0x58A9450", VA = "0x58AA450")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin$$get_A): clean
			Color255 pUVar1;

			pUVar1 = this.Value;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			return pUVar1.A;
		}
		[Token(Token = "0x6001AC6")]
		[Address(RVA = "0x58AA470", Offset = "0x58A9470", VA = "0x58AA470")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin$$set_A): clean
			Color255 pUVar1;

			pUVar1 = this.Value;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			pUVar1.A = value;
			return;
		}
	}

	[Token(Token = "0x170002E2")]
	public override string ClassName
	{
		[Token(Token = "0x6001AD7")]
		[Address(RVA = "0x58AB3D0", Offset = "0x58AA3D0", VA = "0x58AB3D0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin$$get_ClassName): clean
			return "Color";
		}
	}

	[Token(Token = "0x170002E3")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001AD8")]
		[Address(RVA = "0x58AB400", Offset = "0x58AA400", VA = "0x58AB400", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin$$get_IsAbstract): clean
			return false;
		}
	}

	[Token(Token = "0x170002E4")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001AD9")]
		[Address(RVA = "0x58AB410", Offset = "0x58AA410", VA = "0x58AB410", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x170002E5")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001ADA")]
		[Address(RVA = "0x58AB420", Offset = "0x58AA420", VA = "0x58AB420", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6001AB9")]
	[Address(RVA = "0x58A9EC0", Offset = "0x58A8EC0", VA = "0x58A9EC0")]
	public CustomLogicColorBuiltin()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin$$.ctor): clean
		Color255 __this_00;

		__this_00 = new Color255();
		this.Value = __this_00;
		base();
		return;
	}

	[Token(Token = "0x6001ABA")]
	[Address(RVA = "0x58A9F50", Offset = "0x58A8F50", VA = "0x58A9F50")]
	public CustomLogicColorBuiltin(string hexString)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin$$.ctor): 2 lines keep C-only constructs
		Color255* targetAddress;
		bool bVar1;
		Color255 pUVar2;
		Color color;
		Color local_58;
		float local_48;
		float fStack_44;
		Color local_38;

		local_58.r = 0.0;
		local_58.g = 0.0;
		local_58.b = 0.0;
		local_58.a = 0.0;
		pUVar2 = new Color255();
		targetAddress = &this.Value;
		this.Value = pUVar2;
		base();
		bVar1 = ColorUtility.TryParseHtmlString(hexString, ref local_58);
		if (bVar1) {
			local_38.r = local_58.r;
			local_38.g = local_58.g;
			local_38.b = 0.0;
			local_38.a = 0.0;
			local_48 = local_58.b;
			fStack_44 = local_58.a;
			color.b = local_48;
			color.a = fStack_44;
			color.r = local_38.r;
			color.g = local_38.g;
			pUVar2 = new Color255(color);
			*targetAddress = pUVar2;
		}
		return;
	}

	[Token(Token = "0x6001ABB")]
	[Address(RVA = "0x58AA050", Offset = "0x58A9050", VA = "0x58AA050")]
	public CustomLogicColorBuiltin(int r, int g, int b)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin$$.ctor): 2 lines keep C-only constructs
		Color255* targetAddress;
		Color255 pUVar1;

		pUVar1 = new Color255();
		targetAddress = &this.Value;
		this.Value = pUVar1;
		base();
		pUVar1 = new Color255(r, g, b, 0xff);
		this.Value = pUVar1;
		return;
	}

	[Token(Token = "0x6001ABC")]
	[Address(RVA = "0x58AA130", Offset = "0x58A9130", VA = "0x58AA130")]
	public CustomLogicColorBuiltin(int r, int g, int b, int a)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin$$.ctor): 2 lines keep C-only constructs
		Color255* targetAddress;
		Color255 pUVar1;

		pUVar1 = new Color255();
		targetAddress = &this.Value;
		this.Value = pUVar1;
		base();
		pUVar1 = new Color255(r, g, b, a);
		this.Value = pUVar1;
		return;
	}

	[Token(Token = "0x6001ABD")]
	[Address(RVA = "0x58AA210", Offset = "0x58A9210", VA = "0x58AA210")]
	public CustomLogicColorBuiltin(Color color)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin$$.ctor): 2 lines keep C-only constructs
		Color255* targetAddress;
		Color255 pUVar1;

		pUVar1 = new Color255();
		targetAddress = &this.Value;
		this.Value = pUVar1;
		base();
		pUVar1 = new Color255(color);
		this.Value = pUVar1;
		return;
	}

	[Token(Token = "0x6001ABE")]
	[Address(RVA = "0x58AA2E0", Offset = "0x58A92E0", VA = "0x58AA2E0")]
	public CustomLogicColorBuiltin(Color255 value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin$$.ctor): 2 lines keep C-only constructs
		Color255* targetAddress;
		Color255 __this_00;

		__this_00 = new Color255();
		targetAddress = &this.Value;
		this.Value = __this_00;
		base();
		this.Value = value;
		return;
	}

	[Token(Token = "0x6001AC7")]
	[Address(RVA = "0x58AA490", Offset = "0x58A9490", VA = "0x58AA490")]
	public string ToHexString()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin$$ToHexString): clean
		Color255 __this_00;
		String pSVar1;

		__this_00 = this.Value;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		return pSVar1;
	}

	[Token(Token = "0x6001AC8")]
	[Address(RVA = "0x58AA4B0", Offset = "0x58A94B0", VA = "0x58AA4B0")]
	public static CustomLogicColorBuiltin Lerp(CustomLogicColorBuiltin a, CustomLogicColorBuiltin b, float t)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin$$Lerp): clean
		Color255 value;
		CustomLogicColorBuiltin __this;

		if ((a == null) ||(b == null)) {
			throw new NullReferenceException();
		}
		value = Color255.Lerp(a.Value, b.Value, t);
		__this = new CustomLogicColorBuiltin(value);
		return __this;
	}

	[Token(Token = "0x6001AC9")]
	[Address(RVA = "0x58AA530", Offset = "0x58A9530", VA = "0x58AA530")]
	public static CustomLogicColorBuiltin Gradient(CustomLogicColorBuiltin a, CustomLogicColorBuiltin b, float t)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin$$Gradient): clean
		GradientColorKey[] colorKeys;
		GradientAlphaKey[] alphakeys;
		Color255 pUVar1;
		CustomLogicColorBuiltin __this;
		float fVar2;
		Color UVar3;
		GradientAlphaKey UStack_78;
		GradientAlphaKey UStack_70;
		float fStack_68;
		GradientColorKey UStack_58;
		GradientColorKey UStack_38;

		colorKeys = (GradientColorKey[])new GradientColorKey[2];
		if ((a != null) &&(pUVar1 = a.Value, pUVar1 != null)) {
			UVar3 = pUVar1.ToColor();
			UStack_38.color.r = 0.0;
			UStack_38.color.g = 0.0;
			UStack_38.color.b = 0.0;
			UStack_38.color.a = 0.0;
			UStack_38.time = 0.0;
			UStack_38 = new GradientColorKey(UVar3, 0.0);
			if (colorKeys != null) {
				if ((int)colorKeys.Length == 0) {
	label_059aa78b: ;
					throw new IndexOutOfRangeException();
				}
				colorKeys[0].time = UStack_38.time;
				colorKeys[0].color.r = UStack_38.color.r;
				colorKeys[0].color.g = UStack_38.color.g;
				colorKeys[0].color.b = UStack_38.color.b;
				colorKeys[0].color.a = UStack_38.color.a;
				if ((b != null) &&(pUVar1 = b.Value, pUVar1 != null)) {
					UVar3 = pUVar1.ToColor();
					UStack_58.color.r = 0.0;
					UStack_58.color.g = 0.0;
					UStack_58.color.b = 0.0;
					UStack_58.color.a = 0.0;
					UStack_58.time = 0.0;
					UStack_58 = new GradientColorKey(UVar3, 1.0);
					if ((colorKeys.Length & 0xfffffffe) == 0) goto label_059aa78b;
					colorKeys[1].time = UStack_58.time;
					colorKeys[1].color.r = UStack_58.color.r;
					colorKeys[1].color.g = UStack_58.color.g;
					colorKeys[1].color.b = UStack_58.color.b;
					colorKeys[1].color.a = UStack_58.color.a;
					alphakeys = (GradientAlphaKey[])new GradientAlphaKey[2];
					pUVar1 = a.Value;
					if (pUVar1 != null) {
						UVar3 = pUVar1.ToColor();
						fVar2 = UVar3.a;
						pUVar1 = a.Value;
						if (pUVar1 != null) {
							fStack_68 = fVar2;
							UVar3 = pUVar1.ToColor();
							UStack_70.alpha = 0.0;
							UStack_70.time = 0.0;
							UStack_70 = new GradientAlphaKey(fStack_68, UVar3.a);
							if (alphakeys != null) {
								if ((int)alphakeys.Length == 0) goto label_059aa78b;
								alphakeys[0] = UStack_70;
								pUVar1 = b.Value;
								if (pUVar1 != null) {
									UVar3 = pUVar1.ToColor();
									fVar2 = UVar3.a;
									pUVar1 = b.Value;
									if (pUVar1 != null) {
										fStack_68 = fVar2;
										UVar3 = pUVar1.ToColor();
										UStack_78.alpha = 0.0;
										UStack_78.time = 0.0;
										UStack_78 = new GradientAlphaKey(fStack_68, UVar3.a);
										if ((alphakeys.Length & 0xfffffffe) != 0) {
											alphakeys[1] = UStack_78;
											pUVar1 = Color255.Gradient(colorKeys, alphakeys, 0, t);
											__this = new CustomLogicColorBuiltin(pUVar1);
											return __this;
										}
										goto label_059aa78b;
									}
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001ACA")]
	[Address(RVA = "0x58AA790", Offset = "0x58A9790", VA = "0x58AA790", Slot = "2")]
	public override int GetHashCode()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin$$GetHashCode): clean
		Color255 pUVar1;
		int iVar2;

		pUVar1 = this.Value;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		return iVar2;
	}

	[Token(Token = "0x6001ACB")]
	[Address(RVA = "0x58AA7C0", Offset = "0x58A97C0", VA = "0x58AA7C0", Slot = "0")]
	public override bool Equals(object obj)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin$$Equals): 2 lines keep C-only constructs
		byte bVar1;
		Color255 pUVar2;
		Il2CppClass pIVar3;

		if (obj != null) {
			bVar1 = (typeof(CustomLogicColorBuiltin)._2).typeHierarchyDepth;
			if ((bVar1 <= (obj.klass._2).typeHierarchyDepth) &&((obj.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicColorBuiltin))) {
				pUVar2 = this.Value;
				if ((pUVar2 == null) || (pIVar3 = obj[3].klass, pIVar3 == null)) {
					throw new NullReferenceException();
				}
				if (((pUVar2.R == *(int)&(pIVar3._1).name) &&(pUVar2.G == *(int)((long)&(pIVar3._1).name + 4))) &&(pUVar2.B == *(int)&(pIVar3._1).namespaze)) {
					return pUVar2.A == *(int)((long)&(pIVar3._1).namespaze + 4);
				}
			}
		}
		return false;
	}

	[Token(Token = "0x6001ACC")]
	[Address(RVA = "0x58AA860", Offset = "0x58A9860", VA = "0x58AA860", Slot = "3")]
	public override string ToString()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin$$ToString): 4 lines keep C-only constructs
		Color255 pUVar1;
		Object[] args;
		object pIVar2;
		object pIVar3;
		String pSVar4;
		int local_38;
		int local_34;
		int local_30;
		int local_2c;

		args = (Object[])new object[4];
		pUVar1 = this.Value;
		if (pUVar1 == null) {
	label_059aaa5e: ;
			throw new NullReferenceException();
		}
		local_2c = pUVar1.R;
		pIVar2 = (object)local_2c;
		if (args == null) goto label_059aaa5e;
		if (pIVar2 != null) {
			pIVar3 = il2cpp_vm_Object_IsInst(pIVar2, (((args.obj).klass)._1).element_class);
			if (pIVar3 == null) goto label_059aaa68;
		}
		if ((int)args.Length != 0) {
			args[0] = pIVar2;
			pUVar1 = this.Value;
			if (pUVar1 == null) goto label_059aaa5e;
			local_30 = pUVar1.G;
			pIVar2 = (object)local_30;
			if (pIVar2 != null) {
				pIVar3 = il2cpp_vm_Object_IsInst(pIVar2, (((args.obj).klass)._1).element_class);
				if (pIVar3 == null) goto label_059aaa68;
			}
			if ((args.Length & 0xfffffffe) == 0) goto label_059aaa63;
			args[1] = pIVar2;
			pUVar1 = this.Value;
			if (pUVar1 == null) goto label_059aaa5e;
			local_34 = pUVar1.B;
			pIVar2 = (object)local_34;
			if (pIVar2 != null) {
				pIVar3 = il2cpp_vm_Object_IsInst(pIVar2, (((args.obj).klass)._1).element_class);
				if (pIVar3 == null) goto label_059aaa68;
			}
			if (2 < (uint)args.Length) {
				args[2] = pIVar2;
				pUVar1 = this.Value;
				if (pUVar1 == null) goto label_059aaa5e;
				local_38 = pUVar1.A;
				pIVar2 = (object)local_38;
				if (pIVar2 != null) {
					pIVar3 = il2cpp_vm_Object_IsInst(pIVar2, (((args.obj).klass)._1).element_class);
					if (pIVar3 == null) {
	label_059aaa68: ;
						pIVar2 = new ArrayTypeMismatchException();
						throw pIVar2;
					}
				}
				if ((args.Length & 0xfffffffc) != 0) {
					args[3] = pIVar2;
					pSVar4 = String.Format("({0}, {1}, {2}, {3})", args);
					return pSVar4;
				}
			}
		}
	label_059aaa63: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6001ACD")]
	[Address(RVA = "0x58AAA80", Offset = "0x58A9A80", VA = "0x58AAA80")]
	public CustomLogicColorBuiltin Copy()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin$$Copy): clean
		int r;
		int g;
		int b;
		int a;
		Color255 pUVar1;
		CustomLogicColorBuiltin __this_00;

		pUVar1 = this.Value;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		r = pUVar1.R;
		g = pUVar1.G;
		b = pUVar1.B;
		a = pUVar1.A;
		pUVar1 = new Color255(r, g, b, a);
		__this_00 = new CustomLogicColorBuiltin(pUVar1);
		return __this_00;
	}

	[Token(Token = "0x6001ACE")]
	[Address(RVA = "0x58AAB30", Offset = "0x58A9B30", VA = "0x58AAB30", Slot = "11")]
	public bool __Eq__(object self, object other)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin$$__Eq__): 4 lines keep C-only constructs
		byte bVar1;

		if (self != null) {
			bVar1 = (typeof(CustomLogicColorBuiltin)._2).typeHierarchyDepth;
			if (bVar1 <= (self.klass._2).typeHierarchyDepth) {
				if ((self.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CustomLogicColorBuiltin)) {
					self = null;
				}
				if ((((other != null) && (self != null)) &&(bVar1 <= (other.klass._2).typeHierarchyDepth)) &&((other.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicColorBuiltin))) {
					return self[3].klass == other[3].klass;
				}
			}
		}
		return false;
	}

	[Token(Token = "0x6001ACF")]
	[Address(RVA = "0x58AABD0", Offset = "0x58A9BD0", VA = "0x58AABD0", Slot = "12")]
	public int __Hash__()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin$$__Hash__): clean
		Color255 pUVar1;
		int iVar2;

		pUVar1 = this.Value;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		return iVar2;
	}

	[Token(Token = "0x6001AD0")]
	[Address(RVA = "0x58AAC00", Offset = "0x58A9C00", VA = "0x58AAC00", Slot = "13")]
	public object __Copy__()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin$$__Copy__): clean
		int r;
		int g;
		int b;
		int a;
		Color255 pUVar1;
		CustomLogicColorBuiltin __this_00;

		pUVar1 = this.Value;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		r = pUVar1.R;
		g = pUVar1.G;
		b = pUVar1.B;
		a = pUVar1.A;
		pUVar1 = new Color255(r, g, b, a);
		__this_00 = new CustomLogicColorBuiltin(pUVar1);
		return (object)__this_00;
	}

	[Token(Token = "0x6001AD1")]
	[Address(RVA = "0x58AACB0", Offset = "0x58A9CB0", VA = "0x58AACB0", Slot = "19")]
	public string __Str__()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin$$__Str__): clean
		String pSVar1;

		pSVar1 = this.ToString() ;
		return pSVar1;
	}

	[Token(Token = "0x6001AD2")]
	[Address(RVA = "0x58AACD0", Offset = "0x58A9CD0", VA = "0x58AACD0", Slot = "14")]
	public object __Add__(object self, object other)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin$$__Add__): 5 lines keep C-only constructs
		byte bVar1;
		Il2CppClass pIVar2;
		Il2CppClass pIVar3;
		Color255 __this_00;
		CustomLogicColorBuiltin __this_01;
		String operatorName;
		Exception ex;
		MethodInfo lastManagedFrame;
		int b;
		int a;
		int r;
		int g;

		if (self != null) {
			bVar1 = (typeof(CustomLogicColorBuiltin)._2).typeHierarchyDepth;
			if ((((bVar1 <= (self.klass._2).typeHierarchyDepth) && (other != null)) &&((self.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicColorBuiltin))) &&((bVar1 <= (other.klass._2).typeHierarchyDepth &&((other.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicColorBuiltin))))) {
				pIVar2 = self[3].klass;
				if ((pIVar2 == null) || (pIVar3 = other[3].klass, pIVar3 == null)) {
					throw new NullReferenceException();
				}
				r = *(int)&(pIVar3._1).name + *(int)&(pIVar2._1).name;
				if (0xfe < r) {
					r = 0xff;
				}
				if (r < 1) {
					r = 0;
				}
				g = *(int)((long)&(pIVar3._1).name + 4) + *(int)((long)&(pIVar2._1).name + 4);
				if (0xfe < g) {
					g = 0xff;
				}
				if (g < 1) {
					g = 0;
				}
				b = *(int)&(pIVar3._1).namespaze + *(int)&(pIVar2._1).namespaze;
				if (0xfe < b) {
					b = 0xff;
				}
				if (b < 1) {
					b = 0;
				}
				a = *(int)((long)&(pIVar3._1).namespaze + 4) + *(int)((long)&(pIVar2._1).namespaze + 4);
				if (0xfe < a) {
					a = 0xff;
				}
				if (a < 1) {
					a = 0;
				}
				__this_00 = new Color255(r, g, b, a);
				__this_01 = new CustomLogicColorBuiltin(__this_00);
				return (object)__this_01;
			}
		}
		operatorName = il2cpp_codegen_get_runtime_metadata(&"__Add__");
		ex = CustomLogicUtils.OperatorException(operatorName, self, other);
		lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicColorBuiltin___Add);
		throw (object)ex;
	}

	[Token(Token = "0x6001AD3")]
	[Address(RVA = "0x58AAE80", Offset = "0x58A9E80", VA = "0x58AAE80", Slot = "15")]
	public object __Sub__(object self, object other)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin$$__Sub__): 5 lines keep C-only constructs
		byte bVar1;
		Il2CppClass pIVar2;
		Il2CppClass pIVar3;
		Color255 __this_00;
		CustomLogicColorBuiltin __this_01;
		String operatorName;
		Exception ex;
		MethodInfo lastManagedFrame;
		int b;
		int a;
		int r;
		int g;

		if (self != null) {
			bVar1 = (typeof(CustomLogicColorBuiltin)._2).typeHierarchyDepth;
			if ((((bVar1 <= (self.klass._2).typeHierarchyDepth) && (other != null)) &&((self.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicColorBuiltin))) &&((bVar1 <= (other.klass._2).typeHierarchyDepth &&((other.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicColorBuiltin))))) {
				pIVar2 = self[3].klass;
				if ((pIVar2 == null) || (pIVar3 = other[3].klass, pIVar3 == null)) {
					throw new NullReferenceException();
				}
				r = *(int)&(pIVar2._1).name - *(int)&(pIVar3._1).name;
				if (0xfe < r) {
					r = 0xff;
				}
				if (r < 1) {
					r = 0;
				}
				g = *(int)((long)&(pIVar2._1).name + 4) - *(int)((long)&(pIVar3._1).name + 4);
				if (0xfe < g) {
					g = 0xff;
				}
				if (g < 1) {
					g = 0;
				}
				b = *(int)&(pIVar2._1).namespaze - *(int)&(pIVar3._1).namespaze;
				if (0xfe < b) {
					b = 0xff;
				}
				if (b < 1) {
					b = 0;
				}
				a = *(int)((long)&(pIVar2._1).namespaze + 4) - *(int)((long)&(pIVar3._1).namespaze + 4);
				if (0xfe < a) {
					a = 0xff;
				}
				if (a < 1) {
					a = 0;
				}
				__this_00 = new Color255(r, g, b, a);
				__this_01 = new CustomLogicColorBuiltin(__this_00);
				return (object)__this_01;
			}
		}
		operatorName = il2cpp_codegen_get_runtime_metadata(&"__Sub__");
		ex = CustomLogicUtils.OperatorException(operatorName, self, other);
		lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicColorBuiltin___Sub);
		throw (object)ex;
	}

	[Token(Token = "0x6001AD4")]
	[Address(RVA = "0x58AB030", Offset = "0x58AA030", VA = "0x58AB030", Slot = "16")]
	public object __Mul__(object self, object other)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin$$__Mul__): 5 lines keep C-only constructs
		byte bVar1;
		Il2CppClass pIVar2;
		Il2CppClass pIVar3;
		Color255 __this_00;
		CustomLogicColorBuiltin __this_01;
		String operatorName;
		Exception ex;
		MethodInfo lastManagedFrame;
		int b;
		int a;
		int r;
		int g;

		if (self != null) {
			bVar1 = (typeof(CustomLogicColorBuiltin)._2).typeHierarchyDepth;
			if ((((bVar1 <= (self.klass._2).typeHierarchyDepth) && (other != null)) &&((self.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicColorBuiltin))) &&((bVar1 <= (other.klass._2).typeHierarchyDepth &&((other.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicColorBuiltin))))) {
				pIVar2 = self[3].klass;
				if ((pIVar2 == null) || (pIVar3 = other[3].klass, pIVar3 == null)) {
					throw new NullReferenceException();
				}
				r = *(int)&(pIVar3._1).name * *(int)&(pIVar2._1).name;
				if (0xfe < r) {
					r = 0xff;
				}
				if (r < 1) {
					r = 0;
				}
				g = *(int)((long)&(pIVar3._1).name + 4) * *(int)((long)&(pIVar2._1).name + 4);
				if (0xfe < g) {
					g = 0xff;
				}
				if (g < 1) {
					g = 0;
				}
				b = *(int)&(pIVar3._1).namespaze * *(int)&(pIVar2._1).namespaze;
				if (0xfe < b) {
					b = 0xff;
				}
				if (b < 1) {
					b = 0;
				}
				a = *(int)((long)&(pIVar3._1).namespaze + 4) * *(int)((long)&(pIVar2._1).namespaze + 4);
				if (0xfe < a) {
					a = 0xff;
				}
				if (a < 1) {
					a = 0;
				}
				__this_00 = new Color255(r, g, b, a);
				__this_01 = new CustomLogicColorBuiltin(__this_00);
				return (object)__this_01;
			}
		}
		operatorName = il2cpp_codegen_get_runtime_metadata(&"__Mul__");
		ex = CustomLogicUtils.OperatorException(operatorName, self, other);
		lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicColorBuiltin___Mul);
		throw (object)ex;
	}

	[Token(Token = "0x6001AD5")]
	[Address(RVA = "0x58AB1E0", Offset = "0x58AA1E0", VA = "0x58AB1E0", Slot = "17")]
	public object __Div__(object self, object other)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin$$__Div__): 5 lines keep C-only constructs
		byte bVar1;
		Il2CppClass pIVar2;
		Il2CppClass pIVar3;
		int r;
		int g;
		int b;
		int iVar4;
		Color255 __this_00;
		CustomLogicColorBuiltin __this_01;
		String operatorName;
		Exception ex;
		MethodInfo lastManagedFrame;
		int a;

		if (self != null) {
			bVar1 = (typeof(CustomLogicColorBuiltin)._2).typeHierarchyDepth;
			if ((((bVar1 <= (self.klass._2).typeHierarchyDepth) && (other != null)) &&((self.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicColorBuiltin))) &&((bVar1 <= (other.klass._2).typeHierarchyDepth &&((other.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicColorBuiltin))))) {
				pIVar2 = self[3].klass;
				if ((pIVar2 == null) || (pIVar3 = other[3].klass, pIVar3 == null)) {
					throw new NullReferenceException();
				}
				r = *(int)&(pIVar2._1).name / *(int)&(pIVar3._1).name;
				if (0xfe < r) {
					r = 0xff;
				}
				if (r < 1) {
					r = 0;
				}
				g = *(int)((long)&(pIVar2._1).name + 4) / *(int)((long)&(pIVar3._1).name + 4);
				if (0xfe < g) {
					g = 0xff;
				}
				if (g < 1) {
					g = 0;
				}
				b = *(int)&(pIVar2._1).namespaze / *(int)&(pIVar3._1).namespaze;
				if (0xfe < b) {
					b = 0xff;
				}
				if (b < 1) {
					b = 0;
				}
				iVar4 = *(int)((long)&(pIVar2._1).namespaze + 4) / *(int)((long)&(pIVar3._1).namespaze + 4);
				a = 0xff;
				if (iVar4 < 0xff) {
					a = iVar4;
				}
				if (a < 1) {
					a = 0;
				}
				__this_00 = new Color255(r, g, b, a);
				__this_01 = new CustomLogicColorBuiltin(__this_00);
				return (object)__this_01;
			}
		}
		operatorName = il2cpp_codegen_get_runtime_metadata(&"__Div__");
		ex = CustomLogicUtils.OperatorException(operatorName, self, other);
		lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicColorBuiltin___Div);
		throw (object)ex;
	}

	[Token(Token = "0x6001AD6")]
	[Address(RVA = "0x58AB390", Offset = "0x58AA390", VA = "0x58AB390", Slot = "18")]
	public object __Mod__(object self, object other)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c (CustomLogic.CustomLogicColorBuiltin$$__Mod__): 4 lines keep C-only constructs
		Il2CppClass klass;
		NotImplementedException __this_00;
		MethodInfo lastManagedFrame;

		klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotImplementedException));
		__this_00 = (NotImplementedException)il2cpp_codegen_object_new(klass);
		__this_00 = new NotImplementedException();
		lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicColorBuiltin___Mod);
		throw (object)__this_00;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicColorBuiltin.c.

	// CustomLogic.CustomLogicColorBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"R");
		__this.Add((Il2CppObject *)"G");
		__this.Add((Il2CppObject *)"B");
		__this.Add((Il2CppObject *)"A");
		__this.Add((Il2CppObject *)"ToHexString");
		__this.Add((Il2CppObject *)"Lerp");
		__this.Add((Il2CppObject *)"Gradient");
		__this.Add((Il2CppObject *)"__Eq__");
		__this.Add((Il2CppObject *)"__Hash__");
		__this.Add((Il2CppObject *)"__Copy__");
		__this.Add((Il2CppObject *)"__Str__");
		__this.Add((Il2CppObject *)"__Add__");
		__this.Add((Il2CppObject *)"__Sub__");
		__this.Add((Il2CppObject *)"__Mul__");
		__this.Add((Il2CppObject *)"__Div__");
		CustomLogicColorBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicColorBuiltin.Bindings$$<__CreatePropertyBinding__R>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__R_g____getter_2_0(CustomLogicColorBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Value == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicColorBuiltin.Bindings$$<__CreatePropertyBinding__R>g____setter|2_1: clean
	private static void Bindings____CreatePropertyBinding__R_g____setter_2_1(CustomLogicColorBuiltin __i, object __v)
	{
		Color255 pUVar1;
		int iVar2;

		iVar2 = CustomLogicEvaluator.ConvertTo<int>(__v);
		if ((__i == null) ||(pUVar1 = __i.Value, pUVar1 == null)) {
			throw new NullReferenceException();
		}
		pUVar1.R = iVar2;
		return;
	}

	// CustomLogic.CustomLogicColorBuiltin.Bindings$$<__CreatePropertyBinding__G>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__G_g____getter_3_0(CustomLogicColorBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Value == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicColorBuiltin.Bindings$$<__CreatePropertyBinding__G>g____setter|3_1: clean
	private static void Bindings____CreatePropertyBinding__G_g____setter_3_1(CustomLogicColorBuiltin __i, object __v)
	{
		Color255 pUVar1;
		int iVar2;

		iVar2 = CustomLogicEvaluator.ConvertTo<int>(__v);
		if ((__i == null) ||(pUVar1 = __i.Value, pUVar1 == null)) {
			throw new NullReferenceException();
		}
		pUVar1.G = iVar2;
		return;
	}

	// CustomLogic.CustomLogicColorBuiltin.Bindings$$<__CreatePropertyBinding__B>g____getter|4_0: clean
	private static object Bindings____CreatePropertyBinding__B_g____getter_4_0(CustomLogicColorBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Value == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicColorBuiltin.Bindings$$<__CreatePropertyBinding__B>g____setter|4_1: clean
	private static void Bindings____CreatePropertyBinding__B_g____setter_4_1(CustomLogicColorBuiltin __i, object __v)
	{
		Color255 pUVar1;
		int iVar2;

		iVar2 = CustomLogicEvaluator.ConvertTo<int>(__v);
		if ((__i == null) ||(pUVar1 = __i.Value, pUVar1 == null)) {
			throw new NullReferenceException();
		}
		pUVar1.B = iVar2;
		return;
	}

	// CustomLogic.CustomLogicColorBuiltin.Bindings$$<__CreatePropertyBinding__A>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__A_g____getter_5_0(CustomLogicColorBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__i.Value == null)) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicColorBuiltin.Bindings$$<__CreatePropertyBinding__A>g____setter|5_1: clean
	private static void Bindings____CreatePropertyBinding__A_g____setter_5_1(CustomLogicColorBuiltin __i, object __v)
	{
		Color255 pUVar1;
		int iVar2;

		iVar2 = CustomLogicEvaluator.ConvertTo<int>(__v);
		if ((__i == null) ||(pUVar1 = __i.Value, pUVar1 == null)) {
			throw new NullReferenceException();
		}
		pUVar1.A = iVar2;
		return;
	}

	// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$.cctor: clean
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = new CustomLogicColorBuiltin.Bindings.c();
		CustomLogicColorBuiltin.Bindings.c.__9 =(CustomLogicColorBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToHexString>b__6_0: clean
	private object Bindings_c____CreateMethodBinding__ToHexString_b__6_0(CustomLogicColorBuiltin __c, Object[] __a)
	{
		Color255 __this_00;
		String pSVar1;
		Color color;

		if ((__c == null) ||(__this_00 = __c.Value, __this_00 == null)) {
			throw new NullReferenceException();
		}
		color = __this_00.ToColor();
		pSVar1 = XColor.ToHexString(color);
		return (object)pSVar1;
	}

	// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding__Lerp>b__7_0: clean
	private object Bindings_c____CreateMethodBinding__Lerp_b__7_0(CustomLogicColorBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicColorBuiltin pCVar1;
		CustomLogicColorBuiltin pCVar2;
		Color255 value;
		float t;

		if (__a == null) {
	label_059ad5f0: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicColorBuiltin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				pCVar2 = CustomLogicEvaluator.ConvertTo<CustomLogicColorBuiltin>(__a[1]);
				if (2 < (uint)__a.Length) {
					t = CustomLogicEvaluator.ConvertTo<float>(__a[2]);
					if ((pCVar1 != null) &&(pCVar2 != null)) {
						value = Color255.Lerp(pCVar1.Value, pCVar2.Value, t);
						pCVar1 = new CustomLogicColorBuiltin(value);
						return (object)pCVar1;
					}
					goto label_059ad5f0;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding__Gradient>b__8_0: clean
	private object Bindings_c____CreateMethodBinding__Gradient_b__8_0(CustomLogicColorBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicColorBuiltin pCVar1;
		CustomLogicColorBuiltin b;
		float t;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicColorBuiltin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				b = CustomLogicEvaluator.ConvertTo<CustomLogicColorBuiltin>(__a[1]);
				if (2 < (uint)__a.Length) {
					t = CustomLogicEvaluator.ConvertTo<float>(__a[2]);
					pCVar1 = CustomLogicColorBuiltin.Gradient(pCVar1, b, t);
					return (object)pCVar1;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding____Eq__>b__9_0: 8 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding____Eq___b__9_0(CustomLogicColorBuiltin __c, Object[] __a)
	{
		byte bVar1;
		int iVar2;
		object pIVar3;
		ulong in_RAX;
		object pIVar4;
		bool bVar5;
		ulong uStack_18;

		if (__a == null) {
	label_059ad7a4: ;
			throw new NullReferenceException();
		}
		iVar2 = (int)__a.Length;
		if ((iVar2 == 0) || (iVar2 == 1)) {
			throw new IndexOutOfRangeException();
		}
		if (__c == null) goto label_059ad7a4;
		pIVar4 = __a[0];
		pIVar3 = __a[1];
		uStack_18 = in_RAX;
		if (pIVar4 != null) {
			bVar1 = (typeof(CustomLogicColorBuiltin)._2).typeHierarchyDepth;
			if (bVar1 <= (pIVar4.klass._2).typeHierarchyDepth) {
				bVar5 = false;
				if ((pIVar4.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CustomLogicColorBuiltin)) {
					pIVar4 = null;
				}
				if ((pIVar3 == null) || (pIVar4 == null)) goto label_059ad776;
				if ((bVar1 <= (pIVar3.klass._2).typeHierarchyDepth) &&((pIVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicColorBuiltin))) {
					bVar5 = pIVar4[3].klass == pIVar3[3].klass;
					goto label_059ad776;
				}
			}
		}
		bVar5 = false;
	label_059ad776: ;
		uStack_18 = CONCAT17(bVar5, (undefined7)uStack_18);
		pIVar4 = (object)(((long)&uStack_18 + 7));
		return pIVar4;
	}

	// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding____Hash__>b__10_0: clean
	private object Bindings_c____CreateMethodBinding____Hash___b__10_0(CustomLogicColorBuiltin __c, Object[] __a)
	{
		Color255 pUVar1;
		object pIVar2;
		byte[] auStack_4 = new byte[4];

		if ((__c == null) ||(pUVar1 = __c.Value, pUVar1 == null)) {
			throw new NullReferenceException();
		}
		pUVar1.GetHashCode();
		return pIVar2;
	}

	// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding____Copy__>b__11_0: clean
	private object Bindings_c____CreateMethodBinding____Copy___b__11_0(CustomLogicColorBuiltin __c, Object[] __a)
	{
		object pIVar1;

		if (__c == null) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding____Str__>b__12_0: clean
	private object Bindings_c____CreateMethodBinding____Str___b__12_0(CustomLogicColorBuiltin __c, Object[] __a)
	{
		String pSVar1;

		if (__c == null) {
			throw new NullReferenceException();
		}
		pSVar1 = __c.ToString();
		return (object)pSVar1;
	}

	// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding____Add__>b__13_0: clean
	private object Bindings_c____CreateMethodBinding____Add___b__13_0(CustomLogicColorBuiltin __c, Object[] __a)
	{
		int iVar1;
		object pIVar2;

		if (__a != null) {
			iVar1 = (int)__a.Length;
			if ((iVar1 == 0) || (iVar1 == 1)) {
				throw new IndexOutOfRangeException();
			}
			if (__c != null) {
				pIVar2 = this.__Add__(__a[0], __a[1]);
				return pIVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding____Sub__>b__14_0: clean
	private object Bindings_c____CreateMethodBinding____Sub___b__14_0(CustomLogicColorBuiltin __c, Object[] __a)
	{
		int iVar1;
		object pIVar2;

		if (__a != null) {
			iVar1 = (int)__a.Length;
			if ((iVar1 == 0) || (iVar1 == 1)) {
				throw new IndexOutOfRangeException();
			}
			if (__c != null) {
				pIVar2 = this.__Sub__(__a[0], __a[1]);
				return pIVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding____Mul__>b__15_0: clean
	private object Bindings_c____CreateMethodBinding____Mul___b__15_0(CustomLogicColorBuiltin __c, Object[] __a)
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

	// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding____Div__>b__16_0: clean
	private object Bindings_c____CreateMethodBinding____Div___b__16_0(CustomLogicColorBuiltin __c, Object[] __a)
	{
		int iVar1;
		object pIVar2;

		if (__a != null) {
			iVar1 = (int)__a.Length;
			if ((iVar1 == 0) || (iVar1 == 1)) {
				throw new IndexOutOfRangeException();
			}
			if (__c != null) {
				pIVar2 = this.__Div__(__a[0], __a[1]);
				return pIVar2;
			}
		}
		throw new NullReferenceException();
	}
}
