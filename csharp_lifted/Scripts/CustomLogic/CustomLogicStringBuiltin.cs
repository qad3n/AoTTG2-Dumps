// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicStringBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicStringBuiltin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicStringBuiltin.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200062A")]
[CompilerGenerated]
internal class CustomLogicStringBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x200062B")]
	public static class Factory
	{
		[Token(Token = "0x6003AD5")]
		[Address(RVA = "0x5A36FF0", Offset = "0x5A35FF0", VA = "0x5A36FF0")]
		public static CustomLogicStringBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicStringBuiltin.c (CustomLogic.CustomLogicStringBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicStringBuiltin constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicStringBuiltin_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicStringBuiltin();
			return (CustomLogicStringBuiltin)__this;
		}
	}

	[Token(Token = "0x200062C")]
	public static class Bindings
	{
		[Token(Token = "0x4001A88")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6003AD6")]
		[Address(RVA = "0x5A37110", Offset = "0x5A36110", VA = "0x5A37110")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicStringBuiltin.c (CustomLogic.CustomLogicStringBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLMethodBinding<CustomLogicStringBuiltin> pCVar3;
			CLPropertyBinding<CustomLogicStringBuiltin> pCVar4;
			String pSVar5;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x669c4959) {
				if (uVar2 < 0x3002539a) {
					if (uVar2 < 0xf317949) {
						if (uVar2 == 0x9390c03) {
							bVar1 = (name == "Capitalize");
							if (bVar1) {
								pCVar3 = CustomLogicStringBuiltin.Bindings.__CreateMethodBinding__Capitalize();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0xf317948) {
							bVar1 = (name == "Insert");
							if (bVar1) {
								pCVar3 = CustomLogicStringBuiltin.Bindings.__CreateMethodBinding__Insert();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x16a15383) {
						bVar1 = (name == "Split");
						if (bVar1) {
							pCVar3 = CustomLogicStringBuiltin.Bindings.__CreateMethodBinding__Split();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x30025399) {
						bVar1 = (name == "Join");
						if (bVar1) {
							pCVar3 = CustomLogicStringBuiltin.Bindings.__CreateMethodBinding__Join();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x38e8329d) {
					if (uVar2 == 0x325686ab) {
						bVar1 = (name == "Newline");
						if (bVar1) {
							pCVar4 = CustomLogicStringBuiltin.Bindings.__CreatePropertyBinding__Newline();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x38e8329c) {
						bVar1 = (name == "SubstringWithLength");
						if (bVar1) {
							pCVar3 = CustomLogicStringBuiltin.Bindings.__CreateMethodBinding__SubstringWithLength();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x43415f31) {
					bVar1 = (name == "ToLower");
					if (bVar1) {
						pCVar3 = CustomLogicStringBuiltin.Bindings.__CreateMethodBinding__ToLower();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x5101d130) {
					bVar1 = (name == "FormatFloat");
					if (bVar1) {
						pCVar3 = CustomLogicStringBuiltin.Bindings.__CreateMethodBinding__FormatFloat();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x669c4958) {
					bVar1 = (name == "Contains");
					if (bVar1) {
						pCVar3 = CustomLogicStringBuiltin.Bindings.__CreateMethodBinding__Contains();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xc2b173c9) {
				if (uVar2 < 0xb4ede919) {
					if (uVar2 == 0xaadc121e) {
						bVar1 = (name == "IndexOf");
						if (bVar1) {
							pCVar3 = CustomLogicStringBuiltin.Bindings.__CreateMethodBinding__IndexOf();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0xb4ede918) {
						bVar1 = (name == "ToUpper");
						if (bVar1) {
							pCVar3 = CustomLogicStringBuiltin.Bindings.__CreateMethodBinding__ToUpper();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0xbbed73fc) {
					bVar1 = (name == "StartsWith");
					if (bVar1) {
						pCVar3 = CustomLogicStringBuiltin.Bindings.__CreateMethodBinding__StartsWith();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xc2b173c8) {
					bVar1 = (name == "Substring");
					if (bVar1) {
						pCVar3 = CustomLogicStringBuiltin.Bindings.__CreateMethodBinding__Substring();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xe4d54f64) {
				if (uVar2 == 0xcc5e1935) {
					bVar1 = (name == "Length");
					if (bVar1) {
						pCVar3 = CustomLogicStringBuiltin.Bindings.__CreateMethodBinding__Length();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xe4d54f63) {
					bVar1 = (name == "Replace");
					if (bVar1) {
						pCVar3 = CustomLogicStringBuiltin.Bindings.__CreateMethodBinding__Replace();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xf5c087e9) {
				bVar1 = (name == "Trim");
				if (bVar1) {
					pCVar3 = CustomLogicStringBuiltin.Bindings.__CreateMethodBinding__Trim();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xfe1f90a3) {
				bVar1 = (name == "EndsWith");
				if (bVar1) {
					pCVar3 = CustomLogicStringBuiltin.Bindings.__CreateMethodBinding__EndsWith();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xfefe1622) {
				bVar1 = (name == "FormatFromList");
				if (bVar1) {
					pCVar3 = CustomLogicStringBuiltin.Bindings.__CreateMethodBinding__FormatFromList();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicStringBuiltin not found");
			pSVar5 = String.Concat(pSVar5, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6003AD7")]
		[Address(RVA = "0x5A37810", Offset = "0x5A36810", VA = "0x5A37810")]
		public static CLPropertyBinding<CustomLogicStringBuiltin> __CreatePropertyBinding__Newline()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicStringBuiltin.c (CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreatePropertyBinding__Newline): 2 lines keep C-only constructs
			Func<CustomLogicStringBuiltin, object> __this;
			CLPropertyBinding<CustomLogicStringBuiltin> __this_00;

			__this = new Func<CustomLogicStringBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings___CreatePropertyBinding__Newline_g____getter_2_0);
			__this_00 = new CLPropertyBinding<CustomLogicStringBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6003AD8")]
		[Address(RVA = "0x5A378B0", Offset = "0x5A368B0", VA = "0x5A378B0")]
		public static CLMethodBinding<CustomLogicStringBuiltin> __CreateMethodBinding__FormatFloat()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicStringBuiltin.c (CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__FormatFloat): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicStringBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicStringBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicStringBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547236 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicStringBuiltin>)) ;
				Il2CppMethodInitialized_07547236 = true;
				uVar1 = (typeof(CustomLogicStringBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicStringBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicStringBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__3_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicStringBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__3_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicStringBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicStringBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__FormatFloat_b__3_0);
				pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				pCVar2.__9__3_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicStringBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003AD9")]
		[Address(RVA = "0x5A379F0", Offset = "0x5A369F0", VA = "0x5A379F0")]
		public static CLMethodBinding<CustomLogicStringBuiltin> __CreateMethodBinding__FormatFromList()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicStringBuiltin.c (CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__FormatFromList): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicStringBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicStringBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicStringBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547237 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicStringBuiltin>)) ;
				Il2CppMethodInitialized_07547237 = true;
				uVar1 = (typeof(CustomLogicStringBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicStringBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicStringBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__4_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicStringBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__4_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicStringBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicStringBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__FormatFromList_b__4_0);
				pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				pCVar2.__9__4_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicStringBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003ADA")]
		[Address(RVA = "0x5A37B30", Offset = "0x5A36B30", VA = "0x5A37B30")]
		public static CLMethodBinding<CustomLogicStringBuiltin> __CreateMethodBinding__Split()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicStringBuiltin.c (CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__Split): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicStringBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicStringBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicStringBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547238 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicStringBuiltin>)) ;
				Il2CppMethodInitialized_07547238 = true;
				uVar1 = (typeof(CustomLogicStringBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicStringBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicStringBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__5_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicStringBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__5_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicStringBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicStringBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Split_b__5_0);
				pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				pCVar2.__9__5_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicStringBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003ADB")]
		[Address(RVA = "0x5A37C70", Offset = "0x5A36C70", VA = "0x5A37C70")]
		public static CLMethodBinding<CustomLogicStringBuiltin> __CreateMethodBinding__Join()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicStringBuiltin.c (CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__Join): 5 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicStringBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicStringBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicStringBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547239 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicStringBuiltin>)) ;
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Join_b__6_0) ;
				Il2CppMethodInitialized_07547239 = true;
				uVar1 = (typeof(CustomLogicStringBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicStringBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicStringBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__6_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicStringBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__6_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicStringBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicStringBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Join_b__6_0);
				pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				pCVar2.__9__6_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicStringBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003ADC")]
		[Address(RVA = "0x5A37DB0", Offset = "0x5A36DB0", VA = "0x5A37DB0")]
		public static CLMethodBinding<CustomLogicStringBuiltin> __CreateMethodBinding__Substring()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicStringBuiltin.c (CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__Substring): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicStringBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicStringBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicStringBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754723a == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicStringBuiltin>)) ;
				Il2CppMethodInitialized_0754723a = true;
				uVar1 = (typeof(CustomLogicStringBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicStringBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicStringBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__7_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicStringBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__7_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicStringBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicStringBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Substring_b__7_0);
				pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				pCVar2.__9__7_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicStringBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003ADD")]
		[Address(RVA = "0x5A37EF0", Offset = "0x5A36EF0", VA = "0x5A37EF0")]
		public static CLMethodBinding<CustomLogicStringBuiltin> __CreateMethodBinding__SubstringWithLength()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicStringBuiltin.c (CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__SubstringWithLength): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicStringBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicStringBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicStringBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754723b == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicStringBuiltin>)) ;
				Il2CppMethodInitialized_0754723b = true;
				uVar1 = (typeof(CustomLogicStringBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicStringBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicStringBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__8_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicStringBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__8_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicStringBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicStringBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__SubstringWithLength_b__8);
				pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				pCVar2.__9__8_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicStringBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003ADE")]
		[Address(RVA = "0x5A38030", Offset = "0x5A37030", VA = "0x5A38030")]
		public static CLMethodBinding<CustomLogicStringBuiltin> __CreateMethodBinding__Length()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicStringBuiltin.c (CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__Length): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicStringBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicStringBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicStringBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754723c == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicStringBuiltin>)) ;
				Il2CppMethodInitialized_0754723c = true;
				uVar1 = (typeof(CustomLogicStringBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicStringBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicStringBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__9_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicStringBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__9_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicStringBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicStringBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Length_b__9_0);
				pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				pCVar2.__9__9_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicStringBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003ADF")]
		[Address(RVA = "0x5A38170", Offset = "0x5A37170", VA = "0x5A38170")]
		public static CLMethodBinding<CustomLogicStringBuiltin> __CreateMethodBinding__Replace()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicStringBuiltin.c (CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__Replace): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicStringBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicStringBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicStringBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754723d == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicStringBuiltin>)) ;
				Il2CppMethodInitialized_0754723d = true;
				uVar1 = (typeof(CustomLogicStringBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicStringBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicStringBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__10_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicStringBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__10_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicStringBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicStringBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Replace_b__10_0);
				pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				pCVar2.__9__10_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicStringBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003AE0")]
		[Address(RVA = "0x5A382B0", Offset = "0x5A372B0", VA = "0x5A382B0")]
		public static CLMethodBinding<CustomLogicStringBuiltin> __CreateMethodBinding__Contains()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicStringBuiltin.c (CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__Contains): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicStringBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicStringBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicStringBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754723e == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicStringBuiltin>)) ;
				Il2CppMethodInitialized_0754723e = true;
				uVar1 = (typeof(CustomLogicStringBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicStringBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicStringBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__11_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicStringBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__11_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicStringBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicStringBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Contains_b__11_0);
				pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				pCVar2.__9__11_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicStringBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003AE1")]
		[Address(RVA = "0x5A383F0", Offset = "0x5A373F0", VA = "0x5A383F0")]
		public static CLMethodBinding<CustomLogicStringBuiltin> __CreateMethodBinding__StartsWith()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicStringBuiltin.c (CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__StartsWith): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicStringBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicStringBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicStringBuiltin> __this_00;

			if (Il2CppMethodInitialized_0754723f == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicStringBuiltin>)) ;
				Il2CppMethodInitialized_0754723f = true;
				uVar1 = (typeof(CustomLogicStringBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicStringBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicStringBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__12_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicStringBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__12_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicStringBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicStringBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__StartsWith_b__12_0);
				pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				pCVar2.__9__12_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicStringBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003AE2")]
		[Address(RVA = "0x5A38530", Offset = "0x5A37530", VA = "0x5A38530")]
		public static CLMethodBinding<CustomLogicStringBuiltin> __CreateMethodBinding__EndsWith()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicStringBuiltin.c (CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__EndsWith): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicStringBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicStringBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicStringBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547240 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicStringBuiltin>)) ;
				Il2CppMethodInitialized_07547240 = true;
				uVar1 = (typeof(CustomLogicStringBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicStringBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicStringBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__13_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicStringBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__13_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicStringBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicStringBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__EndsWith_b__13_0);
				pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				pCVar2.__9__13_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicStringBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003AE3")]
		[Address(RVA = "0x5A38670", Offset = "0x5A37670", VA = "0x5A38670")]
		public static CLMethodBinding<CustomLogicStringBuiltin> __CreateMethodBinding__Trim()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicStringBuiltin.c (CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__Trim): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicStringBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicStringBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicStringBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547241 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicStringBuiltin>)) ;
				Il2CppMethodInitialized_07547241 = true;
				uVar1 = (typeof(CustomLogicStringBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicStringBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicStringBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__14_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicStringBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__14_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicStringBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicStringBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Trim_b__14_0);
				pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				pCVar2.__9__14_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicStringBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003AE4")]
		[Address(RVA = "0x5A387B0", Offset = "0x5A377B0", VA = "0x5A387B0")]
		public static CLMethodBinding<CustomLogicStringBuiltin> __CreateMethodBinding__Insert()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicStringBuiltin.c (CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__Insert): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicStringBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicStringBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicStringBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547242 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicStringBuiltin>)) ;
				Il2CppMethodInitialized_07547242 = true;
				uVar1 = (typeof(CustomLogicStringBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicStringBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicStringBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__15_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicStringBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__15_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicStringBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicStringBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Insert_b__15_0);
				pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				pCVar2.__9__15_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicStringBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003AE5")]
		[Address(RVA = "0x5A388F0", Offset = "0x5A378F0", VA = "0x5A388F0")]
		public static CLMethodBinding<CustomLogicStringBuiltin> __CreateMethodBinding__Capitalize()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicStringBuiltin.c (CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__Capitalize): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicStringBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicStringBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicStringBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547243 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicStringBuiltin>)) ;
				Il2CppMethodInitialized_07547243 = true;
				uVar1 = (typeof(CustomLogicStringBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicStringBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicStringBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__16_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicStringBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__16_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicStringBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicStringBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Capitalize_b__16_0);
				pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				pCVar2.__9__16_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicStringBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003AE6")]
		[Address(RVA = "0x5A38A30", Offset = "0x5A37A30", VA = "0x5A38A30")]
		public static CLMethodBinding<CustomLogicStringBuiltin> __CreateMethodBinding__ToUpper()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicStringBuiltin.c (CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__ToUpper): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicStringBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicStringBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicStringBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547244 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicStringBuiltin>)) ;
				Il2CppMethodInitialized_07547244 = true;
				uVar1 = (typeof(CustomLogicStringBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicStringBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicStringBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__17_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicStringBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__17_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicStringBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicStringBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__ToUpper_b__17_0);
				pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				pCVar2.__9__17_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicStringBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003AE7")]
		[Address(RVA = "0x5A38B70", Offset = "0x5A37B70", VA = "0x5A38B70")]
		public static CLMethodBinding<CustomLogicStringBuiltin> __CreateMethodBinding__ToLower()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicStringBuiltin.c (CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__ToLower): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicStringBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicStringBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicStringBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547245 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicStringBuiltin>)) ;
				Il2CppMethodInitialized_07547245 = true;
				uVar1 = (typeof(CustomLogicStringBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicStringBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicStringBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__18_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicStringBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__18_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicStringBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicStringBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__ToLower_b__18_0);
				pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				pCVar2.__9__18_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicStringBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003AE8")]
		[Address(RVA = "0x5A38CB0", Offset = "0x5A37CB0", VA = "0x5A38CB0")]
		public static CLMethodBinding<CustomLogicStringBuiltin> __CreateMethodBinding__IndexOf()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicStringBuiltin.c (CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__IndexOf): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicStringBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicStringBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicStringBuiltin> __this_00;

			if (Il2CppMethodInitialized_07547246 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLMethodBinding<CustomLogicStringBuiltin>)) ;
				Il2CppMethodInitialized_07547246 = true;
				uVar1 = (typeof(CustomLogicStringBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicStringBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(CustomLogicStringBuiltin.Bindings.c)) ;
				pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__19_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicStringBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__19_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicStringBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicStringBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__IndexOf_b__19_0);
				pCVar2 = typeof(CustomLogicStringBuiltin.Bindings.c).static_fields;
				pCVar2.__9__19_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicStringBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x17000A53")]
	public static string Newline
	{
		[Token(Token = "0x6003ABF")]
		[Address(RVA = "0x5A364D0", Offset = "0x5A354D0", VA = "0x5A364D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicStringBuiltin.c (CustomLogic.CustomLogicStringBuiltin$$get_Newline): clean
			return "\n";
		}
	}

	[Token(Token = "0x17000A54")]
	public override string ClassName
	{
		[Token(Token = "0x6003AD1")]
		[Address(RVA = "0x5A36F90", Offset = "0x5A35F90", VA = "0x5A36F90", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicStringBuiltin.c (CustomLogic.CustomLogicStringBuiltin$$get_ClassName): clean
			return "String";
		}
	}

	[Token(Token = "0x17000A55")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6003AD2")]
		[Address(RVA = "0x5A36FC0", Offset = "0x5A35FC0", VA = "0x5A36FC0", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicStringBuiltin.c (CustomLogic.CustomLogicStringBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000A56")]
	public override bool IsStatic
	{
		[Token(Token = "0x6003AD3")]
		[Address(RVA = "0x5A36FD0", Offset = "0x5A35FD0", VA = "0x5A36FD0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicStringBuiltin.c (CustomLogic.CustomLogicStringBuiltin$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x17000A57")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6003AD4")]
		[Address(RVA = "0x5A36FE0", Offset = "0x5A35FE0", VA = "0x5A36FE0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicStringBuiltin.c (CustomLogic.CustomLogicStringBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6003ABE")]
	[Address(RVA = "0x5A36460", Offset = "0x5A35460", VA = "0x5A36460")]
	public CustomLogicStringBuiltin()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicStringBuiltin.c (CustomLogic.CustomLogicStringBuiltin$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_0754722b == false) {
			Il2CppMethodInitialized_0754722b = true;
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

	[Token(Token = "0x6003AC0")]
	[Address(RVA = "0x5A36500", Offset = "0x5A35500", VA = "0x5A36500")]
	public static string FormatFloat(float val, int decimals)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicStringBuiltin.c (CustomLogic.CustomLogicStringBuiltin$$FormatFloat): clean
		String pSVar1;

		pSVar1 = Util.FormatFloat(val, decimals);
		return pSVar1;
	}

	[Token(Token = "0x6003AC1")]
	[Address(RVA = "0x5A36570", Offset = "0x5A35570", VA = "0x5A36570")]
	public static string FormatFromList(string str, CustomLogicListBuiltin list)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicStringBuiltin.c (CustomLogic.CustomLogicStringBuiltin$$FormatFromList): clean
		List<object> __this;
		Object[] args;
		String pSVar1;

		if ((list == null) ||(__this = list.List, __this == null)) {
			throw new NullReferenceException();
		}
		args = __this.ToArray();
		pSVar1 = String.Format(str, args);
		return pSVar1;
	}

	[Token(Token = "0x6003AC2")]
	[Address(RVA = "0x5A365D0", Offset = "0x5A355D0", VA = "0x5A365D0")]
	public static CustomLogicListBuiltin Split(string toSplit, object splitter, bool removeEmptyEntries = false)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicStringBuiltin.c (CustomLogic.CustomLogicStringBuiltin$$Split): 16 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		uint uVar3;
		List<object> pSVar4;
		Object[] pSVar5;
		MethodInfo pMVar6;
		ushort separator;
		int iVar7;
		CustomLogicListBuiltin __this;
		String[] pSVar8;
		String pSVar9;
		ulong uVar10;
		ulong uVar11;
		Il2CppClass pIVar12;
		long lVar13;

		__this = new CustomLogicListBuiltin();
		if (splitter == null) goto label_05b36762;
		pIVar12 = splitter.klass;
		if (pIVar12 == g_data_07556758) {
			if (*(int)&splitter[1].klass == 1) {
				separator = splitter.get_Chars(0);
				if ((toSplit == null) ||(pSVar8 = toSplit.Split(separator, (uint)removeEmptyEntries), pSVar8 == null)) goto label_05b36762;
				iVar7 = (int)pSVar8.Length;
				if (__this != null) {
					if (iVar7 < 1) {
						return __this;
					}
					uVar10 = pSVar8.Length & 0xffffffff;
					uVar11 = 0;
					while (true) {
						pMVar6 = MethodInfo_System_Collections_Generic_List_object_Add;
						if (!(uVar11 < uVar10)) break;
						pSVar4 = __this.List;
						if (pSVar4 == null) goto label_05b36762;
						pSVar9 = pSVar8[uVar11];
						piVar1 = &pSVar4._version;
						*piVar1 = *piVar1 + 1;
						pSVar5 = pSVar4._items;
						if (pSVar5 == null) goto label_05b36762;
						uVar3 = pSVar4._size;
						if (uVar3 < (uint)pSVar5.Length) {
							pSVar4._size = uVar3 + 1;
							pSVar5[(int)uVar3] = (object)pSVar9;
						}
						else {
							pSVar4.AddWithResize((object)pSVar9);
						}
						uVar11 = uVar11 + 1;
						uVar3 = (uint)pSVar8.Length;
						uVar10 = (ulong)uVar3;
						if ((long)(int)uVar3 <= (long)uVar11) {
							return __this;
						}
					}
	label_05b369eb: ;
					throw new IndexOutOfRangeException();
				}
			}
			else {
				if ((toSplit == null) ||(pSVar8 = toSplit.Split((String)splitter, (uint)removeEmptyEntries), pSVar8 == null)) goto label_05b36762;
				iVar7 = (int)pSVar8.Length;
				if (__this != null) {
					if (iVar7 < 1) {
						return __this;
					}
					uVar10 = pSVar8.Length & 0xffffffff;
					uVar11 = 0;
					while (true) {
						pMVar6 = MethodInfo_System_Collections_Generic_List_object_Add;
						if (!(uVar11 < uVar10)) break;
						pSVar4 = __this.List;
						if (pSVar4 == null) goto label_05b36762;
						pSVar9 = pSVar8[uVar11];
						piVar1 = &pSVar4._version;
						*piVar1 = *piVar1 + 1;
						pSVar5 = pSVar4._items;
						if (pSVar5 == null) goto label_05b36762;
						uVar3 = pSVar4._size;
						if (uVar3 < (uint)pSVar5.Length) {
							pSVar4._size = uVar3 + 1;
							pSVar5[(int)uVar3] = (object)pSVar9;
						}
						else {
							pSVar4.AddWithResize((object)pSVar9);
						}
						uVar11 = uVar11 + 1;
						uVar3 = (uint)pSVar8.Length;
						uVar10 = (ulong)uVar3;
						if ((long)(int)uVar3 <= (long)uVar11) {
							return __this;
						}
					}
					goto label_05b369eb;
				}
			}
		}
		else {
			bVar2 = (typeof(CustomLogicListBuiltin)._2).typeHierarchyDepth;
			if (((pIVar12._2).typeHierarchyDepth < bVar2) ||((pIVar12._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(CustomLogicListBuiltin))) {
				throw new InvalidCastException();
			}
			if (splitter[3].klass == null) goto label_05b36762;
			pSVar8 = (String[])new string[*(uint)&((splitter[3].klass)._1).namespaze];
			pIVar12 = splitter[3].klass;
			if (pIVar12 == null) goto label_05b36762;
			if (pSVar8 != null) {
				lVar13 = 0;
				uVar10 = 0;
				do {
					if ((long)*(int)&(pIVar12._1).namespaze <= (long)uVar10) goto label_05b36843;
					pSVar9 = (String)pIVar12.get_Item((int32_t)uVar10);
					if ((pSVar9 != null) && ((Il2CppClass)pSVar9.klass != g_data_07556758)) {
						throw new InvalidCastException();
					}
					if ((uint)pSVar8.Length <= uVar10) goto label_05b369eb;
					pSVar8[uVar10] = pSVar9;
					uVar10 = uVar10 + 1;
					pIVar12 = splitter[3].klass;
					lVar13 = lVar13 + 8;
				} while (pIVar12 != null);
				goto label_05b36762;
			}
			if (0 < *(int)&(pIVar12._1).namespaze) {
				pIVar12.get_Item(0);
				throw new NullReferenceException();
			}
	label_05b36843: ;
			if ((toSplit == null) ||(pSVar8 = toSplit.Split(pSVar8, (uint)removeEmptyEntries), pSVar8 == null)) goto label_05b36762;
			iVar7 = (int)pSVar8.Length;
			if (__this != null) {
				if (iVar7 < 1) {
					return __this;
				}
				uVar10 = pSVar8.Length & 0xffffffff;
				uVar11 = 0;
				while (true) {
					pMVar6 = MethodInfo_System_Collections_Generic_List_object_Add;
					if (!(uVar11 < uVar10)) break;
					pSVar4 = __this.List;
					if (pSVar4 == null) goto label_05b36762;
					pSVar9 = pSVar8[uVar11];
					piVar1 = &pSVar4._version;
					*piVar1 = *piVar1 + 1;
					pSVar5 = pSVar4._items;
					if (pSVar5 == null) goto label_05b36762;
					uVar3 = pSVar4._size;
					if (uVar3 < (uint)pSVar5.Length) {
						pSVar4._size = uVar3 + 1;
						pSVar5[(int)uVar3] = (object)pSVar9;
					}
					else {
						pSVar4.AddWithResize((object)pSVar9);
					}
					uVar11 = uVar11 + 1;
					uVar3 = (uint)pSVar8.Length;
					uVar10 = (ulong)uVar3;
					if ((long)(int)uVar3 <= (long)uVar11) {
						return __this;
					}
				}
				goto label_05b369eb;
			}
		}
		if (iVar7 < 1) {
			return __this;
		}
	label_05b36762: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003AC3")]
	[Address(RVA = "0x5A36A20", Offset = "0x5A35A20", VA = "0x5A36A20")]
	public static string Join(CustomLogicListBuiltin list, string separator)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicStringBuiltin.c (CustomLogic.CustomLogicStringBuiltin$$Join): 13 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<object> __this;
		String pSVar3;
		bool bVar5;
		List<string> __this_00;
		String pSVar6;
		sbyte pcVar7;
		String* ppSVar8;
		String[] pSVar9;
		byte[] auStack_68 = new byte[8];
		String pSStack_58;
		byte[] auStack_50 = new byte[16];
		String pSStack_40;
		String pSStack_38;

		auStack_68 = (byte[])0x0;
		pSStack_58 = null;
		__this_00 = new List<string>();
		if ((list != null) &&(__this = list.List, __this != null)) {
			auStack_50.GetEnumerator(__this);
			pSStack_58 = pSStack_40;
			auStack_68 = (byte[])auStack_50._0_8_;
			auStack_50._0_8_ = null;
			auStack_50._8_8_ = auStack_68;
			pSStack_38 = separator;
			if (__this_00 == null) {
				auStack_50._8_8_ = auStack_68;
				bVar5 = auStack_68.MoveNext();
				pSVar6 = pSStack_58;
				if (bVar5) {
					if ((pSVar6 != null) && (pSVar3 = pSVar6.klass, pSVar3 != g_data_07556758)) {
						if (pSVar3 == g_data_075566f0) {
							il2cpp_vm_Object_Unbox((object)pSVar6);
						}
						else {
							pSVar6.ToString();
						}
					}
	label_05b36d38: ;
					throw new NullReferenceException();
				}
			}
			else {
				while (true) {
					bVar5 = auStack_68.MoveNext();
					pSVar6 = pSStack_58;
					if (!(bVar5)) break;
					if (pSVar6 == null) {
						ppSVar8 = &"null";
	label_05b36bf7: ;
						pSVar6 = *ppSVar8;
					}
					else {
						pSVar3 = pSVar6.klass;
						if (pSVar3 != g_data_07556758) {
							if (pSVar3 == g_data_075566f0) {
								pcVar7 = il2cpp_vm_Object_Unbox((object)pSVar6);
								if (*pcVar7 == false) {
									ppSVar8 = &"false";
								}
								else {
									ppSVar8 = &"true";
								}
								goto label_05b36bf7;
							}
							pSVar6 = pSVar6.ToString();
						}
					}
					piVar1 = &__this_00._version;
					*piVar1 = *piVar1 + 1;
					pSVar9 = __this_00._items;
					if (pSVar9 == null) goto label_05b36d38;
					uVar2 = __this_00._size;
					if (uVar2 < (uint)pSVar9.Length) {
						__this_00._size = uVar2 + 1;
						pSVar9[(int)uVar2] = pSVar6;
					}
					else {
						__this_00.AddWithResize((object)pSVar6);
					}
				}
			}
			auStack_68.Dispose();
			pSVar6 = pSStack_38;
			if (__this_00 != null) {
				pSVar9 = (String[])__this_00.ToArray();
				pSVar6 = String.Join(pSVar6, pSVar9);
				return pSVar6;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003AC4")]
	[Address(RVA = "0x5A36DB0", Offset = "0x5A35DB0", VA = "0x5A36DB0")]
	public static string Substring(string str, int startIndex)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicStringBuiltin.c (CustomLogic.CustomLogicStringBuiltin$$Substring): clean
		String pSVar1;

		if (str == null) {
			throw new NullReferenceException();
		}
		return pSVar1;
	}

	[Token(Token = "0x6003AC5")]
	[Address(RVA = "0x5A36DD0", Offset = "0x5A35DD0", VA = "0x5A36DD0")]
	public static string SubstringWithLength(string str, int startIndex, int length)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicStringBuiltin.c (CustomLogic.CustomLogicStringBuiltin$$SubstringWithLength): clean
		String pSVar1;

		if (str == null) {
			throw new NullReferenceException();
		}
		pSVar1 = str.Substring(startIndex, length);
		return pSVar1;
	}

	[Token(Token = "0x6003AC6")]
	[Address(RVA = "0x5A36DF0", Offset = "0x5A35DF0", VA = "0x5A36DF0")]
	public static int Length(string str)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicStringBuiltin.c (CustomLogic.CustomLogicStringBuiltin$$Length): clean
		if (str == null) {
			throw new NullReferenceException();
		}
		return str._stringLength;
	}

	[Token(Token = "0x6003AC7")]
	[Address(RVA = "0x5A36E00", Offset = "0x5A35E00", VA = "0x5A36E00")]
	public static string Replace(string str, string replace, string with)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicStringBuiltin.c (CustomLogic.CustomLogicStringBuiltin$$Replace): clean
		String pSVar1;

		if (str == null) {
			throw new NullReferenceException();
		}
		pSVar1 = str.Replace(replace, with);
		return pSVar1;
	}

	[Token(Token = "0x6003AC8")]
	[Address(RVA = "0x5A36E20", Offset = "0x5A35E20", VA = "0x5A36E20")]
	public static bool Contains(string str, string match)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicStringBuiltin.c (CustomLogic.CustomLogicStringBuiltin$$Contains): clean
		bool bVar1;

		if (str == null) {
			throw new NullReferenceException();
		}
		return bVar1;
	}

	[Token(Token = "0x6003AC9")]
	[Address(RVA = "0x5A36E40", Offset = "0x5A35E40", VA = "0x5A36E40")]
	public static bool StartsWith(string str, string match)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicStringBuiltin.c (CustomLogic.CustomLogicStringBuiltin$$StartsWith): clean
		bool bVar1;

		if (str == null) {
			throw new NullReferenceException();
		}
		return bVar1;
	}

	[Token(Token = "0x6003ACA")]
	[Address(RVA = "0x5A36E60", Offset = "0x5A35E60", VA = "0x5A36E60")]
	public static bool EndsWith(string str, string match)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicStringBuiltin.c (CustomLogic.CustomLogicStringBuiltin$$EndsWith): clean
		bool bVar1;

		if (str == null) {
			throw new NullReferenceException();
		}
		return bVar1;
	}

	[Token(Token = "0x6003ACB")]
	[Address(RVA = "0x5A36E80", Offset = "0x5A35E80", VA = "0x5A36E80")]
	public static string Trim(string str)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicStringBuiltin.c (CustomLogic.CustomLogicStringBuiltin$$Trim): clean
		String pSVar1;

		if (str == null) {
			throw new NullReferenceException();
		}
		return pSVar1;
	}

	[Token(Token = "0x6003ACC")]
	[Address(RVA = "0x5A36EA0", Offset = "0x5A35EA0", VA = "0x5A36EA0")]
	public static string Insert(string str, string insert, int index)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicStringBuiltin.c (CustomLogic.CustomLogicStringBuiltin$$Insert): clean
		String pSVar1;

		if (str == null) {
			throw new NullReferenceException();
		}
		pSVar1 = str.Insert(index, insert);
		return pSVar1;
	}

	[Token(Token = "0x6003ACD")]
	[Address(RVA = "0x5A36EC0", Offset = "0x5A35EC0", VA = "0x5A36EC0")]
	public static string Capitalize(string str)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicStringBuiltin.c (CustomLogic.CustomLogicStringBuiltin$$Capitalize): clean
		uint uVar1;
		String pSVar2;

		if (Il2CppMethodInitialized_07547231 == false) {
			Il2CppMethodInitialized_07547231 = true;
			uVar1 = (typeof(MiscExtensions)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MiscExtensions)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return pSVar2;
		}
		return pSVar2;
	}

	[Token(Token = "0x6003ACE")]
	[Address(RVA = "0x5A36F30", Offset = "0x5A35F30", VA = "0x5A36F30")]
	public static string ToUpper(string str)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicStringBuiltin.c (CustomLogic.CustomLogicStringBuiltin$$ToUpper): clean
		String pSVar1;

		if (str == null) {
			throw new NullReferenceException();
		}
		return pSVar1;
	}

	[Token(Token = "0x6003ACF")]
	[Address(RVA = "0x5A36F50", Offset = "0x5A35F50", VA = "0x5A36F50")]
	public static string ToLower(string str)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicStringBuiltin.c (CustomLogic.CustomLogicStringBuiltin$$ToLower): clean
		String pSVar1;

		if (str == null) {
			throw new NullReferenceException();
		}
		return pSVar1;
	}

	[Token(Token = "0x6003AD0")]
	[Address(RVA = "0x5A36F70", Offset = "0x5A35F70", VA = "0x5A36F70")]
	public static int IndexOf(string str, string substring)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicStringBuiltin.c (CustomLogic.CustomLogicStringBuiltin$$IndexOf): clean
		int iVar1;

		if (str == null) {
			throw new NullReferenceException();
		}
		iVar1 = str.IndexOf(substring, 4);
		return iVar1;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicStringBuiltin.c.

	// CustomLogic.CustomLogicStringBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Newline");
		__this.Add((Il2CppObject *)"FormatFloat");
		__this.Add((Il2CppObject *)"FormatFromList");
		__this.Add((Il2CppObject *)"Split");
		__this.Add((Il2CppObject *)"Join");
		__this.Add((Il2CppObject *)"Substring");
		__this.Add((Il2CppObject *)"SubstringWithLength");
		__this.Add((Il2CppObject *)"Length");
		__this.Add((Il2CppObject *)"Replace");
		__this.Add((Il2CppObject *)"Contains");
		__this.Add((Il2CppObject *)"StartsWith");
		__this.Add((Il2CppObject *)"EndsWith");
		__this.Add((Il2CppObject *)"Trim");
		__this.Add((Il2CppObject *)"Insert");
		__this.Add((Il2CppObject *)"Capitalize");
		__this.Add((Il2CppObject *)"ToUpper");
		__this.Add((Il2CppObject *)"ToLower");
		__this.Add((Il2CppObject *)"IndexOf");
		CustomLogicStringBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicStringBuiltin.Bindings$$<__CreatePropertyBinding__Newline>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__Newline_g____getter_2_0(CustomLogicStringBuiltin __i)
	{
		return (Il2CppObject *)"\n";
	}

	// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$.cctor: clean
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = new CustomLogicStringBuiltin.Bindings.c();
		CustomLogicStringBuiltin.Bindings.c.__9 =(CustomLogicStringBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__FormatFloat>b__3_0: clean
	private object Bindings_c____CreateMethodBinding__FormatFloat_b__3_0(CustomLogicStringBuiltin __c, Object[] __a)
	{
		object obj;
		int decimals;
		String pSVar1;
		float val;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			val = CustomLogicEvaluator.ConvertTo<float>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				decimals = CustomLogicEvaluator.ConvertTo<int>(__a[1]);
				pSVar1 = CustomLogicStringBuiltin.FormatFloat(val, decimals);
				return (object)pSVar1;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__FormatFromList>b__4_0: clean
	private object Bindings_c____CreateMethodBinding__FormatFromList_b__4_0(CustomLogicStringBuiltin __c, Object[] __a)
	{
		object obj;
		String pSVar1;
		CustomLogicListBuiltin list;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			pSVar1 = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				list = CustomLogicEvaluator.ConvertTo<CustomLogicListBuiltin>(__a[1]);
				pSVar1 = CustomLogicStringBuiltin.FormatFromList(pSVar1, list);
				return (object)pSVar1;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__Split>b__5_0: clean
	private object Bindings_c____CreateMethodBinding__Split_b__5_0(CustomLogicStringBuiltin __c, Object[] __a)
	{
		uint uVar1;
		object pIVar2;
		object obj;
		bool removeEmptyEntries;
		String toSplit;
		CustomLogicListBuiltin pCVar3;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar2 = __a[0];
			toSplit = CustomLogicEvaluator.ConvertTo<string>(pIVar2);
			uVar1 = (uint)__a.Length;
			if (1 < uVar1) {
				pIVar2 = __a[1];
				if ((int)uVar1 < 3) {
					removeEmptyEntries = false;
				}
				else {
					obj = __a[2];
					removeEmptyEntries = CustomLogicEvaluator.ConvertTo<bool>(obj);
				}
				pCVar3 = CustomLogicStringBuiltin.Split(toSplit, pIVar2, removeEmptyEntries);
				return (object)pCVar3;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__Join>b__6_0: clean
	private object Bindings_c____CreateMethodBinding__Join_b__6_0(CustomLogicStringBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicListBuiltin list;
		String pSVar1;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			list = CustomLogicEvaluator.ConvertTo<CustomLogicListBuiltin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				pSVar1 = CustomLogicEvaluator.ConvertTo<string>(__a[1]);
				pSVar1 = CustomLogicStringBuiltin.Join(list, pSVar1);
				return (object)pSVar1;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__Substring>b__7_0: clean
	private object Bindings_c____CreateMethodBinding__Substring_b__7_0(CustomLogicStringBuiltin __c, Object[] __a)
	{
		object obj;
		int startIndex;
		String pSVar1;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			pSVar1 = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				startIndex = CustomLogicEvaluator.ConvertTo<int>(__a[1]) ;
				pSVar1 = CustomLogicStringBuiltin.Substring(pSVar1, startIndex);
				return (object)pSVar1;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__SubstringWithLength>b__8_0: clean
	private object Bindings_c____CreateMethodBinding__SubstringWithLength_b__8_0(CustomLogicStringBuiltin __c, Object[] __a)
	{
		object obj;
		int startIndex;
		int length;
		String pSVar1;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			pSVar1 = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				startIndex = CustomLogicEvaluator.ConvertTo<int>(__a[1]) ;
				if (2 < (uint)__a.Length) {
					length = CustomLogicEvaluator.ConvertTo<int>(__a[2]);
					pSVar1 = CustomLogicStringBuiltin.SubstringWithLength(pSVar1, startIndex, length);
					return (object)pSVar1;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__Length>b__9_0: clean
	private object Bindings_c____CreateMethodBinding__Length_b__9_0(CustomLogicStringBuiltin __c, Object[] __a)
	{
		String str;
		object pIVar1;
		int iStack_c;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		pIVar1 = __a[0];
		str = CustomLogicEvaluator.ConvertTo<string>(pIVar1);
		iStack_c = CustomLogicStringBuiltin.Length(str);
		pIVar1 = (object)iStack_c;
		return pIVar1;
	}

	// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__Replace>b__10_0: clean
	private object Bindings_c____CreateMethodBinding__Replace_b__10_0(CustomLogicStringBuiltin __c, Object[] __a)
	{
		object obj;
		String pSVar1;
		String replace;
		String with;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			pSVar1 = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				replace = CustomLogicEvaluator.ConvertTo<string>(__a[1]) ;
				if (2 < (uint)__a.Length) {
					with = CustomLogicEvaluator.ConvertTo<string>(__a[2]);
					pSVar1 = CustomLogicStringBuiltin.Replace(pSVar1, replace, with);
					return (object)pSVar1;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__Contains>b__11_0: clean
	private object Bindings_c____CreateMethodBinding__Contains_b__11_0(CustomLogicStringBuiltin __c, Object[] __a)
	{
		String str;
		String match;
		object pIVar1;
		byte uStack_19;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			str = CustomLogicEvaluator.ConvertTo<string>(pIVar1);
			if ((__a.Length & 0xfffffffe) != 0) {
				match = CustomLogicEvaluator.ConvertTo<string>(__a[1]);
				uStack_19 = CustomLogicStringBuiltin.Contains(str, match);
				pIVar1 = (object)uStack_19;
				return pIVar1;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__StartsWith>b__12_0: clean
	private object Bindings_c____CreateMethodBinding__StartsWith_b__12_0(CustomLogicStringBuiltin __c, Object[] __a)
	{
		String str;
		String match;
		object pIVar1;
		byte uStack_19;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			str = CustomLogicEvaluator.ConvertTo<string>(pIVar1);
			if ((__a.Length & 0xfffffffe) != 0) {
				match = CustomLogicEvaluator.ConvertTo<string>(__a[1]);
				uStack_19 = CustomLogicStringBuiltin.StartsWith(str, match);
				pIVar1 = (object)uStack_19;
				return pIVar1;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__EndsWith>b__13_0: clean
	private object Bindings_c____CreateMethodBinding__EndsWith_b__13_0(CustomLogicStringBuiltin __c, Object[] __a)
	{
		String str;
		String match;
		object pIVar1;
		byte uStack_19;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			str = CustomLogicEvaluator.ConvertTo<string>(pIVar1);
			if ((__a.Length & 0xfffffffe) != 0) {
				match = CustomLogicEvaluator.ConvertTo<string>(__a[1]);
				uStack_19 = CustomLogicStringBuiltin.EndsWith(str, match);
				pIVar1 = (object)uStack_19;
				return pIVar1;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__Trim>b__14_0: clean
	private object Bindings_c____CreateMethodBinding__Trim_b__14_0(CustomLogicStringBuiltin __c, Object[] __a)
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
		pSVar1 = CustomLogicStringBuiltin.Trim(pSVar1);
		return (object)pSVar1;
	}

	// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__Insert>b__15_0: clean
	private object Bindings_c____CreateMethodBinding__Insert_b__15_0(CustomLogicStringBuiltin __c, Object[] __a)
	{
		object obj;
		int index;
		String pSVar1;
		String insert;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			pSVar1 = CustomLogicEvaluator.ConvertTo<string>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				insert = CustomLogicEvaluator.ConvertTo<string>(__a[1]);
				if (2 < (uint)__a.Length) {
					index = CustomLogicEvaluator.ConvertTo<int>(__a[2]);
					pSVar1 = CustomLogicStringBuiltin.Insert(pSVar1, insert, index);
					return (object)pSVar1;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__Capitalize>b__16_0: clean
	private object Bindings_c____CreateMethodBinding__Capitalize_b__16_0(CustomLogicStringBuiltin __c, Object[] __a)
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
		pSVar1 = CustomLogicStringBuiltin.Capitalize(pSVar1);
		return (object)pSVar1;
	}

	// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToUpper>b__17_0: clean
	private object Bindings_c____CreateMethodBinding__ToUpper_b__17_0(CustomLogicStringBuiltin __c, Object[] __a)
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
		pSVar1 = CustomLogicStringBuiltin.ToUpper(pSVar1);
		return (object)pSVar1;
	}

	// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToLower>b__18_0: clean
	private object Bindings_c____CreateMethodBinding__ToLower_b__18_0(CustomLogicStringBuiltin __c, Object[] __a)
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
		pSVar1 = CustomLogicStringBuiltin.ToLower(pSVar1);
		return (object)pSVar1;
	}

	// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__IndexOf>b__19_0: clean
	private object Bindings_c____CreateMethodBinding__IndexOf_b__19_0(CustomLogicStringBuiltin __c, Object[] __a)
	{
		String str;
		String substring;
		object pIVar1;
		int iStack_1c;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			str = CustomLogicEvaluator.ConvertTo<string>(pIVar1);
			if ((__a.Length & 0xfffffffe) != 0) {
				substring = CustomLogicEvaluator.ConvertTo<string>(__a[1]);
				iStack_1c = CustomLogicStringBuiltin.IndexOf(str, substring);
				pIVar1 = (object)iStack_1c;
				return pIVar1;
			}
		}
		throw new IndexOutOfRangeException();
	}
}
