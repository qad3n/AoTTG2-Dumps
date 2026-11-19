// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicMapBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicMapBuiltin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicMapBuiltin.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Map;
using Utility;

namespace CustomLogic;

[Token(Token = "0x20005C0")]
[CompilerGenerated]
internal class CustomLogicMapBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x20005C1")]
	public static class Factory
	{
		[Token(Token = "0x6003586")]
		[Address(RVA = "0x59E8DB0", Offset = "0x59E7DB0", VA = "0x59E8DB0")]
		public static CustomLogicMapBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			CustomLogicMapBuiltin __this;
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicMapBuiltin constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicMapBuiltin_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicMapBuiltin();
			CustomLogicMapBuiltin.ResetRuntimeNetworkedSpawnLimits();
			return __this;
		}
	}

	[Token(Token = "0x20005C2")]
	public static class Bindings
	{
		[Token(Token = "0x400190E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6003587")]
		[Address(RVA = "0x59E8EF0", Offset = "0x59E7EF0", VA = "0x59E8EF0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLMethodBinding<CustomLogicMapBuiltin> pCVar3;
			String pSVar4;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x6a75bbaf) {
				if (uVar2 < 0x3aa79d29) {
					if (uVar2 < 0x23f4b409) {
						if (uVar2 == 0x7042ece) {
							bVar1 = (name == "FindMapObjectsByName");
							if (bVar1) {
								pCVar3 = CustomLogicMapBuiltin.Bindings.__CreateMethodBinding__FindMapObjectsByName();
								return (ICLMemberBinding)pCVar3;
							}
						}
						else if (uVar2 == 0x23f4b408) {
							bVar1 = (name == "FindMapObjectsByComponent");
							if (bVar1) {
								pCVar3 = CustomLogicMapBuiltin.Bindings.__CreateMethodBinding__FindMapObjectsByComponent();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x34c16581) {
						bVar1 = (name == "CopyMapObject");
						if (bVar1) {
							pCVar3 = CustomLogicMapBuiltin.Bindings.__CreateMethodBinding__CopyMapObject();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x3aa79d28) {
						bVar1 = (name == "UpdateNavMesh");
						if (bVar1) {
							pCVar3 = CustomLogicMapBuiltin.Bindings.__CreateMethodBinding__UpdateNavMesh();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 < 0x4df313e9) {
					if (uVar2 == 0x472155dc) {
						bVar1 = (name == "DestroyMapTargetable");
						if (bVar1) {
							pCVar3 = CustomLogicMapBuiltin.Bindings.__CreateMethodBinding__DestroyMapTargetable();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x4df313e8) {
						bVar1 = (name == "FindMapObjectsByPlayer");
						if (bVar1) {
							pCVar3 = CustomLogicMapBuiltin.Bindings.__CreateMethodBinding__FindMapObjectsByPlayer();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x604b4ecd) {
					bVar1 = (name == "FindMapObjectByName");
					if (bVar1) {
						pCVar3 = CustomLogicMapBuiltin.Bindings.__CreateMethodBinding__FindMapObjectByName();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x6889a906) {
					bVar1 = (name == "CreateMapObject");
					if (bVar1) {
						pCVar3 = CustomLogicMapBuiltin.Bindings.__CreateMethodBinding__CreateMapObject();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x6a75bbae) {
					bVar1 = (name == "DestroyMapObject");
					if (bVar1) {
						pCVar3 = CustomLogicMapBuiltin.Bindings.__CreateMethodBinding__DestroyMapObject();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0x9bea5774) {
				if (uVar2 < 0x926c3e54) {
					if (uVar2 == 0x926c3e53) {
						bVar1 = (name == "FindMapObjectByID");
						if (bVar1) {
							pCVar3 = CustomLogicMapBuiltin.Bindings.__CreateMethodBinding__FindMapObjectByID();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x7b196e7c) {
						bVar1 = (name == "PrefabFromMapObject");
						if (bVar1) {
							pCVar3 = CustomLogicMapBuiltin.Bindings.__CreateMethodBinding__PrefabFromMapObject();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x9947e69d) {
					bVar1 = (name == "FindMapObjectByComponent");
					if (bVar1) {
						pCVar3 = CustomLogicMapBuiltin.Bindings.__CreateMethodBinding__FindMapObjectByComponent();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x9bea5773) {
					bVar1 = (name == "FindAllMapObjects");
					if (bVar1) {
						pCVar3 = CustomLogicMapBuiltin.Bindings.__CreateMethodBinding__FindAllMapObjects();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xc985509d) {
				if (uVar2 == 0xbf6edce0) {
					bVar1 = (name == "FindMapObjectsByRegex");
					if (bVar1) {
						pCVar3 = CustomLogicMapBuiltin.Bindings.__CreateMethodBinding__FindMapObjectsByRegex();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xc985509c) {
					bVar1 = (name == "UpdateNavMeshAsync");
					if (bVar1) {
						pCVar3 = CustomLogicMapBuiltin.Bindings.__CreateMethodBinding__UpdateNavMeshAsync();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xd805e00e) {
				bVar1 = (name == "FindMapObjectByTag");
				if (bVar1) {
					pCVar3 = CustomLogicMapBuiltin.Bindings.__CreateMethodBinding__FindMapObjectByTag();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xea839630) {
				bVar1 = (name == "CreateMapObjectRaw");
				if (bVar1) {
					pCVar3 = CustomLogicMapBuiltin.Bindings.__CreateMethodBinding__CreateMapObjectRaw();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xecb4a36b) {
				bVar1 = (name == "FindMapObjectsByTag");
				if (bVar1) {
					pCVar3 = CustomLogicMapBuiltin.Bindings.__CreateMethodBinding__FindMapObjectsByTag();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicMapBuiltin not found");
			pSVar4 = String.Concat(pSVar4, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar4);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6003588")]
		[Address(RVA = "0x59E95F0", Offset = "0x59E85F0", VA = "0x59E95F0")]
		public static CLMethodBinding<CustomLogicMapBuiltin> __CreateMethodBinding__FindAllMapObjects()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__FindAllMapObjects): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMapBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMapBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMapBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546e4f == false) {
				Il2CppMethodInitialized_07546e4f = true;
				uVar1 = (typeof(CustomLogicMapBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMapBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__2_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMapBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__2_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMapBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMapBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindAllMapObjects_b__2_0);
				pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				pCVar2.__9__2_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMapBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003589")]
		[Address(RVA = "0x59E9730", Offset = "0x59E8730", VA = "0x59E9730")]
		public static CLMethodBinding<CustomLogicMapBuiltin> __CreateMethodBinding__FindMapObjectByName()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__FindMapObjectByName): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMapBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMapBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMapBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546e50 == false) {
				Il2CppMethodInitialized_07546e50 = true;
				uVar1 = (typeof(CustomLogicMapBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMapBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__3_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMapBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__3_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMapBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMapBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectByName_b__3_0);
				pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				pCVar2.__9__3_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMapBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600358A")]
		[Address(RVA = "0x59E9870", Offset = "0x59E8870", VA = "0x59E9870")]
		public static CLMethodBinding<CustomLogicMapBuiltin> __CreateMethodBinding__FindMapObjectsByName()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__FindMapObjectsByName): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMapBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMapBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMapBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546e51 == false) {
				Il2CppMethodInitialized_07546e51 = true;
				uVar1 = (typeof(CustomLogicMapBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMapBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__4_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMapBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__4_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMapBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMapBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectsByName_b__4_0);
				pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				pCVar2.__9__4_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMapBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600358B")]
		[Address(RVA = "0x59E99B0", Offset = "0x59E89B0", VA = "0x59E99B0")]
		public static CLMethodBinding<CustomLogicMapBuiltin> __CreateMethodBinding__FindMapObjectsByRegex()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__FindMapObjectsByRegex): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMapBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMapBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMapBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546e52 == false) {
				Il2CppMethodInitialized_07546e52 = true;
				uVar1 = (typeof(CustomLogicMapBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMapBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__5_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMapBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__5_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMapBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMapBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectsByRegex_b__5_0);
				pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				pCVar2.__9__5_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMapBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600358C")]
		[Address(RVA = "0x59E9AF0", Offset = "0x59E8AF0", VA = "0x59E9AF0")]
		public static CLMethodBinding<CustomLogicMapBuiltin> __CreateMethodBinding__FindMapObjectByComponent()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__FindMapObjectByComponent): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMapBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMapBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMapBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546e53 == false) {
				Il2CppMethodInitialized_07546e53 = true;
				uVar1 = (typeof(CustomLogicMapBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMapBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__6_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMapBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__6_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMapBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMapBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectByComponent_b);
				pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				pCVar2.__9__6_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMapBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600358D")]
		[Address(RVA = "0x59E9C30", Offset = "0x59E8C30", VA = "0x59E9C30")]
		public static CLMethodBinding<CustomLogicMapBuiltin> __CreateMethodBinding__FindMapObjectsByComponent()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__FindMapObjectsByComponent): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMapBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMapBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMapBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546e54 == false) {
				Il2CppMethodInitialized_07546e54 = true;
				uVar1 = (typeof(CustomLogicMapBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMapBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__7_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMapBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__7_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMapBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMapBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectsByComponent_b);
				pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				pCVar2.__9__7_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMapBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600358E")]
		[Address(RVA = "0x59E9D70", Offset = "0x59E8D70", VA = "0x59E9D70")]
		public static CLMethodBinding<CustomLogicMapBuiltin> __CreateMethodBinding__FindMapObjectByID()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__FindMapObjectByID): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMapBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMapBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMapBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546e55 == false) {
				Il2CppMethodInitialized_07546e55 = true;
				uVar1 = (typeof(CustomLogicMapBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMapBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__8_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMapBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__8_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMapBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMapBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectByID_b__8_0);
				pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				pCVar2.__9__8_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMapBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600358F")]
		[Address(RVA = "0x59E9EB0", Offset = "0x59E8EB0", VA = "0x59E9EB0")]
		public static CLMethodBinding<CustomLogicMapBuiltin> __CreateMethodBinding__FindMapObjectByTag()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__FindMapObjectByTag): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMapBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMapBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMapBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546e56 == false) {
				Il2CppMethodInitialized_07546e56 = true;
				uVar1 = (typeof(CustomLogicMapBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMapBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__9_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMapBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__9_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMapBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMapBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectByTag_b__9_0);
				pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				pCVar2.__9__9_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMapBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003590")]
		[Address(RVA = "0x59E9FF0", Offset = "0x59E8FF0", VA = "0x59E9FF0")]
		public static CLMethodBinding<CustomLogicMapBuiltin> __CreateMethodBinding__FindMapObjectsByTag()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__FindMapObjectsByTag): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMapBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMapBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMapBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546e57 == false) {
				Il2CppMethodInitialized_07546e57 = true;
				uVar1 = (typeof(CustomLogicMapBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMapBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__10_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMapBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__10_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMapBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMapBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectsByTag_b__10_0);
				pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				pCVar2.__9__10_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMapBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003591")]
		[Address(RVA = "0x59EA130", Offset = "0x59E9130", VA = "0x59EA130")]
		public static CLMethodBinding<CustomLogicMapBuiltin> __CreateMethodBinding__FindMapObjectsByPlayer()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__FindMapObjectsByPlayer): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMapBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMapBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMapBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546e58 == false) {
				Il2CppMethodInitialized_07546e58 = true;
				uVar1 = (typeof(CustomLogicMapBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMapBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__11_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMapBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__11_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMapBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMapBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__FindMapObjectsByPlayer_b__11);
				pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				pCVar2.__9__11_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMapBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003592")]
		[Address(RVA = "0x59EA270", Offset = "0x59E9270", VA = "0x59EA270")]
		public static CLMethodBinding<CustomLogicMapBuiltin> __CreateMethodBinding__CreateMapObject()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__CreateMapObject): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMapBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMapBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMapBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546e59 == false) {
				Il2CppMethodInitialized_07546e59 = true;
				uVar1 = (typeof(CustomLogicMapBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMapBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__12_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMapBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__12_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMapBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMapBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__CreateMapObject_b__12_0);
				pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				pCVar2.__9__12_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMapBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003593")]
		[Address(RVA = "0x59EA3B0", Offset = "0x59E93B0", VA = "0x59EA3B0")]
		public static CLMethodBinding<CustomLogicMapBuiltin> __CreateMethodBinding__CreateMapObjectRaw()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__CreateMapObjectRaw): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMapBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMapBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMapBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546e5a == false) {
				Il2CppMethodInitialized_07546e5a = true;
				uVar1 = (typeof(CustomLogicMapBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMapBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__13_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMapBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__13_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMapBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMapBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__CreateMapObjectRaw_b__13_0);
				pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				pCVar2.__9__13_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMapBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003594")]
		[Address(RVA = "0x59EA4F0", Offset = "0x59E94F0", VA = "0x59EA4F0")]
		public static CLMethodBinding<CustomLogicMapBuiltin> __CreateMethodBinding__PrefabFromMapObject()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__PrefabFromMapObject): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMapBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMapBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMapBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546e5b == false) {
				Il2CppMethodInitialized_07546e5b = true;
				uVar1 = (typeof(CustomLogicMapBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMapBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__14_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMapBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__14_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMapBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMapBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__PrefabFromMapObject_b__14_0);
				pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				pCVar2.__9__14_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMapBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003595")]
		[Address(RVA = "0x59EA630", Offset = "0x59E9630", VA = "0x59EA630")]
		public static CLMethodBinding<CustomLogicMapBuiltin> __CreateMethodBinding__DestroyMapObject()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__DestroyMapObject): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMapBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMapBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMapBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546e5c == false) {
				Il2CppMethodInitialized_07546e5c = true;
				uVar1 = (typeof(CustomLogicMapBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMapBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__15_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMapBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__15_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMapBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMapBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__DestroyMapObject_b__15_0);
				pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				pCVar2.__9__15_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMapBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003596")]
		[Address(RVA = "0x59EA770", Offset = "0x59E9770", VA = "0x59EA770")]
		public static CLMethodBinding<CustomLogicMapBuiltin> __CreateMethodBinding__CopyMapObject()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__CopyMapObject): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMapBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMapBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMapBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546e5d == false) {
				Il2CppMethodInitialized_07546e5d = true;
				uVar1 = (typeof(CustomLogicMapBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMapBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__16_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMapBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__16_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMapBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMapBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__CopyMapObject_b__16_0);
				pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				pCVar2.__9__16_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMapBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003597")]
		[Address(RVA = "0x59EA8B0", Offset = "0x59E98B0", VA = "0x59EA8B0")]
		public static CLMethodBinding<CustomLogicMapBuiltin> __CreateMethodBinding__DestroyMapTargetable()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__DestroyMapTargetable): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMapBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMapBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMapBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546e5e == false) {
				Il2CppMethodInitialized_07546e5e = true;
				uVar1 = (typeof(CustomLogicMapBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMapBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__17_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMapBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__17_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMapBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMapBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__DestroyMapTargetable_b__17_0);
				pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				pCVar2.__9__17_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMapBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003598")]
		[Address(RVA = "0x59EA9F0", Offset = "0x59E99F0", VA = "0x59EA9F0")]
		public static CLMethodBinding<CustomLogicMapBuiltin> __CreateMethodBinding__UpdateNavMesh()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__UpdateNavMesh): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMapBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMapBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMapBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546e5f == false) {
				Il2CppMethodInitialized_07546e5f = true;
				uVar1 = (typeof(CustomLogicMapBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMapBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__18_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMapBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__18_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMapBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMapBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__UpdateNavMesh_b__18_0);
				pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				pCVar2.__9__18_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMapBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003599")]
		[Address(RVA = "0x59EAB30", Offset = "0x59E9B30", VA = "0x59EAB30")]
		public static CLMethodBinding<CustomLogicMapBuiltin> __CreateMethodBinding__UpdateNavMeshAsync()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__UpdateNavMeshAsync): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicMapBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicMapBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicMapBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546e60 == false) {
				Il2CppMethodInitialized_07546e60 = true;
				uVar1 = (typeof(CustomLogicMapBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicMapBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__19_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicMapBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__19_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicMapBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicMapBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicMapBuiltin_Bindings_c___CreateMethodBinding__UpdateNavMeshAsync_b__19_0);
				pCVar2 = typeof(CustomLogicMapBuiltin.Bindings.c).static_fields;
				pCVar2.__9__19_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicMapBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x400190B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static RateLimit _instantiateLimit;

	[Token(Token = "0x400190C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static int _instantiateCount;

	[Token(Token = "0x400190D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
	private static int _allowedInstantiateCount;

	[Token(Token = "0x170009B1")]
	public static bool HasInstantiateAvailable
	{
		[Token(Token = "0x600357E")]
		[Address(RVA = "0x59E8B90", Offset = "0x59E7B90", VA = "0x59E8B90")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin$$get_HasInstantiateAvailable): clean
			return CustomLogicMapBuiltin._instantiateCount < CustomLogicMapBuiltin._allowedInstantiateCount;
		}
	}

	[Token(Token = "0x170009B2")]
	public override string ClassName
	{
		[Token(Token = "0x6003581")]
		[Address(RVA = "0x59E8CF0", Offset = "0x59E7CF0", VA = "0x59E8CF0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin$$get_ClassName): clean
			return "Map";
		}
	}

	[Token(Token = "0x170009B3")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6003582")]
		[Address(RVA = "0x59E8D20", Offset = "0x59E7D20", VA = "0x59E8D20", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x170009B4")]
	public override bool IsStatic
	{
		[Token(Token = "0x6003583")]
		[Address(RVA = "0x59E8D30", Offset = "0x59E7D30", VA = "0x59E8D30", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x170009B5")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6003584")]
		[Address(RVA = "0x59E8D40", Offset = "0x59E7D40", VA = "0x59E8D40", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6003566")]
	[Address(RVA = "0x59E5640", Offset = "0x59E4640", VA = "0x59E5640")]
	public CustomLogicMapBuiltin()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin$$.ctor): clean


		base();
		if ((typeof(CustomLogicMapBuiltin)._2).cctor_finished_or_no_cctor == 0) {
			CustomLogicMapBuiltin.ResetRuntimeNetworkedSpawnLimits();
			return;
		}
		CustomLogicMapBuiltin.ResetRuntimeNetworkedSpawnLimits();
		return;
	}

	[Token(Token = "0x6003567")]
	[Address(RVA = "0x59E56C0", Offset = "0x59E46C0", VA = "0x59E56C0")]
	public static void ResetRuntimeNetworkedSpawnLimits()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin$$ResetRuntimeNetworkedSpawnLimits): clean
		uint uVar1;
		bool bVar2;
		RateLimit __this;
		int iVar3;
		int iVar4;

		CustomLogicMapBuiltin._instantiateCount = 0;
		bVar2 = PhotonNetwork.IsMasterClient;
		if (bVar2) {
			__this = new RateLimit(0x28, 1.0);
			iVar4 = 1000;
			iVar3 = 1000;
			uVar1 = (typeof(CustomLogicMapBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			__this = new RateLimit(0x14, 1.0);
			iVar4 = 300;
			iVar3 = 300;
			uVar1 = (typeof(CustomLogicMapBuiltin)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			iVar3 = iVar4;
		}
		CustomLogicMapBuiltin._instantiateLimit = __this;
		CustomLogicMapBuiltin._allowedInstantiateCount = iVar3;
		return;
	}

	[Token(Token = "0x6003568")]
	[Address(RVA = "0x59E57E0", Offset = "0x59E47E0", VA = "0x59E57E0")]
	public static CustomLogicListBuiltin FindAllMapObjects()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin$$FindAllMapObjects): 9 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Dictionary<object, object> __this;
		List<object> __this_00;
		CustomLogicEvaluator __this_01;
		Object[] pSVar3;
		object obj;
		bool bVar5;
		CustomLogicListBuiltin __this_02;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o __this_03;
		CustomLogicMapObjectBuiltin item;
		System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o SStack_68;
		byte[] auStack_48 = new byte[16];
		MapObject pMStack_38;

		__this_02 = new CustomLogicListBuiltin();
		__this = (Dictionary<object, object>)MapLoader.GoToMapObject;
		if (__this != null) {
			__this_03 = __this.Values;
			if (__this_03 != null) {
				auStack_48.GetEnumerator(__this_03);
				SStack_68._currentValue = (object)pMStack_38;
				SStack_68._dictionary = (Dictionary<TKey, TValue>)auStack_48._0_8_ ;
				SStack_68._index = auStack_48._8_4_;
				SStack_68._version = auStack_48._12_4_;
				auStack_48._0_8_ = null;
				auStack_48._8_8_ = &SStack_68;
				if (__this_02 == null) {
					bVar5 = SStack_68.MoveNext();
					if (bVar5) {
						throw new NullReferenceException();
					}
				}
				else {
					while(true) {
						bVar5 = SStack_68.MoveNext();
						obj = SStack_68._currentValue;
						if (!bVar5) break;
						__this_00 = __this_02.List;
						__this_01 = CustomLogicManager.Evaluator;
						if (__this_01 == null) {
							throw new NullReferenceException();
						}
						item = __this_01.GetOrCreateMapObjectBuiltin((MapObject)obj);
						if (__this_00 == null) {
	label_05ae5a31: ;
							throw new NullReferenceException();
						}
						piVar1 = &__this_00._version;
						*piVar1 = *piVar1 + 1;
						pSVar3 = __this_00._items;
						if (pSVar3 == null) goto label_05ae5a31;
						uVar2 = __this_00._size;
						if (uVar2 < (uint)pSVar3.Length) {
							__this_00._size = uVar2 + 1;
							pSVar3[(int)uVar2] = (object)item;
						}
						else {
							__this_00.AddWithResize((object)item);
						}
					}
				}
				SStack_68.Dispose();
				return __this_02;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003569")]
	[Address(RVA = "0x59E5AB0", Offset = "0x59E4AB0", VA = "0x59E5AB0")]
	public static CustomLogicMapObjectBuiltin FindMapObjectByName(string objectName)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin$$FindMapObjectByName): 7 lines keep C-only constructs
		uint uVar1;
		Dictionary<object, object> __this;
		MapScriptBaseObject pMVar2;
		CustomLogicEvaluator __this_00;
		object obj;
		bool bVar3;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o __this_01;
		CustomLogicMapObjectBuiltin pCVar4;
		CustomLogicMapObjectBuiltin pCVar5;
		int iVar6;
		byte[] local_60 = new byte[16];
		MapObject local_50;
		System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_48;

		if (Il2CppMethodInitialized_07546e33 == false) {
			Il2CppMethodInitialized_07546e33 = true;
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = (Dictionary<object, object>)MapLoader.GoToMapObject;
		}
		else {
			__this = *(Dictionary<object, object>*)((long)(typeof(MapLoader)).static_fields + 0x18);
		}
		if ((__this == null) ||(__this_01 = __this.Values, __this_01 == null)) {
			throw new NullReferenceException();
		}
		local_60.GetEnumerator(__this_01);
		local_48._currentValue = (object)local_50;
		local_48._dictionary = (Dictionary<TKey, TValue>)local_60._0_8_;
		local_48._index = local_60._8_4_;
		local_48._version = local_60._12_4_;
		local_60._0_8_ = null;
		local_60._8_8_ = &local_48;
		do {
			bVar3 = local_48.MoveNext();
			obj = local_48._currentValue;
			if (!bVar3) {
				iVar6 = 5;
				goto label_05ae5c71;
			}
			if ((MapObject)local_48._currentValue == null) {
				throw new NullReferenceException();
			}
			pMVar2 = ((MapObject)((long)local_48._currentValue + 0x10)).ScriptObject;
			if (pMVar2 == null) {
				throw new NullReferenceException();
			}
			bVar3 = (pMVar2.Name == objectName);
		} while (!bVar3);
		__this_00 = CustomLogicManager.Evaluator;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		pCVar4 = __this_00.GetOrCreateMapObjectBuiltin((MapObject)obj);
		iVar6 = 4;
	label_05ae5c71: ;
		local_48.Dispose();
		if (iVar6 == 4) {
		}
		return pCVar5;
	}

	[Token(Token = "0x600356A")]
	[Address(RVA = "0x59E5D20", Offset = "0x59E4D20", VA = "0x59E5D20")]
	public static CustomLogicListBuiltin FindMapObjectsByName(string objectName)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin$$FindMapObjectsByName): 9 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Dictionary<object, object> __this;
		MapScriptBaseObject pMVar3;
		List<object> __this_00;
		CustomLogicEvaluator __this_01;
		Object[] pSVar4;
		object obj;
		bool bVar6;
		CustomLogicListBuiltin __this_02;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o __this_03;
		CustomLogicMapObjectBuiltin item;
		System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o SStack_68;
		byte[] auStack_48 = new byte[16];
		MapObject pMStack_38;

		SStack_68._dictionary = null;
		SStack_68._index = 0;
		SStack_68._version = 0;
		SStack_68._currentValue = null;
		__this_02 = new CustomLogicListBuiltin();
		__this = (Dictionary<object, object>)MapLoader.GoToMapObject;
		if (__this != null) {
			__this_03 = __this.Values;
			if (__this_03 != null) {
				auStack_48.GetEnumerator(__this_03);
				SStack_68._currentValue = (object)pMStack_38;
				SStack_68._dictionary = (Dictionary<TKey, TValue>)auStack_48._0_8_ ;
				SStack_68._index = auStack_48._8_4_;
				SStack_68._version = auStack_48._12_4_;
				auStack_48._0_8_ = null;
				auStack_48._8_8_ = &SStack_68;
				if (__this_02 == null) {
					while(true) {
						bVar6 = SStack_68.MoveNext();
						if (!bVar6) break;
						if ((MapObject)SStack_68._currentValue == null) goto label_05ae5ff2;
						pMVar3 = ((MapObject)((long)SStack_68._currentValue + 0x10)).ScriptObject;
						if (pMVar3 == null) goto label_05ae5ff7;
						bVar6 = (pMVar3.Name == objectName);
						if (bVar6) {
							throw new NullReferenceException();
						}
					}
				}
				else {
	label_05ae5eaa: ;
					bVar6 = SStack_68.MoveNext();
					obj = SStack_68._currentValue;
					if (bVar6) {
						if ((MapObject)SStack_68._currentValue == null) {
	label_05ae5ff2: ;
							throw new NullReferenceException();
						}
						pMVar3 = ((MapObject)((long)SStack_68._currentValue + 0x10)).ScriptObject;
						if (pMVar3 == null) {
	label_05ae5ff7: ;
							throw new NullReferenceException();
						}
						bVar6 = (pMVar3.Name == objectName);
						if (bVar6) {
							__this_00 = __this_02.List;
							__this_01 = CustomLogicManager.Evaluator;
							if (__this_01 == null) {
								throw new NullReferenceException();
							}
							item = __this_01.GetOrCreateMapObjectBuiltin((MapObject)obj);
							if (__this_00 != null) {
								piVar1 = &__this_00._version;
								*piVar1 = *piVar1 + 1;
								pSVar4 = __this_00._items;
								if (pSVar4 != null) {
									uVar2 = __this_00._size;
									if (uVar2 < (uint)pSVar4.Length) {
										__this_00._size = uVar2 + 1;
										pSVar4[(int)uVar2] = (object)item;
									}
									else {
										__this_00.AddWithResize((object)item);
									}
									goto label_05ae5eaa;
								}
							}
							throw new NullReferenceException();
						}
						goto label_05ae5eaa;
					}
				}
				SStack_68.Dispose();
				return __this_02;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600356B")]
	[Address(RVA = "0x59E6080", Offset = "0x59E5080", VA = "0x59E6080")]
	public static CustomLogicListBuiltin FindMapObjectsByRegex(string pattern, bool sorted = false)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin$$FindMapObjectsByRegex): 12 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Dictionary<@object, @object> __this;
		MapScriptBaseObject pMVar3;
		List<@object> pSVar4;
		CustomLogicEvaluator __this_00;
		Object[] pSVar5;
		object @object;
		MapObject obj;
		byte puVar7;
		bool bVar8;
		CustomLogicListBuiltin pCVar9;
		Regex __this_01;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o __this_02;
		CustomLogicMapObjectBuiltin item;
		CustomLogic_CustomLogicMapBuiltin___c_StaticFields pCVar10;
		Comparison<T> comparison;
		undefined7 in_register_00000031;
		byte[] auStack_78 = new byte[8];
		MapObject pMStack_68;
		uint uStack_54;
		CustomLogicListBuiltin pCStack_50;
		byte[] auStack_48 = new byte[16];
		MapObject pMStack_38;

		auStack_78 = (byte[])0x0;
		pMStack_68 = null;
		pCVar9 = new CustomLogicListBuiltin();
		__this_01 = new Regex(pattern, 9);
		__this = (Dictionary<@object, @object>)MapLoader.GoToMapObject;
		if ((__this != null) &&(__this_02 = __this.Values, __this_02 != null)) {
			auStack_48.GetEnumerator(__this_02);
			pMStack_68 = pMStack_38;
			auStack_78 = (byte[])auStack_48._0_8_;
			auStack_48._0_8_ = null;
			uStack_54 = (undefined4)CONCAT71(in_register_00000031, sorted);
			pCStack_50 = pCVar9;
			if (__this_01 == null) {
				auStack_48._8_8_ = auStack_78;
				bVar8 = auStack_78.MoveNext();
				if (bVar8) {
					if (pMStack_68 != null) {
						if (pMStack_68.ScriptObject != null) {
							throw new NullReferenceException();
						}
	label_05ae64e0: ;
						throw new NullReferenceException();
					}
	label_05ae64d4: ;
					throw new NullReferenceException();
				}
			}
			else {
				auStack_48._8_8_ = auStack_78;
				puVar7 = auStack_78;
				if (pCVar9 == null) {
					while (true) {
						auStack_48._8_8_ = puVar7;
						bVar8 = auStack_78.MoveNext();
						if (!(bVar8)) break;
						if (pMStack_68 == null) goto label_05ae64d4;
						pMVar3 = pMStack_68.ScriptObject;
						if (pMVar3 == null) goto label_05ae64e0;
						bVar8 = __this_01.IsMatch(pMVar3.Name);
						puVar7 = (byte)auStack_48._8_8_;
						if (bVar8) {
							throw new NullReferenceException();
						}
					}
				}
				else {
	label_05ae627a: ;
					bVar8 = auStack_78.MoveNext();
					obj = pMStack_68;
					if (bVar8) {
						if (pMStack_68 == null) goto label_05ae64d4;
						pMVar3 = pMStack_68.ScriptObject;
						if (pMVar3 == null) goto label_05ae64e0;
						bVar8 = __this_01.IsMatch(pMVar3.Name);
						if (bVar8) {
							pSVar4 = pCStack_50.List;
							__this_00 = CustomLogicManager.Evaluator;
							if (__this_00 == null) {
								throw new NullReferenceException();
							}
							item = __this_00.GetOrCreateMapObjectBuiltin(obj);
							if (pSVar4 != null) {
								piVar1 = &pSVar4._version;
								*piVar1 = *piVar1 + 1;
								pSVar5 = pSVar4._items;
								if (pSVar5 != null) {
									uVar2 = pSVar4._size;
									if (uVar2 < (uint)pSVar5.Length) {
										pSVar4._size = uVar2 + 1;
										pSVar5[(int)uVar2] = (object)item;
									}
									else {
										pSVar4.AddWithResize((object)item);
									}
									goto label_05ae627a;
								}
							}
							throw new NullReferenceException();
						}
						goto label_05ae627a;
					}
				}
			}
			auStack_78.Dispose();
			pCVar9 = pCStack_50;
			if ((char)uStack_54 == false) {
				return pCVar9;
			}
			if (pCStack_50 != null) {
				pSVar4 = pCStack_50.List;
				if ((typeof(CustomLogicMapBuiltin.c)._2).cctor_finished_or_no_cctor == 0) {
					pCVar10 = typeof(CustomLogicMapBuiltin.c).static_fields;
					comparison = (Comparison<T>)pCVar10.__9__8_0;
				}
				else {
					pCVar10 = typeof(CustomLogicMapBuiltin.c).static_fields;
					comparison = (Comparison<T>)pCVar10.__9__8_0;
				}
				if (comparison == null) {
					if (((typeof(CustomLogicMapBuiltin.c))._2).cctor_finished_or_no_cctor == 0) {
						pCVar10 = typeof(CustomLogicMapBuiltin.c).static_fields;
					}
					@object = (object)pCVar10.__9;
					comparison = new Comparison<@object>(@object, (intptr_t)MethodInfo_CustomLogic_CustomLogicMapBuiltin_c_FindMapObjectsByRegex_b__8_0);
					pCVar10 = typeof(CustomLogicMapBuiltin.c).static_fields;
					pCVar10.__9__8_0 = (Comparison<@object>)comparison;
				}
				if (pSVar4 != null) {
					pSVar4.Sort(comparison);
					return pCVar9;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600356C")]
	[Address(RVA = "0x59E6560", Offset = "0x59E5560", VA = "0x59E6560")]
	public static CustomLogicMapObjectBuiltin FindMapObjectByComponent(string className)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin$$FindMapObjectByComponent): 1 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		int iVar3;
		CustomLogicListBuiltin __this;
		CustomLogicMapObjectBuiltin pCVar4;
		CustomLogicMapObjectBuiltin pCVar5;

		if (Il2CppMethodInitialized_07546e36 == false) {
			Il2CppMethodInitialized_07546e36 = true;
			uVar2 = (typeof(CustomLogicMapBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(CustomLogicMapBuiltin)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			__this = CustomLogicMapBuiltin.FindMapObjectsByComponent(className);
		}
		else {
			__this = CustomLogicMapBuiltin.FindMapObjectsByComponent(className);
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		iVar3 = __this.Count;
		if (0 < iVar3) {
			pCVar4 = (CustomLogicMapObjectBuiltin)__this.Get(0);
			if (pCVar4 != null) {
				bVar1 = (typeof(CustomLogicMapObjectBuiltin)._2).typeHierarchyDepth;
				if (((((Il2CppClass)pCVar4.klass)._2).typeHierarchyDepth < bVar1) ||((((Il2CppClass)pCVar4.klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CustomLogicMapObjectBuiltin))) {
					throw new InvalidCastException();
				}
			}
		}
		return pCVar5;
	}

	[Token(Token = "0x600356D")]
	[Address(RVA = "0x59E6660", Offset = "0x59E5660", VA = "0x59E6660")]
	public static CustomLogicListBuiltin FindMapObjectsByComponent(string className)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin$$FindMapObjectsByComponent): 9 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Dictionary<object, object> __this;
		List<CustomLogicComponentInstance> __this_00;
		List<object> __this_01;
		CustomLogicEvaluator __this_02;
		Object[] pSVar3;
		MapObject obj;
		bool bVar5;
		CustomLogicListBuiltin __this_03;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o __this_04;
		String a;
		CustomLogicMapObjectBuiltin item;
		byte[] local_90 = new byte[16];
		MapObject local_80;
		byte[] local_78 = new byte[16];
		MapObject local_68;
		byte[] local_58 = new byte[8];
		MapObject local_48;

		local_58 = (byte[])0x0;
		local_48 = null;
		__this_03 = new CustomLogicListBuiltin();
		__this = (Dictionary<object, object>)MapLoader.GoToMapObject;
		if ((__this == null) ||(__this_04 = __this.Values, __this_04 == null)) {
			throw new NullReferenceException();
		}
		local_90.GetEnumerator(__this_04);
		local_68 = local_80;
		local_78._0_8_ = local_90._0_8_;
		local_78._8_8_ = local_90._8_8_;
		while(true) {
			bVar5 = local_78.MoveNext();
			obj = local_68;
			if (!bVar5) {
				local_78.Dispose();
				return __this_03;
			}
			if (local_68 == null) {
				throw new NullReferenceException();
			}
			__this_00 = local_68.ComponentInstances;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			local_90.GetEnumerator((List<object>)__this_00);
			local_48 = local_80;
			local_58 = (byte[])local_90._0_8_;
			local_90._0_8_ = null;
			local_90._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_58;
			do {
				bVar5 = local_58.MoveNext();
				if (!bVar5) goto label_05ae695a;
				if (local_48 == null) {
					throw new NullReferenceException();
				}
				a = (String)(*((Il2CppClass)local_48.klass).vtable[6].methodPtr)(local_48,*(ulong)&((Il2CppClass)local_48.klass).vtable[6].method);
				bVar5 = (a == className);
			} while (!bVar5);
			if (__this_03 == null) {
				throw new NullReferenceException();
			}
			__this_01 = __this_03.List;
			__this_02 = CustomLogicManager.Evaluator;
			if (__this_02 == null) {
				throw new NullReferenceException();
			}
			item = __this_02.GetOrCreateMapObjectBuiltin(obj);
			if (__this_01 == null) break;
			piVar1 = &__this_01._version;
			*piVar1 = *piVar1 + 1;
			pSVar3 = __this_01._items;
			if (pSVar3 == null) break;
			uVar2 = __this_01._size;
			if (uVar2 < (uint)pSVar3.Length) {
				__this_01._size = uVar2 + 1;
				pSVar3[(int)uVar2] = (object)item;
			}
			else {
				__this_01.AddWithResize((object)item);
			}
	label_05ae695a: ;
			local_58.Dispose();
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600356E")]
	[Address(RVA = "0x59E6A80", Offset = "0x59E5A80", VA = "0x59E6A80")]
	public static CustomLogicMapObjectBuiltin FindMapObjectByID(int id)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin$$FindMapObjectByID): clean
		uint uVar1;
		Dictionary<int, object> pSVar2;
		CustomLogicEvaluator __this;
		bool bVar3;
		MapObject obj;
		CustomLogicMapObjectBuiltin pCVar4;

		if (Il2CppMethodInitialized_07546e38 == false) {
			Il2CppMethodInitialized_07546e38 = true;
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = (Dictionary<int, object>)MapLoader.IdToMapObject;
		}
		else {
			pSVar2 = *(Dictionary<int, object>*)(typeof(MapLoader)).static_fields;
		}
		if (pSVar2 != null) {
			bVar3 = pSVar2.ContainsKey(id);
			if (!bVar3) {
				return null;
			}
			__this = CustomLogicManager.Evaluator;
			pSVar2 = (Dictionary<int, object>)MapLoader.IdToMapObject;
			if ((pSVar2 != null) &&(obj = pSVar2.get_Item(id), __this != null)) {
				return pCVar4;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600356F")]
	[Address(RVA = "0x59E6BB0", Offset = "0x59E5BB0", VA = "0x59E6BB0")]
	public static CustomLogicMapObjectBuiltin FindMapObjectByTag(string tag)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin$$FindMapObjectByTag): 2 lines keep C-only constructs
		uint uVar1;
		Dictionary<object, object> pSVar2;
		CustomLogicEvaluator __this;
		bool bVar3;
		object pIVar4;
		List<object> __this_00;
		MapObject obj;
		CustomLogicMapObjectBuiltin pCVar5;

		if (Il2CppMethodInitialized_07546e39 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_MapObject_get_Item) ;
			Il2CppMethodInitialized_07546e39 = true;
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = (Dictionary<object, object>)MapLoader.Tags;
		}
		else {
			pSVar2 = *(Dictionary<object, object>*)((long)(typeof(MapLoader)).static_fields + 0x20);
		}
		if (pSVar2 != null) {
			bVar3 = pSVar2.ContainsKey((object)tag);
			if (!bVar3) {
				return null;
			}
			pSVar2 = (Dictionary<object, object>)MapLoader.Tags;
			if ((pSVar2 != null) &&(pIVar4 = pSVar2.get_Item((object)tag), pIVar4 != null)) {
				if (*(int)&pIVar4[1].monitor < 1) {
					return null;
				}
				__this = CustomLogicManager.Evaluator;
				pSVar2 = (Dictionary<object, object>)MapLoader.Tags;
				if (((pSVar2 != null) &&(__this_00 = (List<object>)pSVar2.get_Item((object)tag), __this_00 != null)) &&(obj = __this_00.get_Item(0), __this != null)) {
					return pCVar5;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003570")]
	[Address(RVA = "0x59E6D80", Offset = "0x59E5D80", VA = "0x59E6D80")]
	public static CustomLogicListBuiltin FindMapObjectsByTag(string tag)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin$$FindMapObjectsByTag): 8 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Dictionary<object, object> pSVar3;
		CustomLogicEvaluator __this;
		Object[] pSVar4;
		object obj;
		bool bVar6;
		CustomLogicListBuiltin __this_00;
		List<object> pSVar7;
		CustomLogicMapObjectBuiltin item;
		System_Collections_Generic_List_Enumerator_object__o SStack_68;
		byte[] auStack_48 = new byte[16];
		MapObject pMStack_38;

		__this_00 = new CustomLogicListBuiltin();
		pSVar3 = (Dictionary<object, object>)MapLoader.Tags;
		if (pSVar3 != null) {
			bVar6 = pSVar3.ContainsKey((object)tag);
			if (!bVar6) {
				return __this_00;
			}
			pSVar3 = (Dictionary<object, object>)MapLoader.Tags;
			if ((pSVar3 != null) &&(pSVar7 = (List<object>)pSVar3.get_Item((object)tag), pSVar7 != null)) {
				auStack_48.GetEnumerator(pSVar7);
				SStack_68._current = (object)pMStack_38;
				SStack_68._list = (List<T>)auStack_48._0_8_;
				SStack_68._index = auStack_48._8_4_;
				SStack_68._version = auStack_48._12_4_;
				auStack_48._0_8_ = null;
				auStack_48._8_8_ = &SStack_68;
				if (__this_00 == null) {
					bVar6 = SStack_68.MoveNext();
					if (bVar6) {
						throw new NullReferenceException();
					}
				}
				else {
					while (true) {
						bVar6 = SStack_68.MoveNext();
						obj = SStack_68._current;
						if (!(bVar6)) break;
						pSVar7 = __this_00.List;
						__this = CustomLogicManager.Evaluator;
						if (__this == null) {
							throw new NullReferenceException();
						}
						item = __this.GetOrCreateMapObjectBuiltin((MapObject)obj);
						if (pSVar7 == null) {
	label_05ae7021: ;
							throw new NullReferenceException();
						}
						piVar1 = &pSVar7._version;
						*piVar1 = *piVar1 + 1;
						pSVar4 = pSVar7._items;
						if (pSVar4 == null) goto label_05ae7021;
						uVar2 = pSVar7._size;
						if (uVar2 < (uint)pSVar4.Length) {
							pSVar7._size = uVar2 + 1;
							pSVar4[(int)uVar2] = (object)item;
						}
						else {
							pSVar7.AddWithResize((object)item);
						}
					}
				}
				SStack_68.Dispose();
				return __this_00;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003571")]
	[Address(RVA = "0x59E70A0", Offset = "0x59E60A0", VA = "0x59E70A0")]
	public static CustomLogicListBuiltin FindMapObjectsByPlayer(CustomLogicPlayerBuiltin player)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin$$FindMapObjectsByPlayer): 12 lines keep C-only constructs
		CustomLogicEvaluator pCVar1;
		Dictionary<int, object> __this;
		CustomLogicPhotonSync pCVar2;
		object pIVar3;
		System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o pSVar4;
		bool bVar5;
		CustomLogicListBuiltin __this_00;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o __this_01;
		CustomLogicPlayerBuiltin pCVar6;
		System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_58;
		byte[] local_40 = new byte[16];
		CustomLogicNetworkViewBuiltin local_30;

		if (Il2CppMethodInitialized_07546e3b == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_get_Values) ;
			Il2CppMethodInitialized_07546e3b = true;
		}
		__this_00 = new CustomLogicListBuiltin();
		pCVar1 = CustomLogicManager.Evaluator;
		if ((pCVar1 != null) &&(__this = (Dictionary<int, object>)pCVar1.IdToNetworkView, __this != null)) {
			__this_01 = __this.Values;
			if (__this_01 != null) {
				local_40.GetEnumerator(__this_01);
				local_58._currentValue = (object)local_30;
				local_58._dictionary = (Dictionary<TKey, TValue>)local_40._0_8_;
				local_58._index = local_40._8_4_;
				local_58._version = local_40._12_4_;
				local_40._0_8_ = null;
				local_40._8_8_ = &local_58;
				pSVar4 = &local_58;
				if (__this_00 == null) {
					do {
						local_40._8_8_ = pSVar4;
						bVar5 = local_58.MoveNext();
						pIVar3 = local_58._currentValue;
						if (!bVar5) goto label_05ae7249;
						if ((CustomLogicNetworkViewBuiltin)local_58._currentValue ==null) goto label_05ae726c;
						pCVar6 = local_58._currentValue.Owner;
						pSVar4 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o)local_40._8_8_;
					} while (pCVar6 != player);
					if (((CustomLogicNetworkViewBuiltin)((long)pIVar3 + 0x10)).Sync !=null) {
						throw new NullReferenceException();
					}
	label_05ae7278: ;
					throw new NullReferenceException();
				}
				do {
					do {
						bVar5 = local_58.MoveNext();
						pIVar3 = local_58._currentValue;
						if (!bVar5) {
	label_05ae7249: ;
							local_58.Dispose();
							return __this_00;
						}
						if ((CustomLogicNetworkViewBuiltin)local_58._currentValue ==null) {
	label_05ae726c: ;
							throw new NullReferenceException();
						}
						pCVar6 = local_58._currentValue.Owner;
					} while (pCVar6 != player);
					pCVar2 = ((CustomLogicNetworkViewBuiltin)((long)pIVar3 + 0x10)).Sync;
					if (pCVar2 == null) goto label_05ae7278;
					__this_00.Add((object)pCVar2._CustomLogicMapObjectBuiltin_k__BackingField);
				} while(true);
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003572")]
	[Address(RVA = "0x59E72F0", Offset = "0x59E62F0", VA = "0x59E72F0")]
	public static CustomLogicMapObjectBuiltin CreateMapObject(CustomLogicPrefabBuiltin prefab, [Optional] CustomLogicVector3Builtin position, [Optional] CustomLogicVector3Builtin rotation, [Optional] CustomLogicVector3Builtin scale)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin$$CreateMapObject): clean
		bool persistsOwnership;
		MethodInfo method_00;
		MapScriptSceneObject pMVar1;
		CustomLogicMapObjectBuiltin pCVar2;

		if ((prefab != null) &&(pMVar1 = prefab.Value, pMVar1 != null)) {
			method_00 = (MethodInfo)pMVar1.Serialize();
			pMVar1 = new MapScriptSceneObject();
			if (pMVar1 != null) {
				pMVar1.Deserialize((String)method_00);
				if (position != null) {
					method_00 = null;
					pMVar1.SetPosition((Vector3)position.Value);
				}
				if (rotation != null) {
					method_00 = null;
					pMVar1.SetRotation((Vector3)rotation.Value);
				}
				if (scale != null) {
					method_00 = null;
					pMVar1.SetScale((Vector3)scale.Value);
				}
				if (pMVar1.Networked == false) {
					return pCVar2;
				}
				persistsOwnership = prefab.PersistsOwnership;
				if ((typeof(CustomLogicMapBuiltin)._2).cctor_finished_or_no_cctor == 0) {
				}
				pCVar2 = CustomLogicMapBuiltin.CreateRuntimeNetworkedMapObject(pMVar1, persistsOwnership);
				return pCVar2;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003573")]
	[Address(RVA = "0x59E7830", Offset = "0x59E6830", VA = "0x59E7830")]
	public static CustomLogicMapObjectBuiltin CreateMapObjectRaw(string prefab)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin$$CreateMapObjectRaw): 4 lines keep C-only constructs
		uint uVar1;
		String[] value;
		MethodInfo pMVar2;
		MapScriptSceneObject __this;
		CustomLogicMapObjectBuiltin pCVar3;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;

		if (prefab != null) {
			value = prefab.Split(10, 0);
			pMVar2 = (MethodInfo)String.Join("", value);
			__this = new MapScriptSceneObject();
			if (__this != null) {
				__this.Deserialize((String)pMVar2);
				uVar1 = (typeof(CustomLogicMapBuiltin)._2).cctor_finished_or_no_cctor;
				if (__this.Networked == false) {
					if (uVar1 == 0) {
					}
					return pCVar3;
				}
				pMVar2 = extraout_RDX;
				if (uVar1 == 0) {
					pMVar2 = extraout_RDX_00;
				}
				pCVar3 = CustomLogicMapBuiltin.CreateRuntimeNetworkedMapObject(__this, false);
				return pCVar3;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003574")]
	[Address(RVA = "0x59E7920", Offset = "0x59E6920", VA = "0x59E7920")]
	public static CustomLogicPrefabBuiltin PrefabFromMapObject(CustomLogicMapObjectBuiltin mapObject, bool clearComponents = false)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin$$PrefabFromMapObject): clean
		MapObject pMVar1;
		MapScriptBaseObject pMVar2;
		String prefabCSV;
		CustomLogicPrefabBuiltin __this;

		if (((mapObject == null) ||(pMVar1 = mapObject.Value, pMVar1 == null)) ||(pMVar2 = pMVar1.ScriptObject, pMVar2 == null)) {
			throw new NullReferenceException();
		}
		prefabCSV = pMVar2.Serialize();
		__this = new CustomLogicPrefabBuiltin(prefabCSV, clearComponents);
		return __this;
	}

	[Token(Token = "0x6003575")]
	[Address(RVA = "0x59E79A0", Offset = "0x59E69A0", VA = "0x59E79A0")]
	public static void DestroyMapObject(CustomLogicMapObjectBuiltin mapObject, bool includeChildren)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin$$DestroyMapObject): clean
		MapObject pMVar1;
		MapScriptBaseObject pMVar2;
		CustomLogicEvaluator pCVar3;
		Dictionary<int, object> pSVar4;
		CustomLogicPhotonSync __this;
		bool bVar5;
		CustomLogicNetworkViewBuiltin pCVar6;

		if (((mapObject != null) &&(pMVar1 = mapObject.Value, pMVar1 != null)) &&(pMVar2 = pMVar1.ScriptObject, pMVar2 != null)) {
			if (pMVar2.Networked == false) {
	label_05ae7b4f: ;
				if ((typeof(CustomLogicMapBuiltin)._2).cctor_finished_or_no_cctor == 0) {
				}
				CustomLogicMapBuiltin.DestroyMapObjectBuiltin((object)mapObject, includeChildren);
				return;
			}
			pCVar3 = CustomLogicManager.Evaluator;
			if (((pCVar3 != null) &&(pMVar1 = mapObject.Value, pMVar1 != null)) &&((pMVar2 = pMVar1.ScriptObject, pMVar2 != null &&(pSVar4 = (Dictionary<int, object>)pCVar3.IdToNetworkView, pSVar4 != null)))) {
				bVar5 = pSVar4.ContainsKey(pMVar2.Id);
				if (!bVar5) goto label_05ae7b4f;
				pCVar3 = CustomLogicManager.Evaluator;
				if (((pCVar3 != null) &&(pMVar1 = mapObject.Value, pMVar1 != null)) &&((pMVar2 = pMVar1.ScriptObject, pMVar2 != null &&(pSVar4 = (Dictionary<int, object>)pCVar3.IdToNetworkView, pSVar4 != null)))) {
					pCVar6 = pSVar4.get_Item(pMVar2.Id);
					pCVar3 = CustomLogicManager.Evaluator;
					if ((((pCVar3 != null) &&(pMVar1 = mapObject.Value, pMVar1 != null)) &&(pMVar2 = pMVar1.ScriptObject, pMVar2 != null)) &&(pSVar4 = (Dictionary<int, object>)pCVar3.IdToNetworkView, pSVar4 != null)) {
						pSVar4.Remove(pMVar2.Id);
						if ((pCVar6 != null) &&(__this = pCVar6.Sync, __this != null)) {
							__this.DestroyMe();
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003576")]
	[Address(RVA = "0x59E8370", Offset = "0x59E7370", VA = "0x59E8370")]
	public static CustomLogicMapObjectBuiltin CopyMapObject(CustomLogicMapObjectBuiltin mapObject, bool includeChildren = true)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin$$CopyMapObject): clean
		int parent;
		CustomLogicEvaluator __this;
		MapObject pMVar1;
		CustomLogicMapObjectBuiltin pCVar2;

		if ((mapObject != null) &&(pMVar1 = mapObject.Value, pMVar1 != null)) {
			parent = pMVar1.Parent;
			pMVar1 = CustomLogicMapBuiltin.CopyMapObject(pMVar1, parent, includeChildren);
			if (pMVar1 != null) {
				pMVar1.RuntimeCreated = true;
				__this = CustomLogicManager.Evaluator;
				if (__this != null) {
					return pCVar2;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003577")]
	[Address(RVA = "0x59E8860", Offset = "0x59E7860", VA = "0x59E8860")]
	public static void DestroyMapTargetable(CustomLogicMapTargetableBuiltin targetable)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin$$DestroyMapTargetable): clean
		Object obj;
		List<MapTargetable> __this;

		if (targetable != null) {
			obj = (Object)targetable._GameObject_k__BackingField;
			Object.Destroy(obj);
			__this = MapLoader.MapTargetables;
			if (__this != null) {
				__this.Remove((object)targetable._Value_k__BackingField);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003578")]
	[Address(RVA = "0x59E8910", Offset = "0x59E7910", VA = "0x59E8910")]
	public static void UpdateNavMesh()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin$$UpdateNavMesh): clean
		uint uVar1;
		Task __this;

		if (Il2CppMethodInitialized_07546e42 == false) {
			Il2CppMethodInitialized_07546e42 = true;
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = MapLoader.UpdateNavMesh();
		}
		else {
			__this = MapLoader.UpdateNavMesh();
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Wait();
		return;
	}

	[Token(Token = "0x6003579")]
	[Address(RVA = "0x59E8980", Offset = "0x59E7980", VA = "0x59E8980")]
	public static void UpdateNavMeshAsync()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin$$UpdateNavMeshAsync): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07546e43 == false) {
			Il2CppMethodInitialized_07546e43 = true;
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			MapLoader.UpdateNavMesh();
			return;
		}
		MapLoader.UpdateNavMesh();
		return;
	}

	[Token(Token = "0x600357A")]
	[Address(RVA = "0x59E7460", Offset = "0x59E6460", VA = "0x59E7460")]
	protected static CustomLogicMapObjectBuiltin CreateRuntimeNetworkedMapObject(MapScriptSceneObject script, bool persistsOwnership = false)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin$$CreateRuntimeNetworkedMapObject): 29 lines keep C-only constructs
		float fVar1;
		ulong uVar2;
		ulong uVar3;
		ulong uVar4;
		uint uVar5;
		Object[] data;
		object pIVar8;
		object pIVar9;
		GameObject __this;
		CustomLogicPhotonSync __this_00;
		String csvScript;
		Il2CppClass klass;
		uint uVar10;
		uint uVar11;
		Quaternion rotation;
		Vector3 position;
		uint uStack_5c;
		ulong uStack_58;
		ulong uStack_50;
		ulong uStack_48;
		ulong uStack_38;

		if (Il2CppMethodInitialized_07546e44 == false) {
			Il2CppMethodInitialized_07546e44 = true;
			uVar5 = (typeof(CustomLogicMapBuiltin)._2).cctor_finished_or_no_cctor;
			klass = typeof(CustomLogicMapBuiltin);
		}
		else {
			uVar5 = (typeof(CustomLogicMapBuiltin)._2).cctor_finished_or_no_cctor;
			klass = typeof(CustomLogicMapBuiltin);
		}
		typeof(CustomLogicMapBuiltin) = (CustomLogicMapBuiltin)klass;
		if (uVar5 == 0) {
			CustomLogicMapBuiltin.TrySpawningRuntimeNetworkedObject();
		}
		else {
			CustomLogicMapBuiltin.TrySpawningRuntimeNetworkedObject();
		}
		if (script != null) {
			script.Id = -1;
			script.Parent = MapLoader.ROOT_OBJECT_ID;
			script.Networked = true;
			data = (Object[])new object[1];
			uStack_5c = 2;
			pIVar8 = (object)uStack_5c;
			if (data != null) {
				if ((pIVar8 != null) &&(pIVar9 = il2cpp_vm_Object_IsInst(pIVar8, (((data.obj).klass)._1).element_class), pIVar9 == null)) {
					pIVar8 = new ArrayTypeMismatchException();
					throw pIVar8;
				}
				if ((int)data.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				data[0] = pIVar8;
				uVar2._0_4_ = (Vector3.zeroVector).x;
				uVar2._4_4_ = (Vector3.zeroVector).y;
				fVar1 = (Vector3.zeroVector).z;
				uVar10 = 0;
				uVar11 = 0;
				if (g_data_0753e72b == false) {
					uStack_50 = 0;
					uStack_58 = uVar2;
					g_data_0753e72b = true;
					uVar2._0_4_ = (undefined4)uStack_58;
					uVar2._4_4_ = uStack_58._4_4_;
					uVar10 = (undefined4)uStack_50;
					uVar11 = uStack_50._4_4_;
				}
				uVar3._0_4_ = (Quaternion.identityQuaternion).x;
				uVar3._4_4_ = (Quaternion.identityQuaternion).y;
				uVar4._0_4_ = (Quaternion.identityQuaternion).z;
				uVar4._4_4_ = (Quaternion.identityQuaternion).w;
				if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
					uStack_58 = CONCAT44(uVar2._4_4_, (undefined4)uVar2);
					uStack_50 = CONCAT44(uVar11, uVar10);
					uStack_48 = uVar4;
					uStack_38 = uVar3;
					uVar2._0_4_ = (undefined4)uStack_58;
					uVar2._4_4_ = uStack_58._4_4_;
					uVar3._0_4_ = (undefined4)uStack_38;
					uVar3._4_4_ = uStack_38._4_4_;
					uVar4._0_4_ = (undefined4)uStack_48;
					uVar4._4_4_ = uStack_48._4_4_;
				}
				rotation.y = (float)uVar3._4_4_;
				rotation.x = (float)(undefined4)uVar3;
				rotation.w = (float)uVar4._4_4_;
				rotation.z = (float)(undefined4)uVar4;
				position.y = (float)uVar2._4_4_;
				position.x = (float)(undefined4)uVar2;
				position.z = fVar1;
				__this = PhotonNetwork.Instantiate("Game/CustomLogicPhotonSyncDynamicPrefab", position, rotation, 0, data);
				if (__this != null) {
					__this_00 = __this.GetComponent<CustomLogicPhotonSync>();
					csvScript = script.Serialize();
					if (__this_00 != null) {
						__this_00.InitDynamic(persistsOwnership, csvScript);
						return __this_00._CustomLogicMapObjectBuiltin_k__BackingField;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600357B")]
	[Address(RVA = "0x59E7710", Offset = "0x59E6710", VA = "0x59E7710")]
	protected static CustomLogicMapObjectBuiltin CreateRuntimeMapObject(MapScriptSceneObject script)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin$$CreateRuntimeMapObject): clean
		uint uVar1;
		CustomLogicEvaluator pCVar2;
		int iVar3;
		MapObject mapObject;
		CustomLogicMapObjectBuiltin pCVar4;

		if (Il2CppMethodInitialized_07546e45 == false) {
			Il2CppMethodInitialized_07546e45 = true;
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			iVar3 = MapLoader.GetNextObjectId();
		}
		else {
			iVar3 = MapLoader.GetNextObjectId();
		}
		if (script != null) {
			script.Id = iVar3;
			script.Parent = MapLoader.ROOT_OBJECT_ID;
			script.Networked = false;
			mapObject = MapLoader.LoadObject((MapScriptBaseObject)script, false);
			MapLoader.SetParent(mapObject);
			pCVar2 = CustomLogicManager.Evaluator;
			if ((pCVar2 != null) &&(pCVar2.LoadMapObjectComponents(mapObject, true), mapObject != null)) {
				mapObject.RuntimeCreated = true;
				pCVar2 = CustomLogicManager.Evaluator;
				if (pCVar2 != null) {
					return pCVar4;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600357C")]
	[Address(RVA = "0x59E8430", Offset = "0x59E7430", VA = "0x59E8430")]
	protected static MapObject CopyMapObject(MapObject obj, int parent, bool recursive)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin$$CopyMapObject): 8 lines keep C-only constructs
		MapScriptBaseObject pMVar1;
		CustomLogicEvaluator __this;
		Dictionary<int, object> pSVar2;
		bool bVar3;
		int iVar4;
		MapScriptSceneObject __this_00;
		String pSVar5;
		MapObject pMVar6;
		HashSet<int> __this_01;
		MethodInfo* method_00;
		System_Collections_Generic_HashSet_Enumerator_T__o local_68;
		byte[] local_50 = new byte[16];
		object local_40;
		MapObject local_38;

		local_68._set = null;
		local_68._index = 0;
		local_68._version = 0;
		local_68._current = null;
		__this_00 = new MapScriptSceneObject();
		if (((obj != null) &&(pMVar1 = obj.ScriptObject, pMVar1 != null)) &&(pSVar5 = pMVar1.Serialize(), __this_00 != null)) {
			__this_00.Deserialize(pSVar5);
			iVar4 = MapLoader.GetNextObjectId();
			__this_00.Id = iVar4;
			__this_00.Parent = parent;
			__this_00.Networked = false;
			pMVar6 = MapLoader.LoadObject((MapScriptBaseObject)__this_00, false);
			MapLoader.SetParent(pMVar6);
			__this = CustomLogicManager.Evaluator;
			if ((__this != null) &&(__this.LoadMapObjectComponents(pMVar6, true), pMVar6 != null)) {
				pMVar6.RuntimeCreated = true;
				if (!recursive) {
					return pMVar6;
				}
				pMVar1 = obj.ScriptObject;
				if ((pMVar1 != null) &&(pSVar2 = (Dictionary<int, object>)MapLoader.IdToChildren, pSVar2 != null)) {
					bVar3 = pSVar2.ContainsKey(pMVar1.Id);
					if (!bVar3) {
						return pMVar6;
					}
					pMVar1 = obj.ScriptObject;
					if (((pMVar1 != null) &&(pSVar2 = (Dictionary<int, object>)MapLoader.IdToChildren, pSVar2 != null)) &&(local_38 = pMVar6, __this_01 = (HashSet<int>)pSVar2.get_Item(pMVar1.Id), __this_01 != null)) {
						method_00 = &MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator;
						local_50.GetEnumerator(__this_01);
						local_68._current = local_40;
						local_68._set = (HashSet<T>)local_50._0_8_;
						local_68._index = local_50._8_4_;
						local_68._version = local_50._12_4_;
						local_50._0_8_ = null;
						local_50._8_8_ = &local_68;
						while(true) {
							bVar3 = local_68.MoveNext();
							if (!bVar3) {
								local_68.Dispose();
								return local_38;
							}
							iVar4 = (int32_t)local_68._current;
							pSVar2 = (Dictionary<int, object>)MapLoader.IdToMapObject;
							if (pSVar2 == null) break;
							bVar3 = pSVar2.ContainsKey(iVar4);
							if (bVar3) {
								pSVar2 = (Dictionary<int, object>)MapLoader.IdToMapObject;
								if (pSVar2 == null) {
									throw new NullReferenceException();
								}
								pMVar6 = pSVar2.get_Item(iVar4);
								iVar4 = __this_00.Id;
								CustomLogicMapBuiltin.CopyMapObject(pMVar6, iVar4, true);
							}
						}
						throw new NullReferenceException();
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600357D")]
	[Address(RVA = "0x59E7B80", Offset = "0x59E6B80", VA = "0x59E7B80")]
	public static void DestroyMapObjectBuiltin(object obj, bool recursive)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin$$DestroyMapObjectBuiltin): 18 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		byte bVar3;
		byte bVar4;
		int iVar5;
		IntPtr pvVar6;
		CustomLogicEvaluator pCVar7;
		Dictionary<int, object> pSVar8;
		List<object> __this;
		CustomLogicComponentInstance instance;
		bool bVar9;
		HashSet<int> __this_00;
		HashSet<int> __this_01;
		MapObject obj_00;
		undefined7 in_register_00000031;
		Il2CppClass* ppIVar10;
		Il2CppClass pIVar11;
		byte[] local_90 = new byte[16];
		CustomLogicComponentInstance local_80;
		byte[] local_78 = new byte[8];
		CustomLogicComponentInstance local_68;
		uint local_54;
		Il2CppClass local_50;
		byte[] local_48 = new byte[8];
		CustomLogicComponentInstance local_38;

		local_78 = (byte[])0x0;
		local_68 = null;
		local_48 = (byte[])0x0;
		local_38 = null;
		if (obj == null) {
			return;
		}
		pIVar11 = obj.klass;
		bVar2 = (pIVar11._2).typeHierarchyDepth;
		bVar3 = (typeof(CustomLogicMapObjectBuiltin)._2).typeHierarchyDepth;
		if ((bVar2 < bVar3) ||(ppIVar10 = (pIVar11._2).typeHierarchy, ppIVar10[(ulong)bVar3 - 1] != typeof(CustomLogicMapObjectBuiltin))) {
			bVar4 = (typeof(MapObject)._2).typeHierarchyDepth;
			if (bVar2 < bVar4) {
				return;
			}
			ppIVar10 = (pIVar11._2).typeHierarchy;
			if (ppIVar10[(ulong)bVar4 - 1] != typeof(MapObject)) {
				return;
			}
			if (bVar3 <= bVar2) goto label_05ae7d41;
	label_05ae7d48: ;
			bVar3 = (typeof(MapObject)._2).typeHierarchyDepth;
			if ((bVar2 < bVar3) ||(pIVar11 = (Il2CppClass)obj, ppIVar10[(ulong)bVar3 - 1] != typeof(MapObject))) goto label_05ae8249;
		}
		else {
	label_05ae7d41: ;
			if (ppIVar10[(ulong)bVar3 - 1] != typeof(CustomLogicMapObjectBuiltin)) goto label_05ae7d48;
			pIVar11 = obj[3].klass;
			obj[3].klass = null;
			if (pIVar11 == null) goto label_05ae8249;
		}
		pvVar6 = (pIVar11._1).byval_arg.data;
		if (pvVar6 != null) {
			iVar5 = *(int)((long)pvVar6 + 0x20);
			if ((*(sbyte)&(pIVar11._1).declaringType != false) && (*(sbyte)((long)pvVar6 + 0x2b) != false)) {
				piVar1 = &CustomLogicMapBuiltin._instantiateCount;
				*piVar1 = *piVar1 + -1;
			}
			pCVar7 = CustomLogicManager.Evaluator;
			if ((pCVar7 != null) &&(pSVar8 = (Dictionary<int, object>)pCVar7.IdToNetworkView, pSVar8 != null)) {
				bVar9 = pSVar8.ContainsKey(iVar5);
				if (bVar9) {
					pCVar7 = CustomLogicManager.Evaluator;
					if ((pCVar7 == null) ||(pSVar8 = (Dictionary<int, object>)pCVar7.IdToNetworkView, pSVar8 == null)) goto label_05ae8249;
					pSVar8.get_Item(iVar5);
					pCVar7 = CustomLogicManager.Evaluator;
					if ((pCVar7 == null) ||(pSVar8 = (Dictionary<int, object>)pCVar7.IdToNetworkView, pSVar8 == null)) goto label_05ae8249;
					pSVar8.Remove(iVar5);
				}
				local_54 = (undefined4)CONCAT71(in_register_00000031, recursive);
				__this_00 = new HashSet<int>();
				pSVar8 = (Dictionary<int, object>)MapLoader.IdToChildren;
				if (pSVar8 != null) {
					bVar9 = pSVar8.ContainsKey(iVar5);
					local_50 = pIVar11;
					if (bVar9) {
						pvVar6 = (pIVar11._1).byval_arg.data;
						if (((pvVar6 == null) ||(pSVar8 = (Dictionary<int, object>)MapLoader.IdToChildren, pSVar8 == null)) ||(__this_01 = (HashSet<int>)pSVar8.get_Item(*(int)((long)pvVar6 + 0x20)), __this_01 == null)) goto label_05ae8249;
						local_90.GetEnumerator(__this_01);
						local_68 = local_80;
						local_78 = (byte[])local_90._0_8_;
						local_90._0_8_ = null;
						local_90._8_8_ = local_78;
						if (__this_00 == null) {
							bVar9 = local_78.MoveNext();
							if (bVar9) {
								throw new NullReferenceException();
							}
						}
						else {
							while (bVar9 = local_78.MoveNext()) {
								__this_00.Add((int32_t)local_68);
							}
						}
						local_78.Dispose();
					}
					__this = *(List<object>*)&(local_50._1).this_arg.bits;
					if (__this != null) {
						local_90.GetEnumerator(__this);
						local_38 = local_80;
						local_48 = (byte[])local_90._0_8_;
						local_90._0_8_ = null;
						local_90._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_48;
						while (true) {
							bVar9 = local_48.MoveNext();
							instance = local_38;
							if (!(bVar9)) break;
							pCVar7 = CustomLogicManager.Evaluator;
							if (pCVar7 == null) {
								throw new NullReferenceException();
							}
							pCVar7.RemoveComponent(instance);
						}
						local_48.Dispose();
						pIVar11 = local_50;
						MapLoader.DeleteObject((MapObject)pIVar11);
						if ((char)local_54 != false) {
							if (__this_00 == null) goto label_05ae8249;
							local_90.GetEnumerator(__this_00);
							local_68 = local_80;
							local_78 = (byte[])local_90._0_8_;
							local_90._0_8_ = null;
							local_90._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o)local_78;
							while (bVar9 = local_78.MoveNext()) {
								iVar5 = (int32_t)local_68;
								pSVar8 = (Dictionary<int, object>)MapLoader.IdToMapObject;
								if (pSVar8 == null) {
									throw new NullReferenceException();
								}
								bVar9 = pSVar8.ContainsKey(iVar5);
								if (bVar9) {
									pSVar8 = (Dictionary<int, object>)MapLoader.IdToMapObject;
									if (pSVar8 == null) {
										throw new NullReferenceException();
									}
									obj_00 = pSVar8.get_Item(iVar5);
									if ((typeof(CustomLogicMapBuiltin)._2).cctor_finished_or_no_cctor == 0) {
										il2cpp_codegen_runtime_class_init(typeof(CustomLogicMapBuiltin)) ;
									}
									CustomLogicMapBuiltin.DestroyMapObjectBuiltin((object)obj_00, true);
								}
							}
							local_78.Dispose();
						}
						return;
					}
				}
			}
		}
	label_05ae8249: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600357F")]
	[Address(RVA = "0x59E8BE0", Offset = "0x59E7BE0", VA = "0x59E8BE0")]
	public static bool CanSpawnRuntimeNetworkedMapObject()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin$$CanSpawnRuntimeNetworkedMapObject): clean
		uint uVar1;
		bool bVar2;
		CustomLogic_CustomLogicMapBuiltin_StaticFields pCVar3;

		if (Il2CppMethodInitialized_07546e49 == false) {
			Il2CppMethodInitialized_07546e49 = true;
			uVar1 = (typeof(CustomLogicMapBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicMapBuiltin)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07546e48 == false) {
			Il2CppMethodInitialized_07546e48 = true;
			uVar1 = (typeof(CustomLogicMapBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CustomLogicMapBuiltin))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pCVar3 = typeof(CustomLogicMapBuiltin).static_fields;
			if (pCVar3._allowedInstantiateCount <= pCVar3._instantiateCount) {
				return false;
			}
		}
		else {
			pCVar3 = (typeof(CustomLogicMapBuiltin)).static_fields;
			if (pCVar3._allowedInstantiateCount <= pCVar3._instantiateCount) {
				return false;
			}
		}
		if ((typeof(CustomLogicMapBuiltin)._2).cctor_finished_or_no_cctor == 0) {
			pCVar3 = typeof(CustomLogicMapBuiltin).static_fields;
		}
		if (pCVar3._instantiateLimit == null) {
			throw new NullReferenceException();
		}
		return bVar2;
	}

	[Token(Token = "0x6003580")]
	[Address(RVA = "0x59E89E0", Offset = "0x59E79E0", VA = "0x59E89E0")]
	public static void TrySpawningRuntimeNetworkedObject()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c (CustomLogic.CustomLogicMapBuiltin$$TrySpawningRuntimeNetworkedObject): 11 lines keep C-only constructs
		int piVar1;
		bool bVar2;
		CustomLogic_CustomLogicMapBuiltin_StaticFields pCVar3;
		Il2CppClass pIVar4;
		Exception __this;
		String message;
		MethodInfo lastManagedFrame;
		String* metadataPointer;

		if (Il2CppMethodInitialized_07546e4a == false) {
			Il2CppMethodInitialized_07546e4a = true;
			if ((typeof(CustomLogicMapBuiltin)._2).cctor_finished_or_no_cctor == 0) goto label_05ae8ab3;
	label_05ae8a05: ;
			if (Il2CppMethodInitialized_07546e48 != false) goto label_05ae8a12;
	label_05ae8ac5: ;
			Il2CppMethodInitialized_07546e48 = true;
			if ((typeof(CustomLogicMapBuiltin)._2).cctor_finished_or_no_cctor == 0) goto label_05ae8ae8;
	label_05ae8a22: ;
			pCVar3 = typeof(CustomLogicMapBuiltin).static_fields;
			if (pCVar3._allowedInstantiateCount <= pCVar3._instantiateCount) {
	label_05ae8b03: ;
				pIVar4 = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this = (Exception)il2cpp_codegen_object_new(pIVar4);
				metadataPointer = &"Out of instantiations, please clean up networked objects to spawn more.";
				goto label_05ae8b5a;
			}
		}
		else {
			if ((typeof(CustomLogicMapBuiltin)._2).cctor_finished_or_no_cctor != 0) goto label_05ae8a05;
	label_05ae8ab3: ;
			if (Il2CppMethodInitialized_07546e48 == false) goto label_05ae8ac5;
	label_05ae8a12: ;
			if ((typeof(CustomLogicMapBuiltin)._2).cctor_finished_or_no_cctor != 0) goto label_05ae8a22;
	label_05ae8ae8: ;
			pCVar3 = typeof(CustomLogicMapBuiltin).static_fields;
			if (pCVar3._allowedInstantiateCount <= pCVar3._instantiateCount) goto label_05ae8b03;
		}
		if ((typeof(CustomLogicMapBuiltin)._2).cctor_finished_or_no_cctor == 0) {
			pCVar3 = typeof(CustomLogicMapBuiltin).static_fields;
		}
		if (pCVar3._instantiateLimit == null) {
			throw new NullReferenceException();
		}
		bVar2 = (pCVar3._instantiateLimit).Use(1);
		if (bVar2) {
			if ((typeof(CustomLogicMapBuiltin)._2).cctor_finished_or_no_cctor == 0) {
				piVar1 = &CustomLogicMapBuiltin._instantiateCount;
				*piVar1 = *piVar1 + 1;
				return;
			}
			piVar1 = &CustomLogicMapBuiltin._instantiateCount;
			*piVar1 = *piVar1 + 1;
			return;
		}
		pIVar4 = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
		__this = (Exception)il2cpp_codegen_object_new(pIVar4);
		metadataPointer = &"Spawning networked runtime map objects too fast, please slow down.";
	label_05ae8b5a: ;
		message = il2cpp_codegen_get_runtime_metadata(metadataPointer);
		__this = new Exception(message);
		lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicMapBuiltin_TrySpawningRuntimeNetworkedObject);
		throw (object)__this;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicMapBuiltin.c.

	// CustomLogic.CustomLogicMapBuiltin$$.cctor: clean
	static CustomLogicMapBuiltin()
	{

		CustomLogicMapBuiltin._instantiateLimit = null;
		CustomLogicMapBuiltin._instantiateCount = 0;
		CustomLogicMapBuiltin._allowedInstantiateCount = 100;
		return;
	}

	// CustomLogic.CustomLogicMapBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"FindAllMapObjects");
		__this.Add((Il2CppObject *)"FindMapObjectByName");
		__this.Add((Il2CppObject *)"FindMapObjectsByName");
		__this.Add((Il2CppObject *)"FindMapObjectsByRegex");
		__this.Add((Il2CppObject *)"FindMapObjectByComponent");
		__this.Add((Il2CppObject *)"FindMapObjectsByComponent");
		__this.Add((Il2CppObject *)"FindMapObjectByID");
		__this.Add((Il2CppObject *)"FindMapObjectByTag");
		__this.Add((Il2CppObject *)"FindMapObjectsByTag");
		__this.Add((Il2CppObject *)"FindMapObjectsByPlayer");
		__this.Add((Il2CppObject *)"CreateMapObject");
		__this.Add((Il2CppObject *)"CreateMapObjectRaw");
		__this.Add((Il2CppObject *)"PrefabFromMapObject");
		__this.Add((Il2CppObject *)"DestroyMapObject");
		__this.Add((Il2CppObject *)"CopyMapObject");
		__this.Add((Il2CppObject *)"DestroyMapTargetable");
		__this.Add((Il2CppObject *)"UpdateNavMesh");
		__this.Add((Il2CppObject *)"UpdateNavMeshAsync");
		CustomLogicMapBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$.cctor: clean
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = new CustomLogicMapBuiltin.Bindings.c();
		CustomLogicMapBuiltin.Bindings.c.__9 =(CustomLogicMapBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindAllMapObjects>b__2_0: 4 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding__FindAllMapObjects_b__2_0(CustomLogicMapBuiltin __c, Object[] __a)
	{
		uint uVar1;
		CustomLogicListBuiltin pCVar2;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_07546e63 == false) {
			Il2CppMethodInitialized_07546e63 = true;
			uVar1 = (typeof(CustomLogicMapBuiltin)._2).cctor_finished_or_no_cctor;
			klass = typeof(CustomLogicMapBuiltin);
		}
		else {
			uVar1 = (typeof(CustomLogicMapBuiltin)._2).cctor_finished_or_no_cctor;
			klass = typeof(CustomLogicMapBuiltin);
		}
		typeof(CustomLogicMapBuiltin) = (CustomLogicMapBuiltin)klass;
		if (uVar1 == 0) {
			pCVar2 = CustomLogicMapBuiltin.FindAllMapObjects();
			return (object)pCVar2;
		}
		pCVar2 = CustomLogicMapBuiltin.FindAllMapObjects();
		return (object)pCVar2;
	}

	// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindMapObjectByName>b__3_0: clean
	private object Bindings_c____CreateMethodBinding__FindMapObjectByName_b__3_0(CustomLogicMapBuiltin __c, Object[] __a)
	{
		object obj;
		String objectName;
		CustomLogicMapObjectBuiltin pCVar1;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		obj = __a[0];
		objectName = CustomLogicEvaluator.ConvertTo<string>(obj);
		if ((typeof(CustomLogicMapBuiltin)._2).cctor_finished_or_no_cctor == 0) {
			pCVar1 = CustomLogicMapBuiltin.FindMapObjectByName(objectName);
			return (object)pCVar1;
		}
		pCVar1 = CustomLogicMapBuiltin.FindMapObjectByName(objectName);
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindMapObjectsByName>b__4_0: clean
	private object Bindings_c____CreateMethodBinding__FindMapObjectsByName_b__4_0(CustomLogicMapBuiltin __c, Object[] __a)
	{
		object obj;
		String objectName;
		CustomLogicListBuiltin pCVar1;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		obj = __a[0];
		objectName = CustomLogicEvaluator.ConvertTo<string>(obj);
		if ((typeof(CustomLogicMapBuiltin)._2).cctor_finished_or_no_cctor == 0) {
			pCVar1 = CustomLogicMapBuiltin.FindMapObjectsByName(objectName);
			return (object)pCVar1;
		}
		pCVar1 = CustomLogicMapBuiltin.FindMapObjectsByName(objectName);
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindMapObjectsByRegex>b__5_0: clean
	private object Bindings_c____CreateMethodBinding__FindMapObjectsByRegex_b__5_0(CustomLogicMapBuiltin __c, Object[] __a)
	{
		uint uVar1;
		object pIVar2;
		bool sorted;
		String pattern;
		CustomLogicListBuiltin pCVar3;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		pIVar2 = __a[0];
		pattern = CustomLogicEvaluator.ConvertTo<string>(pIVar2);
		if ((int)__a.Length < 2) {
			sorted = false;
			uVar1 = (typeof(CustomLogicMapBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			pIVar2 = __a[1];
			sorted = CustomLogicEvaluator.ConvertTo<bool>(pIVar2);
			uVar1 = (typeof(CustomLogicMapBuiltin)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pCVar3 = CustomLogicMapBuiltin.FindMapObjectsByRegex(pattern, sorted);
		return (object)pCVar3;
	}

	// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindMapObjectByComponent>b__6_0: clean
	private object Bindings_c____CreateMethodBinding__FindMapObjectByComponent_b__6_0(CustomLogicMapBuiltin __c, Object[] __a)
	{
		object obj;
		String className;
		CustomLogicMapObjectBuiltin pCVar1;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		obj = __a[0];
		className = CustomLogicEvaluator.ConvertTo<string>(obj);
		if ((typeof(CustomLogicMapBuiltin)._2).cctor_finished_or_no_cctor == 0) {
			pCVar1 = CustomLogicMapBuiltin.FindMapObjectByComponent(className);
			return (object)pCVar1;
		}
		pCVar1 = CustomLogicMapBuiltin.FindMapObjectByComponent(className);
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindMapObjectsByComponent>b__7_0: clean
	private object Bindings_c____CreateMethodBinding__FindMapObjectsByComponent_b__7_0(CustomLogicMapBuiltin __c, Object[] __a)
	{
		object obj;
		String className;
		CustomLogicListBuiltin pCVar1;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		obj = __a[0];
		className = CustomLogicEvaluator.ConvertTo<string>(obj);
		if ((typeof(CustomLogicMapBuiltin)._2).cctor_finished_or_no_cctor == 0) {
			pCVar1 = CustomLogicMapBuiltin.FindMapObjectsByComponent(className);
			return (object)pCVar1;
		}
		pCVar1 = CustomLogicMapBuiltin.FindMapObjectsByComponent(className);
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindMapObjectByID>b__8_0: clean
	private object Bindings_c____CreateMethodBinding__FindMapObjectByID_b__8_0(CustomLogicMapBuiltin __c, Object[] __a)
	{
		object obj;
		int id;
		CustomLogicMapObjectBuiltin pCVar1;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		obj = __a[0];
		id = CustomLogicEvaluator.ConvertTo<int>(obj);
		if ((typeof(CustomLogicMapBuiltin)._2).cctor_finished_or_no_cctor == 0) {
			pCVar1 = CustomLogicMapBuiltin.FindMapObjectByID(id);
			return (object)pCVar1;
		}
		pCVar1 = CustomLogicMapBuiltin.FindMapObjectByID(id);
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindMapObjectByTag>b__9_0: clean
	private object Bindings_c____CreateMethodBinding__FindMapObjectByTag_b__9_0(CustomLogicMapBuiltin __c, Object[] __a)
	{
		object obj;
		String tag;
		CustomLogicMapObjectBuiltin pCVar1;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		obj = __a[0];
		tag = CustomLogicEvaluator.ConvertTo<string>(obj);
		if ((typeof(CustomLogicMapBuiltin)._2).cctor_finished_or_no_cctor == 0) {
			pCVar1 = CustomLogicMapBuiltin.FindMapObjectByTag(tag);
			return (object)pCVar1;
		}
		pCVar1 = CustomLogicMapBuiltin.FindMapObjectByTag(tag);
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindMapObjectsByTag>b__10_0: clean
	private object Bindings_c____CreateMethodBinding__FindMapObjectsByTag_b__10_0(CustomLogicMapBuiltin __c, Object[] __a)
	{
		object obj;
		String tag;
		CustomLogicListBuiltin pCVar1;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		obj = __a[0];
		tag = CustomLogicEvaluator.ConvertTo<string>(obj);
		if ((typeof(CustomLogicMapBuiltin)._2).cctor_finished_or_no_cctor == 0) {
			pCVar1 = CustomLogicMapBuiltin.FindMapObjectsByTag(tag);
			return (object)pCVar1;
		}
		pCVar1 = CustomLogicMapBuiltin.FindMapObjectsByTag(tag);
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindMapObjectsByPlayer>b__11_0: clean
	private object Bindings_c____CreateMethodBinding__FindMapObjectsByPlayer_b__11_0(CustomLogicMapBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicPlayerBuiltin player;
		CustomLogicListBuiltin pCVar1;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		obj = __a[0];
		player = CustomLogicEvaluator.ConvertTo<CustomLogicPlayerBuiltin>(obj);
		if ((typeof(CustomLogicMapBuiltin)._2).cctor_finished_or_no_cctor == 0) {
			pCVar1 = CustomLogicMapBuiltin.FindMapObjectsByPlayer(player);
			return (object)pCVar1;
		}
		pCVar1 = CustomLogicMapBuiltin.FindMapObjectsByPlayer(player);
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__CreateMapObject>b__12_0: clean
	private object Bindings_c____CreateMethodBinding__CreateMapObject_b__12_0(CustomLogicMapBuiltin __c, Object[] __a)
	{
		uint uVar1;
		object pIVar2;
		CustomLogicPrefabBuiltin prefab;
		CustomLogicVector3Builtin position;
		CustomLogicVector3Builtin rotation;
		CustomLogicMapObjectBuiltin pCVar3;
		CustomLogicVector3Builtin scale;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		pIVar2 = __a[0];
		prefab = CustomLogicEvaluator.ConvertTo<CustomLogicPrefabBuiltin>(pIVar2);
		if ((int)__a.Length < 2) {
			rotation = null;
			position = null;
		}
		else {
			pIVar2 = __a[1];
			position = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(pIVar2);
			if ((int)__a.Length < 3) {
				rotation = null;
			}
			else {
				pIVar2 = __a[2];
				rotation = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(pIVar2);
				if (3 < (int)__a.Length) {
					pIVar2 = __a[3];
					scale = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(pIVar2);
					uVar1 = (typeof(CustomLogicMapBuiltin)._2).cctor_finished_or_no_cctor;
					goto joined_r0x05aeb852;
				}
			}
		}
		scale = null;
		uVar1 = (typeof(CustomLogicMapBuiltin)._2).cctor_finished_or_no_cctor;
	joined_r0x05aeb852: ;
		if (uVar1 == 0) {
		}
		pCVar3 = CustomLogicMapBuiltin.CreateMapObject(prefab, position, rotation, scale);
		return (object)pCVar3;
	}

	// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__CreateMapObjectRaw>b__13_0: clean
	private object Bindings_c____CreateMethodBinding__CreateMapObjectRaw_b__13_0(CustomLogicMapBuiltin __c, Object[] __a)
	{
		object obj;
		String prefab;
		CustomLogicMapObjectBuiltin pCVar1;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		obj = __a[0];
		prefab = CustomLogicEvaluator.ConvertTo<string>(obj);
		if ((typeof(CustomLogicMapBuiltin)._2).cctor_finished_or_no_cctor == 0) {
			pCVar1 = CustomLogicMapBuiltin.CreateMapObjectRaw(prefab);
			return (object)pCVar1;
		}
		pCVar1 = CustomLogicMapBuiltin.CreateMapObjectRaw(prefab);
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__PrefabFromMapObject>b__14_0: clean
	private object Bindings_c____CreateMethodBinding__PrefabFromMapObject_b__14_0(CustomLogicMapBuiltin __c, Object[] __a)
	{
		uint uVar1;
		object pIVar2;
		bool clearComponents;
		CustomLogicMapObjectBuiltin mapObject;
		CustomLogicPrefabBuiltin pCVar3;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		pIVar2 = __a[0];
		mapObject = CustomLogicEvaluator.ConvertTo<CustomLogicMapObjectBuiltin>(pIVar2);
		if ((int)__a.Length < 2) {
			clearComponents = false;
			uVar1 = (typeof(CustomLogicMapBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			pIVar2 = __a[1];
			clearComponents = CustomLogicEvaluator.ConvertTo<bool>(pIVar2);
			uVar1 = (typeof(CustomLogicMapBuiltin)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pCVar3 = CustomLogicMapBuiltin.PrefabFromMapObject(mapObject, clearComponents);
		return (object)pCVar3;
	}

	// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__DestroyMapObject>b__15_0: clean
	private object Bindings_c____CreateMethodBinding__DestroyMapObject_b__15_0(CustomLogicMapBuiltin __c, Object[] __a)
	{
		object obj;
		bool includeChildren;
		CustomLogicMapObjectBuiltin mapObject;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			mapObject = CustomLogicEvaluator.ConvertTo<CustomLogicMapObjectBuiltin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				includeChildren = CustomLogicEvaluator.ConvertTo<bool>(__a[1]);
				if ((typeof(CustomLogicMapBuiltin)._2).cctor_finished_or_no_cctor == 0) {
				}
				CustomLogicMapBuiltin.DestroyMapObject(mapObject, includeChildren);
				return null;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__CopyMapObject>b__16_0: clean
	private object Bindings_c____CreateMethodBinding__CopyMapObject_b__16_0(CustomLogicMapBuiltin __c, Object[] __a)
	{
		object pIVar1;
		bool includeChildren;
		CustomLogicMapObjectBuiltin pCVar2;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		pIVar1 = __a[0];
		pCVar2 = CustomLogicEvaluator.ConvertTo<CustomLogicMapObjectBuiltin>(pIVar1);
		includeChildren = true;
		if (1 < (int)__a.Length) {
			pIVar1 = __a[1];
			includeChildren = CustomLogicEvaluator.ConvertTo<bool>(pIVar1);
		}
		if ((typeof(CustomLogicMapBuiltin)._2).cctor_finished_or_no_cctor == 0) {
		}
		pCVar2 = CustomLogicMapBuiltin.CopyMapObject(pCVar2, includeChildren);
		return (object)pCVar2;
	}

	// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__DestroyMapTargetable>b__17_0: clean
	private object Bindings_c____CreateMethodBinding__DestroyMapTargetable_b__17_0(CustomLogicMapBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicMapTargetableBuiltin targetable;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		obj = __a[0];
		targetable = CustomLogicEvaluator.ConvertTo<CustomLogicMapTargetableBuiltin>(obj);
		CustomLogicMapBuiltin.DestroyMapTargetable(targetable);
		return null;
	}

	// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__UpdateNavMesh>b__18_0: clean
	private object Bindings_c____CreateMethodBinding__UpdateNavMesh_b__18_0(CustomLogicMapBuiltin __c, Object[] __a)
	{
		uint uVar1;
		Task __this_00;

		if (Il2CppMethodInitialized_07546e73 == false) {
			Il2CppMethodInitialized_07546e73 = true;
			uVar1 = (typeof(CustomLogicMapBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicMapBuiltin)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07546e42 == false) {
			Il2CppMethodInitialized_07546e42 = true;
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(MapLoader))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this_00 = MapLoader.UpdateNavMesh();
		}
		else {
			__this_00 = MapLoader.UpdateNavMesh();
		}
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Wait();
		return null;
	}

	// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__UpdateNavMeshAsync>b__19_0: clean
	private object Bindings_c____CreateMethodBinding__UpdateNavMeshAsync_b__19_0(CustomLogicMapBuiltin __c, Object[] __a)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07546e74 == false) {
			Il2CppMethodInitialized_07546e74 = true;
			uVar1 = (typeof(CustomLogicMapBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicMapBuiltin)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07546e43 == false) {
			Il2CppMethodInitialized_07546e43 = true;
			uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(MapLoader))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		MapLoader.UpdateNavMesh();
		return null;
	}

	// CustomLogic.CustomLogicMapBuiltin.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new CustomLogicMapBuiltin.c();
		CustomLogicMapBuiltin.c.__9 =(CustomLogicMapBuiltin.c)__this;
		return;
	}

	// CustomLogic.CustomLogicMapBuiltin.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicMapBuiltin.<>c$$<FindMapObjectsByRegex>b__8_0: 4 lines keep C-only constructs
	private int c__FindMapObjectsByRegex_b__8_0(object a, object b)
	{
		byte bVar1;
		IntPtr pvVar2;
		IntPtr pvVar3;
		int iVar4;

		if (a != null) {
			bVar1 = (typeof(CustomLogicMapObjectBuiltin)._2).typeHierarchyDepth;
			if (((a.klass._2).typeHierarchyDepth < bVar1) ||((a.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CustomLogicMapObjectBuiltin))) {
				throw new InvalidCastException();
			}
			if (((a[3].klass != null) &&(pvVar2 = ((a[3].klass)._1).byval_arg.data, pvVar2 != null)) && (b != null)) {
				if (((b.klass._2).typeHierarchyDepth < bVar1) ||((b.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CustomLogicMapObjectBuiltin))) {
					throw new InvalidCastException();
				}
				if ((b[3].klass != null) &&(pvVar3 = ((b[3].klass)._1).byval_arg.data, pvVar3 != null)) {
					iVar4 = String.Compare(*(String*)((long)pvVar2 + 0x30), *(String*)((long)pvVar3 + 0x30));
					return iVar4;
				}
			}
		}
		throw new NullReferenceException();
	}
}
