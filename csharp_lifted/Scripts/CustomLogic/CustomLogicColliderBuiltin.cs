// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicColliderBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicColliderBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x200048B")]
[CompilerGenerated]
internal class CustomLogicColliderBuiltin : BuiltinClassInstance, ICustomLogicCopyable, ICustomLogicEquals
{
	[Token(Token = "0x200048C")]
	public static class Factory
	{
		[Token(Token = "0x6001E39")]
		[Address(RVA = "0x58F30C0", Offset = "0x58F20C0", VA = "0x58F30C0")]
		public static CustomLogicColliderBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			String pSVar1;
			String str0;
			String str2;
			Il2CppClass klass;
			ArgumentException __this;
			MethodInfo lastManagedFrame;
			int local_14;

			pSVar1 = local_14.ToString();
			str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicColliderBuiltin constructor found that takes ");
			str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
			pSVar1 = String.Concat(str0, pSVar1, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
			__this = (ArgumentException)il2cpp_codegen_object_new(klass);
			__this = new ArgumentException(pSVar1);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Factory_CreateInstance);
			throw (object)__this;
		}
	}

	[Token(Token = "0x200048D")]
	public static class Bindings
	{
		[Token(Token = "0x400168D")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001E3A")]
		[Address(RVA = "0x58F3150", Offset = "0x58F2150", VA = "0x58F3150")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLMethodBinding<CustomLogicColliderBuiltin> pCVar3;
			CLPropertyBinding<CustomLogicColliderBuiltin> pCVar4;
			String pSVar5;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x8e2afb14) {
				if (uVar2 < 0x4b9fbea5) {
					if (uVar2 < 0x241c90a3) {
						if (uVar2 == 0xe986ab0) {
							bVar1 = (name == "GameObjectTransform");
							if (bVar1) {
								if ((typeof(CustomLogicColliderBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pCVar4 = CustomLogicColliderBuiltin.Bindings.__CreatePropertyBinding__GameObjectTransform();
								return (ICLMemberBinding)pCVar4;
							}
						}
						else if (uVar2 == 0x241c90a2) {
							bVar1 = (name == "ClosestPoint");
							if (bVar1) {
								if ((typeof(CustomLogicColliderBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0 ) {
								}
								pCVar3 = CustomLogicColliderBuiltin.Bindings.__CreateMethodBinding__ClosestPoint();
								return (ICLMemberBinding)pCVar3;
							}
						}
					}
					else if (uVar2 == 0x4a5dd7d3) {
						bVar1 = (name == "IsTrigger");
						if (bVar1) {
							pCVar4 = CustomLogicColliderBuiltin.Bindings.__CreatePropertyBinding__IsTrigger();
							return (ICLMemberBinding)pCVar4;
						}
					}
					else if (uVar2 == 0x4b9fbea4) {
						bVar1 = (name == "Center");
						if (bVar1) {
							pCVar4 = CustomLogicColliderBuiltin.Bindings.__CreatePropertyBinding__Center();
							return (ICLMemberBinding)pCVar4;
						}
					}
				}
				else if (uVar2 < 0x790e86e9) {
					if (uVar2 == 0x549f4d10) {
						bVar1 = (name == "__Copy__");
						if (bVar1) {
							pCVar3 = CustomLogicColliderBuiltin.Bindings.__CreateMethodBinding____Copy__();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x790e86e8) {
						bVar1 = (name == "AttachedArticulationBody");
						if (bVar1) {
							pCVar4 = CustomLogicColliderBuiltin.Bindings.__CreatePropertyBinding__AttachedArticulationBody();
							return (ICLMemberBinding)pCVar4;
						}
					}
				}
				else if (uVar2 == 0x80175e56) {
					bVar1 = (name == "ClosestPointOnBounds");
					if (bVar1) {
						pCVar3 = CustomLogicColliderBuiltin.Bindings.__CreateMethodBinding__ClosestPointOnBounds();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x8e2afb13) {
					bVar1 = (name == "ExcludeLayers");
					if (bVar1) {
						pCVar4 = CustomLogicColliderBuiltin.Bindings.__CreatePropertyBinding__ExcludeLayers();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0x792a6491) {
					bVar1 = (name == "__Hash__");
					if (bVar1) {
						pCVar3 = CustomLogicColliderBuiltin.Bindings.__CreateMethodBinding____Hash__();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xad216711) {
				if (uVar2 < 0x990db27f) {
					if (uVar2 == 0x91efe6d7) {
						bVar1 = (name == "__Eq__");
						if (bVar1) {
							pCVar3 = CustomLogicColliderBuiltin.Bindings.__CreateMethodBinding____Eq__();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x990db27e) {
						bVar1 = (name == "ProvidesContacts");
						if (bVar1) {
							pCVar4 = CustomLogicColliderBuiltin.Bindings.__CreatePropertyBinding__ProvidesContacts();
							return (ICLMemberBinding)pCVar4;
						}
					}
				}
				else if (uVar2 == 0x9c86e43e) {
					bVar1 = (name == "Enabled");
					if (bVar1) {
						pCVar4 = CustomLogicColliderBuiltin.Bindings.__CreatePropertyBinding__Enabled();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0xad216710) {
					bVar1 = (name == "ContactOffset");
					if (bVar1) {
						pCVar4 = CustomLogicColliderBuiltin.Bindings.__CreatePropertyBinding__ContactOffset();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 < 0xb9fdf63f) {
				if (uVar2 == 0xad82abbb) {
					bVar1 = (name == "Transform");
					if (bVar1) {
						pCVar4 = CustomLogicColliderBuiltin.Bindings.__CreatePropertyBinding__Transform();
						return (ICLMemberBinding)pCVar4;
					}
				}
				else if (uVar2 == 0xb9fdf63e) {
					bVar1 = (name == "SharedMaterialName");
					if (bVar1) {
						pCVar4 = CustomLogicColliderBuiltin.Bindings.__CreatePropertyBinding__SharedMaterialName();
						return (ICLMemberBinding)pCVar4;
					}
				}
			}
			else if (uVar2 == 0xc0b0a123) {
				bVar1 = (name == "MaterialName");
				if (bVar1) {
					pCVar4 = CustomLogicColliderBuiltin.Bindings.__CreatePropertyBinding__MaterialName();
					return (ICLMemberBinding)pCVar4;
				}
			}
			else if (uVar2 == 0xd06f5ba1) {
				bVar1 = (name == "IncludeLayers");
				if (bVar1) {
					pCVar4 = CustomLogicColliderBuiltin.Bindings.__CreatePropertyBinding__IncludeLayers();
					return (ICLMemberBinding)pCVar4;
				}
			}
			else if (uVar2 == 0xdebe8d80) {
				bVar1 = (name == "Raycast");
				if (bVar1) {
					pCVar3 = CustomLogicColliderBuiltin.Bindings.__CreateMethodBinding__Raycast();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicColliderBuiltin not found");
			pSVar5 = String.Concat(pSVar5, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar5);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6001E3B")]
		[Address(RVA = "0x58F3850", Offset = "0x58F2850", VA = "0x58F3850")]
		public static CLPropertyBinding<CustomLogicColliderBuiltin> __CreatePropertyBinding__AttachedArticulationBody()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreatePropertyBinding__AttachedArticulationBody): 2 lines keep C-only constructs
			Func<CustomLogicColliderBuiltin, object> __this;
			CLPropertyBinding<CustomLogicColliderBuiltin> __this_00;

			__this = new Func<CustomLogicColliderBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__AttachedArticulationBod);
			__this_00 = new CLPropertyBinding<CustomLogicColliderBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001E3C")]
		[Address(RVA = "0x58F38F0", Offset = "0x58F28F0", VA = "0x58F38F0")]
		public static CLPropertyBinding<CustomLogicColliderBuiltin> __CreatePropertyBinding__ContactOffset()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreatePropertyBinding__ContactOffset): 3 lines keep C-only constructs
			Func<CustomLogicColliderBuiltin, object> __this;
			Action<CustomLogicColliderBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicColliderBuiltin> __this_01;

			__this = new Func<CustomLogicColliderBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__ContactOffset_g____gett);
			__this_00 = new Action<CustomLogicColliderBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__ContactOffset_g____sett);
			__this_01 = new CLPropertyBinding<CustomLogicColliderBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001E3D")]
		[Address(RVA = "0x58F39D0", Offset = "0x58F29D0", VA = "0x58F39D0")]
		public static CLPropertyBinding<CustomLogicColliderBuiltin> __CreatePropertyBinding__Enabled()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreatePropertyBinding__Enabled): 3 lines keep C-only constructs
			Func<CustomLogicColliderBuiltin, object> __this;
			Action<CustomLogicColliderBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicColliderBuiltin> __this_01;

			__this = new Func<CustomLogicColliderBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__Enabled_g____getter_4_0);
			__this_00 = new Action<CustomLogicColliderBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__Enabled_g____setter_4_1);
			__this_01 = new CLPropertyBinding<CustomLogicColliderBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001E3E")]
		[Address(RVA = "0x58F3AB0", Offset = "0x58F2AB0", VA = "0x58F3AB0")]
		public static CLPropertyBinding<CustomLogicColliderBuiltin> __CreatePropertyBinding__ExcludeLayers()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreatePropertyBinding__ExcludeLayers): 3 lines keep C-only constructs
			Func<CustomLogicColliderBuiltin, object> __this;
			Action<CustomLogicColliderBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicColliderBuiltin> __this_01;

			__this = new Func<CustomLogicColliderBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__ExcludeLayers_g____gett);
			__this_00 = new Action<CustomLogicColliderBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__ExcludeLayers_g____sett);
			__this_01 = new CLPropertyBinding<CustomLogicColliderBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001E3F")]
		[Address(RVA = "0x58F3B90", Offset = "0x58F2B90", VA = "0x58F3B90")]
		public static CLPropertyBinding<CustomLogicColliderBuiltin> __CreatePropertyBinding__IncludeLayers()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreatePropertyBinding__IncludeLayers): 3 lines keep C-only constructs
			Func<CustomLogicColliderBuiltin, object> __this;
			Action<CustomLogicColliderBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicColliderBuiltin> __this_01;

			__this = new Func<CustomLogicColliderBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__IncludeLayers_g____gett);
			__this_00 = new Action<CustomLogicColliderBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__IncludeLayers_g____sett);
			__this_01 = new CLPropertyBinding<CustomLogicColliderBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001E40")]
		[Address(RVA = "0x58F3C70", Offset = "0x58F2C70", VA = "0x58F3C70")]
		public static CLPropertyBinding<CustomLogicColliderBuiltin> __CreatePropertyBinding__IsTrigger()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreatePropertyBinding__IsTrigger): 3 lines keep C-only constructs
			Func<CustomLogicColliderBuiltin, object> __this;
			Action<CustomLogicColliderBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicColliderBuiltin> __this_01;

			__this = new Func<CustomLogicColliderBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__IsTrigger_g____getter_7);
			__this_00 = new Action<CustomLogicColliderBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__IsTrigger_g____setter_7);
			__this_01 = new CLPropertyBinding<CustomLogicColliderBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001E41")]
		[Address(RVA = "0x58F3D50", Offset = "0x58F2D50", VA = "0x58F3D50")]
		public static CLPropertyBinding<CustomLogicColliderBuiltin> __CreatePropertyBinding__Center()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreatePropertyBinding__Center): 2 lines keep C-only constructs
			Func<CustomLogicColliderBuiltin, object> __this;
			CLPropertyBinding<CustomLogicColliderBuiltin> __this_00;

			__this = new Func<CustomLogicColliderBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__Center_g____getter_8_0);
			__this_00 = new CLPropertyBinding<CustomLogicColliderBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001E42")]
		[Address(RVA = "0x58F3DF0", Offset = "0x58F2DF0", VA = "0x58F3DF0")]
		public static CLPropertyBinding<CustomLogicColliderBuiltin> __CreatePropertyBinding__ProvidesContacts()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreatePropertyBinding__ProvidesContacts): 3 lines keep C-only constructs
			Func<CustomLogicColliderBuiltin, object> __this;
			Action<CustomLogicColliderBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicColliderBuiltin> __this_01;

			__this = new Func<CustomLogicColliderBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__ProvidesContacts_g____g);
			__this_00 = new Action<CustomLogicColliderBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__ProvidesContacts_g____s);
			__this_01 = new CLPropertyBinding<CustomLogicColliderBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001E43")]
		[Address(RVA = "0x58F3ED0", Offset = "0x58F2ED0", VA = "0x58F3ED0")]
		public static CLPropertyBinding<CustomLogicColliderBuiltin> __CreatePropertyBinding__MaterialName()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreatePropertyBinding__MaterialName): 2 lines keep C-only constructs
			Func<CustomLogicColliderBuiltin, object> __this;
			CLPropertyBinding<CustomLogicColliderBuiltin> __this_00;

			__this = new Func<CustomLogicColliderBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__MaterialName_g____gette);
			__this_00 = new CLPropertyBinding<CustomLogicColliderBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001E44")]
		[Address(RVA = "0x58F3F70", Offset = "0x58F2F70", VA = "0x58F3F70")]
		public static CLPropertyBinding<CustomLogicColliderBuiltin> __CreatePropertyBinding__SharedMaterialName()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreatePropertyBinding__SharedMaterialName): 2 lines keep C-only constructs
			Func<CustomLogicColliderBuiltin, object> __this;
			CLPropertyBinding<CustomLogicColliderBuiltin> __this_00;

			__this = new Func<CustomLogicColliderBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__SharedMaterialName_g);
			__this_00 = new CLPropertyBinding<CustomLogicColliderBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001E45")]
		[Address(RVA = "0x58F4010", Offset = "0x58F3010", VA = "0x58F4010")]
		public static CLPropertyBinding<CustomLogicColliderBuiltin> __CreatePropertyBinding__Transform()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreatePropertyBinding__Transform): 2 lines keep C-only constructs
			Func<CustomLogicColliderBuiltin, object> __this;
			CLPropertyBinding<CustomLogicColliderBuiltin> __this_00;

			__this = new Func<CustomLogicColliderBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__Transform_g____getter_1);
			__this_00 = new CLPropertyBinding<CustomLogicColliderBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001E46")]
		[Address(RVA = "0x58F40B0", Offset = "0x58F30B0", VA = "0x58F40B0")]
		public static CLPropertyBinding<CustomLogicColliderBuiltin> __CreatePropertyBinding__GameObjectTransform()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreatePropertyBinding__GameObjectTransform): 2 lines keep C-only constructs
			Func<CustomLogicColliderBuiltin, object> __this;
			CLPropertyBinding<CustomLogicColliderBuiltin> __this_00;

			__this = new Func<CustomLogicColliderBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__GameObjectTransform_g);
			__this_00 = new CLPropertyBinding<CustomLogicColliderBuiltin>((System_Func_T__object__o)__this, null);
			return __this_00;
		}

		[Token(Token = "0x6001E47")]
		[Address(RVA = "0x58F4150", Offset = "0x58F3150", VA = "0x58F4150")]
		public static CLMethodBinding<CustomLogicColliderBuiltin> __CreateMethodBinding__ClosestPoint()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreateMethodBinding__ClosestPoint): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicColliderBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicColliderBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicColliderBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545dcc == false) {
				Il2CppMethodInitialized_07545dcc = true;
				uVar1 = (typeof(CustomLogicColliderBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicColliderBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicColliderBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__14_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicColliderBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__14_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicColliderBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicColliderBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicColliderBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c___CreateMethodBinding__ClosestPoint_b__14_0);
				pCVar2 = typeof(CustomLogicColliderBuiltin.Bindings.c).static_fields;
				pCVar2.__9__14_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicColliderBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001E48")]
		[Address(RVA = "0x58F4290", Offset = "0x58F3290", VA = "0x58F4290")]
		public static CLMethodBinding<CustomLogicColliderBuiltin> __CreateMethodBinding__ClosestPointOnBounds()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreateMethodBinding__ClosestPointOnBounds): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicColliderBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicColliderBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicColliderBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545dcd == false) {
				Il2CppMethodInitialized_07545dcd = true;
				uVar1 = (typeof(CustomLogicColliderBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicColliderBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicColliderBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__15_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicColliderBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__15_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicColliderBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicColliderBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicColliderBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c___CreateMethodBinding__ClosestPointOnBounds_b);
				pCVar2 = typeof(CustomLogicColliderBuiltin.Bindings.c).static_fields;
				pCVar2.__9__15_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicColliderBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001E49")]
		[Address(RVA = "0x58F43D0", Offset = "0x58F33D0", VA = "0x58F43D0")]
		public static CLMethodBinding<CustomLogicColliderBuiltin> __CreateMethodBinding__Raycast()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreateMethodBinding__Raycast): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicColliderBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicColliderBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicColliderBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545dce == false) {
				Il2CppMethodInitialized_07545dce = true;
				uVar1 = (typeof(CustomLogicColliderBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicColliderBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicColliderBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__16_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicColliderBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__16_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicColliderBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicColliderBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicColliderBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c___CreateMethodBinding__Raycast_b__16_0);
				pCVar2 = typeof(CustomLogicColliderBuiltin.Bindings.c).static_fields;
				pCVar2.__9__16_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicColliderBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001E4A")]
		[Address(RVA = "0x58F4510", Offset = "0x58F3510", VA = "0x58F4510")]
		public static CLMethodBinding<CustomLogicColliderBuiltin> __CreateMethodBinding____Copy__()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreateMethodBinding____Copy__): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicColliderBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicColliderBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicColliderBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545dcf == false) {
				Il2CppMethodInitialized_07545dcf = true;
				uVar1 = (typeof(CustomLogicColliderBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicColliderBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicColliderBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__17_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicColliderBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__17_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicColliderBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicColliderBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicColliderBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c___CreateMethodBinding____Copy___b__17_0);
				pCVar2 = typeof(CustomLogicColliderBuiltin.Bindings.c).static_fields;
				pCVar2.__9__17_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicColliderBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001E4B")]
		[Address(RVA = "0x58F4650", Offset = "0x58F3650", VA = "0x58F4650")]
		public static CLMethodBinding<CustomLogicColliderBuiltin> __CreateMethodBinding____Eq__()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreateMethodBinding____Eq__): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicColliderBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicColliderBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicColliderBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545dd0 == false) {
				Il2CppMethodInitialized_07545dd0 = true;
				uVar1 = (typeof(CustomLogicColliderBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicColliderBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicColliderBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__18_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicColliderBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__18_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicColliderBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicColliderBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicColliderBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c___CreateMethodBinding____Eq___b__18_0);
				pCVar2 = typeof(CustomLogicColliderBuiltin.Bindings.c).static_fields;
				pCVar2.__9__18_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicColliderBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6001E4C")]
		[Address(RVA = "0x58F4790", Offset = "0x58F3790", VA = "0x58F4790")]
		public static CLMethodBinding<CustomLogicColliderBuiltin> __CreateMethodBinding____Hash__()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreateMethodBinding____Hash__): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicColliderBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicColliderBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicColliderBuiltin> __this_00;

			if (Il2CppMethodInitialized_07545dd1 == false) {
				Il2CppMethodInitialized_07545dd1 = true;
				uVar1 = (typeof(CustomLogicColliderBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicColliderBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicColliderBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__19_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicColliderBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__19_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicColliderBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicColliderBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicColliderBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c___CreateMethodBinding____Hash___b__19_0);
				pCVar2 = typeof(CustomLogicColliderBuiltin.Bindings.c).static_fields;
				pCVar2.__9__19_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicColliderBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x400168C")]
	[FieldOffset(Offset = "0x30")]
	public Collider collider;

	[Token(Token = "0x17000349")]
	public CustomLogicTransformBuiltin AttachedArticulationBody
	{
		[Token(Token = "0x6001E1C")]
		[Address(RVA = "0x58F2350", Offset = "0x58F1350", VA = "0x58F2350")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin$$get_AttachedArticulationBody): clean
			Collider __this_00;
			Rigidbody __this_01;
			Transform transform;
			CustomLogicTransformBuiltin __this_02;

			__this_00 = this.collider;
			if (__this_00 != null) {
				__this_01 = __this_00.attachedRigidbody;
				if (__this_01 != null) {
					transform = __this_01.transform ;
					__this_02 = new CustomLogicTransformBuiltin(transform);
					return __this_02;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x1700034A")]
	public float ContactOffset
	{
		[Token(Token = "0x6001E1D")]
		[Address(RVA = "0x58F23D0", Offset = "0x58F13D0", VA = "0x58F23D0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin$$get_ContactOffset): clean
			Collider __this_00;
			float fVar1;

			__this_00 = this.collider;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return fVar1;
		}
		[Token(Token = "0x6001E1E")]
		[Address(RVA = "0x58F23F0", Offset = "0x58F13F0", VA = "0x58F23F0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin$$set_ContactOffset): clean
			Collider __this_00;

			__this_00 = this.collider;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.contactOffset = value;
			return;
		}
	}

	[Token(Token = "0x1700034B")]
	public new bool Enabled
	{
		[Token(Token = "0x6001E1F")]
		[Address(RVA = "0x58F2410", Offset = "0x58F1410", VA = "0x58F2410")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin$$get_Enabled): clean
			Collider __this_00;
			bool bVar1;

			__this_00 = this.collider;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return bVar1;
		}
		[Token(Token = "0x6001E20")]
		[Address(RVA = "0x58F2430", Offset = "0x58F1430", VA = "0x58F2430")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin$$set_Enabled): clean
			Collider __this_00;

			__this_00 = this.collider;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.enabled = value;
			return;
		}
	}

	[Token(Token = "0x1700034C")]
	public int ExcludeLayers
	{
		[Token(Token = "0x6001E21")]
		[Address(RVA = "0x58F2450", Offset = "0x58F1450", VA = "0x58F2450")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin$$get_ExcludeLayers): clean
			Collider __this_00;
			int iVar1;

			__this_00 = this.collider;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return iVar1;
		}
		[Token(Token = "0x6001E22")]
		[Address(RVA = "0x58F2470", Offset = "0x58F1470", VA = "0x58F2470")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin$$set_ExcludeLayers): clean
			Collider __this_00;
			LayerMask value_00;

			__this_00 = this.collider;
			value_00 = ((LayerMask)value);
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.excludeLayers = value_00;
			return;
		}
	}

	[Token(Token = "0x1700034D")]
	public int IncludeLayers
	{
		[Token(Token = "0x6001E23")]
		[Address(RVA = "0x58F24A0", Offset = "0x58F14A0", VA = "0x58F24A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin$$get_IncludeLayers): clean
			Collider __this_00;
			int iVar1;

			__this_00 = this.collider;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return iVar1;
		}
		[Token(Token = "0x6001E24")]
		[Address(RVA = "0x58F24C0", Offset = "0x58F14C0", VA = "0x58F24C0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin$$set_IncludeLayers): clean
			Collider __this_00;
			LayerMask value_00;

			__this_00 = this.collider;
			value_00 = ((LayerMask)value);
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.includeLayers = value_00;
			return;
		}
	}

	[Token(Token = "0x1700034E")]
	public bool IsTrigger
	{
		[Token(Token = "0x6001E25")]
		[Address(RVA = "0x58F24F0", Offset = "0x58F14F0", VA = "0x58F24F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin$$get_IsTrigger): clean
			Collider __this_00;
			bool bVar1;

			__this_00 = this.collider;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return bVar1;
		}
		[Token(Token = "0x6001E26")]
		[Address(RVA = "0x58F2510", Offset = "0x58F1510", VA = "0x58F2510")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin$$set_IsTrigger): clean
			Collider __this_00;

			__this_00 = this.collider;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.isTrigger = value;
			return;
		}
	}

	[Token(Token = "0x1700034F")]
	public CustomLogicVector3Builtin Center
	{
		[Token(Token = "0x6001E27")]
		[Address(RVA = "0x58F2530", Offset = "0x58F1530", VA = "0x58F2530")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin$$get_Center): clean
			Collider __this_00;
			CustomLogicVector3Builtin __this_01;
			Bounds local_20;

			__this_00 = this.collider;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			local_20 = __this_00.bounds;
			__this_01 = new CustomLogicVector3Builtin();
			__this_01.Value.x = local_20.m_Center.x;
			__this_01.Value.y = local_20.m_Center.y;
			__this_01.Value.z = local_20.m_Center.z;
			return __this_01;
		}
	}

	[Token(Token = "0x17000350")]
	public bool ProvidesContacts
	{
		[Token(Token = "0x6001E28")]
		[Address(RVA = "0x58F2600", Offset = "0x58F1600", VA = "0x58F2600")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin$$get_ProvidesContacts): clean
			Collider __this_00;
			bool bVar1;

			__this_00 = this.collider;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return bVar1;
		}
		[Token(Token = "0x6001E29")]
		[Address(RVA = "0x58F2620", Offset = "0x58F1620", VA = "0x58F2620")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin$$set_ProvidesContacts): clean
			Collider __this_00;

			__this_00 = this.collider;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.providesContacts = value;
			return;
		}
	}

	[Token(Token = "0x17000351")]
	public string MaterialName
	{
		[Token(Token = "0x6001E2A")]
		[Address(RVA = "0x58F2640", Offset = "0x58F1640", VA = "0x58F2640")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin$$get_MaterialName): clean
			Collider __this_00;
			Object __this_01;
			String pSVar1;

			__this_00 = this.collider;
			if (__this_00 != null) {
				__this_01 = (Object)__this_00.material;
				if (__this_01 != null) {
					return pSVar1;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000352")]
	public string SharedMaterialName
	{
		[Token(Token = "0x6001E2B")]
		[Address(RVA = "0x58F2670", Offset = "0x58F1670", VA = "0x58F2670")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin$$get_SharedMaterialName): clean
			Collider __this_00;
			Object __this_01;
			String pSVar1;

			__this_00 = this.collider;
			if (__this_00 != null) {
				__this_01 = (Object)__this_00.sharedMaterial;
				if (__this_01 != null) {
					return pSVar1;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000353")]
	public CustomLogicTransformBuiltin Transform
	{
		[Token(Token = "0x6001E2C")]
		[Address(RVA = "0x58F26A0", Offset = "0x58F16A0", VA = "0x58F26A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin$$get_Transform): clean
			Component __this_00;
			Transform transform;
			CustomLogicTransformBuiltin __this_01;

			__this_00 = (Component)this.collider;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			transform = __this_00.transform;
			__this_01 = new CustomLogicTransformBuiltin(transform);
			return __this_01;
		}
	}

	[Token(Token = "0x17000354")]
	public CustomLogicTransformBuiltin GameObjectTransform
	{
		[Token(Token = "0x6001E2D")]
		[Address(RVA = "0x58F2710", Offset = "0x58F1710", VA = "0x58F2710")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin$$get_GameObjectTransform): clean
			Component __this_00;
			GameObject __this_01;
			Transform transform;
			CustomLogicTransformBuiltin __this_02;

			__this_00 = (Component)this.collider;
			if (__this_00 != null) {
				__this_01 = __this_00.gameObject;
				if (__this_01 != null) {
					transform = __this_01.transform;
					__this_02 = new CustomLogicTransformBuiltin(transform);
					return __this_02;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000355")]
	public override string ClassName
	{
		[Token(Token = "0x6001E35")]
		[Address(RVA = "0x58F3060", Offset = "0x58F2060", VA = "0x58F3060", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin$$get_ClassName): clean
			return "Collider";
		}
	}

	[Token(Token = "0x17000356")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001E36")]
		[Address(RVA = "0x58F3090", Offset = "0x58F2090", VA = "0x58F3090", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x17000357")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001E37")]
		[Address(RVA = "0x58F30A0", Offset = "0x58F20A0", VA = "0x58F30A0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin$$get_IsStatic): clean
			return false;
		}
	}

	[Token(Token = "0x17000358")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001E38")]
		[Address(RVA = "0x58F30B0", Offset = "0x58F20B0", VA = "0x58F30B0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6001E1A")]
	[Address(RVA = "0x58F2200", Offset = "0x58F1200", VA = "0x58F2200")]
	public CustomLogicColliderBuiltin()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07545db3 == false) {
			Il2CppMethodInitialized_07545db3 = true;
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

	[Token(Token = "0x6001E1B")]
	[Address(RVA = "0x58F2270", Offset = "0x58F1270", VA = "0x58F2270")]
	public CustomLogicColliderBuiltin(object[] parameters)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin$$.ctor): 2 lines keep C-only constructs
		byte bVar1;
		Collider pUVar2;
		Collider pUVar3;

		base();
		pUVar3 = typeof(Collider);
		if (parameters == null) {
			throw new NullReferenceException();
		}
		if ((int)parameters.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		pUVar2 = (Collider)parameters[0];
		if (pUVar2 == null) {
			this.collider = null;
	label_059f2332: ;
			return;
		}
		bVar1 = (typeof(Collider)._2).typeHierarchyDepth;
		if ((bVar1 <= (((Il2CppClass)pUVar2.klass)._2).typeHierarchyDepth) &&((((Il2CppClass)pUVar2.klass)._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(Collider))) {
			this.collider = pUVar2;
			if ((bVar1 <= (((Il2CppClass)pUVar2.klass)._2).typeHierarchyDepth) &&((((Il2CppClass)pUVar2.klass)._2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass)pUVar3)) goto label_059f2332;
		}
		throw new InvalidCastException();
	}

	[Token(Token = "0x6001E2E")]
	[Address(RVA = "0x58F2790", Offset = "0x58F1790", VA = "0x58F2790")]
	public CustomLogicVector3Builtin ClosestPoint(CustomLogicVector3Builtin position)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin$$ClosestPoint): clean
		Collider __this_00;
		CustomLogicVector3Builtin __this_01;
		Vector3 UVar1;

		if ((position == null) ||(__this_00 = this.collider, __this_00 == null)) {
			throw new NullReferenceException();
		}
		UVar1 = __this_00.ClosestPoint((Vector3)position.Value);
		__this_01 = new CustomLogicVector3Builtin();
		__this_01.Value.x = UVar1.x;
		__this_01.Value.y = UVar1.y;
		__this_01.Value.z = UVar1.z;
		return __this_01;
	}

	[Token(Token = "0x6001E2F")]
	[Address(RVA = "0x58F2860", Offset = "0x58F1860", VA = "0x58F2860")]
	public CustomLogicVector3Builtin ClosestPointOnBounds(CustomLogicVector3Builtin position)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin$$ClosestPointOnBounds): clean
		Collider __this_00;
		CustomLogicVector3Builtin __this_01;
		Vector3 UVar1;

		if ((position == null) ||(__this_00 = this.collider, __this_00 == null)) {
			throw new NullReferenceException();
		}
		UVar1 = __this_00.ClosestPointOnBounds((Vector3)position.Value);
		__this_01 = new CustomLogicVector3Builtin();
		__this_01.Value.x = UVar1.x;
		__this_01.Value.y = UVar1.y;
		__this_01.Value.z = UVar1.z;
		return __this_01;
	}

	[Token(Token = "0x6001E30")]
	[Address(RVA = "0x58F2930", Offset = "0x58F1930", VA = "0x58F2930")]
	public CustomLogicLineCastHitResultBuiltin Raycast(CustomLogicVector3Builtin start, CustomLogicVector3Builtin end, string collideWith)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin$$Raycast): 27 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		byte bVar3;
		bool bVar4;
		int iVar5;
		Collider pUVar6;
		BuiltinClassInstance pCVar7;
		CustomLogicLineCastHitResultBuiltin __this_00;
		CustomLogicVector3Builtin pCVar8;
		Object[] parameters;
		object pIVar9;
		CustomLogicColliderBuiltin __this_01;
		BuiltinClassInstance pCVar10;
		float fVar11;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		Vector3 UVar12;
		Vector3 end_00;
		LayerMask local_80;
		float local_7c;
		byte[] local_78 = new byte[16];
		RaycastHit local_68;
		ulong local_38;

		local_68.m_UV.x = 0.0;
		local_68.m_UV.y = 0.0;
		local_68.m_Collider.m_Data = (EntityId)0x0;
		local_68.m_Normal.y = 0.0;
		local_68.m_Normal.z = 0.0;
		local_68.m_FaceID = 0;
		local_68.m_Distance = 0.0;
		local_68.m_Point.x = 0.0;
		local_68.m_Point.y = 0.0;
		local_68.m_Point.z = 0.0;
		local_68.m_Normal.x = 0.0;
		if ((start == null) ||(end == null)) {
	label_059f2d3d: ;
			throw new NullReferenceException();
		}
		uVar1 = start.Value.x;
		uVar2 = start.Value.y;
		local_78._4_4_ = uVar2;
		local_78._0_4_ = uVar1;
		local_78._8_8_ = 0;
		fVar11 = start.Value.z;
		local_38._0_4_ = end.Value.x;
		local_38._4_4_ = end.Value.y;
		local_7c = end.Value.z;
		iVar5 = MapLoader.GetColliderLayer(collideWith);
		local_80 = PhysicsLayer.CopyMask(iVar5);
		iVar5 = local_80.value;
		UVar12.z = fVar11;
		UVar12.x = (float)local_78._0_4_;
		UVar12.y = (float)local_78._4_4_;
		end_00.z = local_7c;
		end_00.x = (float)(undefined4)local_38;
		end_00.y = (float)local_38._4_4_;
		bVar4 = Physics.Linecast(UVar12, end_00, ref local_68, iVar5);
		if (bVar4) {
			pUVar6 = local_68.collider;
			pCVar7 = CustomLogicCollisionHandler.GetBuiltin(pUVar6);
			if (pCVar7 != null) {
				__this_00 = new CustomLogicLineCastHitResultBuiltin();
				bVar3 = (typeof(CustomLogicCharacterBuiltin)._2).typeHierarchyDepth;
				pCVar10 = null;
				if ((bVar3 <= (pCVar7.klass._2).typeHierarchyDepth) &&(pCVar10 = null,(pCVar7.klass._2).typeHierarchy[(ulong)bVar3 - 1] ==typeof(CustomLogicCharacterBuiltin))) {
					pCVar10 = pCVar7;
				}
				if (__this_00 != null) {
					bVar4 = false;
					__this_00.IsCharacter = pCVar10 != null;
					bVar3 = (typeof(CustomLogicMapObjectBuiltin)._2).typeHierarchyDepth;
					if (bVar3 <= (pCVar7.klass._2).typeHierarchyDepth) {
						bVar4 = (pCVar7.klass._2).typeHierarchy[(ulong)bVar3 - 1] ==typeof(CustomLogicMapObjectBuiltin);
					}
					__this_00._IsMapObject_k__BackingField = bVar4;
					UVar12 = local_68.point;
					local_78._8_4_ = extraout_XMM0_Dc;
					local_78._0_8_ = UVar12._0_8_;
					local_78._12_4_ = extraout_XMM0_Dd;
					pCVar8 = new CustomLogicVector3Builtin();
					pCVar8.Value.x = (float)local_78._0_4_;
					pCVar8.Value.y = (float)local_78._4_4_;
					pCVar8.Value.z = UVar12.z;
					__this_00._Point_k__BackingField = pCVar8;
					UVar12 = local_68.normal;
					local_78._8_4_ = extraout_XMM0_Dc_00;
					local_78._0_8_ = UVar12._0_8_;
					local_78._12_4_ = extraout_XMM0_Dd_00;
					pCVar8 = new CustomLogicVector3Builtin();
					pCVar8.Value.x = (float)local_78._0_4_;
					pCVar8.Value.y = (float)local_78._4_4_;
					pCVar8.Value.z = UVar12.z;
					__this_00._Normal_k__BackingField = pCVar8;
					fVar11 = local_68.distance;
					__this_00._Distance_k__BackingField = fVar11;
					__this_00._Collider_k__BackingField = pCVar7;
					parameters = (Object[])new object[1];
					pUVar6 = local_68.collider;
					if (parameters != null) {
						if ((pUVar6 != null) &&(pIVar9 = il2cpp_vm_Object_IsInst((object)pUVar6, (((parameters.obj).klass)._1).element_class), pIVar9 == null)) {
							pIVar9 = new ArrayTypeMismatchException();
							throw pIVar9;
						}
						if ((int)parameters.Length == 0) {
							throw new IndexOutOfRangeException();
						}
						parameters[0] = (object)pUVar6;
						__this_01 = new CustomLogicColliderBuiltin(parameters);
						__this_00._ColliderInfo_k__BackingField = __this_01;
						return __this_00;
					}
				}
				goto label_059f2d3d;
			}
		}
		return null;
	}

	[Token(Token = "0x6001E31")]
	[Address(RVA = "0x58F2D60", Offset = "0x58F1D60", VA = "0x58F2D60")]
	public BuiltinClassInstance Copy()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin$$Copy): 1 lines keep C-only constructs
		Collider obj;
		Object[] parameters;
		object pIVar1;
		CustomLogicColliderBuiltin __this_00;

		parameters = (Object[])new object[1];
		if (parameters == null) {
			throw new NullReferenceException();
		}
		obj = this.collider;
		if (obj != null) {
			pIVar1 = il2cpp_vm_Object_IsInst((object)obj, (((parameters.obj).klass)._1).element_class);
			if (pIVar1 == null) {
				pIVar1 = new ArrayTypeMismatchException();
				throw pIVar1;
			}
		}
		if ((int)parameters.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		parameters[0] = (object)obj;
		__this_00 = new CustomLogicColliderBuiltin(parameters);
		return (BuiltinClassInstance)__this_00;
	}

	[Token(Token = "0x6001E32")]
	[Address(RVA = "0x58F2E30", Offset = "0x58F1E30", VA = "0x58F2E30", Slot = "11")]
	public object __Copy__()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin$$__Copy__): 1 lines keep C-only constructs
		Collider obj;
		Object[] parameters;
		object pIVar1;
		CustomLogicColliderBuiltin __this_00;

		parameters = (Object[])new object[1];
		if (parameters == null) {
			throw new NullReferenceException();
		}
		obj = this.collider;
		if (obj != null) {
			pIVar1 = il2cpp_vm_Object_IsInst((object)obj, (((parameters.obj).klass)._1).element_class);
			if (pIVar1 == null) {
				pIVar1 = new ArrayTypeMismatchException();
				throw pIVar1;
			}
		}
		if ((int)parameters.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		parameters[0] = (object)obj;
		__this_00 = new CustomLogicColliderBuiltin(parameters);
		return (object)__this_00;
	}

	[Token(Token = "0x6001E33")]
	[Address(RVA = "0x58F2F00", Offset = "0x58F1F00", VA = "0x58F2F00", Slot = "12")]
	public bool __Eq__(object self, object other)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin$$__Eq__): 5 lines keep C-only constructs
		byte bVar1;
		Il2CppClass x;
		Il2CppClass y;
		bool bVar2;
		object pIVar3;

		if (self != null) {
			bVar1 = (typeof(CustomLogicColliderBuiltin)._2).typeHierarchyDepth;
			if (bVar1 <= (self.klass._2).typeHierarchyDepth) {
				pIVar3 = null;
				if ((self.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicColliderBuiltin)) {
					pIVar3 = self;
				}
				if ((((other != null) && (pIVar3 != null)) &&(bVar1 <= (other.klass._2).typeHierarchyDepth)) &&((other.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicColliderBuiltin))) {
					x = pIVar3[3].klass;
					y = other[3].klass;
					bVar2 = ((Object)x == (Object)y);
					return bVar2;
				}
			}
		}
		return false;
	}

	[Token(Token = "0x6001E34")]
	[Address(RVA = "0x58F2FD0", Offset = "0x58F1FD0", VA = "0x58F2FD0", Slot = "13")]
	public int __Hash__()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c (CustomLogic.CustomLogicColliderBuiltin$$__Hash__): clean
		Object x;
		Collider pUVar1;
		bool bVar2;
		int iVar3;

		x = (Object)this.collider;
		bVar2 = (x == null);
		if (bVar2) {
			return 0;
		}
		pUVar1 = this.collider;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		return iVar3;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicColliderBuiltin.c.

	// CustomLogic.CustomLogicColliderBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"AttachedArticulationBody");
		__this.Add((Il2CppObject *)"ContactOffset");
		__this.Add((Il2CppObject *)"Enabled");
		__this.Add((Il2CppObject *)"ExcludeLayers");
		__this.Add((Il2CppObject *)"IncludeLayers");
		__this.Add((Il2CppObject *)"IsTrigger");
		__this.Add((Il2CppObject *)"Center");
		__this.Add((Il2CppObject *)"ProvidesContacts");
		__this.Add((Il2CppObject *)"MaterialName");
		__this.Add((Il2CppObject *)"SharedMaterialName");
		__this.Add((Il2CppObject *)"Transform");
		__this.Add((Il2CppObject *)"GameObjectTransform");
		__this.Add((Il2CppObject *)"ClosestPoint");
		__this.Add((Il2CppObject *)"ClosestPointOnBounds");
		__this.Add((Il2CppObject *)"Raycast");
		__this.Add((Il2CppObject *)"__Copy__");
		__this.Add((Il2CppObject *)"__Eq__");
		__this.Add((Il2CppObject *)"__Hash__");
		CustomLogicColliderBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__AttachedArticulationBody>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__AttachedArticulationBody_g____getter_2_0(CustomLogicColliderBuiltin __i)
	{
		CustomLogicTransformBuiltin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.AttachedArticulationBody;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__ContactOffset>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__ContactOffset_g____getter_3_0(CustomLogicColliderBuiltin __i)
	{
		Collider __this;
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__this = __i.collider, __this == null)) {
			throw new NullReferenceException();
		}
		__this.contactOffset;
		return pIVar1;
	}

	// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__ContactOffset>g____setter|3_1: clean
	private static void Bindings____CreatePropertyBinding__ContactOffset_g____setter_3_1(CustomLogicColliderBuiltin __i, object __v)
	{
		Collider __this;
		float value;

		value = CustomLogicEvaluator.ConvertTo<float>(__v);
		if ((__i == null) ||(__this = __i.collider, __this == null)) {
			throw new NullReferenceException();
		}
		__this.contactOffset = value;
		return;
	}

	// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__Enabled>g____getter|4_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__Enabled_g____getter_4_0(CustomLogicColliderBuiltin __i)
	{
		Collider __this;
		bool bVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if ((__i == null) ||(__this = __i.collider, __this == null)) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		bVar1 = __this.enabled;
		uStack_8 = CONCAT17(bVar1, (undefined7)uStack_8);
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__Enabled>g____setter|4_1: clean
	private static void Bindings____CreatePropertyBinding__Enabled_g____setter_4_1(CustomLogicColliderBuiltin __i, object __v)
	{
		Collider __this;
		bool value;

		value = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if ((__i == null) ||(__this = __i.collider, __this == null)) {
			throw new NullReferenceException();
		}
		__this.enabled = value;
		return;
	}

	// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__ExcludeLayers>g____getter|5_0: clean
	private static object Bindings____CreatePropertyBinding__ExcludeLayers_g____getter_5_0(CustomLogicColliderBuiltin __i)
	{
		Collider __this;
		LayerMask mask;
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__this = __i.collider, __this == null)) {
			throw new NullReferenceException();
		}
		mask = __this.excludeLayers;
		((LayerMask)mask);
		return pIVar1;
	}

	// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__ExcludeLayers>g____setter|5_1: clean
	private static void Bindings____CreatePropertyBinding__ExcludeLayers_g____setter_5_1(CustomLogicColliderBuiltin __i, object __v)
	{
		Collider __this;
		int intVal;
		LayerMask value;

		intVal = CustomLogicEvaluator.ConvertTo<int>(__v);
		if (__i != null) {
			__this = __i.collider;
			value = ((LayerMask)intVal);
			if (__this != null) {
				__this.excludeLayers = value;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__IncludeLayers>g____getter|6_0: clean
	private static object Bindings____CreatePropertyBinding__IncludeLayers_g____getter_6_0(CustomLogicColliderBuiltin __i)
	{
		Collider __this;
		LayerMask mask;
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if ((__i == null) ||(__this = __i.collider, __this == null)) {
			throw new NullReferenceException();
		}
		mask = __this.includeLayers;
		((LayerMask)mask);
		return pIVar1;
	}

	// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__IncludeLayers>g____setter|6_1: clean
	private static void Bindings____CreatePropertyBinding__IncludeLayers_g____setter_6_1(CustomLogicColliderBuiltin __i, object __v)
	{
		Collider __this;
		int intVal;
		LayerMask value;

		intVal = CustomLogicEvaluator.ConvertTo<int>(__v);
		if (__i != null) {
			__this = __i.collider;
			value = ((LayerMask)intVal);
			if (__this != null) {
				__this.includeLayers = value;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__IsTrigger>g____getter|7_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__IsTrigger_g____getter_7_0(CustomLogicColliderBuiltin __i)
	{
		Collider __this;
		bool bVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if ((__i == null) ||(__this = __i.collider, __this == null)) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		bVar1 = __this.isTrigger;
		uStack_8 = CONCAT17(bVar1, (undefined7)uStack_8);
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__IsTrigger>g____setter|7_1: clean
	private static void Bindings____CreatePropertyBinding__IsTrigger_g____setter_7_1(CustomLogicColliderBuiltin __i, object __v)
	{
		Collider __this;
		bool value;

		value = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if ((__i == null) ||(__this = __i.collider, __this == null)) {
			throw new NullReferenceException();
		}
		__this.isTrigger = value;
		return;
	}

	// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__Center>g____getter|8_0: clean
	private static object Bindings____CreatePropertyBinding__Center_g____getter_8_0(CustomLogicColliderBuiltin __i)
	{
		CustomLogicVector3Builtin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.Center;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__ProvidesContacts>g____getter|9_0: 4 lines keep C-only constructs
	private static object Bindings____CreatePropertyBinding__ProvidesContacts_g____getter_9_0(CustomLogicColliderBuiltin __i)
	{
		Collider __this;
		bool bVar1;
		ulong in_RAX;
		object pIVar2;
		ulong uStack_8;

		if ((__i == null) ||(__this = __i.collider, __this == null)) {
			throw new NullReferenceException();
		}
		uStack_8 = in_RAX;
		bVar1 = __this.providesContacts;
		uStack_8 = CONCAT17(bVar1, (undefined7)uStack_8);
		pIVar2 = (object)(((long)&uStack_8 + 7));
		return pIVar2;
	}

	// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__ProvidesContacts>g____setter|9_1: clean
	private static void Bindings____CreatePropertyBinding__ProvidesContacts_g____setter_9_1(CustomLogicColliderBuiltin __i, object __v)
	{
		Collider __this;
		bool value;

		value = CustomLogicEvaluator.ConvertTo<bool>(__v);
		if ((__i == null) ||(__this = __i.collider, __this == null)) {
			throw new NullReferenceException();
		}
		__this.providesContacts = value;
		return;
	}

	// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__MaterialName>g____getter|10_0: clean
	private static object Bindings____CreatePropertyBinding__MaterialName_g____getter_10_0(CustomLogicColliderBuiltin __i)
	{
		Collider __this;
		Object __this_00;
		String pSVar1;

		if ((__i != null) &&(__this = __i.collider, __this != null)) {
			__this_00 = (Object)__this.material;
			if (__this_00 != null) {
				pSVar1 = __this_00.name;
				return (object)pSVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__SharedMaterialName>g____getter|11_0: clean
	private static object Bindings____CreatePropertyBinding__SharedMaterialName_g____getter_11_0(CustomLogicColliderBuiltin __i)
	{
		Collider __this;
		Object __this_00;
		String pSVar1;

		if ((__i != null) &&(__this = __i.collider, __this != null)) {
			__this_00 = (Object)__this.sharedMaterial;
			if (__this_00 != null) {
				pSVar1 = __this_00.name;
				return (object)pSVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__Transform>g____getter|12_0: clean
	private static object Bindings____CreatePropertyBinding__Transform_g____getter_12_0(CustomLogicColliderBuiltin __i)
	{
		Component __this;
		Transform transform;
		CustomLogicTransformBuiltin __this_00;

		if (__i != null) {
			__this = (Component)__i.collider;
			if (__this != null) {
				transform = __this.transform;
				__this_00 = new CustomLogicTransformBuiltin(transform);
				return (object)__this_00;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__GameObjectTransform>g____getter|13_0: clean
	private static object Bindings____CreatePropertyBinding__GameObjectTransform_g____getter_13_0(CustomLogicColliderBuiltin __i)
	{
		CustomLogicTransformBuiltin pCVar1;

		if (__i == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __i.GameObjectTransform;
		return (object)pCVar1;
	}

	// CustomLogic.CustomLogicColliderBuiltin.Bindings.<>c$$.cctor: clean
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = new CustomLogicColliderBuiltin.Bindings.c();
		CustomLogicColliderBuiltin.Bindings.c.__9 =(CustomLogicColliderBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicColliderBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicColliderBuiltin.Bindings.<>c$$<__CreateMethodBinding__ClosestPoint>b__14_0: clean
	private object Bindings_c____CreateMethodBinding__ClosestPoint_b__14_0(CustomLogicColliderBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicVector3Builtin pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
			if (__c != null) {
				pCVar1 = __c.ClosestPoint(pCVar1);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicColliderBuiltin.Bindings.<>c$$<__CreateMethodBinding__ClosestPointOnBounds>b__15_0: clean
	private object Bindings_c____CreateMethodBinding__ClosestPointOnBounds_b__15_0(CustomLogicColliderBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicVector3Builtin pCVar1;

		if (__a != null) {
			if ((int)__a.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = __a[0];
			pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
			if (__c != null) {
				pCVar1 = __c.ClosestPointOnBounds(pCVar1);
				return (object)pCVar1;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicColliderBuiltin.Bindings.<>c$$<__CreateMethodBinding__Raycast>b__16_0: clean
	private object Bindings_c____CreateMethodBinding__Raycast_b__16_0(CustomLogicColliderBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicVector3Builtin start;
		CustomLogicVector3Builtin end;
		String collideWith;
		CustomLogicLineCastHitResultBuiltin pCVar1;
		CustomLogicColliderBuiltin __this_00;

		if (__a == null) {
	label_059f53ec: ;
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			start = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				end = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[1]);
				if (2 < (uint)__a.Length) {
					__this_00 = (CustomLogicColliderBuiltin)__a[2];
					collideWith = CustomLogicEvaluator.ConvertTo<string>((object)__this_00);
					if (__c != null) {
						pCVar1 = __this_00.Raycast(start, end, collideWith);
						return (object)pCVar1;
					}
					goto label_059f53ec;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicColliderBuiltin.Bindings.<>c$$<__CreateMethodBinding____Copy__>b__17_0: clean
	private object Bindings_c____CreateMethodBinding____Copy___b__17_0(CustomLogicColliderBuiltin __c, Object[] __a)
	{
		object pIVar1;

		if (__c == null) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicColliderBuiltin.Bindings.<>c$$<__CreateMethodBinding____Eq__>b__18_0: 4 lines keep C-only constructs
	private object Bindings_c____CreateMethodBinding____Eq___b__18_0(CustomLogicColliderBuiltin __c, Object[] __a)
	{
		int iVar1;
		bool bVar2;
		ulong in_RAX;
		object pIVar3;
		ulong uStack_8;

		if (__a != null) {
			iVar1 = (int)__a.Length;
			if ((iVar1 == 0) || (iVar1 == 1)) {
				throw new IndexOutOfRangeException();
			}
			if (__c != null) {
				uStack_8 = in_RAX;
				bVar2 = this.__Eq__(__a[0], __a[1]);
				uStack_8 = CONCAT17(bVar2, (undefined7)uStack_8);
				pIVar3 = (object)(((long)&uStack_8 + 7));
				return pIVar3;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicColliderBuiltin.Bindings.<>c$$<__CreateMethodBinding____Hash__>b__19_0: clean
	private object Bindings_c____CreateMethodBinding____Hash___b__19_0(CustomLogicColliderBuiltin __c, Object[] __a)
	{
		Object x;
		Collider pUVar1;
		bool bVar2;
		object pIVar4;

		if (__c == null) {
	label_059f550d: ;
			throw new NullReferenceException();
		}
		x = (Object)__c.collider;
		bVar2 = (x == null);
		if (!bVar2) {
			pUVar1 = __c.collider;
			if (pUVar1 == null) goto label_059f550d;
		}
		return pIVar4;
	}
}
