// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicInputBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicInputBuiltin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicInputBuiltin.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x20005B8")]
[CompilerGenerated]
internal class CustomLogicInputBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x20005B9")]
	public static class Factory
	{
		[Token(Token = "0x600351B")]
		[Address(RVA = "0x59E06A0", Offset = "0x59DF6A0", VA = "0x59E06A0")]
		public static CustomLogicInputBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputBuiltin.c (CustomLogic.CustomLogicInputBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			BuiltinClassInstance __this;
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicInputBuiltin constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicInputBuiltin_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicInputBuiltin();
			return (CustomLogicInputBuiltin)__this;
		}
	}

	[Token(Token = "0x20005BA")]
	public static class Bindings
	{
		[Token(Token = "0x40018EE")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x600351C")]
		[Address(RVA = "0x59E07C0", Offset = "0x59DF7C0", VA = "0x59E07C0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputBuiltin.c (CustomLogic.CustomLogicInputBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLMethodBinding<CustomLogicInputBuiltin> pCVar3;
			String pSVar4;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x8b47cad3) {
				if (uVar2 < 0x299fa333) {
					if (uVar2 < 0x1fca2dcc) {
						if (uVar2 == 0x2888963) {
							bVar1 = (name == "GetKeyUp");
							if (bVar1) {
								pCVar3 = CustomLogicInputBuiltin.Bindings.__CreateMethodBinding__GetKeyUp();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x1fca2dcb) {
							bVar1 = (name == "GetCursorAimDirection");
							if (bVar1) {
								pCVar3 = CustomLogicInputBuiltin.Bindings.__CreateMethodBinding__GetCursorAimDirection();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x230f7b6c) {
						bVar1 = (name == "SetTitanKeysEnabled");
						if (bVar1) {
							pCVar3 = CustomLogicInputBuiltin.Bindings.__CreateMethodBinding__SetTitanKeysEnabled();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x299fa332) {
						bVar1 = (name == "SetGeneralKeysEnabled");
						if (bVar1) {
							pCVar3 = CustomLogicInputBuiltin.Bindings.__CreateMethodBinding__SetGeneralKeysEnabled();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x423fef7d) {
					if (uVar2 == 0x3ce5bffd) {
						bVar1 = (name == "SetHumanKeysEnabled");
						if (bVar1) {
							pCVar3 = CustomLogicInputBuiltin.Bindings.__CreateMethodBinding__SetHumanKeysEnabled();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x423fef7c) {
						bVar1 = (name == "SetKeyDefaultEnabled");
						if (bVar1) {
							pCVar3 = CustomLogicInputBuiltin.Bindings.__CreateMethodBinding__SetKeyDefaultEnabled();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x8b47cad2) {
					bVar1 = (name == "SetInteractionKeysEnabled");
					if (bVar1) {
						pCVar3 = CustomLogicInputBuiltin.Bindings.__CreateMethodBinding__SetInteractionKeysEnabled();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x779ad7dd) {
					bVar1 = (name == "GetMousePosition");
					if (bVar1) {
						pCVar3 = CustomLogicInputBuiltin.Bindings.__CreateMethodBinding__GetMousePosition();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xbd218aad) {
				if (uVar2 < 0xa3a3c236) {
					if (uVar2 == 0xa17036af) {
						bVar1 = (name == "GetKeyHold");
						if (bVar1) {
							pCVar3 = CustomLogicInputBuiltin.Bindings.__CreateMethodBinding__GetKeyHold();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xa3a3c235) {
						bVar1 = (name == "GetMouseSpeed");
						if (bVar1) {
							pCVar3 = CustomLogicInputBuiltin.Bindings.__CreateMethodBinding__GetMouseSpeed();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0xa4899163) {
					bVar1 = (name == "SetKeyHold");
					if (bVar1) {
						pCVar3 = CustomLogicInputBuiltin.Bindings.__CreateMethodBinding__SetKeyHold();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xbd218aac) {
					bVar1 = (name == "SetCategoryKeysEnabled");
					if (bVar1) {
						pCVar3 = CustomLogicInputBuiltin.Bindings.__CreateMethodBinding__SetCategoryKeysEnabled();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xca5c42a8) {
				if (uVar2 == 0xc37a5fcd) {
					bVar1 = (name == "GetKeyName");
					if (bVar1) {
						pCVar3 = CustomLogicInputBuiltin.Bindings.__CreateMethodBinding__GetKeyName();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xca5c42a7) {
					bVar1 = (name == "GetMouseAim");
					if (bVar1) {
						pCVar3 = CustomLogicInputBuiltin.Bindings.__CreateMethodBinding__GetMouseAim();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xd098c4f6) {
				bVar1 = (name == "GetKeyDown");
				if (bVar1) {
					pCVar3 = CustomLogicInputBuiltin.Bindings.__CreateMethodBinding__GetKeyDown();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xd6be4d6a) {
				bVar1 = (name == "GetScreenDimensions");
				if (bVar1) {
					pCVar3 = CustomLogicInputBuiltin.Bindings.__CreateMethodBinding__GetScreenDimensions();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicInputBuiltin not found");
			pSVar4 = String.Concat(pSVar4, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar4);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x600351D")]
		[Address(RVA = "0x59E0E10", Offset = "0x59DFE10", VA = "0x59E0E10")]
		public static CLMethodBinding<CustomLogicInputBuiltin> __CreateMethodBinding__GetKeyName()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputBuiltin.c (CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__GetKeyName): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicInputBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicInputBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicInputBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546df1 == false) {
				Il2CppMethodInitialized_07546df1 = true;
				uVar1 = (typeof(CustomLogicInputBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicInputBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__2_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicInputBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__2_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicInputBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicInputBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicInputBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetKeyName_b__2_0);
				pCVar2 = typeof(CustomLogicInputBuiltin.Bindings.c).static_fields;
				pCVar2.__9__2_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicInputBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600351E")]
		[Address(RVA = "0x59E0F50", Offset = "0x59DFF50", VA = "0x59E0F50")]
		public static CLMethodBinding<CustomLogicInputBuiltin> __CreateMethodBinding__GetKeyHold()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputBuiltin.c (CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__GetKeyHold): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicInputBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicInputBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicInputBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546df2 == false) {
				Il2CppMethodInitialized_07546df2 = true;
				uVar1 = (typeof(CustomLogicInputBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicInputBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__3_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicInputBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__3_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicInputBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicInputBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicInputBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetKeyHold_b__3_0);
				pCVar2 = typeof(CustomLogicInputBuiltin.Bindings.c).static_fields;
				pCVar2.__9__3_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicInputBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600351F")]
		[Address(RVA = "0x59E1090", Offset = "0x59E0090", VA = "0x59E1090")]
		public static CLMethodBinding<CustomLogicInputBuiltin> __CreateMethodBinding__GetKeyDown()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputBuiltin.c (CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__GetKeyDown): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicInputBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicInputBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicInputBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546df3 == false) {
				Il2CppMethodInitialized_07546df3 = true;
				uVar1 = (typeof(CustomLogicInputBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicInputBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__4_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicInputBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__4_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicInputBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicInputBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicInputBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetKeyDown_b__4_0);
				pCVar2 = typeof(CustomLogicInputBuiltin.Bindings.c).static_fields;
				pCVar2.__9__4_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicInputBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003520")]
		[Address(RVA = "0x59E11D0", Offset = "0x59E01D0", VA = "0x59E11D0")]
		public static CLMethodBinding<CustomLogicInputBuiltin> __CreateMethodBinding__GetKeyUp()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputBuiltin.c (CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__GetKeyUp): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicInputBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicInputBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicInputBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546df4 == false) {
				Il2CppMethodInitialized_07546df4 = true;
				uVar1 = (typeof(CustomLogicInputBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicInputBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__5_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicInputBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__5_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicInputBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicInputBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicInputBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetKeyUp_b__5_0);
				pCVar2 = typeof(CustomLogicInputBuiltin.Bindings.c).static_fields;
				pCVar2.__9__5_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicInputBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003521")]
		[Address(RVA = "0x59E1310", Offset = "0x59E0310", VA = "0x59E1310")]
		public static CLMethodBinding<CustomLogicInputBuiltin> __CreateMethodBinding__GetMouseAim()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputBuiltin.c (CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__GetMouseAim): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicInputBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicInputBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicInputBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546df5 == false) {
				Il2CppMethodInitialized_07546df5 = true;
				uVar1 = (typeof(CustomLogicInputBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicInputBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__6_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicInputBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__6_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicInputBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicInputBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicInputBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetMouseAim_b__6_0);
				pCVar2 = typeof(CustomLogicInputBuiltin.Bindings.c).static_fields;
				pCVar2.__9__6_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicInputBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003522")]
		[Address(RVA = "0x59E1450", Offset = "0x59E0450", VA = "0x59E1450")]
		public static CLMethodBinding<CustomLogicInputBuiltin> __CreateMethodBinding__GetCursorAimDirection()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputBuiltin.c (CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__GetCursorAimDirection): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicInputBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicInputBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicInputBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546df6 == false) {
				Il2CppMethodInitialized_07546df6 = true;
				uVar1 = (typeof(CustomLogicInputBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicInputBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__7_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicInputBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__7_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicInputBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicInputBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicInputBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetCursorAimDirection_b__7);
				pCVar2 = typeof(CustomLogicInputBuiltin.Bindings.c).static_fields;
				pCVar2.__9__7_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicInputBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003523")]
		[Address(RVA = "0x59E1590", Offset = "0x59E0590", VA = "0x59E1590")]
		public static CLMethodBinding<CustomLogicInputBuiltin> __CreateMethodBinding__GetMouseSpeed()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputBuiltin.c (CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__GetMouseSpeed): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicInputBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicInputBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicInputBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546df7 == false) {
				Il2CppMethodInitialized_07546df7 = true;
				uVar1 = (typeof(CustomLogicInputBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicInputBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__8_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicInputBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__8_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicInputBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicInputBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicInputBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetMouseSpeed_b__8_0);
				pCVar2 = typeof(CustomLogicInputBuiltin.Bindings.c).static_fields;
				pCVar2.__9__8_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicInputBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003524")]
		[Address(RVA = "0x59E16D0", Offset = "0x59E06D0", VA = "0x59E16D0")]
		public static CLMethodBinding<CustomLogicInputBuiltin> __CreateMethodBinding__GetMousePosition()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputBuiltin.c (CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__GetMousePosition): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicInputBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicInputBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicInputBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546df8 == false) {
				Il2CppMethodInitialized_07546df8 = true;
				uVar1 = (typeof(CustomLogicInputBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicInputBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__9_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicInputBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__9_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicInputBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicInputBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicInputBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetMousePosition_b__9_0);
				pCVar2 = typeof(CustomLogicInputBuiltin.Bindings.c).static_fields;
				pCVar2.__9__9_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicInputBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003525")]
		[Address(RVA = "0x59E1810", Offset = "0x59E0810", VA = "0x59E1810")]
		public static CLMethodBinding<CustomLogicInputBuiltin> __CreateMethodBinding__GetScreenDimensions()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputBuiltin.c (CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__GetScreenDimensions): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicInputBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicInputBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicInputBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546df9 == false) {
				Il2CppMethodInitialized_07546df9 = true;
				uVar1 = (typeof(CustomLogicInputBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicInputBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__10_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicInputBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__10_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicInputBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicInputBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicInputBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__GetScreenDimensions_b__10);
				pCVar2 = typeof(CustomLogicInputBuiltin.Bindings.c).static_fields;
				pCVar2.__9__10_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicInputBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003526")]
		[Address(RVA = "0x59E1950", Offset = "0x59E0950", VA = "0x59E1950")]
		public static CLMethodBinding<CustomLogicInputBuiltin> __CreateMethodBinding__SetKeyDefaultEnabled()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputBuiltin.c (CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__SetKeyDefaultEnabled): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicInputBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicInputBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicInputBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546dfa == false) {
				Il2CppMethodInitialized_07546dfa = true;
				uVar1 = (typeof(CustomLogicInputBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicInputBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__11_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicInputBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__11_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicInputBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicInputBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicInputBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetKeyDefaultEnabled_b__11);
				pCVar2 = typeof(CustomLogicInputBuiltin.Bindings.c).static_fields;
				pCVar2.__9__11_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicInputBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003527")]
		[Address(RVA = "0x59E1A90", Offset = "0x59E0A90", VA = "0x59E1A90")]
		public static CLMethodBinding<CustomLogicInputBuiltin> __CreateMethodBinding__SetKeyHold()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputBuiltin.c (CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__SetKeyHold): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicInputBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicInputBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicInputBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546dfb == false) {
				Il2CppMethodInitialized_07546dfb = true;
				uVar1 = (typeof(CustomLogicInputBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicInputBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__12_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicInputBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__12_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicInputBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicInputBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicInputBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetKeyHold_b__12_0);
				pCVar2 = typeof(CustomLogicInputBuiltin.Bindings.c).static_fields;
				pCVar2.__9__12_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicInputBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003528")]
		[Address(RVA = "0x59E1BD0", Offset = "0x59E0BD0", VA = "0x59E1BD0")]
		public static CLMethodBinding<CustomLogicInputBuiltin> __CreateMethodBinding__SetCategoryKeysEnabled()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputBuiltin.c (CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__SetCategoryKeysEnabled): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicInputBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicInputBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicInputBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546dfc == false) {
				Il2CppMethodInitialized_07546dfc = true;
				uVar1 = (typeof(CustomLogicInputBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicInputBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__13_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicInputBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__13_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicInputBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicInputBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicInputBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetCategoryKeysEnabled_b);
				pCVar2 = typeof(CustomLogicInputBuiltin.Bindings.c).static_fields;
				pCVar2.__9__13_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicInputBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003529")]
		[Address(RVA = "0x59E1D10", Offset = "0x59E0D10", VA = "0x59E1D10")]
		public static CLMethodBinding<CustomLogicInputBuiltin> __CreateMethodBinding__SetGeneralKeysEnabled()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputBuiltin.c (CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__SetGeneralKeysEnabled): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicInputBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicInputBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicInputBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546dfd == false) {
				Il2CppMethodInitialized_07546dfd = true;
				uVar1 = (typeof(CustomLogicInputBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicInputBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__14_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicInputBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__14_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicInputBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicInputBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicInputBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetGeneralKeysEnabled_b__1);
				pCVar2 = typeof(CustomLogicInputBuiltin.Bindings.c).static_fields;
				pCVar2.__9__14_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicInputBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600352A")]
		[Address(RVA = "0x59E1E50", Offset = "0x59E0E50", VA = "0x59E1E50")]
		public static CLMethodBinding<CustomLogicInputBuiltin> __CreateMethodBinding__SetInteractionKeysEnabled()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputBuiltin.c (CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__SetInteractionKeysEnabled): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicInputBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicInputBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicInputBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546dfe == false) {
				Il2CppMethodInitialized_07546dfe = true;
				uVar1 = (typeof(CustomLogicInputBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicInputBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__15_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicInputBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__15_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicInputBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicInputBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicInputBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetInteractionKeysEnabled);
				pCVar2 = typeof(CustomLogicInputBuiltin.Bindings.c).static_fields;
				pCVar2.__9__15_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicInputBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600352B")]
		[Address(RVA = "0x59E1F90", Offset = "0x59E0F90", VA = "0x59E1F90")]
		public static CLMethodBinding<CustomLogicInputBuiltin> __CreateMethodBinding__SetTitanKeysEnabled()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputBuiltin.c (CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__SetTitanKeysEnabled): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicInputBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicInputBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicInputBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546dff == false) {
				Il2CppMethodInitialized_07546dff = true;
				uVar1 = (typeof(CustomLogicInputBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicInputBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__16_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicInputBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__16_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicInputBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicInputBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicInputBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetTitanKeysEnabled_b__16);
				pCVar2 = typeof(CustomLogicInputBuiltin.Bindings.c).static_fields;
				pCVar2.__9__16_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicInputBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600352C")]
		[Address(RVA = "0x59E20D0", Offset = "0x59E10D0", VA = "0x59E20D0")]
		public static CLMethodBinding<CustomLogicInputBuiltin> __CreateMethodBinding__SetHumanKeysEnabled()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputBuiltin.c (CustomLogic.CustomLogicInputBuiltin.Bindings$$__CreateMethodBinding__SetHumanKeysEnabled): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicInputBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicInputBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicInputBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546e00 == false) {
				Il2CppMethodInitialized_07546e00 = true;
				uVar1 = (typeof(CustomLogicInputBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicInputBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicInputBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__17_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicInputBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__17_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicInputBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicInputBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicInputBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicInputBuiltin_Bindings_c___CreateMethodBinding__SetHumanKeysEnabled_b__17);
				pCVar2 = typeof(CustomLogicInputBuiltin.Bindings.c).static_fields;
				pCVar2.__9__17_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicInputBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x170009A7")]
	public override string ClassName
	{
		[Token(Token = "0x6003517")]
		[Address(RVA = "0x59E0640", Offset = "0x59DF640", VA = "0x59E0640", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputBuiltin.c (CustomLogic.CustomLogicInputBuiltin$$get_ClassName): clean
			return "Input";
		}
	}

	[Token(Token = "0x170009A8")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6003518")]
		[Address(RVA = "0x59E0670", Offset = "0x59DF670", VA = "0x59E0670", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputBuiltin.c (CustomLogic.CustomLogicInputBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x170009A9")]
	public override bool IsStatic
	{
		[Token(Token = "0x6003519")]
		[Address(RVA = "0x59E0680", Offset = "0x59DF680", VA = "0x59E0680", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputBuiltin.c (CustomLogic.CustomLogicInputBuiltin$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x170009AA")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x600351A")]
		[Address(RVA = "0x59E0690", Offset = "0x59DF690", VA = "0x59E0690", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicInputBuiltin.c (CustomLogic.CustomLogicInputBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6003503")]
	[Address(RVA = "0x59DF0F0", Offset = "0x59DE0F0", VA = "0x59DF0F0")]
	public CustomLogicInputBuiltin()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicInputBuiltin.c (CustomLogic.CustomLogicInputBuiltin$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07546dda == false) {
			Il2CppMethodInitialized_07546dda = true;
			uVar1 = (typeof(BuiltinClassInstance)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(BuiltinClassInstance)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			base();
			return;
		}
		base();
		return;
	}

	[Token(Token = "0x6003504")]
	[Address(RVA = "0x59DF160", Offset = "0x59DE160", VA = "0x59DF160")]
	private static KeybindSetting GetKeybind(string key)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicInputBuiltin.c (CustomLogic.CustomLogicInputBuiltin$$GetKeybind): 2 lines keep C-only constructs
		byte bVar1;
		InputSettings pSVar2;
		OrderedDictionary pSVar3;
		String[] pSVar4;
		KeybindSetting pSVar5;

		if (key != null) {
			pSVar4 = key.Split(0x2f, 0);
			pSVar2 = SettingsManager.InputSettings;
			if ((pSVar2 != null) && (pSVar4 != null)) {
				if ((int)pSVar4.Length == 0) {
	label_05adf288: ;
					throw new IndexOutOfRangeException();
				}
				pSVar3 = pSVar2.Settings;
				if (pSVar3 != null) {
					pSVar5 = (KeybindSetting)pSVar3.get_Item((object)pSVar4[0]);
					if (pSVar5 != null) {
						bVar1 = (typeof(SaveableSettingsContainer)._2).typeHierarchyDepth;
						if (((((Il2CppClass)pSVar5.klass)._2).typeHierarchyDepth < bVar1) ||((((Il2CppClass)pSVar5.klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(SaveableSettingsContainer))) {
	label_05adf280: ;
							throw new InvalidCastException();
						}
						if ((pSVar4.Length & 0xfffffffe) == 0) goto label_05adf288;
						pSVar3 = (OrderedDictionary)pSVar5.InputKeys;
						if (pSVar3 != null) {
							pSVar5 = (KeybindSetting)pSVar3.get_Item((object)pSVar4[1]);
							if (pSVar5 != null) {
								bVar1 = (typeof(KeybindSetting)._2).typeHierarchyDepth;
								if (((pSVar5.klass._2).typeHierarchyDepth < bVar1) ||((pSVar5.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(KeybindSetting))) goto label_05adf280;
							}
							return pSVar5;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003505")]
	[Address(RVA = "0x59DF290", Offset = "0x59DE290", VA = "0x59DF290")]
	private static KeyCode? GetCustomKeyCode(string key)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicInputBuiltin.c (CustomLogic.CustomLogicInputBuiltin$$GetCustomKeyCode): 4 lines keep C-only constructs
		bool bVar1;
		String value;
		System_Nullable_KeyCode__Fields SVar2;
		int local_1c;
		System_Nullable_KeyCode__Fields local_18;

		local_1c = 0;
		if (key == null) {
	label_05adf38f: ;
			throw new NullReferenceException();
		}
		bVar1 = key.StartsWith("CustomKey/");
		if (bVar1) {
			if ("CustomKey/" == null) goto label_05adf38f;
			value = key.Substring(("CustomKey/".fields)._stringLength);
			bVar1 = Enum.TryParse<KeyCode>(value, ref local_1c);
			if (bVar1) {
				local_18.hasValue = false;
				local_18._1_3_ = 0;
				local_18.value = 0;
				local_18 = new Nullable<Int32Enum>(local_1c);
				return (System_Nullable_KeyCode__o)local_18;
			}
		}
		SVar2.hasValue = false;
		SVar2._1_3_ = 0;
		SVar2.value = 0;
		return (System_Nullable_KeyCode__o)SVar2;
	}

	[Token(Token = "0x6003506")]
	[Address(RVA = "0x59DF3A0", Offset = "0x59DE3A0", VA = "0x59DF3A0")]
	private static bool CanKey()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicInputBuiltin.c (CustomLogic.CustomLogicInputBuiltin$$CanKey): 1 lines keep C-only constructs
		byte bVar1;
		BaseGameManager pGVar2;
		bool bVar3;

		pGVar2 = SceneLoader.CurrentGameManager;
		if (pGVar2 == null) {
			throw new NullReferenceException();
		}
		bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
		if (((pGVar2.klass._2).typeHierarchyDepth < bVar1) ||((pGVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameManager))) {
			throw new InvalidCastException();
		}
		if ((*(sbyte)((long)&(*(ulong)((sbyte)pGVar2 + 0x98)) + 1) == false) &&(bVar3 = InGameMenu.InMenu(), !bVar3)) {
			bVar3 = ChatManager.IsChatActive();
			if (!bVar3) {
				return CustomLogicManager.Cutscene == false;
			}
		}
		return false;
	}

	[Token(Token = "0x6003507")]
	[Address(RVA = "0x59DF4B0", Offset = "0x59DE4B0", VA = "0x59DF4B0")]
	public static string GetKeyName(string key)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicInputBuiltin.c (CustomLogic.CustomLogicInputBuiltin$$GetKeyName): 2 lines keep C-only constructs
		String pSVar1;
		KeybindSetting pSVar2;
		System_Nullable_KeyCode__o local_28;
		Enum local_20;

		local_28 = CustomLogicInputBuiltin.GetCustomKeyCode(key);
		if (local_28.hasValue != false) {
			local_20.klass = (Enum)typeof(KeyCode);
			local_20.monitor = (IntPtr)0xffffffffffffffff;
			return pSVar1;
		}
		pSVar2 = CustomLogicInputBuiltin.GetKeybind(key);
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		pSVar1 = pSVar2.ToString() ;
		return pSVar1;
	}

	[Token(Token = "0x6003508")]
	[Address(RVA = "0x59DF570", Offset = "0x59DE570", VA = "0x59DF570")]
	public static bool GetKeyHold(string key)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicInputBuiltin.c (CustomLogic.CustomLogicInputBuiltin$$GetKeyHold): 1 lines keep C-only constructs
		bool bVar1;
		bool bVar2;
		uint key_00;
		MethodInfo pMVar3;
		System_Nullable_KeyCode__o local_10;

		local_10 = CustomLogicInputBuiltin.GetCustomKeyCode(key);
		if (local_10.hasValue == false) {
			pMVar3 = (MethodInfo)CustomLogicInputBuiltin.GetKeybind(key);
			if (pMVar3 == null) {
				throw new NullReferenceException();
			}
			bVar1 = pMVar3.GetKey(true);
			if (bVar1) {
				return bVar2;
			}
		}
		else {
			key_00 = local_10.Value;
			pMVar3 = (MethodInfo)(ulong)key_00;
			bVar1 = Input.GetKey(key_00);
			if (bVar1) {
			}
		}
		return bVar2;
	}

	[Token(Token = "0x6003509")]
	[Address(RVA = "0x59DF620", Offset = "0x59DE620", VA = "0x59DF620")]
	public static bool GetKeyDown(string key)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicInputBuiltin.c (CustomLogic.CustomLogicInputBuiltin$$GetKeyDown): 1 lines keep C-only constructs
		bool bVar1;
		bool bVar2;
		uint key_00;
		MethodInfo pMVar3;
		System_Nullable_KeyCode__o local_10;

		local_10 = CustomLogicInputBuiltin.GetCustomKeyCode(key);
		if (local_10.hasValue == false) {
			pMVar3 = (MethodInfo)CustomLogicInputBuiltin.GetKeybind(key);
			if (pMVar3 == null) {
				throw new NullReferenceException();
			}
			bVar1 = pMVar3.GetKeyDown(true);
			if (bVar1) {
				return bVar2;
			}
		}
		else {
			key_00 = local_10.Value;
			pMVar3 = (MethodInfo)(ulong)key_00;
			bVar1 = Input.GetKeyDown(key_00);
			if (bVar1) {
			}
		}
		return bVar2;
	}

	[Token(Token = "0x600350A")]
	[Address(RVA = "0x59DF6D0", Offset = "0x59DE6D0", VA = "0x59DF6D0")]
	public static bool GetKeyUp(string key)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicInputBuiltin.c (CustomLogic.CustomLogicInputBuiltin$$GetKeyUp): 1 lines keep C-only constructs
		bool bVar1;
		bool bVar2;
		uint key_00;
		MethodInfo pMVar3;
		System_Nullable_KeyCode__o local_10;

		local_10 = CustomLogicInputBuiltin.GetCustomKeyCode(key);
		if (local_10.hasValue == false) {
			pMVar3 = (MethodInfo)CustomLogicInputBuiltin.GetKeybind(key);
			if (pMVar3 == null) {
				throw new NullReferenceException();
			}
			bVar1 = pMVar3.GetKeyUp(true);
			if (bVar1) {
				return bVar2;
			}
		}
		else {
			key_00 = local_10.Value;
			pMVar3 = (MethodInfo)(ulong)key_00;
			bVar1 = Input.GetKeyUp(key_00);
			if (bVar1) {
			}
		}
		return bVar2;
	}

	[Token(Token = "0x600350B")]
	[Address(RVA = "0x59DF780", Offset = "0x59DE780", VA = "0x59DF780")]
	public static CustomLogicVector3Builtin GetMouseAim()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicInputBuiltin.c (CustomLogic.CustomLogicInputBuiltin$$GetMouseAim): 10 lines keep C-only constructs
		BaseCamera pCVar1;
		Camera __this;
		Ray ray;
		bool bVar2;
		int layerMask;
		CustomLogicVector3Builtin __this_00;
		Vector3 UVar3;
		float local_90;
		ulong local_88;
		float fStack_6c;
		float fStack_68;
		Ray local_60;
		byte[] local_48 = new byte[16];
		RaycastHit local_38;

		local_38.m_UV.x = 0.0;
		local_38.m_UV.y = 0.0;
		local_38.m_Collider.m_Data = (EntityId)0x0;
		local_38.m_Normal.y = 0.0;
		local_38.m_Normal.z = 0.0;
		local_38.m_FaceID = 0;
		local_38.m_Distance = 0.0;
		local_38.m_Point.x = 0.0;
		local_38.m_Point.y = 0.0;
		local_38.m_Point.z = 0.0;
		local_38.m_Normal.x = 0.0;
		pCVar1 = SceneLoader.CurrentCamera;
		if (pCVar1 != null) {
			__this = pCVar1.Camera;
			UVar3 = CursorManager.GetInGameMousePosition();
			if (__this != null) {
				local_60 = __this.ScreenPointToRay(UVar3);
				local_48._0_4_ = local_60.m_Direction.x;
				local_48._4_4_ = local_60.m_Direction.y;
				local_48._8_8_ = 0;
				layerMask = (Human.AimMask).value;
				fStack_6c = local_48._0_4_;
				fStack_68 = local_48._4_4_;
				ray.m_Direction.z = local_60.m_Direction.z;
				ray.m_Direction.y = fStack_68;
				ray.m_Direction.x = fStack_6c;
				ray.m_Origin.z = local_60.m_Origin.z;
				ray.m_Origin.x = local_60.m_Origin.x;
				ray.m_Origin.y = local_60.m_Origin.y;
				bVar2 = Physics.Raycast(ray, ref local_38, 1000.0, layerMask);
				if (bVar2) {
					UVar3 = local_38.point;
					local_90 = UVar3.z;
					local_88 = UVar3._0_8_;
				}
				else {
					local_88._0_4_ = local_60.m_Origin.x;
					local_88._4_4_ = local_60.m_Origin.y;
					local_88 = CONCAT44(local_88._4_4_ + (float)local_48._4_4_ * 1000.0, (float)local_88 + (float)local_48._0_4_ * 1000.0);
					local_90 = local_60.m_Origin.z + local_60.m_Direction.z * 1000.0;
				}
				UVar3.z = local_90;
				UVar3.x = (float)local_88;
				UVar3.y = local_88._4_4_;
				__this_00 = new CustomLogicVector3Builtin(UVar3);
				return __this_00;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600350C")]
	[Address(RVA = "0x59DF9A0", Offset = "0x59DE9A0", VA = "0x59DF9A0")]
	public static CustomLogicVector3Builtin GetCursorAimDirection()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicInputBuiltin.c (CustomLogic.CustomLogicInputBuiltin$$GetCursorAimDirection): clean
		BaseCamera pCVar1;
		Camera __this;
		CustomLogicVector3Builtin __this_00;
		Vector3 UVar2;
		Ray local_20;

		pCVar1 = SceneLoader.CurrentCamera;
		if (pCVar1 != null) {
			__this = pCVar1.Camera;
			UVar2 = CursorManager.GetInGameMousePosition();
			if (__this != null) {
				local_20 = __this.ScreenPointToRay(UVar2);
				UVar2.z = local_20.m_Direction.z;
				UVar2.x = local_20.m_Direction.x;
				UVar2.y = local_20.m_Direction.y;
				__this_00 = new CustomLogicVector3Builtin(UVar2);
				return __this_00;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600350D")]
	[Address(RVA = "0x59DFA80", Offset = "0x59DEA80", VA = "0x59DFA80")]
	public static CustomLogicVector3Builtin GetMouseSpeed()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicInputBuiltin.c (CustomLogic.CustomLogicInputBuiltin$$GetMouseSpeed): clean
		CustomLogicVector3Builtin __this;
		float fVar1;
		Vector3 value;

		value.x = Input.GetAxis("Mouse X");
		fVar1 = Input.GetAxis("Mouse Y");
		value.y = fVar1;
		value.z = 0.0;
		__this = new CustomLogicVector3Builtin(value);
		return __this;
	}

	[Token(Token = "0x600350E")]
	[Address(RVA = "0x59DFB20", Offset = "0x59DEB20", VA = "0x59DFB20")]
	public static CustomLogicVector3Builtin GetMousePosition()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicInputBuiltin.c (CustomLogic.CustomLogicInputBuiltin$$GetMousePosition): 1 lines keep C-only constructs
		byte bVar1;
		BaseCamera pCVar2;
		BaseCamera pCVar3;
		CustomLogicVector3Builtin __this;
		float fVar4;
		Vector3 UVar5;

		pCVar2 = SceneLoader.CurrentCamera;
		if (pCVar2 != null) {
			pCVar3 = pCVar2.klass;
			bVar1 = (typeof(InGameCamera)._2).typeHierarchyDepth;
			if ((bVar1 <= (pCVar3._2).typeHierarchyDepth) &&((pCVar3._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(InGameCamera))) {
				UVar5 = CursorManager.GetInGameMousePosition();
				UVar5.z = UVar5.z;
				fVar4 = UVar5.x;
				UVar5.y = UVar5.y;
				goto label_05adfbb0;
			}
		}
		UVar5 = Input.mousePosition;
		UVar5.z = UVar5.z;
		fVar4 = UVar5.x;
		UVar5.y = UVar5.y;
	label_05adfbb0: ;
		UVar5.y = UVar5.y;
		UVar5.x = fVar4;
		UVar5.z = UVar5.z;
		__this = new CustomLogicVector3Builtin(UVar5);
		return __this;
	}

	[Token(Token = "0x600350F")]
	[Address(RVA = "0x59DFC10", Offset = "0x59DEC10", VA = "0x59DFC10")]
	public static CustomLogicVector3Builtin GetScreenDimensions()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicInputBuiltin.c (CustomLogic.CustomLogicInputBuiltin$$GetScreenDimensions): clean
		int iVar1;
		int iVar2;
		CustomLogicVector3Builtin __this;
		Vector3 value;

		iVar1 = Screen.width;
		iVar2 = Screen.height;
		value.x = (float)iVar1;
		value.y = (float)iVar2;
		value.z = 0.0;
		__this = new CustomLogicVector3Builtin(value);
		return __this;
	}

	[Token(Token = "0x6003510")]
	[Address(RVA = "0x59DFC90", Offset = "0x59DEC90", VA = "0x59DFC90")]
	public static void SetKeyDefaultEnabled(string key, bool enabled)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicInputBuiltin.c (CustomLogic.CustomLogicInputBuiltin$$SetKeyDefaultEnabled): 2 lines keep C-only constructs
		uint uVar1;
		HashSet<object> pSVar2;
		bool bVar3;
		KeybindSetting item;
		undefined7 in_register_00000031;
		MethodInfo method_00;

		method_00 = (MethodInfo)CONCAT71(in_register_00000031, enabled);
		item = CustomLogicInputBuiltin.GetKeybind(key);
		uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		if (enabled) {
			if (uVar1 == 0) {
			}
			pSVar2 = (HashSet<object>)CustomLogicManager.KeybindDefaultDisabled;
			if (pSVar2 != null) {
				bVar3 = pSVar2.Contains((object)item);
				if (!bVar3) {
					return;
				}
				pSVar2 = (HashSet<object>)CustomLogicManager.KeybindDefaultDisabled;
				if (pSVar2 != null) {
					pSVar2.Remove((object)item);
					return;
				}
			}
		}
		else {
			if (uVar1 == 0) {
			}
			pSVar2 = (HashSet<object>)CustomLogicManager.KeybindDefaultDisabled;
			if (pSVar2 != null) {
				bVar3 = pSVar2.Contains((object)item);
				if (bVar3) {
					return;
				}
				pSVar2 = (HashSet<object>)CustomLogicManager.KeybindDefaultDisabled;
				if (pSVar2 != null) {
					pSVar2.Add((object)item);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003511")]
	[Address(RVA = "0x59DFDF0", Offset = "0x59DEDF0", VA = "0x59DFDF0")]
	public static void SetKeyHold(string key, bool enabled)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicInputBuiltin.c (CustomLogic.CustomLogicInputBuiltin$$SetKeyHold): 2 lines keep C-only constructs
		uint uVar1;
		HashSet<object> pSVar2;
		bool bVar3;
		KeybindSetting item;
		undefined7 in_register_00000031;
		MethodInfo method_00;

		method_00 = (MethodInfo)CONCAT71(in_register_00000031, enabled);
		item = CustomLogicInputBuiltin.GetKeybind(key);
		uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		if (enabled) {
			if (uVar1 == 0) {
			}
			pSVar2 = (HashSet<object>)CustomLogicManager.KeybindHold;
			if (pSVar2 != null) {
				bVar3 = pSVar2.Contains((object)item);
				if (bVar3) {
					return;
				}
				pSVar2 = (HashSet<object>)CustomLogicManager.KeybindHold;
				if (pSVar2 != null) {
					pSVar2.Add((object)item);
					return;
				}
			}
		}
		else {
			if (uVar1 == 0) {
			}
			pSVar2 = (HashSet<object>)CustomLogicManager.KeybindHold;
			if (pSVar2 != null) {
				bVar3 = pSVar2.Contains((object)item);
				if (!bVar3) {
					return;
				}
				pSVar2 = (HashSet<object>)CustomLogicManager.KeybindHold;
				if (pSVar2 != null) {
					pSVar2.Remove((object)item);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003512")]
	[Address(RVA = "0x59DFF60", Offset = "0x59DEF60", VA = "0x59DFF60")]
	public static void SetCategoryKeysEnabled(string category, bool enabled)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicInputBuiltin.c (CustomLogic.CustomLogicInputBuiltin$$SetCategoryKeysEnabled): 13 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		InputSettings pSVar3;
		OrderedDictionary pSVar4;
		long plVar5;
		Il2CppClass pIVar6;
		Il2CppRuntimeInterfaceOffsetPair pIVar7;
		object item;
		HashSet<object> pSVar8;
		bool bVar9;
		sbyte cVar10;
		object pIVar11;
		VirtualInvokeData pVVar12;
		IntPtr pvVar13;
		String message;
		ulong uVar14;
		long lVar15;
		object local_58;
		object local_50;
		byte local_40;
		object* local_38;

		local_58 = null;
		local_50 = null;
		pSVar3 = SettingsManager.InputSettings;
		if ((pSVar3 != null) &&(pSVar4 = pSVar3.Settings, pSVar4 != null) ) {
			bVar9 = pSVar4.Contains((object)category);
			if (!bVar9) {
				message = String.Concat("Invalid input category: ", category, ". Valid categories are: General, Human, Titan, Interaction");
				Debug.LogError((object)message);
				return;
			}
			pSVar3 = SettingsManager.InputSettings;
			if (((pSVar3 != null) &&(pSVar4 = pSVar3.Settings, pSVar4 != null)) &&(pIVar11 = pSVar4.get_Item((object)category), pIVar11 != null)) {
				bVar1 = (typeof(SaveableSettingsContainer)._2).typeHierarchyDepth;
				if (((pIVar11.klass._2).typeHierarchyDepth < bVar1) ||((pIVar11.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(SaveableSettingsContainer))) {
					throw new InvalidCastException();
				}
				plVar5 = pIVar11[1].monitor;
				if (plVar5 != null) {
					pIVar11 = (object)(**(code*)(*plVar5 + 0x298))(plVar5,*(ulong)(*plVar5 + 0x2a0));
					local_40 = (byte)&local_58;
					local_38 = &local_50;
					do {
						local_58 = pIVar11;
						if (pIVar11 == null) {
							throw new NullReferenceException();
						}
						pIVar6 = pIVar11.klass;
						uVar14 = (ulong)(pIVar6._2).interface_offsets_count;
						cVar10 = pIVar11.Dispose();
						pIVar11 = local_58;
						if (cVar10 == false) {
							pIVar11 = (local_58 as IDisposable);
							if (pIVar11 == null) {
								return;
							}
							pIVar6 = pIVar11.klass;
							uVar14 = (ulong)(pIVar6._2).interface_offsets_count;
							local_50 = pIVar11;
							if (uVar14 == 0) goto label_05ae045f;
							pIVar7 = (pIVar6._1).interfaceOffsets;
							lVar15 = 0;
							goto label_05ae0450;
						}
						if (local_58 == null) {
							throw new NullReferenceException();
						}
						pIVar6 = local_58.klass;
						uVar14 = (ulong)(pIVar6._2).interface_offsets_count;
						pIVar11 = pIVar11.Dispose();
						if (pIVar11 == null) {
							throw new NullReferenceException();
						}
						if ((pIVar11.klass._1).element_class !=(typeof(DictionaryEntry)._1).element_class) {
							throw new InvalidCastException();
						}
						pvVar13 = il2cpp_vm_Object_Unbox(pIVar11);
						item = *(object*)((long)pvVar13 + 8);
						pIVar11 = local_58;
						if (item != null) {
							bVar1 = (typeof(KeybindSetting)._2).typeHierarchyDepth;
							if ((bVar1 <= (item.klass._2).typeHierarchyDepth) &&((item.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(KeybindSetting))) {
								uVar2 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
								if (enabled) {
									if (uVar2 == 0) {
									}
									pSVar8 = (HashSet<object>)CustomLogicManager.KeybindDefaultDisabled;
									if (pSVar8 == null) {
										throw new NullReferenceException();
									}
									bVar9 = pSVar8.Contains(item);
									pIVar11 = local_58;
									if (bVar9) {
										pSVar8 = (HashSet<object>)CustomLogicManager.KeybindDefaultDisabled;
										if (pSVar8 == null) {
											throw new NullReferenceException();
										}
										pSVar8.Remove(item);
										pIVar11 = local_58;
									}
								}
								else {
									if (uVar2 == 0) {
									}
									pSVar8 = (HashSet<object>)CustomLogicManager.KeybindDefaultDisabled;
									if (pSVar8 == null) {
										throw new NullReferenceException();
									}
									bVar9 = pSVar8.Contains(item);
									pIVar11 = local_58;
									if (!bVar9) {
										pSVar8 = (HashSet<object>)CustomLogicManager.KeybindDefaultDisabled;
										if (pSVar8 == null) {
											throw new NullReferenceException();
										}
										pSVar8.Add(item);
										pIVar11 = local_58;
									}
								}
							}
						}
					} while(true);
				}
			}
		}
		throw new NullReferenceException();
		while (true) {
			lVar15 = lVar15 + 0x10;
			if (!(uVar14 * 0x10 != lVar15)) break;
	label_05ae0450: ;
			if (*(IDisposable*)((long)&pIVar7.interfaceType + lVar15) == typeof(IDisposable)) {
				pVVar12 = pIVar6.vtable + *(int)((long)&pIVar7.offset + lVar15);
				goto label_05ae047d;
			}
		}
	label_05ae045f: ;
	label_05ae047d: ;
		pIVar11.Dispose();
		return;
	}

	[Token(Token = "0x6003513")]
	[Address(RVA = "0x59E0540", Offset = "0x59DF540", VA = "0x59E0540")]
	public static void SetGeneralKeysEnabled(bool enabled)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicInputBuiltin.c (CustomLogic.CustomLogicInputBuiltin$$SetGeneralKeysEnabled): clean


		CustomLogicInputBuiltin.SetCategoryKeysEnabled("General", enabled);
		return;
	}

	[Token(Token = "0x6003514")]
	[Address(RVA = "0x59E0580", Offset = "0x59DF580", VA = "0x59E0580")]
	public static void SetInteractionKeysEnabled(bool enabled)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicInputBuiltin.c (CustomLogic.CustomLogicInputBuiltin$$SetInteractionKeysEnabled): clean


		CustomLogicInputBuiltin.SetCategoryKeysEnabled("Interaction", enabled);
		return;
	}

	[Token(Token = "0x6003515")]
	[Address(RVA = "0x59E05C0", Offset = "0x59DF5C0", VA = "0x59E05C0")]
	public static void SetTitanKeysEnabled(bool enabled)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicInputBuiltin.c (CustomLogic.CustomLogicInputBuiltin$$SetTitanKeysEnabled): clean


		CustomLogicInputBuiltin.SetCategoryKeysEnabled("Titan", enabled);
		return;
	}

	[Token(Token = "0x6003516")]
	[Address(RVA = "0x59E0600", Offset = "0x59DF600", VA = "0x59E0600")]
	public static void SetHumanKeysEnabled(bool enabled)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicInputBuiltin.c (CustomLogic.CustomLogicInputBuiltin$$SetHumanKeysEnabled): clean


		CustomLogicInputBuiltin.SetCategoryKeysEnabled("Human", enabled);
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicInputBuiltin.c.

	// CustomLogic.CustomLogicInputBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"GetKeyName");
		__this.Add((Il2CppObject *)"GetKeyHold");
		__this.Add((Il2CppObject *)"GetKeyDown");
		__this.Add((Il2CppObject *)"GetKeyUp");
		__this.Add((Il2CppObject *)"GetMouseAim");
		__this.Add((Il2CppObject *)"GetCursorAimDirection");
		__this.Add((Il2CppObject *)"GetMouseSpeed");
		__this.Add((Il2CppObject *)"GetMousePosition");
		__this.Add((Il2CppObject *)"GetScreenDimensions");
		__this.Add((Il2CppObject *)"SetKeyDefaultEnabled");
		__this.Add((Il2CppObject *)"SetKeyHold");
		__this.Add((Il2CppObject *)"SetCategoryKeysEnabled");
		__this.Add((Il2CppObject *)"SetGeneralKeysEnabled");
		__this.Add((Il2CppObject *)"SetInteractionKeysEnabled");
		__this.Add((Il2CppObject *)"SetTitanKeysEnabled");
		__this.Add((Il2CppObject *)"SetHumanKeysEnabled");
		CustomLogicInputBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$.cctor: clean
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = new CustomLogicInputBuiltin.Bindings.c();
		CustomLogicInputBuiltin.Bindings.c.__9 =(CustomLogicInputBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetKeyName>b__2_0: clean
	private object Bindings_c____CreateMethodBinding__GetKeyName_b__2_0(CustomLogicInputBuiltin __c, Object[] __a)
	{
		object obj;
		String pSVar1;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		obj = __a[0];
		pSVar1 = CustomLogicEvaluator.ConvertTo<string>(obj);
		pSVar1 = CustomLogicInputBuiltin.GetKeyName(pSVar1);
		return (object)pSVar1;
	}

	// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetKeyHold>b__3_0: clean
	private object Bindings_c____CreateMethodBinding__GetKeyHold_b__3_0(CustomLogicInputBuiltin __c, Object[] __a)
	{
		String key;
		object pIVar1;
		byte local_9;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		pIVar1 = __a[0];
		key = CustomLogicEvaluator.ConvertTo<string>(pIVar1);
		local_9 = CustomLogicInputBuiltin.GetKeyHold(key);
		pIVar1 = (object)local_9;
		return pIVar1;
	}

	// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetKeyDown>b__4_0: clean
	private object Bindings_c____CreateMethodBinding__GetKeyDown_b__4_0(CustomLogicInputBuiltin __c, Object[] __a)
	{
		String key;
		object pIVar1;
		byte local_9;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		pIVar1 = __a[0];
		key = CustomLogicEvaluator.ConvertTo<string>(pIVar1);
		local_9 = CustomLogicInputBuiltin.GetKeyDown(key);
		pIVar1 = (object)local_9;
		return pIVar1;
	}

	// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetKeyUp>b__5_0: clean
	private object Bindings_c____CreateMethodBinding__GetKeyUp_b__5_0(CustomLogicInputBuiltin __c, Object[] __a)
	{
		String key;
		object pIVar1;
		byte local_9;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		pIVar1 = __a[0];
		key = CustomLogicEvaluator.ConvertTo<string>(pIVar1);
		local_9 = CustomLogicInputBuiltin.GetKeyUp(key);
		pIVar1 = (object)local_9;
		return pIVar1;
	}

	// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetMouseAim>b__6_0: clean
	private object Bindings_c____CreateMethodBinding__GetMouseAim_b__6_0(CustomLogicInputBuiltin __c, Object[] __a)
	{
		CustomLogicVector3Builtin pCVar1;

		pCVar1 = CustomLogicInputBuiltin.GetMouseAim();
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetCursorAimDirection>b__7_0: clean
	private object Bindings_c____CreateMethodBinding__GetCursorAimDirection_b__7_0(CustomLogicInputBuiltin __c, Object[] __a)
	{
		CustomLogicVector3Builtin pCVar1;

		pCVar1 = CustomLogicInputBuiltin.GetCursorAimDirection();
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetMouseSpeed>b__8_0: clean
	private object Bindings_c____CreateMethodBinding__GetMouseSpeed_b__8_0(CustomLogicInputBuiltin __c, Object[] __a)
	{
		CustomLogicVector3Builtin __this_00;
		float fVar1;
		Vector3 value;

		value.x = Input.GetAxis("Mouse X");
		fVar1 = Input.GetAxis("Mouse Y");
		value.y = fVar1;
		value.z = 0.0;
		__this_00 = new CustomLogicVector3Builtin(value);
		return (object)__this_00;
	}

	// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetMousePosition>b__9_0: clean
	private object Bindings_c____CreateMethodBinding__GetMousePosition_b__9_0(CustomLogicInputBuiltin __c, Object[] __a)
	{
		CustomLogicVector3Builtin pCVar1;

		pCVar1 = CustomLogicInputBuiltin.GetMousePosition();
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetScreenDimensions>b__10_0: clean
	private object Bindings_c____CreateMethodBinding__GetScreenDimensions_b__10_0(CustomLogicInputBuiltin __c, Object[] __a)
	{
		int iVar1;
		int iVar2;
		CustomLogicVector3Builtin __this_00;
		Vector3 value;

		iVar1 = Screen.width;
		iVar2 = Screen.height;
		value.x = (float)iVar1;
		value.y = (float)iVar2;
		value.z = 0.0;
		__this_00 = new CustomLogicVector3Builtin(value);
		return (object)__this_00;
	}

	// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetKeyDefaultEnabled>b__11_0: clean
	private object Bindings_c____CreateMethodBinding__SetKeyDefaultEnabled_b__11_0(CustomLogicInputBuiltin __c, Object[] __a)
	{
		object obj;
		bool enabled;
		String key;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			key = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				enabled = CustomLogicEvaluator.ConvertTo<bool>(__a[1]);
				CustomLogicInputBuiltin.SetKeyDefaultEnabled(key, enabled);
				return null;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetKeyHold>b__12_0: clean
	private object Bindings_c____CreateMethodBinding__SetKeyHold_b__12_0(CustomLogicInputBuiltin __c, Object[] __a)
	{
		object obj;
		bool enabled;
		String key;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			key = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				enabled = CustomLogicEvaluator.ConvertTo<bool>(__a[1]);
				CustomLogicInputBuiltin.SetKeyHold(key, enabled);
				return null;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetCategoryKeysEnabled>b__13_0: clean
	private object Bindings_c____CreateMethodBinding__SetCategoryKeysEnabled_b__13_0(CustomLogicInputBuiltin __c, Object[] __a)
	{
		object obj;
		bool enabled;
		String category;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			category = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				enabled = CustomLogicEvaluator.ConvertTo<bool>(__a[1]);
				CustomLogicInputBuiltin.SetCategoryKeysEnabled(category, enabled);
				return null;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetGeneralKeysEnabled>b__14_0: clean
	private object Bindings_c____CreateMethodBinding__SetGeneralKeysEnabled_b__14_0(CustomLogicInputBuiltin __c, Object[] __a)
	{
		object obj;
		bool enabled;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		obj = __a[0];
		enabled = CustomLogicEvaluator.ConvertTo<bool>(obj);
		CustomLogicInputBuiltin.SetCategoryKeysEnabled("General", enabled);
		return null;
	}

	// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetInteractionKeysEnabled>b__15_0: clean
	private object Bindings_c____CreateMethodBinding__SetInteractionKeysEnabled_b__15_0(CustomLogicInputBuiltin __c, Object[] __a)
	{
		object obj;
		bool enabled;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		obj = __a[0];
		enabled = CustomLogicEvaluator.ConvertTo<bool>(obj);
		CustomLogicInputBuiltin.SetCategoryKeysEnabled("Interaction", enabled);
		return null;
	}

	// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetTitanKeysEnabled>b__16_0: clean
	private object Bindings_c____CreateMethodBinding__SetTitanKeysEnabled_b__16_0(CustomLogicInputBuiltin __c, Object[] __a)
	{
		object obj;
		bool enabled;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		obj = __a[0];
		enabled = CustomLogicEvaluator.ConvertTo<bool>(obj);
		CustomLogicInputBuiltin.SetCategoryKeysEnabled("Titan", enabled);
		return null;
	}

	// CustomLogic.CustomLogicInputBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetHumanKeysEnabled>b__17_0: clean
	private object Bindings_c____CreateMethodBinding__SetHumanKeysEnabled_b__17_0(CustomLogicInputBuiltin __c, Object[] __a)
	{
		object obj;
		bool enabled;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		obj = __a[0];
		enabled = CustomLogicEvaluator.ConvertTo<bool>(obj);
		CustomLogicInputBuiltin.SetCategoryKeysEnabled("Human", enabled);
		return null;
	}
}
