// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicRandomBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicRandomBuiltin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicRandomBuiltin.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Mathematics;

namespace CustomLogic;

[Token(Token = "0x2000626")]
[CompilerGenerated]
internal class CustomLogicRandomBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x2000627")]
	public static class Factory
	{
		[Token(Token = "0x6003AAB")]
		[Address(RVA = "0x5A34EE0", Offset = "0x5A33EE0", VA = "0x5A34EE0")]
		public static CustomLogicRandomBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRandomBuiltin.c (CustomLogic.CustomLogicRandomBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			object obj;
			uint uVar1;
			CustomLogicRandomBuiltin __this;
			String pSVar2;
			String str0;
			String str2;
			Il2CppClass klass;
			ArgumentException __this_00;
			MethodInfo lastManagedFrame;
			int local_14;

			if (args == null) {
				throw new NullReferenceException();
			}
			if (args.Length == 0) {
				__this = new CustomLogicRandomBuiltin();
			}
			else {
				if ((int)args.Length != 1) {
					pSVar2 = local_14.ToString();
					str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicRandomBuiltin constructor found that takes ");
					str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
					pSVar2 = String.Concat(str0, pSVar2, str2);
					klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
					__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
					__this_00 = new ArgumentException(pSVar2);
					lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicRandomBuiltin_Factory_CreateInstance);
					throw (object)__this_00;
				}
				obj = args[0];
				uVar1 = CustomLogicEvaluator.ConvertTo<int>(obj);
				__this = new CustomLogicRandomBuiltin();
				uVar1 = uVar1 << 0xd ^ uVar1;
				uVar1 = uVar1 >> 0x11 ^ uVar1;
				__this.Rand.state = uVar1 << 5 ^ uVar1;
				__this.UseInstanceRandom = true;
			}
			return __this;
		}
	}

	[Token(Token = "0x2000628")]
	public static class Bindings
	{
		[Token(Token = "0x4001A7F")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6003AAC")]
		[Address(RVA = "0x5A350C0", Offset = "0x5A340C0", VA = "0x5A350C0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRandomBuiltin.c (CustomLogic.CustomLogicRandomBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLMethodBinding<CustomLogicRandomBuiltin> pCVar3;
			String pSVar4;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x90354281) {
				if (uVar2 == 0x82de4eee) {
					bVar1 = (name == "RandomVector3");
					if (bVar1) {
						if ((typeof(CustomLogicRandomBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicRandomBuiltin.Bindings.__CreateMethodBinding__RandomVector3();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicRandomBuiltin.Bindings.__CreateMethodBinding__RandomVector3();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x885c07e3) {
					bVar1 = (name == "PerlinNoise");
					if (bVar1) {
						if ((typeof(CustomLogicRandomBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicRandomBuiltin.Bindings.__CreateMethodBinding__PerlinNoise();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicRandomBuiltin.Bindings.__CreateMethodBinding__PerlinNoise();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x90354280) {
					bVar1 = (name == "RandomFloat");
					if (bVar1) {
						if ((typeof(CustomLogicRandomBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicRandomBuiltin.Bindings.__CreateMethodBinding__RandomFloat();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicRandomBuiltin.Bindings.__CreateMethodBinding__RandomFloat();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xb5b881f8) {
				if (uVar2 == 0x91b5efce) {
					bVar1 = (name == "RandomBool");
					if (bVar1) {
						if ((typeof(CustomLogicRandomBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicRandomBuiltin.Bindings.__CreateMethodBinding__RandomBool();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicRandomBuiltin.Bindings.__CreateMethodBinding__RandomBool();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xb5b881f7) {
					bVar1 = (name == "RandomDirection");
					if (bVar1) {
						if ((typeof(CustomLogicRandomBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicRandomBuiltin.Bindings.__CreateMethodBinding__RandomDirection();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicRandomBuiltin.Bindings.__CreateMethodBinding__RandomDirection();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xfb77f8cf) {
				bVar1 = (name == "RandomSign");
				if (bVar1) {
					if ((typeof(CustomLogicRandomBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar3 = CustomLogicRandomBuiltin.Bindings.__CreateMethodBinding__RandomSign();
						return (ICLMemberBinding)pCVar3;
					}
					pCVar3 = CustomLogicRandomBuiltin.Bindings.__CreateMethodBinding__RandomSign();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xfa877c5b) {
				bVar1 = (name == "RandomInt");
				if (bVar1) {
					if ((typeof(CustomLogicRandomBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar3 = CustomLogicRandomBuiltin.Bindings.__CreateMethodBinding__RandomInt();
						return (ICLMemberBinding)pCVar3;
					}
					pCVar3 = CustomLogicRandomBuiltin.Bindings.__CreateMethodBinding__RandomInt();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicRandomBuiltin not found");
			pSVar4 = String.Concat(pSVar4, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar4);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6003AAD")]
		[Address(RVA = "0x5A35440", Offset = "0x5A34440", VA = "0x5A35440")]
		public static CLMethodBinding<CustomLogicRandomBuiltin> __CreateMethodBinding__RandomInt()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRandomBuiltin.c (CustomLogic.CustomLogicRandomBuiltin.Bindings$$__CreateMethodBinding__RandomInt): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicRandomBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicRandomBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicRandomBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754721d == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicRandomBuiltin>)) ;
				Il2CppMethodInitialized_0754721d = true;
				uVar1 = (typeof(CustomLogicRandomBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicRandomBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicRandomBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicRandomBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__2_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicRandomBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__2_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicRandomBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicRandomBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicRandomBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c___CreateMethodBinding__RandomInt_b__2_0);
				pCVar2 = typeof(CustomLogicRandomBuiltin.Bindings.c).static_fields;
				pCVar2.__9__2_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicRandomBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003AAE")]
		[Address(RVA = "0x5A35580", Offset = "0x5A34580", VA = "0x5A35580")]
		public static CLMethodBinding<CustomLogicRandomBuiltin> __CreateMethodBinding__RandomFloat()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRandomBuiltin.c (CustomLogic.CustomLogicRandomBuiltin.Bindings$$__CreateMethodBinding__RandomFloat): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicRandomBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicRandomBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicRandomBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754721e == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicRandomBuiltin>)) ;
				Il2CppMethodInitialized_0754721e = true;
				uVar1 = (typeof(CustomLogicRandomBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicRandomBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicRandomBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicRandomBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__3_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicRandomBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__3_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicRandomBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicRandomBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicRandomBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c___CreateMethodBinding__RandomFloat_b__3_0);
				pCVar2 = typeof(CustomLogicRandomBuiltin.Bindings.c).static_fields;
				pCVar2.__9__3_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicRandomBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003AAF")]
		[Address(RVA = "0x5A356C0", Offset = "0x5A346C0", VA = "0x5A356C0")]
		public static CLMethodBinding<CustomLogicRandomBuiltin> __CreateMethodBinding__RandomBool()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRandomBuiltin.c (CustomLogic.CustomLogicRandomBuiltin.Bindings$$__CreateMethodBinding__RandomBool): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicRandomBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicRandomBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicRandomBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754721f == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicRandomBuiltin>)) ;
				Il2CppMethodInitialized_0754721f = true;
				uVar1 = (typeof(CustomLogicRandomBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicRandomBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicRandomBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicRandomBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__4_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicRandomBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__4_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicRandomBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicRandomBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicRandomBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c___CreateMethodBinding__RandomBool_b__4_0);
				pCVar2 = typeof(CustomLogicRandomBuiltin.Bindings.c).static_fields;
				pCVar2.__9__4_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicRandomBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003AB0")]
		[Address(RVA = "0x5A35800", Offset = "0x5A34800", VA = "0x5A35800")]
		public static CLMethodBinding<CustomLogicRandomBuiltin> __CreateMethodBinding__RandomVector3()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRandomBuiltin.c (CustomLogic.CustomLogicRandomBuiltin.Bindings$$__CreateMethodBinding__RandomVector3): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicRandomBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicRandomBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicRandomBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547220 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicRandomBuiltin>)) ;
				Il2CppMethodInitialized_07547220 = true;
				uVar1 = (typeof(CustomLogicRandomBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicRandomBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicRandomBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicRandomBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__5_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicRandomBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__5_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicRandomBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicRandomBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicRandomBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c___CreateMethodBinding__RandomVector3_b__5_0);
				pCVar2 = typeof(CustomLogicRandomBuiltin.Bindings.c).static_fields;
				pCVar2.__9__5_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicRandomBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003AB1")]
		[Address(RVA = "0x5A35940", Offset = "0x5A34940", VA = "0x5A35940")]
		public static CLMethodBinding<CustomLogicRandomBuiltin> __CreateMethodBinding__RandomDirection()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRandomBuiltin.c (CustomLogic.CustomLogicRandomBuiltin.Bindings$$__CreateMethodBinding__RandomDirection): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicRandomBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicRandomBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicRandomBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547221 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicRandomBuiltin>)) ;
				Il2CppMethodInitialized_07547221 = true;
				uVar1 = (typeof(CustomLogicRandomBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicRandomBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicRandomBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicRandomBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__6_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicRandomBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__6_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicRandomBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicRandomBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicRandomBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c___CreateMethodBinding__RandomDirection_b__6_0);
				pCVar2 = typeof(CustomLogicRandomBuiltin.Bindings.c).static_fields;
				pCVar2.__9__6_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicRandomBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003AB2")]
		[Address(RVA = "0x5A35A80", Offset = "0x5A34A80", VA = "0x5A35A80")]
		public static CLMethodBinding<CustomLogicRandomBuiltin> __CreateMethodBinding__RandomSign()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRandomBuiltin.c (CustomLogic.CustomLogicRandomBuiltin.Bindings$$__CreateMethodBinding__RandomSign): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicRandomBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicRandomBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicRandomBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547222 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicRandomBuiltin>)) ;
				Il2CppMethodInitialized_07547222 = true;
				uVar1 = (typeof(CustomLogicRandomBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicRandomBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicRandomBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicRandomBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__7_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicRandomBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__7_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicRandomBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicRandomBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicRandomBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c___CreateMethodBinding__RandomSign_b__7_0);
				pCVar2 = typeof(CustomLogicRandomBuiltin.Bindings.c).static_fields;
				pCVar2.__9__7_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicRandomBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003AB3")]
		[Address(RVA = "0x5A35BC0", Offset = "0x5A34BC0", VA = "0x5A35BC0")]
		public static CLMethodBinding<CustomLogicRandomBuiltin> __CreateMethodBinding__PerlinNoise()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRandomBuiltin.c (CustomLogic.CustomLogicRandomBuiltin.Bindings$$__CreateMethodBinding__PerlinNoise): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicRandomBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicRandomBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicRandomBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547223 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicRandomBuiltin>)) ;
				Il2CppMethodInitialized_07547223 = true;
				uVar1 = (typeof(CustomLogicRandomBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicRandomBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicRandomBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicRandomBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__8_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicRandomBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__8_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicRandomBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicRandomBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicRandomBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c___CreateMethodBinding__PerlinNoise_b__8_0);
				pCVar2 = typeof(CustomLogicRandomBuiltin.Bindings.c).static_fields;
				pCVar2.__9__8_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicRandomBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x4001A7D")]
	[FieldOffset(Offset = "0x30")]
	public Random Rand;

	[Token(Token = "0x4001A7E")]
	[FieldOffset(Offset = "0x34")]
	public readonly bool UseInstanceRandom;

	[Token(Token = "0x17000A4F")]
	public override string ClassName
	{
		[Token(Token = "0x6003AA7")]
		[Address(RVA = "0x5A34E80", Offset = "0x5A33E80", VA = "0x5A34E80", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRandomBuiltin.c (CustomLogic.CustomLogicRandomBuiltin$$get_ClassName): clean
			return "Random";
		}
	}

	[Token(Token = "0x17000A50")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6003AA8")]
		[Address(RVA = "0x5A34EB0", Offset = "0x5A33EB0", VA = "0x5A34EB0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRandomBuiltin.c (CustomLogic.CustomLogicRandomBuiltin$$get_IsAbstract): clean
			return false;
		}
	}

	[Token(Token = "0x17000A51")]
	public override bool IsStatic
	{
		[Token(Token = "0x6003AA9")]
		[Address(RVA = "0x5A34EC0", Offset = "0x5A33EC0", VA = "0x5A34EC0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRandomBuiltin.c (CustomLogic.CustomLogicRandomBuiltin$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x17000A52")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6003AAA")]
		[Address(RVA = "0x5A34ED0", Offset = "0x5A33ED0", VA = "0x5A34ED0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicRandomBuiltin.c (CustomLogic.CustomLogicRandomBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6003A9E")]
	[Address(RVA = "0x5A347B0", Offset = "0x5A337B0", VA = "0x5A347B0")]
	public CustomLogicRandomBuiltin()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicRandomBuiltin.c (CustomLogic.CustomLogicRandomBuiltin$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07547216 == false) {
			Il2CppMethodInitialized_07547216 = true;
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

	[Token(Token = "0x6003A9F")]
	[Address(RVA = "0x5A34820", Offset = "0x5A33820", VA = "0x5A34820")]
	public CustomLogicRandomBuiltin(int seed)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicRandomBuiltin.c (CustomLogic.CustomLogicRandomBuiltin$$.ctor): clean
		uint uVar1;

		base();
		uVar1 = seed << 0xd ^ seed;
		uVar1 = uVar1 >> 0x11 ^ uVar1;
		this.Rand.state = uVar1 << 5 ^ uVar1;
		this.UseInstanceRandom = true;
		return;
	}

	[Token(Token = "0x6003AA0")]
	[Address(RVA = "0x5A34890", Offset = "0x5A33890", VA = "0x5A34890")]
	public int RandomInt(int min, int max)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicRandomBuiltin.c (CustomLogic.CustomLogicRandomBuiltin$$RandomInt): clean
		uint uVar1;
		int iVar2;
		uint uVar3;

		if (this.UseInstanceRandom == false) {
			iVar2 = Random.Range(min, max);
			return iVar2;
		}
		uVar1 = this.Rand.state;
		uVar3 = uVar1 << 0xd ^ uVar1;
		uVar3 = uVar3 >> 0x11 ^ uVar3;
		this.Rand.state = uVar3 << 5 ^ uVar3;
		return (int)((ulong)(uint)(max - min) * (ulong)uVar1 >> 0x20) + min;
	}

	[Token(Token = "0x6003AA1")]
	[Address(RVA = "0x5A348D0", Offset = "0x5A338D0", VA = "0x5A348D0")]
	public float RandomFloat(float min, float max)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicRandomBuiltin.c (CustomLogic.CustomLogicRandomBuiltin$$RandomFloat): clean
		uint uVar1;
		uint uVar2;
		float fVar3;

		if (this.UseInstanceRandom == false) {
			fVar3 = Random.Range(min, max);
			return fVar3;
		}
		uVar1 = this.Rand.state;
		uVar2 = uVar1 << 0xd ^ uVar1;
		uVar2 = uVar2 >> 0x11 ^ uVar2;
		this.Rand.state = uVar2 << 5 ^ uVar2;
		return (max - min) * ((float)(uVar1 >> 9 | 0x3f800000) + -1.0) + min;
	}

	[Token(Token = "0x6003AA2")]
	[Address(RVA = "0x5A34920", Offset = "0x5A33920", VA = "0x5A34920")]
	public bool RandomBool()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicRandomBuiltin.c (CustomLogic.CustomLogicRandomBuiltin$$RandomBool): clean
		uint uVar1;
		bool bVar2;
		uint uVar3;

		if (this.UseInstanceRandom == false) {
			return bVar2;
		}
		uVar1 = this.Rand.state;
		uVar3 = uVar1 << 0xd ^ uVar1;
		uVar3 = uVar3 >> 0x11 ^ uVar3;
		this.Rand.state = uVar3 << 5 ^ uVar3;
		return (bool)((byte)uVar1 & 1);
	}

	[Token(Token = "0x6003AA3")]
	[Address(RVA = "0x5A34950", Offset = "0x5A33950", VA = "0x5A34950")]
	public CustomLogicVector3Builtin RandomVector3(CustomLogicVector3Builtin a, CustomLogicVector3Builtin b)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicRandomBuiltin.c (CustomLogic.CustomLogicRandomBuiltin$$RandomVector3): clean
		uint uVar1;
		CustomLogicVector3Builtin __this_00;
		uint uVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		Vector3 value;
		float local_3c;

		if ((a == null) ||(b == null)) {
			throw new NullReferenceException();
		}
		fVar3 = a.Value.x;
		fVar5 = b.Value.x;
		if (this.UseInstanceRandom == false) {
			fVar3 = Random.Range(fVar3, fVar5);
			fVar5 = a.Value.y;
			fVar4 = b.Value.y;
			if (this.UseInstanceRandom != false) goto label_05b34a0e;
			fVar5 = Random.Range(fVar5, fVar4);
			local_3c = a.Value.z;
			fVar4 = b.Value.z;
			if (this.UseInstanceRandom == false) {
				local_3c = Random.Range(local_3c, fVar4);
				goto label_05b34a96;
			}
		}
		else {
			uVar1 = this.Rand.state;
			uVar2 = uVar1 << 0xd ^ uVar1;
			uVar2 = uVar2 >> 0x11 ^ uVar2;
			this.Rand.state = uVar2 << 5 ^ uVar2;
			fVar3 = (fVar5 - fVar3) * ((float)(uVar1 >> 9 | 0x3f800000) + -1.0) + fVar3;
			fVar5 = a.Value.y;
			fVar4 = b.Value.y;
	label_05b34a0e: ;
			uVar1 = this.Rand.state;
			uVar2 = uVar1 << 0xd ^ uVar1;
			uVar2 = uVar2 >> 0x11 ^ uVar2;
			this.Rand.state = uVar2 << 5 ^ uVar2;
			fVar5 = (fVar4 - fVar5) * ((float)(uVar1 >> 9 | 0x3f800000) + -1.0) + fVar5;
			local_3c = a.Value.z;
			fVar4 = b.Value.z;
		}
		uVar1 = this.Rand.state;
		uVar2 = uVar1 << 0xd ^ uVar1;
		uVar2 = uVar2 >> 0x11 ^ uVar2;
		this.Rand.state = uVar2 << 5 ^ uVar2;
		local_3c = (fVar4 - local_3c) * ((float)(uVar1 >> 9 | 0x3f800000) + -1.0) + local_3c;
	label_05b34a96: ;
		value.y = fVar5;
		value.x = fVar3;
		value.z = local_3c;
		__this_00 = new CustomLogicVector3Builtin(value);
		return __this_00;
	}

	[Token(Token = "0x6003AA4")]
	[Address(RVA = "0x5A34B30", Offset = "0x5A33B30", VA = "0x5A34B30")]
	public CustomLogicVector3Builtin RandomDirection(bool flat = false)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicRandomBuiltin.c (CustomLogic.CustomLogicRandomBuiltin$$RandomDirection): 36 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		UnityEngine_Vector3_StaticFields pUVar5;
		CustomLogicVector3Builtin __this_00;
		uint uVar6;
		uint extraout_XMM0_Db_00;
		uint extraout_XMM0_Db_01;
		uint extraout_XMM0_Db_02;
		float fVar7;
		uint uVar12;
		byte[] auVar10 = new byte[16];
		byte[] auVar9 = new byte[16];
		byte[] auVar8 = new byte[16];
		byte[] auVar11 = new byte[16];
		float fVar13;
		uint uVar14;
		Vector3 value;
		float fStack_4c;
		float fStack_48;
		uint uStack_44;
		byte[] auStack_30 = new byte[12];

		if (this.UseInstanceRandom == false) {
			auStack_30._8_4_ = Random.Range(-1.0, 1.0);
			if (this.UseInstanceRandom != false) goto label_05b34bc5;
			fVar7 = Random.Range(-1.0, 1.0);
			uVar12 = extraout_XMM0_Db_01;
			if (this.UseInstanceRandom == false) {
				fStack_4c = Random.Range(-1.0, 1.0);
				uVar12 = 0;
				uVar14 = extraout_XMM0_Db_02;
				goto joined_r0x05b34e17;
			}
		}
		else {
			uVar3 = this.Rand.state;
			uVar6 = uVar3 << 0xd ^ uVar3;
			uVar6 = uVar6 >> 0x11 ^ uVar6;
			this.Rand.state = uVar6 << 5 ^ uVar6;
			fVar7 = (float)(uVar3 >> 9 | 0x3f800000) + -1.0;
			stack0xffffffffffffffd8 = ZEXT416((uint)(fVar7 + fVar7 + -1.0));
	label_05b34bc5: ;
			uVar3 = this.Rand.state;
			uVar6 = uVar3 << 0xd ^ uVar3;
			uVar6 = uVar6 >> 0x11 ^ uVar6;
			this.Rand.state = uVar6 << 5 ^ uVar6;
			fVar7 = (float)(uVar3 >> 9 | 0x3f800000) + -1.0;
			fVar7 = fVar7 + fVar7 + -1.0;
			uVar12 = 0;
		}
		uVar3 = this.Rand.state;
		uVar6 = uVar3 << 0xd ^ uVar3;
		uVar6 = uVar6 >> 0x11 ^ uVar6;
		this.Rand.state = uVar6 << 5 ^ uVar6;
		fVar13 = (float)(uVar3 >> 9 | 0x3f800000) + -1.0;
		fStack_4c = fVar13 + fVar13 + -1.0;
		uVar14 = 0;
	joined_r0x05b34e17: ;
		fStack_48 = 0.0;
		uStack_44 = 0;
		if (!_flat) {
			fStack_48 = fVar7;
			uStack_44 = uVar12;
		}
		if (Il2CppMethodInitialized_0753e72d == false) {
			uVar14 = 0;
			Il2CppMethodInitialized_0753e72d = true;
			auStack_30._0_4_ = 0.0;
			auStack_30._4_4_ = 0.0;
		}
		else {
			auStack_30._0_4_ = 0.0;
			auStack_30._4_4_ = 0.0;
		}
		if (g_data_0753e729 == false) {
			auStack_30._0_4_ = 0.0;
			auStack_30._4_4_ = 0.0;
			uVar14 = 0;
			g_data_0753e729 = true;
			uVar4 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			auStack_30._0_4_ = 0.0;
			auStack_30._4_4_ = 0.0;
			uVar4 = ((typeof(Math))._2).cctor_finished_or_no_cctor;
		}
		if (uVar4 == 0) {
			uVar14 = 0;
		}
		fVar7 = fStack_4c * fStack_4c + fStack_48 * fStack_48 + (float)auStack_30._8_4_ * (float)auStack_30._8_4_;
		if (fVar7 < 0.0) {
			fVar7 = sqrtf(fVar7);
			uVar14 = extraout_XMM0_Db_00;
		}
		else {
			fVar7 = SQRT(fVar7);
		}
		if (1e-05 < fVar7) {
			auVar9._0_8_ = auStack_30._8_8_;
			auVar9._8_4_ = auStack_30._12_4_;
			auVar9._12_4_ = auStack_30._20_4_;
			auVar8._8_8_ = auVar9._8_8_;
			auVar8._0_4_ = auStack_30._8_4_;
			auVar8._4_4_ = fStack_48;
			auVar10._0_12_ = auVar8._0_12_;
			auVar10._12_4_ = uStack_44;
			fStack_4c = fStack_4c / fVar7;
			auVar11._4_4_ = fVar7;
			auVar11._0_4_ = fVar7;
			auVar11._8_4_ = uVar14;
			auVar11._12_4_ = uVar14;
			auVar11 = divps(auVar10, auVar11);
			auStack_30._0_4_ = auVar11._0_4_;
			auStack_30._4_4_ = auVar11._4_4_;
			pUVar5 = (UnityEngine_Vector3_StaticFields)auStack_30;
		}
		else {
			pUVar5 = typeof(Vector3).static_fields;
			fStack_4c = (pUVar5.zeroVector).z;
		}
		uVar1 = (pUVar5.zeroVector).x;
		uVar2 = (pUVar5.zeroVector).y;
		value.y = (float)uVar2;
		value.x = (float)uVar1;
		value.z = fStack_4c;
		__this_00 = new CustomLogicVector3Builtin(value);
		return __this_00;
	}

	[Token(Token = "0x6003AA5")]
	[Address(RVA = "0x5A34E30", Offset = "0x5A33E30", VA = "0x5A34E30")]
	public int RandomSign()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicRandomBuiltin.c (CustomLogic.CustomLogicRandomBuiltin$$RandomSign): clean
		uint uVar1;
		bool bVar2;
		uint uVar3;

		if (this.UseInstanceRandom == false) {
			bVar2 = RandomGen.GetRandomBool();
			return (uint)bVar2 * 2 + -1;
		}
		uVar1 = this.Rand.state;
		uVar3 = uVar1 << 0xd ^ uVar1;
		uVar3 = uVar3 >> 0x11 ^ uVar3;
		this.Rand.state = uVar3 << 5 ^ uVar3;
		return (uint)((byte)uVar1 & 1) * 2 + -1;
	}

	[Token(Token = "0x6003AA6")]
	[Address(RVA = "0x5A34E70", Offset = "0x5A33E70", VA = "0x5A34E70")]
	public float PerlinNoise(float x, float y)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicRandomBuiltin.c (CustomLogic.CustomLogicRandomBuiltin$$PerlinNoise): clean
		float fVar1;

		fVar1 = Mathf.PerlinNoise(x, y);
		return fVar1;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicRandomBuiltin.c.

	// CustomLogic.CustomLogicRandomBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"RandomInt");
		__this.Add((Il2CppObject *)"RandomFloat");
		__this.Add((Il2CppObject *)"RandomBool");
		__this.Add((Il2CppObject *)"RandomVector3");
		__this.Add((Il2CppObject *)"RandomDirection");
		__this.Add((Il2CppObject *)"RandomSign");
		__this.Add((Il2CppObject *)"PerlinNoise");
		CustomLogicRandomBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicRandomBuiltin.Bindings.<>c$$.cctor: clean
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = new CustomLogicRandomBuiltin.Bindings.c();
		CustomLogicRandomBuiltin.Bindings.c.__9 =(CustomLogicRandomBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicRandomBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicRandomBuiltin.Bindings.<>c$$<__CreateMethodBinding__RandomInt>b__2_0: clean
	private object Bindings_c____CreateMethodBinding__RandomInt_b__2_0(CustomLogicRandomBuiltin __c, Object[] __a)
	{
		uint uVar1;
		int minInclusive;
		int maxExclusive;
		object pIVar2;
		uint uVar3;
		int iStack_2c;

		if (__a == null) {
	label_05b36024: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar2 = __a[0];
			minInclusive = CustomLogicEvaluator.ConvertTo<int>(pIVar2);
			if ((__a.Length & 0xfffffffe) != 0) {
				maxExclusive = CustomLogicEvaluator.ConvertTo<int>(__a[1]);
				if (__c != null) {
					if (__c.UseInstanceRandom == false) {
						iStack_2c = Random.Range(minInclusive, maxExclusive);
					}
					else {
						uVar1 = __c.Rand.state;
						uVar3 = uVar1 << 0xd ^ uVar1;
						uVar3 = uVar3 >> 0x11 ^ uVar3;
						__c.Rand.state = uVar3 << 5 ^ uVar3;
						iStack_2c = (int)((ulong)(uint)(maxExclusive - minInclusive) * (ulong)uVar1 >> 0x20) + minInclusive;
					}
					pIVar2 = (object)iStack_2c;
					return pIVar2;
				}
				goto label_05b36024;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicRandomBuiltin.Bindings.<>c$$<__CreateMethodBinding__RandomFloat>b__3_0: 5 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__RandomFloat_b__3_0(CustomLogicRandomBuiltin __c, Object[] __a)
	{
		uint uVar1;
		ulong in_RAX;
		object pIVar2;
		uint uVar3;
		float fVar4;
		ulong uStack_28;

		uStack_28 = in_RAX;
		if (__a == null) {
	label_05b36154: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar2 = __a[0];
			fVar4 = CustomLogicEvaluator.ConvertTo<float>(pIVar2);
			uStack_28 = CONCAT44(uStack_28._4_4_, fVar4);
			if ((__a.Length & 0xfffffffe) != 0) {
				fVar4 = CustomLogicEvaluator.ConvertTo<float>(__a[1]);
				if (__c != null) {
					if (__c.UseInstanceRandom == false) {
						fVar4 = Random.Range((float)uStack_28, fVar4);
					}
					else {
						uVar1 = __c.Rand.state;
						uVar3 = uVar1 << 0xd ^ uVar1;
						uVar3 = uVar3 >> 0x11 ^ uVar3;
						__c.Rand.state = uVar3 << 5 ^ uVar3;
						fVar4 = (fVar4 - (float)uStack_28) * ((float)(uVar1 >> 9 | 0x3f800000) + -1.0) + (float)uStack_28;
					}
					uStack_28 = CONCAT44(fVar4, (float)uStack_28);
					pIVar2 = (object)(((long)&uStack_28 + 4));
					return pIVar2;
				}
				goto label_05b36154;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicRandomBuiltin.Bindings.<>c$$<__CreateMethodBinding__RandomBool>b__4_0: 4 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__RandomBool_b__4_0(CustomLogicRandomBuiltin __c, Object[] __a)
	{
		uint uVar1;
		bool bVar2;
		ulong in_RAX;
		object pIVar3;
		uint uVar4;
		ulong uStack_8;

		if (__c == null) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		if (__c.UseInstanceRandom == false) {
			bVar2 = RandomGen.GetRandomBool();
		}
		else {
			uVar1 = __c.Rand.state;
			uVar4 = uVar1 << 0xd ^ uVar1;
			uVar4 = uVar4 >> 0x11 ^ uVar4;
			__c.Rand.state = uVar4 << 5 ^ uVar4;
			bVar2 = (bool)((byte)uVar1 & 1);
		}
		uStack_8 = CONCAT17(bVar2, (undefined7)uStack_8);
		pIVar3 = (object)(((long)&uStack_8 + 7));
		return pIVar3;
	}

	// CustomLogic.CustomLogicRandomBuiltin.Bindings.<>c$$<__CreateMethodBinding__RandomVector3>b__5_0: clean
	private object Bindings_c____CreateMethodBinding__RandomVector3_b__5_0(CustomLogicRandomBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicVector3Builtin pCVar1;
		CustomLogicVector3Builtin b;

		if (__a == null) {
	label_05b36267: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				b = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[1]);
				if (__c != null) {
					pCVar1 = __c.RandomVector3(pCVar1, b);
					return (object)pCVar1;
				}
				goto label_05b36267;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicRandomBuiltin.Bindings.<>c$$<__CreateMethodBinding__RandomDirection>b__6_0: clean
	private object Bindings_c____CreateMethodBinding__RandomDirection_b__6_0(CustomLogicRandomBuiltin __c, Object[] __a)
	{
		object obj;
		bool _flat;
		CustomLogicVector3Builtin pCVar1;

		if (__a != null) {
			if (__a.Length == 0) {
				_flat = false;
			}
			else {
				if ((int)__a.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				obj = __a[0];
				_flat = CustomLogicEvaluator.ConvertTo<bool>(obj) ;
			}
			if (__c != null) {
				pCVar1 = __c.RandomDirection(_flat);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicRandomBuiltin.Bindings.<>c$$<__CreateMethodBinding__RandomSign>b__7_0: clean
	private object Bindings_c____CreateMethodBinding__RandomSign_b__7_0(CustomLogicRandomBuiltin __c, Object[] __a)
	{
		object pIVar1;
		uint uVar2;
		byte[] auStack_4 = new byte[4];

		if (__c == null) {
			throw new NullReferenceException();
		}
		if (__c.UseInstanceRandom == false) {
			RandomGen.GetRandomBool();
		}
		else {
			uVar2 = __c.Rand.state;
			uVar2 = uVar2 << 0xd ^ uVar2;
			uVar2 = uVar2 >> 0x11 ^ uVar2;
			__c.Rand.state = uVar2 << 5 ^ uVar2;
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicRandomBuiltin.Bindings.<>c$$<__CreateMethodBinding__PerlinNoise>b__8_0: 5 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__PerlinNoise_b__8_0(CustomLogicRandomBuiltin __c, Object[] __a)
	{
		ulong in_RAX;
		object pIVar1;
		float fVar2;
		ulong uStack_28;

		uStack_28 = in_RAX;
		if (__a == null) {
	label_05b3644e: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			fVar2 = CustomLogicEvaluator.ConvertTo<float>(pIVar1);
			uStack_28 = CONCAT44(uStack_28._4_4_, fVar2);
			if ((__a.Length & 0xfffffffe) != 0) {
				fVar2 = CustomLogicEvaluator.ConvertTo<float>(__a[1]);
				if (__c != null) {
					fVar2 = Mathf.PerlinNoise((float)uStack_28, fVar2);
					uStack_28 = CONCAT44(fVar2, (float)uStack_28);
					pIVar1 = (object)(((long)&uStack_28 + 4));
					return pIVar1;
				}
				goto label_05b3644e;
			}
		}
		throw new IndexOutOfRangeException();
	}
}
