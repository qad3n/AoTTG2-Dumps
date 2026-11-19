// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicLocaleBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicLocaleBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20005BC")]
[CompilerGenerated]
internal class CustomLogicLocaleBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x20005BD")]
	public static class Factory
	{
		[Token(Token = "0x6003550")]
		[Address(RVA = "0x59E3E20", Offset = "0x59E2E20", VA = "0x59E3E20")]
		public static CustomLogicLocaleBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLocaleBuiltin.c (CustomLogic.CustomLogicLocaleBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			CustomLogicLocaleBuiltin __this;
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicLocaleBuiltin constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicLocaleBuiltin();
			return __this;
		}
	}

	[Token(Token = "0x20005BE")]
	public static class Bindings
	{
		[Token(Token = "0x4001903")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6003551")]
		[Address(RVA = "0x59E3F00", Offset = "0x59E2F00", VA = "0x59E3F00")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLocaleBuiltin.c (CustomLogic.CustomLogicLocaleBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLPropertyBinding<CustomLogicLocaleBuiltin> pCVar3;
			CLMethodBinding<CustomLogicLocaleBuiltin> pCVar4;
			String pSVar5;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x5e1c8cab) {
				if (uVar2 < 0x37915e09) {
					if (uVar2 == 0x28b19ea3) {
						bVar1 = (name == "Set");
						if (bVar1) {
							if ((typeof(CustomLogicLocaleBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar4 = CustomLogicLocaleBuiltin.Bindings.__CreateMethodBinding__Set();
								return (ICLMemberBinding)pCVar4;
							}
							pCVar4 = CustomLogicLocaleBuiltin.Bindings.__CreateMethodBinding__Set();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x37915e08) {
						bVar1 = (name == "CurrentLanguage");
						if (bVar1) {
							if ((typeof(CustomLogicLocaleBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicLocaleBuiltin.Bindings.__CreatePropertyBinding__CurrentLanguage();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicLocaleBuiltin.Bindings.__CreatePropertyBinding__CurrentLanguage();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x5b89647c) {
					bVar1 = (name == "DefaultLanguage");
					if (bVar1) {
						if ((typeof(CustomLogicLocaleBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicLocaleBuiltin.Bindings.__CreatePropertyBinding__DefaultLanguage();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicLocaleBuiltin.Bindings.__CreatePropertyBinding__DefaultLanguage();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x5e1c8caa) {
					bVar1 = (name == "RegisterLanguage");
					if (bVar1) {
						if ((typeof(CustomLogicLocaleBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar4 = CustomLogicLocaleBuiltin.Bindings.__CreateMethodBinding__RegisterLanguage();
							return (ICLMemberBinding)pCVar4;
						}
						pCVar4 = CustomLogicLocaleBuiltin.Bindings.__CreateMethodBinding__RegisterLanguage();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 < 0x9cbb72c4) {
				if (uVar2 == 0x9cbb72c3) {
					bVar1 = (name == "RemoveFallback");
					if (bVar1) {
						if ((typeof(CustomLogicLocaleBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar4 = CustomLogicLocaleBuiltin.Bindings.__CreateMethodBinding__RemoveFallback();
							return (ICLMemberBinding)pCVar4;
						}
						pCVar4 = CustomLogicLocaleBuiltin.Bindings.__CreateMethodBinding__RemoveFallback();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0x7106e006) {
					bVar1 = (name == "RegisterFallback");
					if (bVar1) {
						if ((typeof(CustomLogicLocaleBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar4 = CustomLogicLocaleBuiltin.Bindings.__CreateMethodBinding__RegisterFallback();
							return (ICLMemberBinding)pCVar4;
						}
						pCVar4 = CustomLogicLocaleBuiltin.Bindings.__CreateMethodBinding__RegisterFallback();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 == 0xb6973ef7) {
				bVar1 = (name == "Get");
				if (bVar1) {
					if ((typeof(CustomLogicLocaleBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar4 = CustomLogicLocaleBuiltin.Bindings.__CreateMethodBinding__Get();
						return (ICLMemberBinding)pCVar4;
					}
					pCVar4 = CustomLogicLocaleBuiltin.Bindings.__CreateMethodBinding__Get();
					return (ICLMemberBinding)pCVar4;
				}
			}
			else if (uVar2 == 0xfff1b99b) {
				bVar1 = (name == "RegisterLanguages");
				if (bVar1) {
					if ((typeof(CustomLogicLocaleBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar4 = CustomLogicLocaleBuiltin.Bindings.__CreateMethodBinding__RegisterLanguages();
						return (ICLMemberBinding)pCVar4;
					}
					pCVar4 = CustomLogicLocaleBuiltin.Bindings.__CreateMethodBinding__RegisterLanguages();
					return (ICLMemberBinding)pCVar4;
				}
			}
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicLocaleBuiltin not found");
			pSVar5 = String.Concat(pSVar5, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6003552")]
		[Address(RVA = "0x59E42F0", Offset = "0x59E32F0", VA = "0x59E42F0")]
		public static CLPropertyBinding<CustomLogicLocaleBuiltin> __CreatePropertyBinding__CurrentLanguage()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLocaleBuiltin.c (CustomLogic.CustomLogicLocaleBuiltin.Bindings$$__CreatePropertyBinding__CurrentLanguage): 2 lines keep C-only constructs
			Func<CustomLogicLocaleBuiltin, object> __this;
			CLPropertyBinding<CustomLogicLocaleBuiltin> __this_00;

			__this = new Func<CustomLogicLocaleBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings___CreatePropertyBinding__CurrentLanguage_g____gett);
			__this_00 = new CLPropertyBinding<CustomLogicLocaleBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003553")]
		[Address(RVA = "0x59E4390", Offset = "0x59E3390", VA = "0x59E4390")]
		public static CLPropertyBinding<CustomLogicLocaleBuiltin> __CreatePropertyBinding__DefaultLanguage()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLocaleBuiltin.c (CustomLogic.CustomLogicLocaleBuiltin.Bindings$$__CreatePropertyBinding__DefaultLanguage): 4 lines keep C-only constructs
			Func<CustomLogicLocaleBuiltin, object> __this;
			Action<CustomLogicLocaleBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicLocaleBuiltin> __this_01;

			__this = new Func<CustomLogicLocaleBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings___CreatePropertyBinding__DefaultLanguage_g____gett);
			__this_00 = il2cpp_codegen_object_new(typeof(Action<CustomLogicLocaleBuiltin, object>)) ;
			__this_00 = new Action<object, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings___CreatePropertyBinding__DefaultLanguage_g____sett);
			__this_01 = new CLPropertyBinding<CustomLogicLocaleBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6003554")]
		[Address(RVA = "0x59E4470", Offset = "0x59E3470", VA = "0x59E4470")]
		public static CLMethodBinding<CustomLogicLocaleBuiltin> __CreateMethodBinding__Get()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLocaleBuiltin.c (CustomLogic.CustomLogicLocaleBuiltin.Bindings$$__CreateMethodBinding__Get): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicLocaleBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicLocaleBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546e1f == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicLocaleBuiltin>)) ;
				Il2CppMethodInitialized_07546e1f = true;
				uVar1 = (typeof(CustomLogicLocaleBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicLocaleBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicLocaleBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicLocaleBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__4_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicLocaleBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__4_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicLocaleBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicLocaleBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicLocaleBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c___CreateMethodBinding__Get_b__4_0);
				pCVar2 = typeof(CustomLogicLocaleBuiltin.Bindings.c).static_fields;
				pCVar2.__9__4_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicLocaleBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003555")]
		[Address(RVA = "0x59E45B0", Offset = "0x59E35B0", VA = "0x59E45B0")]
		public static CLMethodBinding<CustomLogicLocaleBuiltin> __CreateMethodBinding__Set()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLocaleBuiltin.c (CustomLogic.CustomLogicLocaleBuiltin.Bindings$$__CreateMethodBinding__Set): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicLocaleBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicLocaleBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546e20 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicLocaleBuiltin>)) ;
				Il2CppMethodInitialized_07546e20 = true;
				uVar1 = (typeof(CustomLogicLocaleBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicLocaleBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicLocaleBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicLocaleBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__5_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicLocaleBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__5_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicLocaleBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicLocaleBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicLocaleBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c___CreateMethodBinding__Set_b__5_0);
				pCVar2 = typeof(CustomLogicLocaleBuiltin.Bindings.c).static_fields;
				pCVar2.__9__5_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicLocaleBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003556")]
		[Address(RVA = "0x59E46F0", Offset = "0x59E36F0", VA = "0x59E46F0")]
		public static CLMethodBinding<CustomLogicLocaleBuiltin> __CreateMethodBinding__RegisterLanguage()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLocaleBuiltin.c (CustomLogic.CustomLogicLocaleBuiltin.Bindings$$__CreateMethodBinding__RegisterLanguage): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicLocaleBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicLocaleBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546e21 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicLocaleBuiltin>)) ;
				Il2CppMethodInitialized_07546e21 = true;
				uVar1 = (typeof(CustomLogicLocaleBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicLocaleBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicLocaleBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicLocaleBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__6_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicLocaleBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__6_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicLocaleBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicLocaleBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicLocaleBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c___CreateMethodBinding__RegisterLanguage_b__6_0);
				pCVar2 = typeof(CustomLogicLocaleBuiltin.Bindings.c).static_fields;
				pCVar2.__9__6_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicLocaleBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003557")]
		[Address(RVA = "0x59E4830", Offset = "0x59E3830", VA = "0x59E4830")]
		public static CLMethodBinding<CustomLogicLocaleBuiltin> __CreateMethodBinding__RegisterLanguages()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLocaleBuiltin.c (CustomLogic.CustomLogicLocaleBuiltin.Bindings$$__CreateMethodBinding__RegisterLanguages): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicLocaleBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicLocaleBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546e22 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicLocaleBuiltin>)) ;
				Il2CppMethodInitialized_07546e22 = true;
				uVar1 = (typeof(CustomLogicLocaleBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicLocaleBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicLocaleBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicLocaleBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__7_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicLocaleBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__7_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicLocaleBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicLocaleBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicLocaleBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c___CreateMethodBinding__RegisterLanguages_b__7_0);
				pCVar2 = typeof(CustomLogicLocaleBuiltin.Bindings.c).static_fields;
				pCVar2.__9__7_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicLocaleBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003558")]
		[Address(RVA = "0x59E4970", Offset = "0x59E3970", VA = "0x59E4970")]
		public static CLMethodBinding<CustomLogicLocaleBuiltin> __CreateMethodBinding__RegisterFallback()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLocaleBuiltin.c (CustomLogic.CustomLogicLocaleBuiltin.Bindings$$__CreateMethodBinding__RegisterFallback): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicLocaleBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicLocaleBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546e23 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicLocaleBuiltin>)) ;
				Il2CppMethodInitialized_07546e23 = true;
				uVar1 = (typeof(CustomLogicLocaleBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicLocaleBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicLocaleBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicLocaleBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__8_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicLocaleBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__8_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicLocaleBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicLocaleBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicLocaleBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c___CreateMethodBinding__RegisterFallback_b__8_0);
				pCVar2 = typeof(CustomLogicLocaleBuiltin.Bindings.c).static_fields;
				pCVar2.__9__8_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicLocaleBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003559")]
		[Address(RVA = "0x59E4AB0", Offset = "0x59E3AB0", VA = "0x59E4AB0")]
		public static CLMethodBinding<CustomLogicLocaleBuiltin> __CreateMethodBinding__RemoveFallback()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLocaleBuiltin.c (CustomLogic.CustomLogicLocaleBuiltin.Bindings$$__CreateMethodBinding__RemoveFallback): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicLocaleBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicLocaleBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546e24 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicLocaleBuiltin>)) ;
				Il2CppMethodInitialized_07546e24 = true;
				uVar1 = (typeof(CustomLogicLocaleBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicLocaleBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicLocaleBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicLocaleBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__9_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicLocaleBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__9_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicLocaleBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicLocaleBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicLocaleBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c___CreateMethodBinding__RemoveFallback_b__9_0);
				pCVar2 = typeof(CustomLogicLocaleBuiltin.Bindings.c).static_fields;
				pCVar2.__9__9_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicLocaleBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x4001900")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, Dictionary<string, string>> _languages;

	[Token(Token = "0x4001901")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Dictionary<string, string> _languageFallbacks;

	[Token(Token = "0x170009AB")]
	public static string CurrentLanguage
	{
		[Token(Token = "0x6003541")]
		[Address(RVA = "0x59E30D0", Offset = "0x59E20D0", VA = "0x59E30D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLocaleBuiltin.c (CustomLogic.CustomLogicLocaleBuiltin$$get_CurrentLanguage): clean
			GeneralSettings pSVar1;
			StringSetting pSVar2;

			pSVar1 = SettingsManager.GeneralSettings;
			if ((pSVar1 == null) ||(pSVar2 = pSVar1.Language, pSVar2 == null)) {
				throw new NullReferenceException();
			}
			return pSVar2._value;
		}
	}

	[Token(Token = "0x170009AC")]
	public static string DefaultLanguage
	{
		[Token(Token = "0x6003542")]
		[Address(RVA = "0x59E3130", Offset = "0x59E2130", VA = "0x59E3130")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLocaleBuiltin.c (CustomLogic.CustomLogicLocaleBuiltin$$get_DefaultLanguage): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07546e10 == false) {
				Il2CppMethodInitialized_07546e10 = true;
				uVar1 = (typeof(CustomLogicLocaleBuiltin)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicLocaleBuiltin)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return CustomLogicLocaleBuiltin._DefaultLanguage_k__BackingField;
			}
			return *(String*)((long)(typeof(CustomLogicLocaleBuiltin)).static_fields + 0x10);
		}
		[Token(Token = "0x6003543")]
		[Address(RVA = "0x59E31A0", Offset = "0x59E21A0", VA = "0x59E31A0")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLocaleBuiltin.c (CustomLogic.CustomLogicLocaleBuiltin$$set_DefaultLanguage): clean

			CustomLogicLocaleBuiltin._DefaultLanguage_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x170009AD")]
	public override string ClassName
	{
		[Token(Token = "0x600354B")]
		[Address(RVA = "0x59E3CE0", Offset = "0x59E2CE0", VA = "0x59E3CE0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLocaleBuiltin.c (CustomLogic.CustomLogicLocaleBuiltin$$get_ClassName): clean
			return "Locale";
		}
	}

	[Token(Token = "0x170009AE")]
	public override bool IsAbstract
	{
		[Token(Token = "0x600354C")]
		[Address(RVA = "0x59E3D10", Offset = "0x59E2D10", VA = "0x59E3D10", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLocaleBuiltin.c (CustomLogic.CustomLogicLocaleBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x170009AF")]
	public override bool IsStatic
	{
		[Token(Token = "0x600354D")]
		[Address(RVA = "0x59E3D20", Offset = "0x59E2D20", VA = "0x59E3D20", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLocaleBuiltin.c (CustomLogic.CustomLogicLocaleBuiltin$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x170009B0")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x600354E")]
		[Address(RVA = "0x59E3D30", Offset = "0x59E2D30", VA = "0x59E3D30", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLocaleBuiltin.c (CustomLogic.CustomLogicLocaleBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6003540")]
	[Address(RVA = "0x59E2E00", Offset = "0x59E1E00", VA = "0x59E2E00")]
	public CustomLogicLocaleBuiltin()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicLocaleBuiltin.c (CustomLogic.CustomLogicLocaleBuiltin$$.ctor): clean
		uint uVar1;
		Dictionary<object, object> pSVar3;
		String pSVar4;
		String pSVar5;

		base();
		pSVar4 = CustomLogicLanguageEnum.English;
		if (Il2CppMethodInitialized_07546e9a == false) {
			Il2CppMethodInitialized_07546e9a = true;
			uVar1 = (typeof(CustomLogicLocaleBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicLocaleBuiltin))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		CustomLogicLocaleBuiltin._DefaultLanguage_k__BackingField = pSVar4;
		pSVar4 = CustomLogicLanguageEnum.TraditionalChinese;
		pSVar5 = CustomLogicLanguageEnum.Chinese;
		if (Il2CppMethodInitialized_07546e16 == false) {
			Il2CppMethodInitialized_07546e16 = true;
			uVar1 = (typeof(CustomLogicLocaleBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicLocaleBuiltin)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar3 = (Dictionary<object, object>)CustomLogicLocaleBuiltin._languageFallbacks;
		}
		else {
			pSVar3 = *(Dictionary<object, object>*)((long)(typeof(CustomLogicLocaleBuiltin)).static_fields + 8);
		}
		if (pSVar3 != null) {
			pSVar3.set_Item((object)pSVar4, (object)pSVar5);
			pSVar4 = CustomLogicLanguageEnum.Chinese;
			pSVar5 = CustomLogicLanguageEnum.TraditionalChinese;
			if (Il2CppMethodInitialized_07546e16 == false) {
				Il2CppMethodInitialized_07546e16 = true;
				uVar1 = (typeof(CustomLogicLocaleBuiltin)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicLocaleBuiltin)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pSVar3 = (Dictionary<object, object>)CustomLogicLocaleBuiltin._languageFallbacks;
			}
			else {
				pSVar3 = *(Dictionary<object, object>*)((long)(typeof(CustomLogicLocaleBuiltin)).static_fields + 8);
			}
			if (pSVar3 != null) {
				pSVar3.set_Item((object)pSVar4, (object)pSVar5);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003544")]
	[Address(RVA = "0x59E3200", Offset = "0x59E2200", VA = "0x59E3200")]
	public static string Get(string key)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicLocaleBuiltin.c (CustomLogic.CustomLogicLocaleBuiltin$$Get): 5 lines keep C-only constructs
		GeneralSettings pSVar1;
		StringSetting pSVar2;
		String pSVar3;
		Il2CppClass klass;
		Exception __this;
		MethodInfo lastManagedFrame;

		pSVar1 = SettingsManager.GeneralSettings;
		if ((pSVar1 == null) ||(pSVar2 = pSVar1.Language, pSVar2 == null)) {
			throw new NullReferenceException();
		}
		pSVar3 = pSVar2._value;
		if ((typeof(CustomLogicLocaleBuiltin)._2).cctor_finished_or_no_cctor == 0) {
		}
		pSVar3 = CustomLogicLocaleBuiltin.ResolveString(key, pSVar3);
		if (pSVar3 == null) {
			pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Localized string not found: ");
			pSVar3 = String.Concat(pSVar3, key);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar3);
			lastManagedFrame =(MethodInfo)il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Get);
			throw (object)__this;
		}
		return pSVar3;
	}

	[Token(Token = "0x6003545")]
	[Address(RVA = "0x59E35C0", Offset = "0x59E25C0", VA = "0x59E35C0")]
	public static void Set(string language, string key, string value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicLocaleBuiltin.c (CustomLogic.CustomLogicLocaleBuiltin$$Set): 1 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		bool bVar2;
		Dictionary<string, string> __this;
		Dictionary<string, string> local_30;

		local_30 = null;
		pSVar1 = (Dictionary<object, object>)CustomLogicLocaleBuiltin._languages;
		if (pSVar1 != null) {
			bVar2 = pSVar1.TryGetValue((object)language, (object*)&local_30);
			if (!bVar2) {
				__this = new Dictionary<string, string>();
				local_30 = __this;
				pSVar1 = (Dictionary<object, object>)CustomLogicLocaleBuiltin._languages;
				if (pSVar1 == null) goto label_05ae3714;
				pSVar1.set_Item((object)language, (object)local_30);
			}
			if (local_30 != null) {
				local_30.set_Item((object)key, (object)value);
				return;
			}
		}
	label_05ae3714: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003546")]
	[Address(RVA = "0x59E3720", Offset = "0x59E2720", VA = "0x59E3720")]
	public static void RegisterLanguage(string language, CustomLogicDictBuiltin strings)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicLocaleBuiltin.c (CustomLogic.CustomLogicLocaleBuiltin$$RegisterLanguage): 7 lines keep C-only constructs
		List<object> __this;
		Dictionary<object, object> __this_00;
		String key;
		bool bVar1;
		int capacity;
		Dictionary<string, string> __this_01;
		CustomLogicListBuiltin pCVar2;
		object key_00;
		object pIVar3;
		byte[] local_68 = new byte[8];
		object local_58;
		String local_50;
		byte[] local_48 = new byte[16];
		object local_38;

		local_68 = (byte[])0x0;
		local_58 = null;
		if (strings != null) {
			capacity = strings.Count;
			__this_01 = new Dictionary<string, string>(capacity);
			pCVar2 = strings.Keys;
			if ((pCVar2 != null) &&(__this = pCVar2.List, __this != null)) {
				local_48.GetEnumerator(__this);
				local_58 = local_38;
				local_68 = (byte[])local_48._0_8_;
				local_48._0_8_ = null;
				local_48._8_8_ = local_68;
				local_50 = language;
				if (__this_01 == null) {
					bVar1 = local_68.MoveNext();
					pIVar3 = local_58;
					if (bVar1) {
						if (local_58 != null) {
							(*local_58.klass.vtable[3].methodPtr)(local_58,local_58.klass.vtable[3].method);
							pIVar3 = strings.Get(pIVar3, null);
							if (pIVar3 != null) {
								(*pIVar3.klass.vtable[3].methodPtr)(pIVar3,pIVar3.klass.vtable[3].method);
								throw new NullReferenceException();
							}
	label_05ae39b0: ;
							throw new NullReferenceException();
						}
	label_05ae3984: ;
						throw new NullReferenceException();
					}
				}
				else {
					while(true) {
						bVar1 = local_68.MoveNext();
						pIVar3 = local_58;
						if (!bVar1) break;
						if (local_58 == null) goto label_05ae3984;
						key_00 = (object)(*local_58.klass.vtable[3].methodPtr)(local_58,local_58.klass.vtable[3].method);
						pIVar3 = strings.Get(pIVar3, null);
						if (pIVar3 == null) goto label_05ae39b0;
						pIVar3 = (object)(*pIVar3.klass.vtable[3].methodPtr)(pIVar3,pIVar3.klass.vtable[3].method);
						__this_01.set_Item(key_00, pIVar3);
					}
				}
				local_68.Dispose();
				key = local_50;
				__this_00 = (Dictionary<object, object>)CustomLogicLocaleBuiltin._languages;
				if (__this_00 != null) {
					__this_00.set_Item((object)key, (object)__this_01);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003547")]
	[Address(RVA = "0x59E3A50", Offset = "0x59E2A50", VA = "0x59E3A50")]
	public static void RegisterLanguages(string pattern)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicLocaleBuiltin.c (CustomLogic.CustomLogicLocaleBuiltin$$RegisterLanguages): 2 lines keep C-only constructs
		Dictionary<object, object> __this;
		object key;
		object value;
		bool bVar1;
		Dictionary<string, Dictionary<string, string>> __this_00;
		System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_58;

		local_58._current.key = null;
		local_58._current.value = null;
		local_58._dictionary = null;
		local_58._version = 0;
		local_58._index = 0;
		local_58._getEnumeratorRetType = 0;
		local_58._36_4_ = 0;
		__this_00 = UIManager.GetLocaleCategoryStrings(pattern);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		local_58 = __this_00.GetEnumerator();
		while(true) {
			bVar1 = local_58.MoveNext();
			value = local_58._current.value;
			key = local_58._current.key;
			if (!bVar1) {
				local_58.Dispose();
				return;
			}
			__this = (Dictionary<object, object>)CustomLogicLocaleBuiltin._languages;
			if (__this == null) break;
			__this.set_Item(key, value);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003548")]
	[Address(RVA = "0x59E3030", Offset = "0x59E2030", VA = "0x59E3030")]
	public static void RegisterFallback(string fromLanguage, string toLanguage)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicLocaleBuiltin.c (CustomLogic.CustomLogicLocaleBuiltin$$RegisterFallback): clean
		uint uVar1;
		Dictionary<object, object> __this;

		if (Il2CppMethodInitialized_07546e16 == false) {
			Il2CppMethodInitialized_07546e16 = true;
			uVar1 = (typeof(CustomLogicLocaleBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicLocaleBuiltin)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = (Dictionary<object, object>)CustomLogicLocaleBuiltin._languageFallbacks;
		}
		else {
			__this = *(Dictionary<object, object>*)((long)(typeof(CustomLogicLocaleBuiltin)).static_fields + 8);
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.set_Item((object)fromLanguage, (object)toLanguage);
		return;
	}

	[Token(Token = "0x6003549")]
	[Address(RVA = "0x59E3C40", Offset = "0x59E2C40", VA = "0x59E3C40")]
	public static void RemoveFallback(string fromLanguage)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicLocaleBuiltin.c (CustomLogic.CustomLogicLocaleBuiltin$$RemoveFallback): clean
		uint uVar1;
		Dictionary<object, object> __this;

		if (Il2CppMethodInitialized_07546e17 == false) {
			Il2CppMethodInitialized_07546e17 = true;
			uVar1 = (typeof(CustomLogicLocaleBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicLocaleBuiltin)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = (Dictionary<object, object>)CustomLogicLocaleBuiltin._languageFallbacks;
		}
		else {
			__this = *(Dictionary<object, object>*)((long)(typeof(CustomLogicLocaleBuiltin)).static_fields + 8);
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Remove((object)fromLanguage);
		return;
	}

	[Token(Token = "0x600354A")]
	[Address(RVA = "0x59E32F0", Offset = "0x59E22F0", VA = "0x59E32F0")]
	private static string ResolveString(string key, string requestedLang)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicLocaleBuiltin.c (CustomLogic.CustomLogicLocaleBuiltin$$ResolveString): 9 lines keep C-only constructs
		uint uVar1;
		bool bVar2;
		String pSVar3;
		Il2CppClass klass;
		Exception __this;
		MethodInfo lastManagedFrame;
		Dictionary<object, object> pSVar4;
		object* value;
		Dictionary<object, object> local_68;
		Dictionary<object, object> local_60;
		object local_58;
		Dictionary<object, object> local_50;
		object[] local_48 = new object[3];

		local_50 = null;
		local_48[2] = null;
		local_58 = null;
		local_60 = null;
		local_48[1] = null;
		local_68 = null;
		local_48[0] = null;
		pSVar4 = (Dictionary<object, object>)CustomLogicLocaleBuiltin._languages;
		if (pSVar4 == null) goto label_05ae3562;
		bVar2 = pSVar4.TryGetValue((object)requestedLang, (object*)&local_50);
		if (bVar2) {
			if (local_50 == null) goto label_05ae3562;
			value = local_48 + 2;
			bVar2 = local_50.TryGetValue((object)key, value);
			if (bVar2) goto label_05ae3550;
		}
		pSVar4 = (Dictionary<object, object>)CustomLogicLocaleBuiltin._languageFallbacks;
		if (pSVar4 == null) goto label_05ae3562;
		bVar2 = pSVar4.TryGetValue((object)requestedLang, ref local_58);
		if (bVar2) {
			pSVar4 = (Dictionary<object, object>)CustomLogicLocaleBuiltin._languages;
			if (pSVar4 == null) goto label_05ae3562;
			bVar2 = pSVar4.TryGetValue(local_58, (object*)&local_60);
			if (bVar2) {
				if (local_60 == null) goto label_05ae3562;
				value = local_48 + 1;
				bVar2 = local_60.TryGetValue((object)key, value);
				if (bVar2) goto label_05ae3550;
			}
		}
		if ((typeof(CustomLogicLocaleBuiltin)._2).cctor_finished_or_no_cctor == 0) {
			pSVar4 = (Dictionary<object, object>)CustomLogicLocaleBuiltin._languages;
			if (Il2CppMethodInitialized_07546e9b == false) goto label_05ae34e9;
	label_05ae34bb: ;
			uVar1 = (typeof(CustomLogicLocaleBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			pSVar4 = (Dictionary<object, object>)CustomLogicLocaleBuiltin._languages;
			if (Il2CppMethodInitialized_07546e9b != false) goto label_05ae34bb;
	label_05ae34e9: ;
			Il2CppMethodInitialized_07546e9b = true;
			uVar1 = (typeof(CustomLogicLocaleBuiltin)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (pSVar4 == null) {
	label_05ae3562: ;
			throw new NullReferenceException();
		}
		bVar2 = pSVar4.TryGetValue(*(object*)((long)(typeof(CustomLogicLocaleBuiltin)). static_fields + 0x10), (object*)&local_68);
		if (bVar2) {
			if (local_68 == null) goto label_05ae3562;
			value = local_48;
			bVar2 = local_68.TryGetValue((object)key, value);
			if (bVar2) {
	label_05ae3550: ;
				return (String)*value;
			}
		}
		pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Locale string not found: ");
		pSVar3 = String.Concat(pSVar3, key);
		klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
		__this = (Exception)il2cpp_codegen_object_new(klass);
		__this = new Exception(pSVar3);
		lastManagedFrame =(MethodInfo)il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_ResolveString);
		throw (object)__this;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicLocaleBuiltin.c.

	// CustomLogic.CustomLogicLocaleBuiltin$$.cctor: 1 lines keep C-only constructs
	static CustomLogicLocaleBuiltin()
	{
		Dictionary<string, Dictionary<string, string>> __this;
		Dictionary<string, string> __this_00;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, Dictionary<string, string>>));
		__this = new Dictionary<object, object>();
		CustomLogicLocaleBuiltin._languages = __this;
		__this_00 = new Dictionary<string, string>();
		CustomLogicLocaleBuiltin._languageFallbacks = __this_00;
		return;
	}

	// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"CurrentLanguage");
		__this.Add((Il2CppObject *)"DefaultLanguage");
		__this.Add((Il2CppObject *)"Get");
		__this.Add((Il2CppObject *)"Set");
		__this.Add((Il2CppObject *)"RegisterLanguage");
		__this.Add((Il2CppObject *)"RegisterLanguages");
		__this.Add((Il2CppObject *)"RegisterFallback");
		__this.Add((Il2CppObject *)"RemoveFallback");
		CustomLogicLocaleBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$<__CreatePropertyBinding__CurrentLanguage>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__CurrentLanguage_g____getter_2_0(CustomLogicLocaleBuiltin __i)
	{
		uint uVar1;
		GeneralSettings pSVar2;
		StringSetting pSVar3;

		if (Il2CppMethodInitialized_07546e26 == false) {
			Il2CppMethodInitialized_07546e26 = true;
			uVar1 = (typeof(CustomLogicLocaleBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicLocaleBuiltin)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pSVar2 = SettingsManager.GeneralSettings;
		if ((pSVar2 == null) ||(pSVar3 = pSVar2.Language, pSVar3 == null)) {
			throw new NullReferenceException();
		}
		return (object)pSVar3._value;
	}

	// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$<__CreatePropertyBinding__DefaultLanguage>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__DefaultLanguage_g____getter_3_0(CustomLogicLocaleBuiltin __i)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546e27 == false) {
			Il2CppMethodInitialized_07546e27 = true;
			uVar1 = (typeof(CustomLogicLocaleBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicLocaleBuiltin)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07546e9b == false) {
			Il2CppMethodInitialized_07546e9b = true;
			uVar1 = (typeof(CustomLogicLocaleBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicLocaleBuiltin))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return (object)CustomLogicLocaleBuiltin._DefaultLanguage_k__BackingField;
		}
		return *(object*)((long)(typeof(CustomLogicLocaleBuiltin)).static_fields + 0x10);
	}

	// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$<__CreatePropertyBinding__DefaultLanguage>g____setter|3_1: clean
	private static void Bindings____CreatePropertyBinding__DefaultLanguage_g____setter_3_1(CustomLogicLocaleBuiltin __i, object __v)
	{
		uint uVar1;
		String pSVar3;

		pSVar3 = CustomLogicEvaluator.ConvertTo<string>(__v);
		if (Il2CppMethodInitialized_07546e9a == false) {
			Il2CppMethodInitialized_07546e9a = true;
			uVar1 = (typeof(CustomLogicLocaleBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicLocaleBuiltin))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		CustomLogicLocaleBuiltin._DefaultLanguage_k__BackingField = pSVar3;
		return;
	}

	// CustomLogic.CustomLogicLocaleBuiltin.Bindings.<>c$$.cctor: clean
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = new CustomLogicLocaleBuiltin.Bindings.c();
		CustomLogicLocaleBuiltin.Bindings.c.__9 =(CustomLogicLocaleBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicLocaleBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicLocaleBuiltin.Bindings.<>c$$<__CreateMethodBinding__Get>b__4_0: clean
	private object Bindings_c____CreateMethodBinding__Get_b__4_0(CustomLogicLocaleBuiltin __c, Object[] __a)
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
		if ((typeof(CustomLogicLocaleBuiltin)._2).cctor_finished_or_no_cctor == 0) {
			pSVar1 = CustomLogicLocaleBuiltin.Get(pSVar1);
			return (object)pSVar1;
		}
		pSVar1 = CustomLogicLocaleBuiltin.Get(pSVar1);
		return (object)pSVar1;
	}

	// CustomLogic.CustomLogicLocaleBuiltin.Bindings.<>c$$<__CreateMethodBinding__Set>b__5_0: clean
	private object Bindings_c____CreateMethodBinding__Set_b__5_0(CustomLogicLocaleBuiltin __c, Object[] __a)
	{
		object obj;
		String language;
		String key;
		String value;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			language = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				key = CustomLogicEvaluator.ConvertTo<string>(__a[1]);
				if (2 < (uint)__a.Length) {
					value = CustomLogicEvaluator.ConvertTo<string>(__a[2]) ;
					CustomLogicLocaleBuiltin.Set(language, key, value);
					return null;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicLocaleBuiltin.Bindings.<>c$$<__CreateMethodBinding__RegisterLanguage>b__6_0: clean
	private object Bindings_c____CreateMethodBinding__RegisterLanguage_b__6_0(CustomLogicLocaleBuiltin __c, Object[] __a)
	{
		object obj;
		String language;
		CustomLogicDictBuiltin strings;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			language = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				strings = CustomLogicEvaluator.ConvertTo<CustomLogicDictBuiltin>(__a[1]);
				if ((typeof(CustomLogicLocaleBuiltin)._2).cctor_finished_or_no_cctor == 0) {
				}
				CustomLogicLocaleBuiltin.RegisterLanguage(language, strings);
				return null;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicLocaleBuiltin.Bindings.<>c$$<__CreateMethodBinding__RegisterLanguages>b__7_0: clean
	private object Bindings_c____CreateMethodBinding__RegisterLanguages_b__7_0(CustomLogicLocaleBuiltin __c, Object[] __a)
	{
		object obj;
		String pattern;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		obj = __a[0];
		pattern = CustomLogicEvaluator.ConvertTo<string>(obj) ;
		CustomLogicLocaleBuiltin.RegisterLanguages(pattern);
		return null;
	}

	// CustomLogic.CustomLogicLocaleBuiltin.Bindings.<>c$$<__CreateMethodBinding__RegisterFallback>b__8_0: clean
	private object Bindings_c____CreateMethodBinding__RegisterFallback_b__8_0(CustomLogicLocaleBuiltin __c, Object[] __a)
	{
		uint uVar1;
		object obj;
		Dictionary<object, object> __this_00;
		String key;
		String value;

		if (__a == null) goto label_05ae5502;
		if ((int)__a.Length == 0) {
	label_05ae5507: ;
			throw new IndexOutOfRangeException();
		}
		obj = __a[0];
		key = CustomLogicEvaluator.ConvertTo<string>(obj);
		if ((__a.Length & 0xfffffffe) == 0) goto label_05ae5507;
		value = CustomLogicEvaluator.ConvertTo<string>(__a[1]);
		if ((typeof(CustomLogicLocaleBuiltin)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_07546e16 != false) goto label_05ae5478;
	label_05ae54bf: ;
			Il2CppMethodInitialized_07546e16 = true;
			uVar1 = (typeof(CustomLogicLocaleBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_07546e16 == false) goto label_05ae54bf;
	label_05ae5478: ;
			uVar1 = (typeof(CustomLogicLocaleBuiltin)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this_00 = (Dictionary<object, object>)CustomLogicLocaleBuiltin._languageFallbacks;
		}
		else {
			__this_00 = *(Dictionary<object, object>*)((long)(typeof(CustomLogicLocaleBuiltin)).static_fields + 8);
		}
		if (__this_00 != null) {
			__this_00.set_Item((object)key, (object)value);
			return null;
		}
	label_05ae5502: ;
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicLocaleBuiltin.Bindings.<>c$$<__CreateMethodBinding__RemoveFallback>b__9_0: clean
	private object Bindings_c____CreateMethodBinding__RemoveFallback_b__9_0(CustomLogicLocaleBuiltin __c, Object[] __a)
	{
		uint uVar1;
		object obj;
		Dictionary<object, object> __this_00;
		String key;

		if (__a == null) goto label_05ae5634;
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		obj = __a[0];
		key = CustomLogicEvaluator.ConvertTo<string>(obj);
		if ((typeof(CustomLogicLocaleBuiltin)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_07546e17 != false) goto label_05ae55ab;
	label_05ae55f1: ;
			Il2CppMethodInitialized_07546e17 = true;
			uVar1 = (typeof(CustomLogicLocaleBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_07546e17 == false) goto label_05ae55f1;
	label_05ae55ab: ;
			uVar1 = (typeof(CustomLogicLocaleBuiltin)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this_00 = (Dictionary<object, object>)CustomLogicLocaleBuiltin._languageFallbacks;
		}
		else {
			__this_00 = *(Dictionary<object, object>*)((long)(typeof(CustomLogicLocaleBuiltin)).static_fields + 8);
		}
		if (__this_00 != null) {
			__this_00.Remove((object)key);
			return null;
		}
	label_05ae5634: ;
		throw new NullReferenceException();
	}
}
