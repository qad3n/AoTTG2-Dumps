// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicConvertBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicConvertBuiltin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicConvertBuiltin.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200061A")]
[CompilerGenerated]
internal class CustomLogicConvertBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x200061B")]
	public static class Factory
	{
		[Token(Token = "0x60039DC")]
		[Address(RVA = "0x5A28A90", Offset = "0x5A27A90", VA = "0x5A28A90")]
		public static CustomLogicConvertBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicConvertBuiltin.c (CustomLogic.CustomLogicConvertBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicConvertBuiltin constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicConvertBuiltin();
			return (CustomLogicConvertBuiltin)__this;
		}
	}

	[Token(Token = "0x200061C")]
	public static class Bindings
	{
		[Token(Token = "0x4001A40")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60039DD")]
		[Address(RVA = "0x5A28BB0", Offset = "0x5A27BB0", VA = "0x5A28BB0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicConvertBuiltin.c (CustomLogic.CustomLogicConvertBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLMethodBinding<CustomLogicConvertBuiltin> pCVar3;
			String pSVar4;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x54aa9712) {
				if (uVar2 < 0x36ec8533) {
					if (uVar2 < 0x16a60c4e) {
						if (uVar2 == 0xb7c33aa) {
							bVar1 = (name == "IsObject");
							if (bVar1) {
								pCVar3 = CustomLogicConvertBuiltin.Bindings.__CreateMethodBinding__IsObject();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x16a60c4d) {
							bVar1 = (name == "IsBool");
							if (bVar1) {
								pCVar3 = CustomLogicConvertBuiltin.Bindings.__CreateMethodBinding__IsBool();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x21b10f16) {
						bVar1 = (name == "DefineVariable");
						if (bVar1) {
							pCVar3 = CustomLogicConvertBuiltin.Bindings.__CreateMethodBinding__DefineVariable();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x36ec8532) {
						bVar1 = (name == "HasMethod");
						if (bVar1) {
							pCVar3 = CustomLogicConvertBuiltin.Bindings.__CreateMethodBinding__HasMethod();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x43eb6410) {
					if (uVar2 == 0x42797ce9) {
						bVar1 = (name == "IsDict");
						if (bVar1) {
							pCVar3 = CustomLogicConvertBuiltin.Bindings.__CreateMethodBinding__IsDict();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x43eb640f) {
						bVar1 = (name == "GetType");
						if (bVar1) {
							pCVar3 = CustomLogicConvertBuiltin.Bindings.__CreateMethodBinding__GetType();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x45844edd) {
					bVar1 = (name == "RemoveVariable");
					if (bVar1) {
						pCVar3 = CustomLogicConvertBuiltin.Bindings.__CreateMethodBinding__RemoveVariable();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x54aa9711) {
					bVar1 = (name == "IsList");
					if (bVar1) {
						pCVar3 = CustomLogicConvertBuiltin.Bindings.__CreateMethodBinding__IsList();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0x7bdd082f) {
				if (uVar2 < 0x7040ed26) {
					if (uVar2 == 0x59fa775c) {
						bVar1 = (name == "ToBool");
						if (bVar1) {
							pCVar3 = CustomLogicConvertBuiltin.Bindings.__CreateMethodBinding__ToBool();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x7040ed25) {
						bVar1 = (name == "ToString");
						if (bVar1) {
							pCVar3 = CustomLogicConvertBuiltin.Bindings.__CreateMethodBinding__ToString();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x72a1342f) {
					bVar1 = (name == "HasVariable");
					if (bVar1) {
						pCVar3 = CustomLogicConvertBuiltin.Bindings.__CreateMethodBinding__HasVariable();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x7bdd082e) {
					bVar1 = (name == "IsInt");
					if (bVar1) {
						pCVar3 = CustomLogicConvertBuiltin.Bindings.__CreateMethodBinding__IsInt();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xc34f3929) {
				if (uVar2 == 0xba01fe55) {
					bVar1 = (name == "IsFloat");
					if (bVar1) {
						pCVar3 = CustomLogicConvertBuiltin.Bindings.__CreateMethodBinding__IsFloat();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xc34f3928) {
					bVar1 = (name == "IsString");
					if (bVar1) {
						pCVar3 = CustomLogicConvertBuiltin.Bindings.__CreateMethodBinding__IsString();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xdfa2d4fd) {
				bVar1 = (name == "ToInt");
				if (bVar1) {
					pCVar3 = CustomLogicConvertBuiltin.Bindings.__CreateMethodBinding__ToInt();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xc5a73b76) {
				bVar1 = (name == "ToFloat");
				if (bVar1) {
					pCVar3 = CustomLogicConvertBuiltin.Bindings.__CreateMethodBinding__ToFloat();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicConvertBuiltin not found");
			pSVar4 = String.Concat(pSVar4, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar4);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x60039DE")]
		[Address(RVA = "0x5A29200", Offset = "0x5A28200", VA = "0x5A29200")]
		public static CLMethodBinding<CustomLogicConvertBuiltin> __CreateMethodBinding__ToFloat()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicConvertBuiltin.c (CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__ToFloat): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicConvertBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicConvertBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicConvertBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754719d == false) {
				Il2CppMethodInitialized_0754719d = true;
				uVar1 = (typeof(CustomLogicConvertBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicConvertBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicConvertBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__2_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicConvertBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__2_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicConvertBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicConvertBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicConvertBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__ToFloat_b__2_0);
				pCVar2 = typeof(CustomLogicConvertBuiltin.Bindings.c).static_fields;
				pCVar2.__9__2_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicConvertBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60039DF")]
		[Address(RVA = "0x5A29340", Offset = "0x5A28340", VA = "0x5A29340")]
		public static CLMethodBinding<CustomLogicConvertBuiltin> __CreateMethodBinding__ToInt()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicConvertBuiltin.c (CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__ToInt): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicConvertBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicConvertBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicConvertBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754719e == false) {
				Il2CppMethodInitialized_0754719e = true;
				uVar1 = (typeof(CustomLogicConvertBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicConvertBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicConvertBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__3_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicConvertBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__3_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicConvertBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicConvertBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicConvertBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__ToInt_b__3_0);
				pCVar2 = typeof(CustomLogicConvertBuiltin.Bindings.c).static_fields;
				pCVar2.__9__3_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicConvertBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60039E0")]
		[Address(RVA = "0x5A29480", Offset = "0x5A28480", VA = "0x5A29480")]
		public static CLMethodBinding<CustomLogicConvertBuiltin> __CreateMethodBinding__ToBool()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicConvertBuiltin.c (CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__ToBool): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicConvertBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicConvertBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicConvertBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754719f == false) {
				Il2CppMethodInitialized_0754719f = true;
				uVar1 = (typeof(CustomLogicConvertBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicConvertBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicConvertBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__4_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicConvertBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__4_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicConvertBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicConvertBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicConvertBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__ToBool_b__4_0);
				pCVar2 = typeof(CustomLogicConvertBuiltin.Bindings.c).static_fields;
				pCVar2.__9__4_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicConvertBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60039E1")]
		[Address(RVA = "0x5A295C0", Offset = "0x5A285C0", VA = "0x5A295C0")]
		public static CLMethodBinding<CustomLogicConvertBuiltin> __CreateMethodBinding__ToString()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicConvertBuiltin.c (CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__ToString): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicConvertBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicConvertBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicConvertBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471a0 == false) {
				Il2CppMethodInitialized_075471a0 = true;
				uVar1 = (typeof(CustomLogicConvertBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicConvertBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicConvertBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__5_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicConvertBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__5_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicConvertBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicConvertBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicConvertBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__ToString_b__5_0);
				pCVar2 = typeof(CustomLogicConvertBuiltin.Bindings.c).static_fields;
				pCVar2.__9__5_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicConvertBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60039E2")]
		[Address(RVA = "0x5A29700", Offset = "0x5A28700", VA = "0x5A29700")]
		public static CLMethodBinding<CustomLogicConvertBuiltin> __CreateMethodBinding__IsFloat()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicConvertBuiltin.c (CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__IsFloat): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicConvertBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicConvertBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicConvertBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471a1 == false) {
				Il2CppMethodInitialized_075471a1 = true;
				uVar1 = (typeof(CustomLogicConvertBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicConvertBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicConvertBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__6_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicConvertBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__6_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicConvertBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicConvertBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicConvertBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__IsFloat_b__6_0);
				pCVar2 = typeof(CustomLogicConvertBuiltin.Bindings.c).static_fields;
				pCVar2.__9__6_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicConvertBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60039E3")]
		[Address(RVA = "0x5A29840", Offset = "0x5A28840", VA = "0x5A29840")]
		public static CLMethodBinding<CustomLogicConvertBuiltin> __CreateMethodBinding__IsInt()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicConvertBuiltin.c (CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__IsInt): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicConvertBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicConvertBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicConvertBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471a2 == false) {
				Il2CppMethodInitialized_075471a2 = true;
				uVar1 = (typeof(CustomLogicConvertBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicConvertBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicConvertBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__7_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicConvertBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__7_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicConvertBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicConvertBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicConvertBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__IsInt_b__7_0);
				pCVar2 = typeof(CustomLogicConvertBuiltin.Bindings.c).static_fields;
				pCVar2.__9__7_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicConvertBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60039E4")]
		[Address(RVA = "0x5A29980", Offset = "0x5A28980", VA = "0x5A29980")]
		public static CLMethodBinding<CustomLogicConvertBuiltin> __CreateMethodBinding__IsBool()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicConvertBuiltin.c (CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__IsBool): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicConvertBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicConvertBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicConvertBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471a3 == false) {
				Il2CppMethodInitialized_075471a3 = true;
				uVar1 = (typeof(CustomLogicConvertBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicConvertBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicConvertBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__8_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicConvertBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__8_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicConvertBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicConvertBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicConvertBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__IsBool_b__8_0);
				pCVar2 = typeof(CustomLogicConvertBuiltin.Bindings.c).static_fields;
				pCVar2.__9__8_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicConvertBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60039E5")]
		[Address(RVA = "0x5A29AC0", Offset = "0x5A28AC0", VA = "0x5A29AC0")]
		public static CLMethodBinding<CustomLogicConvertBuiltin> __CreateMethodBinding__IsString()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicConvertBuiltin.c (CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__IsString): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicConvertBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicConvertBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicConvertBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471a4 == false) {
				Il2CppMethodInitialized_075471a4 = true;
				uVar1 = (typeof(CustomLogicConvertBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicConvertBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicConvertBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__9_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicConvertBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__9_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicConvertBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicConvertBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicConvertBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__IsString_b__9_0);
				pCVar2 = typeof(CustomLogicConvertBuiltin.Bindings.c).static_fields;
				pCVar2.__9__9_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicConvertBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60039E6")]
		[Address(RVA = "0x5A29C00", Offset = "0x5A28C00", VA = "0x5A29C00")]
		public static CLMethodBinding<CustomLogicConvertBuiltin> __CreateMethodBinding__IsObject()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicConvertBuiltin.c (CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__IsObject): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicConvertBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicConvertBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicConvertBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471a5 == false) {
				Il2CppMethodInitialized_075471a5 = true;
				uVar1 = (typeof(CustomLogicConvertBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicConvertBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicConvertBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__10_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicConvertBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__10_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicConvertBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicConvertBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicConvertBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__IsObject_b__10_0);
				pCVar2 = typeof(CustomLogicConvertBuiltin.Bindings.c).static_fields;
				pCVar2.__9__10_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicConvertBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60039E7")]
		[Address(RVA = "0x5A29D40", Offset = "0x5A28D40", VA = "0x5A29D40")]
		public static CLMethodBinding<CustomLogicConvertBuiltin> __CreateMethodBinding__IsList()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicConvertBuiltin.c (CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__IsList): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicConvertBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicConvertBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicConvertBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471a6 == false) {
				Il2CppMethodInitialized_075471a6 = true;
				uVar1 = (typeof(CustomLogicConvertBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicConvertBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicConvertBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__11_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicConvertBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__11_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicConvertBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicConvertBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicConvertBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__IsList_b__11_0);
				pCVar2 = typeof(CustomLogicConvertBuiltin.Bindings.c).static_fields;
				pCVar2.__9__11_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicConvertBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60039E8")]
		[Address(RVA = "0x5A29E80", Offset = "0x5A28E80", VA = "0x5A29E80")]
		public static CLMethodBinding<CustomLogicConvertBuiltin> __CreateMethodBinding__IsDict()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicConvertBuiltin.c (CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__IsDict): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicConvertBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicConvertBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicConvertBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471a7 == false) {
				Il2CppMethodInitialized_075471a7 = true;
				uVar1 = (typeof(CustomLogicConvertBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicConvertBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicConvertBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__12_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicConvertBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__12_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicConvertBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicConvertBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicConvertBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__IsDict_b__12_0);
				pCVar2 = typeof(CustomLogicConvertBuiltin.Bindings.c).static_fields;
				pCVar2.__9__12_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicConvertBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60039E9")]
		[Address(RVA = "0x5A29FC0", Offset = "0x5A28FC0", VA = "0x5A29FC0")]
		public static CLMethodBinding<CustomLogicConvertBuiltin> __CreateMethodBinding__HasVariable()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicConvertBuiltin.c (CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__HasVariable): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicConvertBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicConvertBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicConvertBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471a8 == false) {
				Il2CppMethodInitialized_075471a8 = true;
				uVar1 = (typeof(CustomLogicConvertBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicConvertBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicConvertBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__13_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicConvertBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__13_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicConvertBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicConvertBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicConvertBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__HasVariable_b__13_0);
				pCVar2 = typeof(CustomLogicConvertBuiltin.Bindings.c).static_fields;
				pCVar2.__9__13_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicConvertBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60039EA")]
		[Address(RVA = "0x5A2A100", Offset = "0x5A29100", VA = "0x5A2A100")]
		public static CLMethodBinding<CustomLogicConvertBuiltin> __CreateMethodBinding__DefineVariable()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicConvertBuiltin.c (CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__DefineVariable): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicConvertBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicConvertBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicConvertBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471a9 == false) {
				Il2CppMethodInitialized_075471a9 = true;
				uVar1 = (typeof(CustomLogicConvertBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicConvertBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicConvertBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__14_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicConvertBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__14_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicConvertBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicConvertBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicConvertBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__DefineVariable_b__14_0);
				pCVar2 = typeof(CustomLogicConvertBuiltin.Bindings.c).static_fields;
				pCVar2.__9__14_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicConvertBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60039EB")]
		[Address(RVA = "0x5A2A240", Offset = "0x5A29240", VA = "0x5A2A240")]
		public static CLMethodBinding<CustomLogicConvertBuiltin> __CreateMethodBinding__RemoveVariable()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicConvertBuiltin.c (CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__RemoveVariable): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicConvertBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicConvertBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicConvertBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471aa == false) {
				Il2CppMethodInitialized_075471aa = true;
				uVar1 = (typeof(CustomLogicConvertBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicConvertBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicConvertBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__15_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicConvertBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__15_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicConvertBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicConvertBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicConvertBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__RemoveVariable_b__15_0);
				pCVar2 = typeof(CustomLogicConvertBuiltin.Bindings.c).static_fields;
				pCVar2.__9__15_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicConvertBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60039EC")]
		[Address(RVA = "0x5A2A380", Offset = "0x5A29380", VA = "0x5A2A380")]
		public static CLMethodBinding<CustomLogicConvertBuiltin> __CreateMethodBinding__HasMethod()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicConvertBuiltin.c (CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__HasMethod): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicConvertBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicConvertBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicConvertBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471ab == false) {
				Il2CppMethodInitialized_075471ab = true;
				uVar1 = (typeof(CustomLogicConvertBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicConvertBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicConvertBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__16_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicConvertBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__16_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicConvertBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicConvertBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicConvertBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__HasMethod_b__16_0);
				pCVar2 = typeof(CustomLogicConvertBuiltin.Bindings.c).static_fields;
				pCVar2.__9__16_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicConvertBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x60039ED")]
		[Address(RVA = "0x5A2A4C0", Offset = "0x5A294C0", VA = "0x5A2A4C0")]
		public static CLMethodBinding<CustomLogicConvertBuiltin> __CreateMethodBinding__GetType()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicConvertBuiltin.c (CustomLogic.CustomLogicConvertBuiltin.Bindings$$__CreateMethodBinding__GetType): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicConvertBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicConvertBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicConvertBuiltin> __this_00;

			if (Il2CppMethodInitialized_075471ac == false) {
				Il2CppMethodInitialized_075471ac = true;
				uVar1 = (typeof(CustomLogicConvertBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicConvertBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicConvertBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__17_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicConvertBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__17_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicConvertBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicConvertBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicConvertBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicConvertBuiltin_Bindings_c___CreateMethodBinding__GetType_b__17_0);
				pCVar2 = typeof(CustomLogicConvertBuiltin.Bindings.c).static_fields;
				pCVar2.__9__17_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicConvertBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x17000A3D")]
	public override string ClassName
	{
		[Token(Token = "0x60039D8")]
		[Address(RVA = "0x5A28A30", Offset = "0x5A27A30", VA = "0x5A28A30", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicConvertBuiltin.c (CustomLogic.CustomLogicConvertBuiltin$$get_ClassName): clean
			return "Convert";
		}
	}

	[Token(Token = "0x17000A3E")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60039D9")]
		[Address(RVA = "0x5A28A60", Offset = "0x5A27A60", VA = "0x5A28A60", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicConvertBuiltin.c (CustomLogic.CustomLogicConvertBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000A3F")]
	public override bool IsStatic
	{
		[Token(Token = "0x60039DA")]
		[Address(RVA = "0x5A28A70", Offset = "0x5A27A70", VA = "0x5A28A70", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicConvertBuiltin.c (CustomLogic.CustomLogicConvertBuiltin$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x17000A40")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60039DB")]
		[Address(RVA = "0x5A28A80", Offset = "0x5A27A80", VA = "0x5A28A80", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicConvertBuiltin.c (CustomLogic.CustomLogicConvertBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x60039C7")]
	[Address(RVA = "0x5A283A0", Offset = "0x5A273A0", VA = "0x5A283A0")]
	public CustomLogicConvertBuiltin()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicConvertBuiltin.c (CustomLogic.CustomLogicConvertBuiltin$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07547190 == false) {
			Il2CppMethodInitialized_07547190 = true;
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

	[Token(Token = "0x60039C8")]
	[Address(RVA = "0x5A28410", Offset = "0x5A27410", VA = "0x5A28410")]
	public static float ToFloat(object value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicConvertBuiltin.c (CustomLogic.CustomLogicConvertBuiltin$$ToFloat): 6 lines keep C-only constructs
		Il2CppClass pIVar1;
		CultureInfo provider;
		float pfVar2;
		double pdVar3;
		int piVar4;
		sbyte pcVar5;
		float fVar6;

		if (value != null) {
			pIVar1 = value.klass;
			if (pIVar1 == g_data_07556758) {
				provider = CultureInfo.InvariantCulture;
				if (value.klass != g_data_07556758) {
					throw new InvalidCastException();
				}
				fVar6 = Single.Parse((String)value, (IFormatProvider)provider);
				return fVar6;
			}
			if (pIVar1 == g_data_07556740) {
				return *pfVar2;
			}
			if (pIVar1 == g_data_07556748) {
				pdVar3 = il2cpp_vm_Object_Unbox(value);
				return (float)*pdVar3;
			}
			if (pIVar1 == g_data_07556710) {
				piVar4 = il2cpp_vm_Object_Unbox(value);
				return (float)*piVar4;
			}
			if (pIVar1 == g_data_075566f0) {
				pcVar5 = (sbyte)il2cpp_runtime_helper_02abd3a0(value);
				if (*pcVar5 != false) {
					return 1.0;
				}
			}
		}
		return 0.0;
	}

	[Token(Token = "0x60039C9")]
	[Address(RVA = "0x5A28530", Offset = "0x5A27530", VA = "0x5A28530")]
	public static int ToInt(object value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicConvertBuiltin.c (CustomLogic.CustomLogicConvertBuiltin$$ToInt): 3 lines keep C-only constructs
		Il2CppClass pIVar1;
		int iVar2;
		float pfVar3;
		int piVar4;
		byte pbVar5;

		if (value != null) {
			pIVar1 = value.klass;
			if (pIVar1 == g_data_07556758) {
				iVar2 = Int32.Parse((String)value);
				return iVar2;
			}
			if (pIVar1 == g_data_07556740) {
				pfVar3 = il2cpp_vm_Object_Unbox(value);
				return (int)*pfVar3;
			}
			if (pIVar1 == g_data_07556710) {
				return *piVar4;
			}
			if (pIVar1 == g_data_075566f0) {
				pbVar5 = il2cpp_vm_Object_Unbox(value);
				return (int32_t)*pbVar5;
			}
		}
		return 0;
	}

	[Token(Token = "0x60039CA")]
	[Address(RVA = "0x5A28590", Offset = "0x5A27590", VA = "0x5A28590")]
	public static bool ToBool(object value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicConvertBuiltin.c (CustomLogic.CustomLogicConvertBuiltin$$ToBool): 5 lines keep C-only constructs
		Il2CppClass pIVar1;
		bool bVar2;
		String a;
		float pfVar3;
		int piVar4;
		sbyte pcVar5;

		if (value != null) {
			pIVar1 = value.klass;
			if (pIVar1 == g_data_07556758) {
				a = value.ToLower();
				bVar2 = (a == "true");
				return bVar2;
			}
			if (pIVar1 == g_data_07556740) {
				pfVar3 = il2cpp_vm_Object_Unbox(value);
				return (bool)(-(*pfVar3 != 0.0) & 1);
			}
			if (pIVar1 == g_data_07556710) {
				piVar4 = il2cpp_vm_Object_Unbox(value);
				return *piVar4 != 0;
			}
			if (pIVar1 == g_data_075566f0) {
				pcVar5 = il2cpp_vm_Object_Unbox(value);
				return *pcVar5 != false;
			}
		}
		return false;
	}

	[Token(Token = "0x60039CB")]
	[Address(RVA = "0x5A28640", Offset = "0x5A27640", VA = "0x5A28640")]
	public static string ToString(object value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicConvertBuiltin.c (CustomLogic.CustomLogicConvertBuiltin$$ToString): 7 lines keep C-only constructs
		Il2CppClass pIVar1;
		Il2CppMethodPointer vtableDispatch;
		String pSVar2;
		sbyte pcVar3;
		String* ppSVar4;
		ulong in_RDX;

		if (value == null) {
			ppSVar4 = &"null";
		}
		else {
			pIVar1 = value.klass;
			if (pIVar1 == g_data_07556758) {
				return (String)value;
			}
			if (pIVar1 != g_data_075566f0) {
				vtableDispatch = pIVar1.vtable[3].methodPtr;
				pSVar2 = (String)(*vtableDispatch)(value,pIVar1.vtable[3].method,in_RDX,vtableDispatch);
				return pSVar2;
			}
			pcVar3 = il2cpp_vm_Object_Unbox(value);
			if (*pcVar3 == false) {
				ppSVar4 = &"false";
			}
			else {
				ppSVar4 = &"true";
			}
		}
		return *ppSVar4;
	}

	[Token(Token = "0x60039CC")]
	[Address(RVA = "0x5A286E0", Offset = "0x5A276E0", VA = "0x5A286E0")]
	public static bool IsFloat(object value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicConvertBuiltin.c (CustomLogic.CustomLogicConvertBuiltin$$IsFloat): 1 lines keep C-only constructs
		if (value == null) {
			return false;
		}
		return value.klass == g_data_07556740;
	}

	[Token(Token = "0x60039CD")]
	[Address(RVA = "0x5A28700", Offset = "0x5A27700", VA = "0x5A28700")]
	public static bool IsInt(object value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicConvertBuiltin.c (CustomLogic.CustomLogicConvertBuiltin$$IsInt): 1 lines keep C-only constructs
		if (value == null) {
			return false;
		}
		return value.klass == g_data_07556710;
	}

	[Token(Token = "0x60039CE")]
	[Address(RVA = "0x5A28720", Offset = "0x5A27720", VA = "0x5A28720")]
	public static bool IsBool(object value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicConvertBuiltin.c (CustomLogic.CustomLogicConvertBuiltin$$IsBool): 1 lines keep C-only constructs
		if (value == null) {
			return false;
		}
		return value.klass == g_data_075566f0;
	}

	[Token(Token = "0x60039CF")]
	[Address(RVA = "0x5A28740", Offset = "0x5A27740", VA = "0x5A28740")]
	public static bool IsString(object value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicConvertBuiltin.c (CustomLogic.CustomLogicConvertBuiltin$$IsString): 1 lines keep C-only constructs
		if (value == null) {
			return false;
		}
		return value.klass == g_data_07556758;
	}

	[Token(Token = "0x60039D0")]
	[Address(RVA = "0x5A28760", Offset = "0x5A27760", VA = "0x5A28760")]
	public static bool IsObject(object value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicConvertBuiltin.c (CustomLogic.CustomLogicConvertBuiltin$$IsObject): 2 lines keep C-only constructs
		byte bVar1;

		if (value != null) {
			bVar1 = (typeof(CustomLogicClassInstance)._2).typeHierarchyDepth;
			if (bVar1 <= (value.klass._2).typeHierarchyDepth) {
				return (value.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicClassInstance);
			}
		}
		return false;
	}

	[Token(Token = "0x60039D1")]
	[Address(RVA = "0x5A287C0", Offset = "0x5A277C0", VA = "0x5A287C0")]
	public static bool IsList(object value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicConvertBuiltin.c (CustomLogic.CustomLogicConvertBuiltin$$IsList): 2 lines keep C-only constructs
		byte bVar1;

		if (value != null) {
			bVar1 = (typeof(CustomLogicListBuiltin)._2).typeHierarchyDepth;
			if (bVar1 <= (value.klass._2).typeHierarchyDepth) {
				return (value.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicListBuiltin);
			}
		}
		return false;
	}

	[Token(Token = "0x60039D2")]
	[Address(RVA = "0x5A28820", Offset = "0x5A27820", VA = "0x5A28820")]
	public static bool IsDict(object value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicConvertBuiltin.c (CustomLogic.CustomLogicConvertBuiltin$$IsDict): 2 lines keep C-only constructs
		byte bVar1;

		if (value != null) {
			bVar1 = (typeof(CustomLogicDictBuiltin)._2).typeHierarchyDepth;
			if (bVar1 <= (value.klass._2).typeHierarchyDepth) {
				return (value.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicDictBuiltin);
			}
		}
		return false;
	}

	[Token(Token = "0x60039D3")]
	[Address(RVA = "0x5A28880", Offset = "0x5A27880", VA = "0x5A28880")]
	public static bool HasVariable(CustomLogicClassInstance cInstance, string variableName)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicConvertBuiltin.c (CustomLogic.CustomLogicConvertBuiltin$$HasVariable): clean
		bool bVar1;

		if (cInstance == null) {
			throw new NullReferenceException();
		}
		return bVar1;
	}

	[Token(Token = "0x60039D4")]
	[Address(RVA = "0x5A288A0", Offset = "0x5A278A0", VA = "0x5A288A0")]
	public static void DefineVariable(CustomLogicClassInstance cInstance, string variableName, object value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicConvertBuiltin.c (CustomLogic.CustomLogicConvertBuiltin$$DefineVariable): clean
		Dictionary<object, object> __this;
		bool bVar1;

		if (cInstance != null) {
			bVar1 = cInstance.HasVariable(variableName);
			if (bVar1) {
				return;
			}
			__this = (Dictionary<object, object>)cInstance.Variables;
			if (__this != null) {
				__this.set_Item((object)variableName, value);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60039D5")]
	[Address(RVA = "0x5A28910", Offset = "0x5A27910", VA = "0x5A28910")]
	public static void RemoveVariable(CustomLogicClassInstance cInstance, string variableName)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicConvertBuiltin.c (CustomLogic.CustomLogicConvertBuiltin$$RemoveVariable): clean
		Dictionary<object, object> __this;
		bool bVar1;

		if (cInstance != null) {
			bVar1 = cInstance.HasVariable(variableName);
			if (!bVar1) {
				return;
			}
			__this = (Dictionary<object, object>)cInstance.Variables;
			if (__this != null) {
				__this.Remove((object)variableName);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60039D6")]
	[Address(RVA = "0x5A28980", Offset = "0x5A27980", VA = "0x5A28980")]
	public static bool HasMethod(CustomLogicClassInstance cInstance, string methodName)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicConvertBuiltin.c (CustomLogic.CustomLogicConvertBuiltin$$HasMethod): clean
		uint uVar1;
		CustomLogicEvaluator __this;
		bool bVar2;

		if (Il2CppMethodInitialized_07547199 == false) {
			Il2CppMethodInitialized_07547199 = true;
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = CustomLogicManager.Evaluator;
		}
		else {
			__this = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
		}
		if (__this == null) {
			return false;
		}
		bVar2 = __this.HasMethod(cInstance, methodName);
		return bVar2;
	}

	[Token(Token = "0x60039D7")]
	[Address(RVA = "0x5A28A10", Offset = "0x5A27A10", VA = "0x5A28A10")]
	public static string GetType(CustomLogicClassInstance cInstance)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicConvertBuiltin.c (CustomLogic.CustomLogicConvertBuiltin$$GetType): 3 lines keep C-only constructs
		Il2CppMethodPointer vtableDispatch;
		String pSVar1;
		ulong in_RDX;

		if (cInstance == null) {
			throw new NullReferenceException();
		}
		vtableDispatch = (cInstance.klass.vtable)._6_unknown.methodPtr;
		pSVar1 = (String)(*vtableDispatch)(cInstance,(cInstance.klass.vtable)._6_unknown.method,in_RDX,vtableDispatch);
		return pSVar1;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicConvertBuiltin.c.

	// CustomLogic.CustomLogicConvertBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"ToFloat");
		__this.Add((Il2CppObject *)"ToInt");
		__this.Add((Il2CppObject *)"ToBool");
		__this.Add((Il2CppObject *)"ToString");
		__this.Add((Il2CppObject *)"IsFloat");
		__this.Add((Il2CppObject *)"IsInt");
		__this.Add((Il2CppObject *)"IsBool");
		__this.Add((Il2CppObject *)"IsString");
		__this.Add((Il2CppObject *)"IsObject");
		__this.Add((Il2CppObject *)"IsList");
		__this.Add((Il2CppObject *)"IsDict");
		__this.Add((Il2CppObject *)"HasVariable");
		__this.Add((Il2CppObject *)"DefineVariable");
		__this.Add((Il2CppObject *)"RemoveVariable");
		__this.Add((Il2CppObject *)"HasMethod");
		__this.Add((Il2CppObject *)"GetType");
		CustomLogicConvertBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$.cctor: 1 lines keep C-only constructs
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = (object)il2cpp_codegen_object_new(typeof(CustomLogicConvertBuiltin.Bindings.c)) ;
		__this = new Object();
		CustomLogicConvertBuiltin.Bindings.c.__9 =(CustomLogicConvertBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToFloat>b__2_0: clean
	private object Bindings_c____CreateMethodBinding__ToFloat_b__2_0(CustomLogicConvertBuiltin __c, Object[] __a)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		CustomLogicConvertBuiltin.ToFloat(__a[0]);
		return pIVar1;
	}

	// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToInt>b__3_0: 4 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__ToInt_b__3_0(CustomLogicConvertBuiltin __c, Object[] __a)
	{
		String s;
		Il2CppClass pIVar1;
		object pIVar2;
		byte[] auStack_4 = new byte[4];

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		s = (String)__a[0];
		if (s != null) {
			pIVar1 = (Il2CppClass)s.klass;
			if (pIVar1 == g_data_07556758) {
				Int32.Parse(s);
			}
			else if (pIVar1 == g_data_07556740) {
				il2cpp_vm_Object_Unbox((object)s);
			}
			else if (pIVar1 == g_data_07556710) {
				il2cpp_vm_Object_Unbox((object)s);
			}
			else if (pIVar1 == g_data_075566f0) {
				il2cpp_vm_Object_Unbox((object)s);
			}
		}
		return pIVar2;
	}

	// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToBool>b__4_0: 4 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__ToBool_b__4_0(CustomLogicConvertBuiltin __c, Object[] __a)
	{
		bool bVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		uStack_8 = in_RAX;
		bVar1 = CustomLogicConvertBuiltin.ToBool(__a[0]);
		uStack_8 = CONCAT17(bVar1, (undefined7)uStack_8);
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToString>b__5_0: 5 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__ToString_b__5_0(CustomLogicConvertBuiltin __c, Object[] __a)
	{
		Il2CppClass pIVar1;
		object pIVar2;
		sbyte pcVar3;
		String* ppSVar4;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		pIVar2 = __a[0];
		if (pIVar2 == null) {
			ppSVar4 = &"null";
		}
		else {
			pIVar1 = pIVar2.klass;
			if (pIVar1 == g_data_07556758) {
				return pIVar2;
			}
			if (pIVar1 != g_data_075566f0) {
				pIVar2 = (object)(*pIVar1.vtable[3].methodPtr)(pIVar2,pIVar1.vtable[3].method);
				return pIVar2;
			}
			pcVar3 = il2cpp_vm_Object_Unbox(pIVar2);
			if (*pcVar3 == false) {
				ppSVar4 = &"false";
			}
			else {
				ppSVar4 = &"true";
			}
		}
		return (object)*ppSVar4;
	}

	// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsFloat>b__6_0: clean
	private object Bindings_c____CreateMethodBinding__IsFloat_b__6_0(CustomLogicConvertBuiltin __c, Object[] __a)
	{
		object pIVar1;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsInt>b__7_0: clean
	private object Bindings_c____CreateMethodBinding__IsInt_b__7_0(CustomLogicConvertBuiltin __c, Object[] __a)
	{
		object pIVar1;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsBool>b__8_0: clean
	private object Bindings_c____CreateMethodBinding__IsBool_b__8_0(CustomLogicConvertBuiltin __c, Object[] __a)
	{
		object pIVar1;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsString>b__9_0: clean
	private object Bindings_c____CreateMethodBinding__IsString_b__9_0(CustomLogicConvertBuiltin __c, Object[] __a)
	{
		object pIVar1;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsObject>b__10_0: 1 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__IsObject_b__10_0(CustomLogicConvertBuiltin __c, Object[] __a)
	{
		byte bVar1;
		Il2CppClass pIVar2;
		object pIVar3;
		byte local_9;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		pIVar3 = __a[0];
		if (pIVar3 != null) {
			pIVar2 = pIVar3.klass;
			bVar1 = (typeof(CustomLogicClassInstance)._2).typeHierarchyDepth;
			if (bVar1 <= (pIVar2._2).typeHierarchyDepth) {
				local_9 = (pIVar2._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicClassInstance);
				goto label_05b2acc4;
			}
		}
		local_9 = false;
	label_05b2acc4: ;
		pIVar3 = (object)local_9;
		return pIVar3;
	}

	// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsList>b__11_0: 1 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__IsList_b__11_0(CustomLogicConvertBuiltin __c, Object[] __a)
	{
		byte bVar1;
		Il2CppClass pIVar2;
		object pIVar3;
		byte local_9;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		pIVar3 = __a[0];
		if (pIVar3 != null) {
			pIVar2 = pIVar3.klass;
			bVar1 = (typeof(CustomLogicListBuiltin)._2).typeHierarchyDepth;
			if (bVar1 <= (pIVar2._2).typeHierarchyDepth) {
				local_9 = (pIVar2._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicListBuiltin);
				goto label_05b2ad54;
			}
		}
		local_9 = false;
	label_05b2ad54: ;
		pIVar3 = (object)local_9;
		return pIVar3;
	}

	// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsDict>b__12_0: 1 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__IsDict_b__12_0(CustomLogicConvertBuiltin __c, Object[] __a)
	{
		byte bVar1;
		Il2CppClass pIVar2;
		object pIVar3;
		byte local_9;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		pIVar3 = __a[0];
		if (pIVar3 != null) {
			pIVar2 = pIVar3.klass;
			bVar1 = (typeof(CustomLogicDictBuiltin)._2).typeHierarchyDepth;
			if (bVar1 <= (pIVar2._2).typeHierarchyDepth) {
				local_9 = (pIVar2._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicDictBuiltin);
				goto label_05b2ade4;
			}
		}
		local_9 = false;
	label_05b2ade4: ;
		pIVar3 = (object)local_9;
		return pIVar3;
	}

	// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__HasVariable>b__13_0: 4 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__HasVariable_b__13_0(CustomLogicConvertBuiltin __c, Object[] __a)
	{
		bool bVar1;
		ulong in_RAX;
		CustomLogicClassInstance __this_00;
		String name;
		object pIVar2;
		ulong uStack_18;

		uStack_18 = in_RAX;
		if (__a == null) {
	label_05b2aede: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar2 = __a[0];
			__this_00 = CustomLogicEvaluator.ConvertTo<CustomLogicClassInstance>(pIVar2);
			if ((__a.Length & 0xfffffffe) != 0) {
				name = CustomLogicEvaluator.ConvertTo<string>(__a[1]);
				if (__this_00 != null) {
					bVar1 = __this_00.HasVariable(name);
					uStack_18 = CONCAT17(bVar1, (undefined7)uStack_18);
					pIVar2 = (object)(((long)&uStack_18 + 7));
					return pIVar2;
				}
				goto label_05b2aede;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__DefineVariable>b__14_0: clean
	private object Bindings_c____CreateMethodBinding__DefineVariable_b__14_0(CustomLogicConvertBuiltin __c, Object[] __a)
	{
		object pIVar1;
		Dictionary<object, object> __this_00;
		bool bVar2;
		CustomLogicClassInstance __this_01;
		String name;

		if (__a == null) goto label_05b2aff6;
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			__this_01 = CustomLogicEvaluator.ConvertTo<CustomLogicClassInstance>(pIVar1);
			if ((__a.Length & 0xfffffffe) != 0) {
				name = CustomLogicEvaluator.ConvertTo<string>(__a[1]);
				if (2 < (uint)__a.Length) {
					pIVar1 = __a[2];
					if (__this_01 == null) {
	label_05b2aff6: ;
						throw new NullReferenceException();
					}
					bVar2 = __this_01.HasVariable(name);
					if (!bVar2) {
						__this_00 = (Dictionary<object, object>)__this_01.Variables ;
						if (__this_00 == null) goto label_05b2aff6;
						__this_00.set_Item((object)name, pIVar1);
					}
					return null;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__RemoveVariable>b__15_0: clean
	private object Bindings_c____CreateMethodBinding__RemoveVariable_b__15_0(CustomLogicConvertBuiltin __c, Object[] __a)
	{
		object obj;
		Dictionary<object, object> __this_00;
		bool bVar1;
		CustomLogicClassInstance __this_01;
		String name;

		if (__a == null) goto label_05b2b0f5;
		if ((int)__a.Length != 0) {
			obj = __a[0];
			__this_01 = CustomLogicEvaluator.ConvertTo<CustomLogicClassInstance>(obj) ;
			if ((__a.Length & 0xfffffffe) != 0) {
				name = CustomLogicEvaluator.ConvertTo<string>(__a[1]);
				if (__this_01 == null) {
	label_05b2b0f5: ;
					throw new NullReferenceException();
				}
				bVar1 = __this_01.HasVariable(name);
				if (bVar1) {
					__this_00 = (Dictionary<object, object>)__this_01.Variables;
					if (__this_00 == null) goto label_05b2b0f5;
					__this_00.Remove((object)name);
				}
				return null;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__HasMethod>b__16_0: clean
	private object Bindings_c____CreateMethodBinding__HasMethod_b__16_0(CustomLogicConvertBuiltin __c, Object[] __a)
	{
		uint uVar1;
		CustomLogicEvaluator __this_00;
		CustomLogicClassInstance classInstance;
		String methodName;
		object pIVar2;
		byte uStack_19;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar2 = __a[0];
			classInstance = CustomLogicEvaluator.ConvertTo<CustomLogicClassInstance>(pIVar2);
			if ((__a.Length & 0xfffffffe) != 0) {
				methodName = CustomLogicEvaluator.ConvertTo<string>(__a[1]);
				if (Il2CppMethodInitialized_07547199 == false) {
					Il2CppMethodInitialized_07547199 = true;
					uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
					__this_00 = CustomLogicManager.Evaluator;
				}
				else {
					__this_00 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
				}
				if (__this_00 == null) {
					uStack_19 = false;
				}
				else {
					uStack_19 = __this_00.HasMethod(classInstance, methodName);
				}
				pIVar2 = (object)uStack_19;
				return pIVar2;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicConvertBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetType>b__17_0: 2 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__GetType_b__17_0(CustomLogicConvertBuiltin __c, Object[] __a)
	{
		Il2CppMethodPointer vtableDispatch;
		CustomLogicClassInstance pCVar1;
		object pIVar2;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar2 = __a[0];
			pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicClassInstance>(pIVar2) ;
			if (pCVar1 != null) {
				vtableDispatch = (pCVar1.klass.vtable)._6_unknown.methodPtr;
				pIVar2 = (object)(*vtableDispatch)(pCVar1,(pCVar1.klass.vtable)._6_unknown.method,vtableDispatch);
				return pIVar2;
			}
		}
		throw new NullReferenceException();
	}
}
