// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicListBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicListBuiltin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicListBuiltin.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000462")]
[CompilerGenerated]
internal class CustomLogicListBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x2000463")]
	public static class Factory
	{
		[Token(Token = "0x6001B72")]
		[Address(RVA = "0x58B2180", Offset = "0x58B1180", VA = "0x58B2180")]
		public static CustomLogicListBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicListBuiltin.c (CustomLogic.CustomLogicListBuiltin.Factory$$CreateInstance): 1 lines keep C-only constructs
			il2cpp_array_size_t iVar1;
			CustomLogicListBuiltin __this;

			if (args == null) {
				throw new NullReferenceException();
			}
			iVar1 = args.Length;
			if (iVar1 == 0) {
				__this = new CustomLogicListBuiltin();
			}
			else {
				__this = new CustomLogicListBuiltin(args);
			}
			return __this;
		}
	}

	[Token(Token = "0x2000464")]
	public static class Bindings
	{
		[Token(Token = "0x40015E2")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001B73")]
		[Address(RVA = "0x58B21F0", Offset = "0x58B11F0", VA = "0x58B21F0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicListBuiltin.c (CustomLogic.CustomLogicListBuiltin.Bindings$$CreateMemberBinding): 9 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLMethodBinding<CustomLogicListBuiltin> pCVar3;
			CLPropertyBinding<CustomLogicListBuiltin> pCVar4;
			String pSVar5;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x658f3665) {
				if (uVar2 < 0x28b19ea4) {
					if (uVar2 < 0xbd14ccd) {
						if (uVar2 == 0x4a57fc2) {
							bVar1 = (name == "Clear");
							if (bVar1) {
								pCVar3 = CustomLogicListBuiltin.Bindings.__CreateMethodBinding__Clear();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0xbd14ccc) {
							bVar1 = (name == "ToSet");
							if (bVar1) {
								pCVar3 = CustomLogicListBuiltin.Bindings.__CreateMethodBinding__ToSet();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x21a5901d) {
						bVar1 = (name == "Remove");
						if (bVar1) {
							pCVar3 = CustomLogicListBuiltin.Bindings.__CreateMethodBinding__Remove();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x28b19ea3) {
						bVar1 = (name == "Set");
						if (bVar1) {
							pCVar3 = CustomLogicListBuiltin.Bindings.__CreateMethodBinding__Set();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x486bbbe1) {
					if (uVar2 == 0x44a7f051) {
						bVar1 = (name == "Map");
						if (bVar1) {
							pCVar3 = CustomLogicListBuiltin.Bindings.__CreateMethodBinding__Map();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x486bbbe0) {
						bVar1 = (name == "RemoveAt");
						if (bVar1) {
							pCVar3 = CustomLogicListBuiltin.Bindings.__CreateMethodBinding__RemoveAt();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x4b0b408d) {
					bVar1 = (name == "InsertAt");
					if (bVar1) {
						pCVar3 = CustomLogicListBuiltin.Bindings.__CreateMethodBinding__InsertAt();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x658f3664) {
					bVar1 = (name == "Copy");
					if (bVar1) {
						pCVar3 = CustomLogicListBuiltin.Bindings.__CreateMethodBinding__Copy();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0x9dc3aa15) {
				if (uVar2 < 0x8459a7f2) {
					if (uVar2 == 0x8459a7f1) {
						bVar1 = (name == "Sort");
						if (bVar1) {
							pCVar3 = CustomLogicListBuiltin.Bindings.__CreateMethodBinding__Sort();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x669c4958) {
						bVar1 = (name == "Contains");
						if (bVar1) {
							pCVar3 = CustomLogicListBuiltin.Bindings.__CreateMethodBinding__Contains();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x9450dd5c) {
					bVar1 = (name == "Randomize");
					if (bVar1) {
						pCVar3 = CustomLogicListBuiltin.Bindings.__CreateMethodBinding__Randomize();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x9dc3aa14) {
					bVar1 = (name == "Add");
					if (bVar1) {
						pCVar3 = CustomLogicListBuiltin.Bindings.__CreateMethodBinding__Add() ;
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xb6973ef8) {
				if (uVar2 == 0xa42c4e6a) {
					bVar1 = (name == "SortCustom");
					if (bVar1) {
						pCVar3 = CustomLogicListBuiltin.Bindings.__CreateMethodBinding__SortCustom();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xb6973ef7) {
					bVar1 = (name == "Get");
					if (bVar1) {
						pCVar3 = CustomLogicListBuiltin.Bindings.__CreateMethodBinding__Get() ;
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xbd680907) {
				bVar1 = (name == "Reduce");
				if (bVar1) {
					if ((typeof(CustomLogicListBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						il2cpp_codegen_runtime_class_init(typeof(CustomLogicListBuiltin.Bindings)) ;
					}
					pCVar3 = CustomLogicListBuiltin.Bindings.__CreateMethodBinding__Reduce();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xf4a9c097) {
				bVar1 = (name == "Filter");
				if (bVar1) {
					if ((typeof(CustomLogicListBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						il2cpp_codegen_runtime_class_init(typeof(CustomLogicListBuiltin.Bindings)) ;
					}
					pCVar3 = CustomLogicListBuiltin.Bindings.__CreateMethodBinding__Filter();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xe1e7b894) {
				bVar1 = (name == "Count");
				if (bVar1) {
					if ((typeof(CustomLogicListBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						il2cpp_codegen_runtime_class_init(typeof(CustomLogicListBuiltin.Bindings)) ;
					}
					pCVar4 = CustomLogicListBuiltin.Bindings.__CreatePropertyBinding__Count();
					return (ICLMemberBinding)pCVar4;
				}
			}
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicListBuiltin not found");
			pSVar5 = String.Concat(pSVar5, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6001B74")]
		[Address(RVA = "0x58B2890", Offset = "0x58B1890", VA = "0x58B2890")]
		public static CLPropertyBinding<CustomLogicListBuiltin> __CreatePropertyBinding__Count()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicListBuiltin.c (CustomLogic.CustomLogicListBuiltin.Bindings$$__CreatePropertyBinding__Count): 3 lines keep C-only constructs
			Func<CustomLogicListBuiltin, object> __this;
			CLPropertyBinding<CustomLogicListBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545b49 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(CLPropertyBinding<CustomLogicListBuiltin>)) ;
				Il2CppMethodInitialized_07545b49 = true;
			}
			__this = new Func<CustomLogicListBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings___CreatePropertyBinding__Count_g____getter_2_0);
			__this_00 = new CLPropertyBinding<CustomLogicListBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001B75")]
		[Address(RVA = "0x58B2930", Offset = "0x58B1930", VA = "0x58B2930")]
		public static CLMethodBinding<CustomLogicListBuiltin> __CreateMethodBinding__Clear()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicListBuiltin.c (CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Clear): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicListBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicListBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicListBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545b4a == false) {
				Il2CppMethodInitialized_07545b4a = true;
				uVar1 = (typeof(CustomLogicListBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicListBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicListBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__3_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicListBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__3_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicListBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicListBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicListBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicListBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Clear_b__3_0);
				pCVar2 = typeof(CustomLogicListBuiltin.Bindings.c).static_fields;
				pCVar2.__9__3_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicListBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001B76")]
		[Address(RVA = "0x58B2A70", Offset = "0x58B1A70", VA = "0x58B2A70")]
		public static CLMethodBinding<CustomLogicListBuiltin> __CreateMethodBinding__Get()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicListBuiltin.c (CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Get): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicListBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicListBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicListBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545b4b == false) {
				Il2CppMethodInitialized_07545b4b = true;
				uVar1 = (typeof(CustomLogicListBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicListBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicListBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__4_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicListBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__4_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicListBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicListBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicListBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicListBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Get_b__4_0);
				pCVar2 = typeof(CustomLogicListBuiltin.Bindings.c).static_fields;
				pCVar2.__9__4_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicListBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001B77")]
		[Address(RVA = "0x58B2BB0", Offset = "0x58B1BB0", VA = "0x58B2BB0")]
		public static CLMethodBinding<CustomLogicListBuiltin> __CreateMethodBinding__Set()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicListBuiltin.c (CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Set): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicListBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicListBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicListBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545b4c == false) {
				Il2CppMethodInitialized_07545b4c = true;
				uVar1 = (typeof(CustomLogicListBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicListBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicListBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__5_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicListBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__5_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicListBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicListBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicListBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicListBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Set_b__5_0);
				pCVar2 = typeof(CustomLogicListBuiltin.Bindings.c).static_fields;
				pCVar2.__9__5_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicListBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001B78")]
		[Address(RVA = "0x58B2CF0", Offset = "0x58B1CF0", VA = "0x58B2CF0")]
		public static CLMethodBinding<CustomLogicListBuiltin> __CreateMethodBinding__Add()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicListBuiltin.c (CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Add): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicListBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicListBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicListBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545b4d == false) {
				Il2CppMethodInitialized_07545b4d = true;
				uVar1 = (typeof(CustomLogicListBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicListBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicListBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__6_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicListBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__6_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicListBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicListBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicListBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicListBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Add_b__6_0);
				pCVar2 = typeof(CustomLogicListBuiltin.Bindings.c).static_fields;
				pCVar2.__9__6_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicListBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001B79")]
		[Address(RVA = "0x58B2E30", Offset = "0x58B1E30", VA = "0x58B2E30")]
		public static CLMethodBinding<CustomLogicListBuiltin> __CreateMethodBinding__InsertAt()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicListBuiltin.c (CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__InsertAt): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicListBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicListBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicListBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545b4e == false) {
				Il2CppMethodInitialized_07545b4e = true;
				uVar1 = (typeof(CustomLogicListBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicListBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicListBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__7_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicListBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__7_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicListBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicListBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicListBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicListBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__InsertAt_b__7_0);
				pCVar2 = typeof(CustomLogicListBuiltin.Bindings.c).static_fields;
				pCVar2.__9__7_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicListBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001B7A")]
		[Address(RVA = "0x58B2F70", Offset = "0x58B1F70", VA = "0x58B2F70")]
		public static CLMethodBinding<CustomLogicListBuiltin> __CreateMethodBinding__RemoveAt()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicListBuiltin.c (CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__RemoveAt): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicListBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicListBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicListBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545b4f == false) {
				Il2CppMethodInitialized_07545b4f = true;
				uVar1 = (typeof(CustomLogicListBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicListBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicListBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__8_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicListBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__8_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicListBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicListBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicListBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicListBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__RemoveAt_b__8_0);
				pCVar2 = typeof(CustomLogicListBuiltin.Bindings.c).static_fields;
				pCVar2.__9__8_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicListBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001B7B")]
		[Address(RVA = "0x58B30B0", Offset = "0x58B20B0", VA = "0x58B30B0")]
		public static CLMethodBinding<CustomLogicListBuiltin> __CreateMethodBinding__Remove()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicListBuiltin.c (CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Remove): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicListBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicListBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicListBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545b50 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Remove_b__9_0) ;
				Il2CppMethodInitialized_07545b50 = true;
				uVar1 = (typeof(CustomLogicListBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicListBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicListBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__9_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicListBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__9_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicListBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicListBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicListBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicListBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Remove_b__9_0);
				pCVar2 = typeof(CustomLogicListBuiltin.Bindings.c).static_fields;
				pCVar2.__9__9_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicListBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001B7C")]
		[Address(RVA = "0x58B31F0", Offset = "0x58B21F0", VA = "0x58B31F0")]
		public static CLMethodBinding<CustomLogicListBuiltin> __CreateMethodBinding__Contains()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicListBuiltin.c (CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Contains): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicListBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicListBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicListBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545b51 == false) {
				Il2CppMethodInitialized_07545b51 = true;
				uVar1 = (typeof(CustomLogicListBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicListBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicListBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__10_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicListBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__10_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicListBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicListBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicListBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicListBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Contains_b__10_0);
				pCVar2 = typeof(CustomLogicListBuiltin.Bindings.c).static_fields;
				pCVar2.__9__10_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicListBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001B7D")]
		[Address(RVA = "0x58B3330", Offset = "0x58B2330", VA = "0x58B3330")]
		public static CLMethodBinding<CustomLogicListBuiltin> __CreateMethodBinding__Sort()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicListBuiltin.c (CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Sort): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicListBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicListBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicListBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545b52 == false) {
				Il2CppMethodInitialized_07545b52 = true;
				uVar1 = (typeof(CustomLogicListBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicListBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicListBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__11_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicListBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__11_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicListBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicListBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicListBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicListBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Sort_b__11_0);
				pCVar2 = typeof(CustomLogicListBuiltin.Bindings.c).static_fields;
				pCVar2.__9__11_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicListBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001B7E")]
		[Address(RVA = "0x58B3470", Offset = "0x58B2470", VA = "0x58B3470")]
		public static CLMethodBinding<CustomLogicListBuiltin> __CreateMethodBinding__SortCustom()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicListBuiltin.c (CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__SortCustom): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicListBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicListBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicListBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545b53 == false) {
				Il2CppMethodInitialized_07545b53 = true;
				uVar1 = (typeof(CustomLogicListBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicListBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicListBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__12_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicListBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__12_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicListBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicListBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicListBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicListBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__SortCustom_b__12_0);
				pCVar2 = typeof(CustomLogicListBuiltin.Bindings.c).static_fields;
				pCVar2.__9__12_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicListBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001B7F")]
		[Address(RVA = "0x58B35B0", Offset = "0x58B25B0", VA = "0x58B35B0")]
		public static CLMethodBinding<CustomLogicListBuiltin> __CreateMethodBinding__Filter()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicListBuiltin.c (CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Filter): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicListBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicListBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicListBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545b54 == false) {
				Il2CppMethodInitialized_07545b54 = true;
				uVar1 = (typeof(CustomLogicListBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicListBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicListBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__13_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicListBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__13_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicListBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicListBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicListBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicListBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Filter_b__13_0);
				pCVar2 = typeof(CustomLogicListBuiltin.Bindings.c).static_fields;
				pCVar2.__9__13_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicListBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001B80")]
		[Address(RVA = "0x58B36F0", Offset = "0x58B26F0", VA = "0x58B36F0")]
		public static CLMethodBinding<CustomLogicListBuiltin> __CreateMethodBinding__Map()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicListBuiltin.c (CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Map): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicListBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicListBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicListBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545b55 == false) {
				Il2CppMethodInitialized_07545b55 = true;
				uVar1 = (typeof(CustomLogicListBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicListBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicListBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__14_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicListBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__14_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicListBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicListBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicListBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicListBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Map_b__14_0);
				pCVar2 = typeof(CustomLogicListBuiltin.Bindings.c).static_fields;
				pCVar2.__9__14_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicListBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001B81")]
		[Address(RVA = "0x58B3830", Offset = "0x58B2830", VA = "0x58B3830")]
		public static CLMethodBinding<CustomLogicListBuiltin> __CreateMethodBinding__Reduce()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicListBuiltin.c (CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Reduce): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicListBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicListBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicListBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545b56 == false) {
				Il2CppMethodInitialized_07545b56 = true;
				uVar1 = (typeof(CustomLogicListBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicListBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicListBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__15_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicListBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__15_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicListBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicListBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicListBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicListBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Reduce_b__15_0);
				pCVar2 = typeof(CustomLogicListBuiltin.Bindings.c).static_fields;
				pCVar2.__9__15_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicListBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001B82")]
		[Address(RVA = "0x58B3970", Offset = "0x58B2970", VA = "0x58B3970")]
		public static CLMethodBinding<CustomLogicListBuiltin> __CreateMethodBinding__Randomize()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicListBuiltin.c (CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Randomize): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicListBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicListBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicListBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545b57 == false) {
				Il2CppMethodInitialized_07545b57 = true;
				uVar1 = (typeof(CustomLogicListBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicListBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicListBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__16_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicListBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__16_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicListBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicListBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicListBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicListBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Randomize_b__16_0);
				pCVar2 = typeof(CustomLogicListBuiltin.Bindings.c).static_fields;
				pCVar2.__9__16_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicListBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001B83")]
		[Address(RVA = "0x58B3AB0", Offset = "0x58B2AB0", VA = "0x58B3AB0")]
		public static CLMethodBinding<CustomLogicListBuiltin> __CreateMethodBinding__ToSet()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicListBuiltin.c (CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__ToSet): 4 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicListBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicListBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicListBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545b58 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__ToSet_b__17_0) ;
				Il2CppMethodInitialized_07545b58 = true;
				uVar1 = (typeof(CustomLogicListBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicListBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicListBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__17_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicListBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__17_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicListBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicListBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicListBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicListBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__ToSet_b__17_0);
				pCVar2 = typeof(CustomLogicListBuiltin.Bindings.c).static_fields;
				pCVar2.__9__17_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicListBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001B84")]
		[Address(RVA = "0x58B3BF0", Offset = "0x58B2BF0", VA = "0x58B3BF0")]
		public static CLMethodBinding<CustomLogicListBuiltin> __CreateMethodBinding__Copy()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicListBuiltin.c (CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Copy): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicListBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicListBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicListBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545b59 == false) {
				Il2CppMethodInitialized_07545b59 = true;
				uVar1 = (typeof(CustomLogicListBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicListBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicListBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__18_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicListBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__18_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicListBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					il2cpp_codegen_runtime_class_init(typeof(CustomLogicListBuiltin.Bindings.c)) ;
					pCVar2 = typeof(CustomLogicListBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicListBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Copy_b__18_0);
				pCVar2 = typeof(CustomLogicListBuiltin.Bindings.c).static_fields;
				pCVar2.__9__18_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicListBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x40015E0")]
	[FieldOffset(Offset = "0x30")]
	public List<object> List;

	[Token(Token = "0x40015E1")]
	[FieldOffset(Offset = "0x38")]
	private readonly bool _isReadOnly;

	[Token(Token = "0x170002F8")]
	public int Count
	{
		[Token(Token = "0x6001B5C")]
		[Address(RVA = "0x58B0FC0", Offset = "0x58AFFC0", VA = "0x58B0FC0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicListBuiltin.c (CustomLogic.CustomLogicListBuiltin$$get_Count): clean
			List<object> pSVar1;

			pSVar1 = this.List;
			if (pSVar1 == null) {
				throw new NullReferenceException();
			}
			return pSVar1._size;
		}
	}

	[Token(Token = "0x170002F9")]
	public override string ClassName
	{
		[Token(Token = "0x6001B6E")]
		[Address(RVA = "0x58B2120", Offset = "0x58B1120", VA = "0x58B2120", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicListBuiltin.c (CustomLogic.CustomLogicListBuiltin$$get_ClassName): clean
			return "List";
		}
	}

	[Token(Token = "0x170002FA")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001B6F")]
		[Address(RVA = "0x58B2150", Offset = "0x58B1150", VA = "0x58B2150", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicListBuiltin.c (CustomLogic.CustomLogicListBuiltin$$get_IsAbstract): clean
			return false;
		}
	}

	[Token(Token = "0x170002FB")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001B70")]
		[Address(RVA = "0x58B2160", Offset = "0x58B1160", VA = "0x58B2160", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicListBuiltin.c (CustomLogic.CustomLogicListBuiltin$$get_IsStatic): clean
			return false;
		}
	}

	[Token(Token = "0x170002FC")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001B71")]
		[Address(RVA = "0x58B2170", Offset = "0x58B1170", VA = "0x58B2170", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicListBuiltin.c (CustomLogic.CustomLogicListBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6001B59")]
	[Address(RVA = "0x58B0DD0", Offset = "0x58AFDD0", VA = "0x58B0DD0")]
	public CustomLogicListBuiltin()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicListBuiltin.c (CustomLogic.CustomLogicListBuiltin$$.ctor): clean
		List<object> __this_00;

		__this_00 = new List<object>();
		this.List = __this_00;
		base();
		return;
	}

	[Token(Token = "0x6001B5A")]
	[Address(RVA = "0x58B0E70", Offset = "0x58AFE70", VA = "0x58B0E70")]
	public CustomLogicListBuiltin(params object[] parameterValues)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicListBuiltin.c (CustomLogic.CustomLogicListBuiltin$$.ctor): 4 lines keep C-only constructs
		List<object>* targetAddress;
		int piVar1;
		uint uVar2;
		object item;
		Object[] pSVar3;
		List<object> pSVar5;
		ulong uVar6;
		ulong uVar7;

		pSVar5 = new List<object>();
		targetAddress = &this.List;
		this.List = pSVar5;
		base();
		if (parameterValues == null) {
	label_059b0fb3: ;
			throw new NullReferenceException();
		}
		if (0 < (int)parameterValues.Length) {
			uVar6 = parameterValues.Length & 0xffffffff;
			uVar7 = 0;
			do {
				if (uVar6 <= uVar7) {
					throw new IndexOutOfRangeException();
				}
				pSVar5 = *targetAddress;
				if (pSVar5 == null) goto label_059b0fb3;
				item = parameterValues[uVar7];
				piVar1 = &pSVar5._version;
				*piVar1 = *piVar1 + 1;
				pSVar3 = pSVar5._items;
				if (pSVar3 == null) goto label_059b0fb3;
				uVar2 = pSVar5._size;
				if (uVar2 < (uint)pSVar3.Length) {
					pSVar5._size = uVar2 + 1;
					pSVar3[(int)uVar2] = item;
				}
				else {
					pSVar5.AddWithResize(item);
				}
				uVar7 = uVar7 + 1;
				uVar2 = (uint)parameterValues.Length;
				uVar6 = (ulong)uVar2;
			} while ((long)uVar7 < (long)(int)uVar2);
		}
		return;
	}

	[Token(Token = "0x6001B5B")]
	[Address(RVA = "0x58AE130", Offset = "0x58AD130", VA = "0x58AE130")]
	public CustomLogicListBuiltin(IEnumerable<object> enumerable, bool isReadOnly = false)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicListBuiltin.c (CustomLogic.CustomLogicListBuiltin$$.ctor): 1 lines keep C-only constructs
		List<object>* targetAddress;
		List<object> pSVar1;

		pSVar1 = new List<object>();
		targetAddress = &this.List;
		this.List = pSVar1;
		base();
		pSVar1 = new List<object>((IEnumerable<T>)enumerable);
		this.List = pSVar1;
		this._isReadOnly = isReadOnly;
		return;
	}

	[Token(Token = "0x6001B5D")]
	[Address(RVA = "0x58B1000", Offset = "0x58B0000", VA = "0x58B1000")]
	public void Clear()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicListBuiltin.c (CustomLogic.CustomLogicListBuiltin$$Clear): 7 lines keep C-only constructs
		int piVar1;
		int length;
		List<object> pSVar2;
		Il2CppClass klass;
		Exception __this_00;
		String message;
		MethodInfo lastManagedFrame;

		if (this._isReadOnly != false) {
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this_00 = (Exception)il2cpp_codegen_object_new(klass);
			message = il2cpp_codegen_get_runtime_metadata(&"Cannot modify a read-only list.");
			__this_00 = new Exception(message);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicListBuiltin_Clear);
			throw (object)__this_00;
		}
		pSVar2 = this.List;
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		piVar1 = &pSVar2._version;
		*piVar1 = *piVar1 + 1;
		length = pSVar2._size;
		pSVar2._size = 0;
		if (length < 1) {
			return;
		}
		Array.Clear((Array)pSVar2._items, 0, length);
		return;
	}

	[Token(Token = "0x6001B5E")]
	[Address(RVA = "0x58B10A0", Offset = "0x58B00A0", VA = "0x58B10A0")]
	public object Get(int index)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicListBuiltin.c (CustomLogic.CustomLogicListBuiltin$$Get): clean
		List<object> __this_00;
		object pIVar1;

		__this_00 = this.List;
		if (index < 0) {
			if (__this_00 != null) {
				index = index + __this_00._size;
				goto label_059b10e8;
			}
		}
		else if (__this_00 != null) {
	label_059b10e8: ;
			return pIVar1;
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001B5F")]
	[Address(RVA = "0x58B1110", Offset = "0x58B0110", VA = "0x58B1110")]
	public void Set(int index, object value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicListBuiltin.c (CustomLogic.CustomLogicListBuiltin$$Set): 5 lines keep C-only constructs
		List<object> __this_00;
		Il2CppClass klass;
		Exception __this_01;
		String message;
		MethodInfo lastManagedFrame;

		if (this._isReadOnly != false) {
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this_01 = (Exception)il2cpp_codegen_object_new(klass);
			message = il2cpp_codegen_get_runtime_metadata(&"Cannot modify a read-only list.");
			__this_01 = new Exception(message);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicListBuiltin_Set) ;
			throw (object)__this_01;
		}
		__this_00 = this.List;
		if (index < 0) {
			if (__this_00 != null) {
				index = index + __this_00._size;
				goto label_059b1161;
			}
		}
		else if (__this_00 != null) {
	label_059b1161: ;
			__this_00.set_Item(index, value);
			return;
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001B60")]
	[Address(RVA = "0x58B11D0", Offset = "0x58B01D0", VA = "0x58B11D0")]
	public void Add(object value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicListBuiltin.c (CustomLogic.CustomLogicListBuiltin$$Add): 7 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<object> __this_00;
		Object[] pSVar3;
		Il2CppClass klass;
		Exception __this_01;
		String message;
		MethodInfo pMVar4;

		if (this._isReadOnly != false) {
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this_01 = (Exception)il2cpp_codegen_object_new(klass);
			message = il2cpp_codegen_get_runtime_metadata(&"Cannot modify a read-only list.");
			__this_01 = new Exception(message);
			pMVar4 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicListBuiltin_Add);
			throw (object)__this_01;
		}
		__this_00 = this.List;
		if (__this_00 != null) {
			piVar1 = &__this_00._version;
			*piVar1 = *piVar1 + 1;
			pSVar3 = __this_00._items;
			if (pSVar3 != null) {
				uVar2 = __this_00._size;
				if (uVar2 < (uint)pSVar3.Length) {
					__this_00._size = uVar2 + 1;
					pSVar3[(int)uVar2] = value;
					return;
				}
				__this_00.AddWithResize(value);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001B61")]
	[Address(RVA = "0x58B12B0", Offset = "0x58B02B0", VA = "0x58B12B0")]
	public void InsertAt(int index, object value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicListBuiltin.c (CustomLogic.CustomLogicListBuiltin$$InsertAt): 5 lines keep C-only constructs
		List<object> __this_00;
		Il2CppClass klass;
		Exception __this_01;
		String message;
		MethodInfo lastManagedFrame;

		if (this._isReadOnly != false) {
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this_01 = (Exception)il2cpp_codegen_object_new(klass);
			message = il2cpp_codegen_get_runtime_metadata(&"Cannot modify a read-only list.");
			__this_01 = new Exception(message);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicListBuiltin_InsertAt);
			throw (object)__this_01;
		}
		__this_00 = this.List;
		if (index < 0) {
			if (__this_00 != null) {
				index = index + __this_00._size;
				goto label_059b1301;
			}
		}
		else if (__this_00 != null) {
	label_059b1301: ;
			__this_00.Insert(index, value);
			return;
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001B62")]
	[Address(RVA = "0x58B1370", Offset = "0x58B0370", VA = "0x58B1370")]
	public void RemoveAt(int index)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicListBuiltin.c (CustomLogic.CustomLogicListBuiltin$$RemoveAt): 5 lines keep C-only constructs
		List<object> __this_00;
		Il2CppClass klass;
		Exception __this_01;
		String message;
		MethodInfo lastManagedFrame;

		if (this._isReadOnly != false) {
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this_01 = (Exception)il2cpp_codegen_object_new(klass);
			message = il2cpp_codegen_get_runtime_metadata(&"Cannot modify a read-only list.");
			__this_01 = new Exception(message);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicListBuiltin_RemoveAt);
			throw (object)__this_01;
		}
		__this_00 = this.List;
		if (index < 0) {
			if (__this_00 != null) {
				index = index + __this_00._size;
				goto label_059b13bd;
			}
		}
		else if (__this_00 != null) {
	label_059b13bd: ;
			__this_00.RemoveAt(index);
			return;
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001B63")]
	[Address(RVA = "0x58B1420", Offset = "0x58B0420", VA = "0x58B1420")]
	public void Remove(object value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicListBuiltin.c (CustomLogic.CustomLogicListBuiltin$$Remove): 5 lines keep C-only constructs
		List<object> __this_00;
		Il2CppClass klass;
		Exception __this_01;
		String message;
		MethodInfo lastManagedFrame;

		if (this._isReadOnly != false) {
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this_01 = (Exception)il2cpp_codegen_object_new(klass);
			message = il2cpp_codegen_get_runtime_metadata(&"Cannot modify a read-only list.");
			__this_01 = new Exception(message);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicListBuiltin_Remove);
			throw (object)__this_01;
		}
		__this_00 = this.List;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Remove(value);
		return;
	}

	[Token(Token = "0x6001B64")]
	[Address(RVA = "0x58B14C0", Offset = "0x58B04C0", VA = "0x58B14C0")]
	public bool Contains(object value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicListBuiltin.c (CustomLogic.CustomLogicListBuiltin$$Contains): 2 lines keep C-only constructs
		List<object> source;
		bool bVar1;
		CustomLogicListBuiltin.c__DisplayClass14_0 __this_00;
		Func<object, bool> __this_01;

		__this_00 = new CustomLogicListBuiltin.c__DisplayClass14_0();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.value = value;
		source = this.List;
		__this_01 = new Func<object, bool>((object)__this_00, (intptr_t)MethodInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass14_0_Contains_b__0);
		bVar1 = Enumerable.Any<object>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_01);
		return bVar1;
	}

	[Token(Token = "0x6001B65")]
	[Address(RVA = "0x58B15A0", Offset = "0x58B05A0", VA = "0x58B15A0")]
	public void Sort()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicListBuiltin.c (CustomLogic.CustomLogicListBuiltin$$Sort): 5 lines keep C-only constructs
		List<object> __this_00;
		Il2CppClass klass;
		Exception __this_01;
		String message;
		MethodInfo lastManagedFrame;

		if (this._isReadOnly != false) {
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this_01 = (Exception)il2cpp_codegen_object_new(klass);
			message = il2cpp_codegen_get_runtime_metadata(&"Cannot modify a read-only list.");
			__this_01 = new Exception(message);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicListBuiltin_Sort);
			throw (object)__this_01;
		}
		__this_00 = this.List;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Sort();
		return;
	}

	[Token(Token = "0x6001B66")]
	[Address(RVA = "0x58B1630", Offset = "0x58B0630", VA = "0x58B1630")]
	public void SortCustom(UserMethod method)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicListBuiltin.c (CustomLogic.CustomLogicListBuiltin$$SortCustom): 6 lines keep C-only constructs
		List<object> __this_00;
		CustomLogicListBuiltin.c__DisplayClass16_0 __this_01;
		Comparison<T> comparison;
		Il2CppClass klass;
		Exception __this_02;
		String message;
		MethodInfo lastManagedFrame;

		__this_01 = new CustomLogicListBuiltin.c__DisplayClass16_0();
		if (__this_01 != null) {
			__this_01.method = method;
			if (this._isReadOnly != false) {
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this_02 = (Exception)il2cpp_codegen_object_new(klass);
				message = il2cpp_codegen_get_runtime_metadata(&"Cannot modify a read-only list.");
				__this_02 = new Exception(message);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicListBuiltin_SortCustom);
				throw (object)__this_02;
			}
			__this_00 = this.List;
			comparison = new Comparison<object>((object)__this_01, (intptr_t)MethodInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass16_0_SortCustom_b__0);
			if (__this_00 != null) {
				__this_00.Sort(comparison);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001B67")]
	[Address(RVA = "0x58B1760", Offset = "0x58B0760", VA = "0x58B1760")]
	public CustomLogicListBuiltin Filter(UserMethod method)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicListBuiltin.c (CustomLogic.CustomLogicListBuiltin$$Filter): 4 lines keep C-only constructs
		List<object> source;
		CustomLogicListBuiltin.c__DisplayClass17_0 __this_00;
		CustomLogicListBuiltin __this_01;
		Func<object, bool> __this_02;
		System_Collections_Generic_IEnumerable_TSource__o source_00;
		System_Collections_Generic_List_TSource__o pSVar1;

		__this_00 = new CustomLogicListBuiltin.c__DisplayClass17_0();
		if (__this_00 != null) {
			__this_00.method = method;
			__this_01 = new CustomLogicListBuiltin();
			source = this.List;
			__this_02 = new Func<object, bool>((object)__this_00, (intptr_t)MethodInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass17_0_Filter_b__0);
			source_00 = Enumerable.Where<object>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_02);
			pSVar1 = Enumerable.ToList<object>(source_00);
			if (__this_01 != null) {
				__this_01.List = (List<object>)pSVar1;
				return __this_01;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001B68")]
	[Address(RVA = "0x58B18B0", Offset = "0x58B08B0", VA = "0x58B18B0")]
	public CustomLogicListBuiltin Map(UserMethod method)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicListBuiltin.c (CustomLogic.CustomLogicListBuiltin$$Map): 5 lines keep C-only constructs
		List<object> source;
		CustomLogicListBuiltin.c__DisplayClass18_0 __this_00;
		CustomLogicListBuiltin __this_01;
		Func<object, object> __this_02;
		System_Collections_Generic_IEnumerable_TResult__o source_00;
		System_Collections_Generic_List_TSource__o pSVar1;

		__this_00 = new CustomLogicListBuiltin.c__DisplayClass18_0();
		if (__this_00 != null) {
			__this_00.method = method;
			__this_01 = new CustomLogicListBuiltin();
			source = this.List;
			__this_02 = new Func<object, object>((object)__this_00, (intptr_t)MethodInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass18_0_Map_b__0);
			source_00 = Enumerable.Select<object, object>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__TResult__o)__this_02);
			pSVar1 = Enumerable.ToList<object>((System_Collections_Generic_IEnumerable_TSource__o)source_00);
			if (__this_01 != null) {
				__this_01.List = (List<object>)pSVar1;
				return __this_01;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001B69")]
	[Address(RVA = "0x58B1A00", Offset = "0x58B0A00", VA = "0x58B1A00")]
	public object Reduce(UserMethod method, object initialValue)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicListBuiltin.c (CustomLogic.CustomLogicListBuiltin$$Reduce): 2 lines keep C-only constructs
		List<object> source;
		CustomLogicListBuiltin.c__DisplayClass19_0 __this_00;
		Func<object, object, object> __this_01;
		object pIVar1;

		__this_00 = new CustomLogicListBuiltin.c__DisplayClass19_0();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.method = method;
		source = this.List;
		__this_01 = new Func<object, object, object>((object)__this_00, (intptr_t)MethodInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass19_0_Reduce_b__0);
		pIVar1 = Enumerable.Aggregate<object, object>((System_Collections_Generic_IEnumerable_TSource__o)source, initialValue, (System_Func_TAccumulate__TSource__TAccumulate__o)__this_01);
		return pIVar1;
	}

	[Token(Token = "0x6001B6A")]
	[Address(RVA = "0x58B1AF0", Offset = "0x58B0AF0", VA = "0x58B1AF0")]
	public CustomLogicListBuiltin Randomize()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicListBuiltin.c (CustomLogic.CustomLogicListBuiltin$$Randomize): 5 lines keep C-only constructs
		List<object> source;
		CustomLogicListBuiltin.c__DisplayClass20_0 __this_00;
		CustomLogicListBuiltin __this_01;
		Random __this_02;
		Func<object, int> __this_03;
		System_Linq_IOrderedEnumerable_TSource__o source_00;
		System_Collections_Generic_List_TSource__o pSVar1;

		__this_00 = new CustomLogicListBuiltin.c__DisplayClass20_0();
		__this_01 = new CustomLogicListBuiltin();
		__this_02 = new Random();
		if (__this_00 != null) {
			__this_00.r = __this_02;
			source = this.List;
			__this_03 = new Func<object, int>((object)__this_00, (intptr_t)MethodInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass20_0_Randomize_b__0);
			source_00 = Enumerable.OrderBy<object, int>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__TKey__o)__this_03);
			pSVar1 = Enumerable.ToList<object>((System_Collections_Generic_IEnumerable_TSource__o)source_00);
			if (__this_01 != null) {
				__this_01.List = (List<object>)pSVar1;
				return __this_01;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001B6B")]
	[Address(RVA = "0x58B1C60", Offset = "0x58B0C60", VA = "0x58B1C60")]
	public CustomLogicSetBuiltin ToSet()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicListBuiltin.c (CustomLogic.CustomLogicListBuiltin$$ToSet): 5 lines keep C-only constructs
		List<object> __this_00;
		HashSet<object> __this_01;
		System_Collections_Generic_List_Enumerator_T__o pSVar1;
		bool bVar2;
		CustomLogicSetBuiltin __this_02;
		System_Collections_Generic_List_Enumerator_T__o local_48;
		byte local_28;

		local_48._list = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		__this_02 = new CustomLogicSetBuiltin();
		local_28 = (byte)&local_48;
		__this_00 = this.List;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		local_48 = __this_00.GetEnumerator();
		pSVar1 = &local_48;
		if (__this_02 == null) {
			bVar2 = local_48.MoveNext();
			if (bVar2) {
				throw new NullReferenceException();
			}
		}
		else {
			while (true) {
				local_28 = (byte)pSVar1;
				bVar2 = local_48.MoveNext();
				if (!(bVar2)) break;
				__this_01 = __this_02.Set;
				if (__this_01 == null) {
					throw new NullReferenceException();
				}
				__this_01.Add(local_48._current);
				pSVar1 = (System_Collections_Generic_List_Enumerator_T__o)local_28;
			}
		}
		local_48.Dispose();
		return __this_02;
	}

	[Token(Token = "0x6001B6C")]
	[Address(RVA = "0x58B1EB0", Offset = "0x58B0EB0", VA = "0x58B1EB0")]
	public CustomLogicListBuiltin Copy()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicListBuiltin.c (CustomLogic.CustomLogicListBuiltin$$Copy): 2 lines keep C-only constructs
		CustomLogicListBuiltin __this_00;
		System_Collections_Generic_List_TSource__o pSVar1;

		__this_00 = new CustomLogicListBuiltin();
		pSVar1 = Enumerable.ToList<object>((System_Collections_Generic_IEnumerable_TSource__o)this.List);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.List = (List<object>)pSVar1;
		return __this_00;
	}

	[Token(Token = "0x6001B6D")]
	[Address(RVA = "0x58B1F40", Offset = "0x58B0F40", VA = "0x58B1F40", Slot = "3")]
	public override string ToString()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicListBuiltin.c (CustomLogic.CustomLogicListBuiltin$$ToString): 1 lines keep C-only constructs
		StringBuilder __this_00;
		String pSVar1;
		object value;
		int index;
		List<object> pSVar2;

		__this_00 = new StringBuilder();
		if (__this_00 != null) {
			index = 0;
			__this_00.Append("[");
			pSVar2 = this.List;
			while (pSVar2 != null) {
				if (pSVar2._size <= index) {
					__this_00.Append("]");
					pSVar1 = __this_00.ToString();
					return pSVar1;
				}
				pSVar1 = (String)pSVar2.get_Item(index);
				if ((pSVar1 == null) || (pSVar1.klass != g_data_07556758)) {
					pSVar2 = this.List;
					if (pSVar2 == null) break;
					value = pSVar2.get_Item(index);
					__this_00.Append(value);
					pSVar2 = this.List;
				}
				else {
					pSVar1 = String.Concat("\"", pSVar1, "\"");
					__this_00.Append(pSVar1);
					pSVar2 = this.List;
				}
				if (pSVar2 == null) break;
				if (index != pSVar2._size + -1) {
					__this_00.Append(", ");
					pSVar2 = this.List;
				}
				index = index + 1;
			}
		}
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicListBuiltin.c.

	// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass14_0$$.ctor: clean
	private void c__DisplayClass14_0__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass16_0$$.ctor: clean
	private void c__DisplayClass16_0__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass17_0$$.ctor: clean
	private void c__DisplayClass17_0__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass18_0$$.ctor: clean
	private void c__DisplayClass18_0__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass19_0$$.ctor: clean
	private void c__DisplayClass19_0__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass20_0$$.ctor: clean
	private void c__DisplayClass20_0__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicListBuiltin.Bindings$$.cctor: 1 lines keep C-only constructs
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Count");
		__this.Add((Il2CppObject *)"Clear");
		__this.Add((Il2CppObject *)"Get");
		__this.Add((Il2CppObject *)"Set");
		__this.Add((Il2CppObject *)"Add");
		__this.Add((Il2CppObject *)"InsertAt");
		__this.Add((Il2CppObject *)"RemoveAt");
		__this.Add((Il2CppObject *)"Remove");
		__this.Add((Il2CppObject *)"Contains");
		__this.Add((Il2CppObject *)"Sort");
		__this.Add((Il2CppObject *)"SortCustom");
		__this.Add((Il2CppObject *)"Filter");
		__this.Add((Il2CppObject *)"Map");
		__this.Add((Il2CppObject *)"Reduce");
		__this.Add((Il2CppObject *)"Randomize");
		__this.Add((Il2CppObject *)"ToSet");
		__this.Add((Il2CppObject *)"Copy");
		CustomLogicListBuiltin.Bindings.MemberNames = __this;
		Il2CppCodeGenWriteBarrier(&CustomLogicListBuiltin.Bindings.MemberNames) ;
		return;
	}

	// CustomLogic.CustomLogicListBuiltin.Bindings$$<__CreatePropertyBinding__Count>g____getter|2_0: 1 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__Count_g____getter_2_0(CustomLogicListBuiltin __i)
	{
		List<object> pSVar1;
		object pIVar2;

		if (__i != null) {
			if (Il2CppMethodInitialized_07545b34 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_get_Count) ;
				Il2CppMethodInitialized_07545b34 = true;
			}
			pSVar1 = __i.List;
			if (pSVar1 != null) {
				return pIVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$.cctor: clean
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = new CustomLogicListBuiltin.Bindings.c();
		CustomLogicListBuiltin.Bindings.c.__9 =(CustomLogicListBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Clear>b__3_0: clean
	private object Bindings_c____CreateMethodBinding__Clear_b__3_0(CustomLogicListBuiltin __c, Object[] __a)
	{
		if (__c == null) {
			throw new NullReferenceException();
		}
		__c.Clear();
		return null;
	}

	// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Get>b__4_0: clean
	private object Bindings_c____CreateMethodBinding__Get_b__4_0(CustomLogicListBuiltin __c, Object[] __a)
	{
		List<object> __this_00;
		int index;
		object pIVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar1 = __a[0];
			index = CustomLogicEvaluator.ConvertTo<int>(pIVar1) ;
			if (__c != null) {
				__this_00 = __c.List;
				if (index < 0) {
					if (__this_00 != null) {
						index = index + __this_00._size;
						goto label_059b41ca;
					}
				}
				else if (__this_00 != null) {
	label_059b41ca: ;
					pIVar1 = __this_00.get_Item(index);
					return pIVar1;
				}
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Set>b__5_0: clean
	private object Bindings_c____CreateMethodBinding__Set_b__5_0(CustomLogicListBuiltin __c, Object[] __a)
	{
		object obj;
		int index;

		if (__a == null) {
	label_059b4280: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			index = CustomLogicEvaluator.ConvertTo<int>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				if (__c != null) {
					__c.Set(index, __a[1]);
					return null;
				}
				goto label_059b4280;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Add>b__6_0: clean
	private object Bindings_c____CreateMethodBinding__Add_b__6_0(CustomLogicListBuiltin __c, Object[] __a)
	{
		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			if (__c != null) {
				__c.Add(__a[0]);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__InsertAt>b__7_0: clean
	private object Bindings_c____CreateMethodBinding__InsertAt_b__7_0(CustomLogicListBuiltin __c, Object[] __a)
	{
		object obj;
		int index;

		if (__a == null) {
	label_059b4350: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			index = CustomLogicEvaluator.ConvertTo<int>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				if (__c != null) {
					__c.InsertAt(index, __a[1]);
					return null;
				}
				goto label_059b4350;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__RemoveAt>b__8_0: clean
	private object Bindings_c____CreateMethodBinding__RemoveAt_b__8_0(CustomLogicListBuiltin __c, Object[] __a)
	{
		object obj;
		int index;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			index = CustomLogicEvaluator.ConvertTo<int>(obj);
			if (__c != null) {
				__c.RemoveAt(index);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Remove>b__9_0: clean
	private object Bindings_c____CreateMethodBinding__Remove_b__9_0(CustomLogicListBuiltin __c, Object[] __a)
	{
		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			if (__c != null) {
				__c.Remove(__a[0]);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Contains>b__10_0: 4 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__Contains_b__10_0(CustomLogicListBuiltin __c, Object[] __a)
	{
		bool bVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			if (__c != null) {
				uStack_8 = in_RAX;
				bVar1 = __c.Contains(__a[0]);
				uStack_8 = CONCAT17(bVar1, (undefined7)uStack_8);
				pIVar2 = (object)(((long)&uStack_8 + 7));
				return pIVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Sort>b__11_0: clean
	private object Bindings_c____CreateMethodBinding__Sort_b__11_0(CustomLogicListBuiltin __c, Object[] __a)
	{
		if (__c == null) {
			throw new NullReferenceException();
		}
		__c.Sort();
		return null;
	}

	// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__SortCustom>b__12_0: clean
	private object Bindings_c____CreateMethodBinding__SortCustom_b__12_0(CustomLogicListBuiltin __c, Object[] __a)
	{
		object obj;
		UserMethod method_00;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			method_00 = CustomLogicEvaluator.ConvertTo<UserMethod>(obj);
			if (__c != null) {
				__c.SortCustom(method_00);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Filter>b__13_0: clean
	private object Bindings_c____CreateMethodBinding__Filter_b__13_0(CustomLogicListBuiltin __c, Object[] __a)
	{
		object obj;
		UserMethod method_00;
		CustomLogicListBuiltin pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			method_00 = CustomLogicEvaluator.ConvertTo<UserMethod>(obj);
			if (__c != null) {
				pCVar1 = __c.Filter(method_00);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Map>b__14_0: clean
	private object Bindings_c____CreateMethodBinding__Map_b__14_0(CustomLogicListBuiltin __c, Object[] __a)
	{
		object obj;
		UserMethod method_00;
		CustomLogicListBuiltin pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			method_00 = CustomLogicEvaluator.ConvertTo<UserMethod>(obj);
			if (__c != null) {
				pCVar1 = __c.Map(method_00);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Reduce>b__15_0: clean
	private object Bindings_c____CreateMethodBinding__Reduce_b__15_0(CustomLogicListBuiltin __c, Object[] __a)
	{
		UserMethod method_00;
		object pIVar1;

		if (__a == null) {
	label_059b46ce: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			method_00 = CustomLogicEvaluator.ConvertTo<UserMethod>(pIVar1);
			if ((__a.Length & 0xfffffffe) != 0) {
				if (__c != null) {
					pIVar1 = __c.Reduce(method_00, __a[1]);
					return pIVar1;
				}
				goto label_059b46ce;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Randomize>b__16_0: clean
	private object Bindings_c____CreateMethodBinding__Randomize_b__16_0(CustomLogicListBuiltin __c, Object[] __a)
	{
		CustomLogicListBuiltin pCVar1;

		if (__c == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __c.Randomize();
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToSet>b__17_0: clean
	private object Bindings_c____CreateMethodBinding__ToSet_b__17_0(CustomLogicListBuiltin __c, Object[] __a)
	{
		CustomLogicSetBuiltin pCVar1;

		if (__c == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __c.ToSet();
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Copy>b__18_0: clean
	private object Bindings_c____CreateMethodBinding__Copy_b__18_0(CustomLogicListBuiltin __c, Object[] __a)
	{
		CustomLogicListBuiltin pCVar1;

		if (__c == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __c.Copy();
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass14_0$$<Contains>b__0: clean
	private bool c__DisplayClass14_0__Contains_b__0(object e)
	{
		uint uVar1;
		CustomLogicEvaluator __this_00;
		bool bVar2;

		if (Il2CppMethodInitialized_07545b64 == false) {
			Il2CppMethodInitialized_07545b64 = true;
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
			throw new NullReferenceException();
		}
		bVar2 = __this_00.CheckEquals(e, this.value);
		return bVar2;
	}

	// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass16_0$$<SortCustom>b__0: 3 lines keep C-only constructs
	private int c__DisplayClass16_0__SortCustom_b__0(object a, object b)
	{
		CustomLogicEvaluator __this_00;
		UserMethod userMethod;
		Object[] parameterValues;
		object pIVar1;
		int piVar2;

		__this_00 = CustomLogicManager.Evaluator;
		userMethod = this.method;
		parameterValues = (Object[])new object[2];
		if (parameterValues == null) {
	label_059b4906: ;
			throw new NullReferenceException();
		}
		if (a != null) {
			pIVar1 = il2cpp_vm_Object_IsInst(a, (((parameterValues.obj).klass)._1).element_class);
			if (pIVar1 == null) goto label_059b4910;
		}
		if ((int)parameterValues.Length != 0) {
			parameterValues[0] = a;
			if (b != null) {
				pIVar1 = il2cpp_vm_Object_IsInst(b, (((parameterValues.obj).klass)._1).element_class);
				if (pIVar1 == null) {
	label_059b4910: ;
					pIVar1 = new ArrayTypeMismatchException();
					throw pIVar1;
				}
			}
			if ((parameterValues.Length & 0xfffffffe) != 0) {
				parameterValues[1] = b;
				if (__this_00 != null) {
					pIVar1 = __this_00.EvaluateMethod(userMethod, parameterValues);
					if (pIVar1 != null) {
						if ((pIVar1.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) {
							throw new InvalidCastException();
						}
						return *piVar2;
					}
				}
				goto label_059b4906;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass17_0$$<Filter>b__0: 3 lines keep C-only constructs
	private bool c__DisplayClass17_0__Filter_b__0(object e)
	{
		CustomLogicEvaluator __this_00;
		UserMethod userMethod;
		Object[] parameterValues;
		object pIVar1;
		byte puVar2;

		__this_00 = CustomLogicManager.Evaluator;
		userMethod = this.method;
		parameterValues = (Object[])new object[1];
		if (parameterValues != null) {
			if (e != null) {
				pIVar1 = il2cpp_vm_Object_IsInst(e, (((parameterValues.obj).klass)._1).element_class);
				if (pIVar1 == null) {
					pIVar1 = new ArrayTypeMismatchException();
					throw pIVar1;
				}
			}
			if ((int)parameterValues.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			parameterValues[0] = e;
			if (__this_00 != null) {
				pIVar1 = __this_00.EvaluateMethod(userMethod, parameterValues);
				if (pIVar1 != null) {
					if ((pIVar1.klass._1).element_class != *(Il2CppClass*)(g_data_075566f0 + 0x40)) {
						throw new InvalidCastException();
					}
					puVar2 = il2cpp_vm_Object_Unbox(pIVar1);
					return (bool)*puVar2;
				}
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass18_0$$<Map>b__0: 1 lines keep C-only constructs
	private object c__DisplayClass18_0__Map_b__0(object e)
	{
		CustomLogicEvaluator __this_00;
		UserMethod userMethod;
		Object[] parameterValues;
		object pIVar1;

		__this_00 = CustomLogicManager.Evaluator;
		userMethod = this.method;
		parameterValues = (Object[])new object[1];
		if (parameterValues != null) {
			if (e != null) {
				pIVar1 = il2cpp_vm_Object_IsInst(e, (((parameterValues.obj).klass)._1).element_class);
				if (pIVar1 == null) {
					pIVar1 = new ArrayTypeMismatchException();
					throw pIVar1;
				}
			}
			if ((int)parameterValues.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			parameterValues[0] = e;
			if (__this_00 != null) {
				pIVar1 = __this_00.EvaluateMethod(userMethod, parameterValues);
				return pIVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass19_0$$<Reduce>b__0: 2 lines keep C-only constructs
	private object c__DisplayClass19_0__Reduce_b__0(object acc, object e)
	{
		CustomLogicEvaluator __this_00;
		UserMethod userMethod;
		Object[] parameterValues;
		object pIVar1;

		__this_00 = CustomLogicManager.Evaluator;
		userMethod = this.method;
		parameterValues = (Object[])new object[2];
		if (parameterValues == null) {
	label_059b4c4b: ;
			throw new NullReferenceException();
		}
		if (acc != null) {
			pIVar1 = il2cpp_vm_Object_IsInst(acc, (((parameterValues.obj).klass)._1).element_class);
			if (pIVar1 == null) goto label_059b4c50;
		}
		if ((int)parameterValues.Length != 0) {
			parameterValues[0] = acc;
			if (e != null) {
				pIVar1 = il2cpp_vm_Object_IsInst(e, (((parameterValues.obj).klass)._1).element_class);
				if (pIVar1 == null) {
	label_059b4c50: ;
					pIVar1 = new ArrayTypeMismatchException();
					throw pIVar1;
				}
			}
			if ((parameterValues.Length & 0xfffffffe) != 0) {
				parameterValues[1] = e;
				if (__this_00 != null) {
					pIVar1 = __this_00.EvaluateMethod(userMethod, parameterValues);
					return pIVar1;
				}
				goto label_059b4c4b;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass20_0$$<Randomize>b__0: clean
	private int c__DisplayClass20_0__Randomize_b__0(object x)
	{
		Random pSVar1;
		int iVar2;

		pSVar1 = this.r;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		return iVar2;
	}
}
