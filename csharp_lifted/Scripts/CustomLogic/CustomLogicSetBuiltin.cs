// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicSetBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicSetBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000473")]
[CompilerGenerated]
internal class CustomLogicSetBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x2000474")]
	public static class Factory
	{
		[Token(Token = "0x6001C20")]
		[Address(RVA = "0x58BA1C0", Offset = "0x58B91C0", VA = "0x58BA1C0")]
		public static CustomLogicSetBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSetBuiltin.c (CustomLogic.CustomLogicSetBuiltin.Factory$$CreateInstance): 1 lines keep C-only constructs
			il2cpp_array_size_t iVar1;
			CustomLogicSetBuiltin __this;

			if (args == null) {
				throw new NullReferenceException();
			}
			iVar1 = args.Length;
			if (iVar1 == 0) {
				__this = new CustomLogicSetBuiltin();
			}
			else {
				__this = new CustomLogicSetBuiltin(args);
			}
			return __this;
		}
	}

	[Token(Token = "0x2000475")]
	public static class Bindings
	{
		[Token(Token = "0x400160E")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001C21")]
		[Address(RVA = "0x58BA230", Offset = "0x58B9230", VA = "0x58BA230")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSetBuiltin.c (CustomLogic.CustomLogicSetBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLMethodBinding<CustomLogicSetBuiltin> pCVar3;
			CLPropertyBinding<CustomLogicSetBuiltin> pCVar4;
			String pSVar5;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x819a4895) {
				if (uVar2 < 0x21a5901e) {
					if (uVar2 == 0x4a57fc2) {
						bVar1 = (name == "Clear");
						if (bVar1) {
							if ((typeof(CustomLogicSetBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicSetBuiltin.Bindings.__CreateMethodBinding__Clear();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicSetBuiltin.Bindings.__CreateMethodBinding__Clear();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x21797cc1) {
						bVar1 = (name == "Overlaps");
						if (bVar1) {
							if ((typeof(CustomLogicSetBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicSetBuiltin.Bindings.__CreateMethodBinding__Overlaps();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicSetBuiltin.Bindings.__CreateMethodBinding__Overlaps();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x21a5901d) {
						bVar1 = (name == "Remove");
						if (bVar1) {
							if ((typeof(CustomLogicSetBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicSetBuiltin.Bindings.__CreateMethodBinding__Remove();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicSetBuiltin.Bindings.__CreateMethodBinding__Remove();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x5db8d715) {
					if (uVar2 == 0x25973e73) {
						bVar1 = (name == "IsProperSupersetOf");
						if (bVar1) {
							pCVar3 = CustomLogicSetBuiltin.Bindings.__CreateMethodBinding__IsProperSupersetOf();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x5db8d714) {
						bVar1 = (name == "IsProperSubsetOf");
						if (bVar1) {
							pCVar3 = CustomLogicSetBuiltin.Bindings.__CreateMethodBinding__IsProperSubsetOf();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x819a4894) {
					bVar1 = (name == "Union");
					if (bVar1) {
						pCVar3 = CustomLogicSetBuiltin.Bindings.__CreateMethodBinding__Union();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x669c4958) {
					bVar1 = (name == "Contains");
					if (bVar1) {
						pCVar3 = CustomLogicSetBuiltin.Bindings.__CreateMethodBinding__Contains();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0x9dc3aa15) {
				if (uVar2 < 0x8c99c7e7) {
					if (uVar2 == 0x81a75162) {
						bVar1 = (name == "Difference");
						if (bVar1) {
							pCVar3 = CustomLogicSetBuiltin.Bindings.__CreateMethodBinding__Difference();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x8c99c7e6) {
						bVar1 = (name == "IsSubsetOf");
						if (bVar1) {
							pCVar3 = CustomLogicSetBuiltin.Bindings.__CreateMethodBinding__IsSubsetOf();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x91bde06d) {
					bVar1 = (name == "IsSupersetOf");
					if (bVar1) {
						pCVar3 = CustomLogicSetBuiltin.Bindings.__CreateMethodBinding__IsSupersetOf();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x9dc3aa14) {
					bVar1 = (name == "Add");
					if (bVar1) {
						pCVar3 = CustomLogicSetBuiltin.Bindings.__CreateMethodBinding__Add();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xcf21bf87) {
				if (uVar2 == 0xba01b30c) {
					bVar1 = (name == "ToList");
					if (bVar1) {
						pCVar3 = CustomLogicSetBuiltin.Bindings.__CreateMethodBinding__ToList();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xcf21bf86) {
					bVar1 = (name == "Intersect");
					if (bVar1) {
						pCVar3 = CustomLogicSetBuiltin.Bindings.__CreateMethodBinding__Intersect();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xedda3dae) {
				bVar1 = (name == "SetEquals");
				if (bVar1) {
					pCVar3 = CustomLogicSetBuiltin.Bindings.__CreateMethodBinding__SetEquals();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xe1e7b894) {
				bVar1 = (name == "Count");
				if (bVar1) {
					pCVar4 = CustomLogicSetBuiltin.Bindings.__CreatePropertyBinding__Count();
					return (ICLMemberBinding)pCVar4;
				}
			}
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicSetBuiltin not found");
			pSVar5 = String.Concat(pSVar5, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6001C22")]
		[Address(RVA = "0x58BA850", Offset = "0x58B9850", VA = "0x58BA850")]
		public static CLPropertyBinding<CustomLogicSetBuiltin> __CreatePropertyBinding__Count()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSetBuiltin.c (CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreatePropertyBinding__Count): 2 lines keep C-only constructs
			Func<CustomLogicSetBuiltin, object> __this;
			CLPropertyBinding<CustomLogicSetBuiltin> __this_00;

			__this = new Func<CustomLogicSetBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings___CreatePropertyBinding__Count_g____getter_2_0);
			__this_00 = new CLPropertyBinding<CustomLogicSetBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001C23")]
		[Address(RVA = "0x58BA8F0", Offset = "0x58B98F0", VA = "0x58BA8F0")]
		public static CLMethodBinding<CustomLogicSetBuiltin> __CreateMethodBinding__Clear()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSetBuiltin.c (CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__Clear): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicSetBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicSetBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicSetBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545bb4 == false) {
				Il2CppMethodInitialized_07545bb4 = true;
				uVar1 = (typeof(CustomLogicSetBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicSetBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicSetBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__3_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicSetBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__3_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicSetBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicSetBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicSetBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Clear_b__3_0);
				pCVar2 = typeof(CustomLogicSetBuiltin.Bindings.c).static_fields;
				pCVar2.__9__3_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicSetBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001C24")]
		[Address(RVA = "0x58BAA30", Offset = "0x58B9A30", VA = "0x58BAA30")]
		public static CLMethodBinding<CustomLogicSetBuiltin> __CreateMethodBinding__Contains()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSetBuiltin.c (CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__Contains): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicSetBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicSetBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicSetBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545bb5 == false) {
				Il2CppMethodInitialized_07545bb5 = true;
				uVar1 = (typeof(CustomLogicSetBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicSetBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicSetBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__4_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicSetBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__4_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicSetBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicSetBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicSetBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Contains_b__4_0);
				pCVar2 = typeof(CustomLogicSetBuiltin.Bindings.c).static_fields;
				pCVar2.__9__4_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicSetBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001C25")]
		[Address(RVA = "0x58BAB70", Offset = "0x58B9B70", VA = "0x58BAB70")]
		public static CLMethodBinding<CustomLogicSetBuiltin> __CreateMethodBinding__Add()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSetBuiltin.c (CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__Add): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicSetBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicSetBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicSetBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545bb6 == false) {
				Il2CppMethodInitialized_07545bb6 = true;
				uVar1 = (typeof(CustomLogicSetBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicSetBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicSetBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__5_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicSetBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__5_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicSetBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicSetBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicSetBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Add_b__5_0);
				pCVar2 = typeof(CustomLogicSetBuiltin.Bindings.c).static_fields;
				pCVar2.__9__5_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicSetBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001C26")]
		[Address(RVA = "0x58BACB0", Offset = "0x58B9CB0", VA = "0x58BACB0")]
		public static CLMethodBinding<CustomLogicSetBuiltin> __CreateMethodBinding__Remove()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSetBuiltin.c (CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__Remove): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicSetBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicSetBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicSetBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545bb7 == false) {
				Il2CppMethodInitialized_07545bb7 = true;
				uVar1 = (typeof(CustomLogicSetBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicSetBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicSetBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__6_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicSetBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__6_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicSetBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicSetBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicSetBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Remove_b__6_0);
				pCVar2 = typeof(CustomLogicSetBuiltin.Bindings.c).static_fields;
				pCVar2.__9__6_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicSetBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001C27")]
		[Address(RVA = "0x58BADF0", Offset = "0x58B9DF0", VA = "0x58BADF0")]
		public static CLMethodBinding<CustomLogicSetBuiltin> __CreateMethodBinding__Union()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSetBuiltin.c (CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__Union): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicSetBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicSetBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicSetBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545bb8 == false) {
				Il2CppMethodInitialized_07545bb8 = true;
				uVar1 = (typeof(CustomLogicSetBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicSetBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicSetBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__7_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicSetBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__7_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicSetBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicSetBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicSetBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Union_b__7_0);
				pCVar2 = typeof(CustomLogicSetBuiltin.Bindings.c).static_fields;
				pCVar2.__9__7_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicSetBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001C28")]
		[Address(RVA = "0x58BAF30", Offset = "0x58B9F30", VA = "0x58BAF30")]
		public static CLMethodBinding<CustomLogicSetBuiltin> __CreateMethodBinding__Intersect()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSetBuiltin.c (CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__Intersect): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicSetBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicSetBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicSetBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545bb9 == false) {
				Il2CppMethodInitialized_07545bb9 = true;
				uVar1 = (typeof(CustomLogicSetBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicSetBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicSetBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__8_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicSetBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__8_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicSetBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicSetBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicSetBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Intersect_b__8_0);
				pCVar2 = typeof(CustomLogicSetBuiltin.Bindings.c).static_fields;
				pCVar2.__9__8_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicSetBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001C29")]
		[Address(RVA = "0x58BB070", Offset = "0x58BA070", VA = "0x58BB070")]
		public static CLMethodBinding<CustomLogicSetBuiltin> __CreateMethodBinding__Difference()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSetBuiltin.c (CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__Difference): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicSetBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicSetBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicSetBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545bba == false) {
				Il2CppMethodInitialized_07545bba = true;
				uVar1 = (typeof(CustomLogicSetBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicSetBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicSetBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__9_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicSetBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__9_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicSetBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicSetBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicSetBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Difference_b__9_0);
				pCVar2 = typeof(CustomLogicSetBuiltin.Bindings.c).static_fields;
				pCVar2.__9__9_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicSetBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001C2A")]
		[Address(RVA = "0x58BB1B0", Offset = "0x58BA1B0", VA = "0x58BB1B0")]
		public static CLMethodBinding<CustomLogicSetBuiltin> __CreateMethodBinding__IsSubsetOf()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSetBuiltin.c (CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__IsSubsetOf): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicSetBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicSetBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicSetBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545bbb == false) {
				Il2CppMethodInitialized_07545bbb = true;
				uVar1 = (typeof(CustomLogicSetBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicSetBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicSetBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__10_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicSetBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__10_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicSetBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicSetBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicSetBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__IsSubsetOf_b__10_0);
				pCVar2 = typeof(CustomLogicSetBuiltin.Bindings.c).static_fields;
				pCVar2.__9__10_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicSetBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001C2B")]
		[Address(RVA = "0x58BB2F0", Offset = "0x58BA2F0", VA = "0x58BB2F0")]
		public static CLMethodBinding<CustomLogicSetBuiltin> __CreateMethodBinding__IsSupersetOf()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSetBuiltin.c (CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__IsSupersetOf): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicSetBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicSetBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicSetBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545bbc == false) {
				Il2CppMethodInitialized_07545bbc = true;
				uVar1 = (typeof(CustomLogicSetBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicSetBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicSetBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__11_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicSetBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__11_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicSetBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicSetBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicSetBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__IsSupersetOf_b__11_0);
				pCVar2 = typeof(CustomLogicSetBuiltin.Bindings.c).static_fields;
				pCVar2.__9__11_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicSetBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001C2C")]
		[Address(RVA = "0x58BB430", Offset = "0x58BA430", VA = "0x58BB430")]
		public static CLMethodBinding<CustomLogicSetBuiltin> __CreateMethodBinding__IsProperSubsetOf()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSetBuiltin.c (CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__IsProperSubsetOf): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicSetBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicSetBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicSetBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545bbd == false) {
				Il2CppMethodInitialized_07545bbd = true;
				uVar1 = (typeof(CustomLogicSetBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicSetBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicSetBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__12_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicSetBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__12_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicSetBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicSetBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicSetBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__IsProperSubsetOf_b__12_0);
				pCVar2 = typeof(CustomLogicSetBuiltin.Bindings.c).static_fields;
				pCVar2.__9__12_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicSetBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001C2D")]
		[Address(RVA = "0x58BB570", Offset = "0x58BA570", VA = "0x58BB570")]
		public static CLMethodBinding<CustomLogicSetBuiltin> __CreateMethodBinding__IsProperSupersetOf()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSetBuiltin.c (CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__IsProperSupersetOf): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicSetBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicSetBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicSetBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545bbe == false) {
				Il2CppMethodInitialized_07545bbe = true;
				uVar1 = (typeof(CustomLogicSetBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicSetBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicSetBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__13_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicSetBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__13_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicSetBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicSetBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicSetBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__IsProperSupersetOf_b__13_0);
				pCVar2 = typeof(CustomLogicSetBuiltin.Bindings.c).static_fields;
				pCVar2.__9__13_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicSetBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001C2E")]
		[Address(RVA = "0x58BB6B0", Offset = "0x58BA6B0", VA = "0x58BB6B0")]
		public static CLMethodBinding<CustomLogicSetBuiltin> __CreateMethodBinding__Overlaps()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSetBuiltin.c (CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__Overlaps): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicSetBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicSetBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicSetBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545bbf == false) {
				Il2CppMethodInitialized_07545bbf = true;
				uVar1 = (typeof(CustomLogicSetBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicSetBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicSetBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__14_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicSetBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__14_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicSetBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicSetBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicSetBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Overlaps_b__14_0);
				pCVar2 = typeof(CustomLogicSetBuiltin.Bindings.c).static_fields;
				pCVar2.__9__14_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicSetBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001C2F")]
		[Address(RVA = "0x58BB7F0", Offset = "0x58BA7F0", VA = "0x58BB7F0")]
		public static CLMethodBinding<CustomLogicSetBuiltin> __CreateMethodBinding__SetEquals()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSetBuiltin.c (CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__SetEquals): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicSetBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicSetBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicSetBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545bc0 == false) {
				Il2CppMethodInitialized_07545bc0 = true;
				uVar1 = (typeof(CustomLogicSetBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicSetBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicSetBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__15_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicSetBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__15_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicSetBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicSetBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicSetBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__SetEquals_b__15_0);
				pCVar2 = typeof(CustomLogicSetBuiltin.Bindings.c).static_fields;
				pCVar2.__9__15_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicSetBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001C30")]
		[Address(RVA = "0x58BB930", Offset = "0x58BA930", VA = "0x58BB930")]
		public static CLMethodBinding<CustomLogicSetBuiltin> __CreateMethodBinding__ToList()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSetBuiltin.c (CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__ToList): 3 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicSetBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicSetBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicSetBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545bc1 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__ToList_b__16_0) ;
				Il2CppMethodInitialized_07545bc1 = true;
				uVar1 = (typeof(CustomLogicSetBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicSetBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicSetBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__16_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicSetBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__16_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicSetBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicSetBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicSetBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__ToList_b__16_0);
				pCVar2 = typeof(CustomLogicSetBuiltin.Bindings.c).static_fields;
				pCVar2.__9__16_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicSetBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x400160D")]
	[FieldOffset(Offset = "0x30")]
	public HashSet<object> Set;

	[Token(Token = "0x1700030B")]
	public int Count
	{
		[Token(Token = "0x6001C0D")]
		[Address(RVA = "0x58B9B00", Offset = "0x58B8B00", VA = "0x58B9B00")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSetBuiltin.c (CustomLogic.CustomLogicSetBuiltin$$get_Count): clean
			HashSet<object> pSVar1;

			pSVar1 = this.Set;
			if (pSVar1 == null) {
				throw new NullReferenceException();
			}
			return pSVar1._count;
		}
	}

	[Token(Token = "0x1700030C")]
	public override string ClassName
	{
		[Token(Token = "0x6001C1C")]
		[Address(RVA = "0x58BA160", Offset = "0x58B9160", VA = "0x58BA160", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSetBuiltin.c (CustomLogic.CustomLogicSetBuiltin$$get_ClassName): clean
			return "Set";
		}
	}

	[Token(Token = "0x1700030D")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001C1D")]
		[Address(RVA = "0x58BA190", Offset = "0x58B9190", VA = "0x58BA190", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSetBuiltin.c (CustomLogic.CustomLogicSetBuiltin$$get_IsAbstract): clean
			return false;
		}
	}

	[Token(Token = "0x1700030E")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001C1E")]
		[Address(RVA = "0x58BA1A0", Offset = "0x58B91A0", VA = "0x58BA1A0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSetBuiltin.c (CustomLogic.CustomLogicSetBuiltin$$get_IsStatic): clean
			return false;
		}
	}

	[Token(Token = "0x1700030F")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001C1F")]
		[Address(RVA = "0x58BA1B0", Offset = "0x58B91B0", VA = "0x58BA1B0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicSetBuiltin.c (CustomLogic.CustomLogicSetBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6001C0B")]
	[Address(RVA = "0x58B1E10", Offset = "0x58B0E10", VA = "0x58B1E10")]
	public CustomLogicSetBuiltin()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicSetBuiltin.c (CustomLogic.CustomLogicSetBuiltin$$.ctor): clean
		HashSet<object> __this_00;

		__this_00 = new HashSet<object>();
		this.Set = __this_00;
		base();
		return;
	}

	[Token(Token = "0x6001C0C")]
	[Address(RVA = "0x58B9A00", Offset = "0x58B8A00", VA = "0x58B9A00")]
	public CustomLogicSetBuiltin(params object[] parameterValues)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicSetBuiltin.c (CustomLogic.CustomLogicSetBuiltin$$.ctor): 2 lines keep C-only constructs
		HashSet<object>* targetAddress;
		uint uVar1;
		HashSet<object> pSVar2;
		ulong uVar3;
		ulong uVar4;

		pSVar2 = new HashSet<object>();
		targetAddress = &this.Set;
		this.Set = pSVar2;
		base();
		if (parameterValues == null) {
	label_059b9afa: ;
			throw new NullReferenceException();
		}
		if (0 < (int)parameterValues.Length) {
			uVar3 = parameterValues.Length & 0xffffffff;
			uVar4 = 0;
			do {
				if (uVar3 <= uVar4) {
					throw new IndexOutOfRangeException();
				}
				pSVar2 = *targetAddress;
				if (pSVar2 == null) goto label_059b9afa;
				pSVar2.Add(parameterValues[uVar4]);
				uVar4 = uVar4 + 1;
				uVar1 = (uint)parameterValues.Length;
				uVar3 = (ulong)uVar1;
			} while ((long)uVar4 < (long)(int)uVar1);
		}
		return;
	}

	[Token(Token = "0x6001C0E")]
	[Address(RVA = "0x58B9B40", Offset = "0x58B8B40", VA = "0x58B9B40")]
	public void Clear()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicSetBuiltin.c (CustomLogic.CustomLogicSetBuiltin$$Clear): clean
		HashSet<object> __this_00;

		__this_00 = this.Set;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Clear();
		return;
	}

	[Token(Token = "0x6001C0F")]
	[Address(RVA = "0x58B9B80", Offset = "0x58B8B80", VA = "0x58B9B80")]
	public bool Contains(object value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicSetBuiltin.c (CustomLogic.CustomLogicSetBuiltin$$Contains): 1 lines keep C-only constructs
		HashSet<object> __this_00;
		bool bVar1;

		if (Il2CppMethodInitialized_07545ba3 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_object_Contains) ;
			Il2CppMethodInitialized_07545ba3 = true;
		}
		__this_00 = this.Set;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		return bVar1;
	}

	[Token(Token = "0x6001C10")]
	[Address(RVA = "0x58B9BD0", Offset = "0x58B8BD0", VA = "0x58B9BD0")]
	public void Add(object value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicSetBuiltin.c (CustomLogic.CustomLogicSetBuiltin$$Add): clean
		HashSet<object> __this_00;

		__this_00 = this.Set;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Add(value);
		return;
	}

	[Token(Token = "0x6001C11")]
	[Address(RVA = "0x58B9C20", Offset = "0x58B8C20", VA = "0x58B9C20")]
	public void Remove(object value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicSetBuiltin.c (CustomLogic.CustomLogicSetBuiltin$$Remove): clean
		HashSet<object> __this_00;

		__this_00 = this.Set;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Remove(value);
		return;
	}

	[Token(Token = "0x6001C12")]
	[Address(RVA = "0x58B9C70", Offset = "0x58B8C70", VA = "0x58B9C70")]
	public void Union(CustomLogicSetBuiltin set)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicSetBuiltin.c (CustomLogic.CustomLogicSetBuiltin$$Union): clean
		HashSet<object> __this_00;

		if ((set == null) ||(__this_00 = this.Set, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.UnionWith((IEnumerable<T>)set.Set);
		return;
	}

	[Token(Token = "0x6001C13")]
	[Address(RVA = "0x58B9CD0", Offset = "0x58B8CD0", VA = "0x58B9CD0")]
	public void Intersect(CustomLogicSetBuiltin set)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicSetBuiltin.c (CustomLogic.CustomLogicSetBuiltin$$Intersect): clean
		HashSet<object> __this_00;

		if ((set == null) ||(__this_00 = this.Set, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.IntersectWith((IEnumerable<T>)set.Set);
		return;
	}

	[Token(Token = "0x6001C14")]
	[Address(RVA = "0x58B9D30", Offset = "0x58B8D30", VA = "0x58B9D30")]
	public void Difference(CustomLogicSetBuiltin set)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicSetBuiltin.c (CustomLogic.CustomLogicSetBuiltin$$Difference): clean
		HashSet<object> __this_00;

		if ((set == null) ||(__this_00 = this.Set, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.ExceptWith((IEnumerable<T>)set.Set);
		return;
	}

	[Token(Token = "0x6001C15")]
	[Address(RVA = "0x58B9D90", Offset = "0x58B8D90", VA = "0x58B9D90")]
	public bool IsSubsetOf(CustomLogicSetBuiltin set)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicSetBuiltin.c (CustomLogic.CustomLogicSetBuiltin$$IsSubsetOf): clean
		HashSet<object> __this_00;
		bool bVar1;

		if ((set == null) ||(__this_00 = this.Set, __this_00 == null)) {
			throw new NullReferenceException();
		}
		bVar1 = __this_00.IsSubsetOf((IEnumerable<T>)set.Set);
		return bVar1;
	}

	[Token(Token = "0x6001C16")]
	[Address(RVA = "0x58B9DF0", Offset = "0x58B8DF0", VA = "0x58B9DF0")]
	public bool IsSupersetOf(CustomLogicSetBuiltin set)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicSetBuiltin.c (CustomLogic.CustomLogicSetBuiltin$$IsSupersetOf): clean
		HashSet<object> __this_00;
		bool bVar1;

		if ((set == null) ||(__this_00 = this.Set, __this_00 == null)) {
			throw new NullReferenceException();
		}
		bVar1 = __this_00.IsSupersetOf((IEnumerable<T>)set.Set);
		return bVar1;
	}

	[Token(Token = "0x6001C17")]
	[Address(RVA = "0x58B9E50", Offset = "0x58B8E50", VA = "0x58B9E50")]
	public bool IsProperSubsetOf(CustomLogicSetBuiltin set)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicSetBuiltin.c (CustomLogic.CustomLogicSetBuiltin$$IsProperSubsetOf): clean
		HashSet<object> __this_00;
		bool bVar1;

		if ((set == null) ||(__this_00 = this.Set, __this_00 == null)) {
			throw new NullReferenceException();
		}
		bVar1 = __this_00.IsProperSubsetOf((IEnumerable<T>)set.Set);
		return bVar1;
	}

	[Token(Token = "0x6001C18")]
	[Address(RVA = "0x58B9EB0", Offset = "0x58B8EB0", VA = "0x58B9EB0")]
	public bool IsProperSupersetOf(CustomLogicSetBuiltin set)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicSetBuiltin.c (CustomLogic.CustomLogicSetBuiltin$$IsProperSupersetOf): clean
		HashSet<object> __this_00;
		bool bVar1;

		if ((set == null) ||(__this_00 = this.Set, __this_00 == null)) {
			throw new NullReferenceException();
		}
		bVar1 = __this_00.IsProperSupersetOf((IEnumerable<T>)set.Set);
		return bVar1;
	}

	[Token(Token = "0x6001C19")]
	[Address(RVA = "0x58B9F10", Offset = "0x58B8F10", VA = "0x58B9F10")]
	public bool Overlaps(CustomLogicSetBuiltin set)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicSetBuiltin.c (CustomLogic.CustomLogicSetBuiltin$$Overlaps): 1 lines keep C-only constructs
		HashSet<object> __this_00;
		bool bVar1;

		if (Il2CppMethodInitialized_07545bad == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_object_Overlaps) ;
			Il2CppMethodInitialized_07545bad = true;
		}
		if ((set == null) ||(__this_00 = this.Set, __this_00 == null)) {
			throw new NullReferenceException();
		}
		bVar1 = __this_00.Overlaps((IEnumerable<T>)set.Set);
		return bVar1;
	}

	[Token(Token = "0x6001C1A")]
	[Address(RVA = "0x58B9F70", Offset = "0x58B8F70", VA = "0x58B9F70")]
	public bool SetEquals(CustomLogicSetBuiltin set)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicSetBuiltin.c (CustomLogic.CustomLogicSetBuiltin$$SetEquals): clean
		HashSet<object> __this_00;
		bool bVar1;

		if ((set == null) ||(__this_00 = this.Set, __this_00 == null)) {
			throw new NullReferenceException();
		}
		bVar1 = __this_00.SetEquals((IEnumerable<T>)set.Set);
		return bVar1;
	}

	[Token(Token = "0x6001C1B")]
	[Address(RVA = "0x58B9FD0", Offset = "0x58B8FD0", VA = "0x58B9FD0")]
	public CustomLogicListBuiltin ToList()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicSetBuiltin.c (CustomLogic.CustomLogicSetBuiltin$$ToList): 5 lines keep C-only constructs
		HashSet<object> __this_00;
		System_Collections_Generic_HashSet_Enumerator_T__o pSVar1;
		bool bVar2;
		CustomLogicListBuiltin __this_01;
		System_Collections_Generic_HashSet_Enumerator_T__o SStack_48;
		byte puStack_20;

		SStack_48._set = null;
		SStack_48._index = 0;
		SStack_48._version = 0;
		SStack_48._current = null;
		__this_01 = new CustomLogicListBuiltin();
		puStack_20 = (byte)&SStack_48;
		__this_00 = this.Set;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		SStack_48 = __this_00.GetEnumerator();
		pSVar1 = &SStack_48;
		if (__this_01 == null) {
			bVar2 = SStack_48.MoveNext();
			if (bVar2) {
				throw new NullReferenceException();
			}
		}
		else {
			while (true) {
				puStack_20 = (byte)pSVar1;
				bVar2 = SStack_48.MoveNext();
				if (!(bVar2)) break;
				__this_01.Add(SStack_48._current);
				pSVar1 = (System_Collections_Generic_HashSet_Enumerator_T__o)puStack_20;
			}
		}
		SStack_48.Dispose();
		return __this_01;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicSetBuiltin.c.

	// CustomLogic.CustomLogicSetBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Count");
		__this.Add((Il2CppObject *)"Clear");
		__this.Add((Il2CppObject *)"Contains");
		__this.Add((Il2CppObject *)"Add");
		__this.Add((Il2CppObject *)"Remove");
		__this.Add((Il2CppObject *)"Union");
		__this.Add((Il2CppObject *)"Intersect");
		__this.Add((Il2CppObject *)"Difference");
		__this.Add((Il2CppObject *)"IsSubsetOf");
		__this.Add((Il2CppObject *)"IsSupersetOf");
		__this.Add((Il2CppObject *)"IsProperSubsetOf");
		__this.Add((Il2CppObject *)"IsProperSupersetOf");
		__this.Add((Il2CppObject *)"Overlaps");
		__this.Add((Il2CppObject *)"SetEquals");
		__this.Add((Il2CppObject *)"ToList");
		CustomLogicSetBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicSetBuiltin.Bindings$$<__CreatePropertyBinding__Count>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__Count_g____getter_2_0(CustomLogicSetBuiltin __i)
	{
		HashSet<object> pSVar1;
		object pIVar2;

		if (__i != null) {
			pSVar1 = __i.Set;
			if (pSVar1 != null) {
				return pIVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$.cctor: clean
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = new CustomLogicSetBuiltin.Bindings.c();
		CustomLogicSetBuiltin.Bindings.c.__9 =(CustomLogicSetBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__Clear>b__3_0: clean
	private object Bindings_c____CreateMethodBinding__Clear_b__3_0(CustomLogicSetBuiltin __c, Object[] __a)
	{
		if (__c == null) {
			throw new NullReferenceException();
		}
		__c.Clear();
		return null;
	}

	// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__Contains>b__4_0: 4 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__Contains_b__4_0(CustomLogicSetBuiltin __c, Object[] __a)
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

	// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__Add>b__5_0: clean
	private object Bindings_c____CreateMethodBinding__Add_b__5_0(CustomLogicSetBuiltin __c, Object[] __a)
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

	// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__Remove>b__6_0: clean
	private object Bindings_c____CreateMethodBinding__Remove_b__6_0(CustomLogicSetBuiltin __c, Object[] __a)
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

	// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__Union>b__7_0: clean
	private object Bindings_c____CreateMethodBinding__Union_b__7_0(CustomLogicSetBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicSetBuiltin set;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			set = CustomLogicEvaluator.ConvertTo<CustomLogicSetBuiltin>(obj);
			if (__c != null) {
				__c.Union(set);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__Intersect>b__8_0: clean
	private object Bindings_c____CreateMethodBinding__Intersect_b__8_0(CustomLogicSetBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicSetBuiltin set;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			set = CustomLogicEvaluator.ConvertTo<CustomLogicSetBuiltin>(obj);
			if (__c != null) {
				__c.Intersect(set);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__Difference>b__9_0: clean
	private object Bindings_c____CreateMethodBinding__Difference_b__9_0(CustomLogicSetBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicSetBuiltin set;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			set = CustomLogicEvaluator.ConvertTo<CustomLogicSetBuiltin>(obj);
			if (__c != null) {
				__c.Difference(set);
				return null;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsSubsetOf>b__10_0: 4 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__IsSubsetOf_b__10_0(CustomLogicSetBuiltin __c, Object[] __a)
	{
		bool bVar1;
		ulong in_RAX;
		CustomLogicSetBuiltin set;
		object pIVar2;
		ulong uStack_18;

		uStack_18 = in_RAX;
		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar2 = __a[0];
			set = CustomLogicEvaluator.ConvertTo<CustomLogicSetBuiltin>(pIVar2);
			if (__c != null) {
				bVar1 = __c.IsSubsetOf(set);
				uStack_18 = CONCAT17(bVar1, (undefined7)uStack_18);
				pIVar2 = (object)(((long)&uStack_18 + 7));
				return pIVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsSupersetOf>b__11_0: 4 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__IsSupersetOf_b__11_0(CustomLogicSetBuiltin __c, Object[] __a)
	{
		bool bVar1;
		ulong in_RAX;
		CustomLogicSetBuiltin set;
		object pIVar2;
		ulong uStack_18;

		uStack_18 = in_RAX;
		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar2 = __a[0];
			set = CustomLogicEvaluator.ConvertTo<CustomLogicSetBuiltin>(pIVar2);
			if (__c != null) {
				bVar1 = __c.IsSupersetOf(set);
				uStack_18 = CONCAT17(bVar1, (undefined7)uStack_18);
				pIVar2 = (object)(((long)&uStack_18 + 7));
				return pIVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsProperSubsetOf>b__12_0: 4 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__IsProperSubsetOf_b__12_0(CustomLogicSetBuiltin __c, Object[] __a)
	{
		bool bVar1;
		ulong in_RAX;
		CustomLogicSetBuiltin set;
		object pIVar2;
		ulong uStack_18;

		uStack_18 = in_RAX;
		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar2 = __a[0];
			set = CustomLogicEvaluator.ConvertTo<CustomLogicSetBuiltin>(pIVar2);
			if (__c != null) {
				bVar1 = __c.IsProperSubsetOf(set);
				uStack_18 = CONCAT17(bVar1, (undefined7)uStack_18);
				pIVar2 = (object)(((long)&uStack_18 + 7));
				return pIVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsProperSupersetOf>b__13_0: 4 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__IsProperSupersetOf_b__13_0(CustomLogicSetBuiltin __c, Object[] __a)
	{
		bool bVar1;
		ulong in_RAX;
		CustomLogicSetBuiltin set;
		object pIVar2;
		ulong uStack_18;

		uStack_18 = in_RAX;
		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar2 = __a[0];
			set = CustomLogicEvaluator.ConvertTo<CustomLogicSetBuiltin>(pIVar2);
			if (__c != null) {
				bVar1 = __c.IsProperSupersetOf(set);
				uStack_18 = CONCAT17(bVar1, (undefined7)uStack_18);
				pIVar2 = (object)(((long)&uStack_18 + 7));
				return pIVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__Overlaps>b__14_0: 4 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__Overlaps_b__14_0(CustomLogicSetBuiltin __c, Object[] __a)
	{
		bool bVar1;
		ulong in_RAX;
		CustomLogicSetBuiltin set;
		object pIVar2;
		ulong uStack_18;

		uStack_18 = in_RAX;
		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar2 = __a[0];
			set = CustomLogicEvaluator.ConvertTo<CustomLogicSetBuiltin>(pIVar2);
			if (__c != null) {
				bVar1 = __c.Overlaps(set);
				uStack_18 = CONCAT17(bVar1, (undefined7)uStack_18);
				pIVar2 = (object)(((long)&uStack_18 + 7));
				return pIVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetEquals>b__15_0: 4 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__SetEquals_b__15_0(CustomLogicSetBuiltin __c, Object[] __a)
	{
		bool bVar1;
		ulong in_RAX;
		CustomLogicSetBuiltin set;
		object pIVar2;
		ulong uStack_18;

		uStack_18 = in_RAX;
		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pIVar2 = __a[0];
			set = CustomLogicEvaluator.ConvertTo<CustomLogicSetBuiltin>(pIVar2);
			if (__c != null) {
				bVar1 = __c.SetEquals(set);
				uStack_18 = CONCAT17(bVar1, (undefined7)uStack_18);
				pIVar2 = (object)(((long)&uStack_18 + 7));
				return pIVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToList>b__16_0: clean
	private object Bindings_c____CreateMethodBinding__ToList_b__16_0(CustomLogicSetBuiltin __c, Object[] __a)
	{
		CustomLogicListBuiltin pCVar1;

		if (__c == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __c.ToList();
		return (object)pCVar1;
	}
}
