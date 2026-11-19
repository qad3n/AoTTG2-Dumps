// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicPhysicsBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicPhysicsBuiltin.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicPhysicsBuiltin.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20005CE")]
[CompilerGenerated]
internal class CustomLogicPhysicsBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x20005CF")]
	public static class Factory
	{
		[Token(Token = "0x6003616")]
		[Address(RVA = "0x59F40C0", Offset = "0x59F30C0", VA = "0x59F40C0")]
		public static CustomLogicPhysicsBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsBuiltin.c (CustomLogic.CustomLogicPhysicsBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
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
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicPhysicsBuiltin constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this = new CustomLogicPhysicsBuiltin();
			return (CustomLogicPhysicsBuiltin)__this;
		}
	}

	[Token(Token = "0x20005D0")]
	public static class Bindings
	{
		[Token(Token = "0x4001937")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6003617")]
		[Address(RVA = "0x59F41E0", Offset = "0x59F31E0", VA = "0x59F41E0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsBuiltin.c (CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			uint uVar2;
			CLMethodBinding<CustomLogicPhysicsBuiltin> pCVar3;
			String pSVar4;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			uVar2 = _PrivateImplementationDetails_.ComputeStringHash(name);
			if (uVar2 < 0x3ff74f8c) {
				if (uVar2 < 0x241c90a3) {
					if (uVar2 == 0x2607722) {
						bVar1 = (name == "SphereCastAll");
						if (bVar1) {
							if ((typeof(CustomLogicPhysicsBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicPhysicsBuiltin.Bindings.__CreateMethodBinding__SphereCastAll();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicPhysicsBuiltin.Bindings.__CreateMethodBinding__SphereCastAll();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x1ca4814b) {
						bVar1 = (name == "LineCastAll");
						if (bVar1) {
							if ((typeof(CustomLogicPhysicsBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicPhysicsBuiltin.Bindings.__CreateMethodBinding__LineCastAll();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicPhysicsBuiltin.Bindings.__CreateMethodBinding__LineCastAll();
							return (ICLMemberBinding)pCVar3;
						}
					}
					else if (uVar2 == 0x241c90a2) {
						bVar1 = (name == "ClosestPoint");
						if (bVar1) {
							if ((typeof(CustomLogicPhysicsBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
								pCVar3 = CustomLogicPhysicsBuiltin.Bindings.__CreateMethodBinding__ClosestPoint();
								return (ICLMemberBinding)pCVar3;
							}
							pCVar3 = CustomLogicPhysicsBuiltin.Bindings.__CreateMethodBinding__ClosestPoint();
							return (ICLMemberBinding)pCVar3;
						}
					}
				}
				else if (uVar2 == 0x2f67c718) {
					bVar1 = (name == "LineCastWithMask");
					if (bVar1) {
						if ((typeof(CustomLogicPhysicsBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicPhysicsBuiltin.Bindings.__CreateMethodBinding__LineCastWithMask();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicPhysicsBuiltin.Bindings.__CreateMethodBinding__LineCastWithMask();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x347ce791) {
					bVar1 = (name == "AreCollidersOverlapping");
					if (bVar1) {
						if ((typeof(CustomLogicPhysicsBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicPhysicsBuiltin.Bindings.__CreateMethodBinding__AreCollidersOverlapping();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicPhysicsBuiltin.Bindings.__CreateMethodBinding__AreCollidersOverlapping();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x3ff74f8b) {
					bVar1 = (name == "SphereCastWithMask");
					if (bVar1) {
						if ((typeof(CustomLogicPhysicsBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicPhysicsBuiltin.Bindings.__CreateMethodBinding__SphereCastWithMask();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicPhysicsBuiltin.Bindings.__CreateMethodBinding__SphereCastWithMask();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 < 0xa5266d89) {
				if (uVar2 == 0x91aced38) {
					bVar1 = (name == "BoxCastAll");
					if (bVar1) {
						if ((typeof(CustomLogicPhysicsBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicPhysicsBuiltin.Bindings.__CreateMethodBinding__BoxCastAll();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicPhysicsBuiltin.Bindings.__CreateMethodBinding__BoxCastAll();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0xa5266d88) {
					bVar1 = (name == "LineCast");
					if (bVar1) {
						if ((typeof(CustomLogicPhysicsBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicPhysicsBuiltin.Bindings.__CreateMethodBinding__LineCast();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicPhysicsBuiltin.Bindings.__CreateMethodBinding__LineCast();
						return (ICLMemberBinding)pCVar3;
					}
				}
				else if (uVar2 == 0x61cb0efd) {
					bVar1 = (name == "GetPhysicsLayerMask");
					if (bVar1) {
						if ((typeof(CustomLogicPhysicsBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
							pCVar3 = CustomLogicPhysicsBuiltin.Bindings.__CreateMethodBinding__GetPhysicsLayerMask();
							return (ICLMemberBinding)pCVar3;
						}
						pCVar3 = CustomLogicPhysicsBuiltin.Bindings.__CreateMethodBinding__GetPhysicsLayerMask();
						return (ICLMemberBinding)pCVar3;
					}
				}
			}
			else if (uVar2 == 0xad368c07) {
				bVar1 = (name == "SphereCast");
				if (bVar1) {
					if ((typeof(CustomLogicPhysicsBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar3 = CustomLogicPhysicsBuiltin.Bindings.__CreateMethodBinding__SphereCast();
						return (ICLMemberBinding)pCVar3;
					}
					pCVar3 = CustomLogicPhysicsBuiltin.Bindings.__CreateMethodBinding__SphereCast();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xe2eb52c1) {
				bVar1 = (name == "BoxCast");
				if (bVar1) {
					if ((typeof(CustomLogicPhysicsBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar3 = CustomLogicPhysicsBuiltin.Bindings.__CreateMethodBinding__BoxCast();
						return (ICLMemberBinding)pCVar3;
					}
					pCVar3 = CustomLogicPhysicsBuiltin.Bindings.__CreateMethodBinding__BoxCast();
					return (ICLMemberBinding)pCVar3;
				}
			}
			else if (uVar2 == 0xe726f143) {
				bVar1 = (name == "ComputePenetration");
				if (bVar1) {
					if ((typeof(CustomLogicPhysicsBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
						pCVar3 = CustomLogicPhysicsBuiltin.Bindings.__CreateMethodBinding__ComputePenetration();
						return (ICLMemberBinding)pCVar3;
					}
					pCVar3 = CustomLogicPhysicsBuiltin.Bindings.__CreateMethodBinding__ComputePenetration();
					return (ICLMemberBinding)pCVar3;
				}
			}
			pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
			str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicPhysicsBuiltin not found");
			pSVar4 = String.Concat(pSVar4, name, str2);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this = (Exception)il2cpp_codegen_object_new(klass);
			__this = new Exception(pSVar4);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_CreateMemberBinding);
			throw (object)__this;
		}

		[Token(Token = "0x6003618")]
		[Address(RVA = "0x59F4770", Offset = "0x59F3770", VA = "0x59F4770")]
		public static CLMethodBinding<CustomLogicPhysicsBuiltin> __CreateMethodBinding__GetPhysicsLayerMask()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsBuiltin.c (CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$__CreateMethodBinding__GetPhysicsLayerMask): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicPhysicsBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicPhysicsBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546ece == false) {
				Il2CppMethodInitialized_07546ece = true;
				uVar1 = (typeof(CustomLogicPhysicsBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicPhysicsBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicPhysicsBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__2_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicPhysicsBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__2_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicPhysicsBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicPhysicsBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicPhysicsBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__GetPhysicsLayerMask_b__2);
				pCVar2 = typeof(CustomLogicPhysicsBuiltin.Bindings.c).static_fields;
				pCVar2.__9__2_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicPhysicsBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003619")]
		[Address(RVA = "0x59F48B0", Offset = "0x59F38B0", VA = "0x59F48B0")]
		public static CLMethodBinding<CustomLogicPhysicsBuiltin> __CreateMethodBinding__LineCast()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsBuiltin.c (CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$__CreateMethodBinding__LineCast): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicPhysicsBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicPhysicsBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546ecf == false) {
				Il2CppMethodInitialized_07546ecf = true;
				uVar1 = (typeof(CustomLogicPhysicsBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicPhysicsBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicPhysicsBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__3_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicPhysicsBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__3_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicPhysicsBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicPhysicsBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicPhysicsBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__LineCast_b__3_0);
				pCVar2 = typeof(CustomLogicPhysicsBuiltin.Bindings.c).static_fields;
				pCVar2.__9__3_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicPhysicsBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600361A")]
		[Address(RVA = "0x59F49F0", Offset = "0x59F39F0", VA = "0x59F49F0")]
		public static CLMethodBinding<CustomLogicPhysicsBuiltin> __CreateMethodBinding__LineCastWithMask()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsBuiltin.c (CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$__CreateMethodBinding__LineCastWithMask): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicPhysicsBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicPhysicsBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546ed0 == false) {
				Il2CppMethodInitialized_07546ed0 = true;
				uVar1 = (typeof(CustomLogicPhysicsBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicPhysicsBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicPhysicsBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__4_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicPhysicsBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__4_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicPhysicsBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicPhysicsBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicPhysicsBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__LineCastWithMask_b__4_0);
				pCVar2 = typeof(CustomLogicPhysicsBuiltin.Bindings.c).static_fields;
				pCVar2.__9__4_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicPhysicsBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600361B")]
		[Address(RVA = "0x59F4B30", Offset = "0x59F3B30", VA = "0x59F4B30")]
		public static CLMethodBinding<CustomLogicPhysicsBuiltin> __CreateMethodBinding__LineCastAll()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsBuiltin.c (CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$__CreateMethodBinding__LineCastAll): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicPhysicsBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicPhysicsBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546ed1 == false) {
				Il2CppMethodInitialized_07546ed1 = true;
				uVar1 = (typeof(CustomLogicPhysicsBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicPhysicsBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicPhysicsBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__5_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicPhysicsBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__5_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicPhysicsBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicPhysicsBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicPhysicsBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__LineCastAll_b__5_0);
				pCVar2 = typeof(CustomLogicPhysicsBuiltin.Bindings.c).static_fields;
				pCVar2.__9__5_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicPhysicsBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600361C")]
		[Address(RVA = "0x59F4C70", Offset = "0x59F3C70", VA = "0x59F4C70")]
		public static CLMethodBinding<CustomLogicPhysicsBuiltin> __CreateMethodBinding__SphereCast()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsBuiltin.c (CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$__CreateMethodBinding__SphereCast): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicPhysicsBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicPhysicsBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546ed2 == false) {
				Il2CppMethodInitialized_07546ed2 = true;
				uVar1 = (typeof(CustomLogicPhysicsBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicPhysicsBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicPhysicsBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__6_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicPhysicsBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__6_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicPhysicsBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicPhysicsBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicPhysicsBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__SphereCast_b__6_0);
				pCVar2 = typeof(CustomLogicPhysicsBuiltin.Bindings.c).static_fields;
				pCVar2.__9__6_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicPhysicsBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600361D")]
		[Address(RVA = "0x59F4DB0", Offset = "0x59F3DB0", VA = "0x59F4DB0")]
		public static CLMethodBinding<CustomLogicPhysicsBuiltin> __CreateMethodBinding__SphereCastWithMask()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsBuiltin.c (CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$__CreateMethodBinding__SphereCastWithMask): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicPhysicsBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicPhysicsBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546ed3 == false) {
				Il2CppMethodInitialized_07546ed3 = true;
				uVar1 = (typeof(CustomLogicPhysicsBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicPhysicsBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicPhysicsBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__7_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicPhysicsBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__7_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicPhysicsBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicPhysicsBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicPhysicsBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__SphereCastWithMask_b__7);
				pCVar2 = typeof(CustomLogicPhysicsBuiltin.Bindings.c).static_fields;
				pCVar2.__9__7_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicPhysicsBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600361E")]
		[Address(RVA = "0x59F4EF0", Offset = "0x59F3EF0", VA = "0x59F4EF0")]
		public static CLMethodBinding<CustomLogicPhysicsBuiltin> __CreateMethodBinding__SphereCastAll()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsBuiltin.c (CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$__CreateMethodBinding__SphereCastAll): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicPhysicsBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicPhysicsBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546ed4 == false) {
				Il2CppMethodInitialized_07546ed4 = true;
				uVar1 = (typeof(CustomLogicPhysicsBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicPhysicsBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicPhysicsBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__8_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicPhysicsBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__8_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicPhysicsBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicPhysicsBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicPhysicsBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__SphereCastAll_b__8_0);
				pCVar2 = typeof(CustomLogicPhysicsBuiltin.Bindings.c).static_fields;
				pCVar2.__9__8_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicPhysicsBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x600361F")]
		[Address(RVA = "0x59F5030", Offset = "0x59F4030", VA = "0x59F5030")]
		public static CLMethodBinding<CustomLogicPhysicsBuiltin> __CreateMethodBinding__BoxCast()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsBuiltin.c (CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$__CreateMethodBinding__BoxCast): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicPhysicsBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicPhysicsBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546ed5 == false) {
				Il2CppMethodInitialized_07546ed5 = true;
				uVar1 = (typeof(CustomLogicPhysicsBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicPhysicsBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicPhysicsBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__9_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicPhysicsBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__9_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicPhysicsBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicPhysicsBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicPhysicsBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__BoxCast_b__9_0);
				pCVar2 = typeof(CustomLogicPhysicsBuiltin.Bindings.c).static_fields;
				pCVar2.__9__9_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicPhysicsBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003620")]
		[Address(RVA = "0x59F5170", Offset = "0x59F4170", VA = "0x59F5170")]
		public static CLMethodBinding<CustomLogicPhysicsBuiltin> __CreateMethodBinding__BoxCastAll()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsBuiltin.c (CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$__CreateMethodBinding__BoxCastAll): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicPhysicsBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicPhysicsBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546ed6 == false) {
				Il2CppMethodInitialized_07546ed6 = true;
				uVar1 = (typeof(CustomLogicPhysicsBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicPhysicsBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicPhysicsBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__10_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicPhysicsBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__10_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicPhysicsBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicPhysicsBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicPhysicsBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__BoxCastAll_b__10_0);
				pCVar2 = typeof(CustomLogicPhysicsBuiltin.Bindings.c).static_fields;
				pCVar2.__9__10_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicPhysicsBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003621")]
		[Address(RVA = "0x59F52B0", Offset = "0x59F42B0", VA = "0x59F52B0")]
		public static CLMethodBinding<CustomLogicPhysicsBuiltin> __CreateMethodBinding__ClosestPoint()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsBuiltin.c (CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$__CreateMethodBinding__ClosestPoint): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicPhysicsBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicPhysicsBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546ed7 == false) {
				Il2CppMethodInitialized_07546ed7 = true;
				uVar1 = (typeof(CustomLogicPhysicsBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicPhysicsBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicPhysicsBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__11_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicPhysicsBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__11_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicPhysicsBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicPhysicsBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicPhysicsBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__ClosestPoint_b__11_0);
				pCVar2 = typeof(CustomLogicPhysicsBuiltin.Bindings.c).static_fields;
				pCVar2.__9__11_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicPhysicsBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003622")]
		[Address(RVA = "0x59F53F0", Offset = "0x59F43F0", VA = "0x59F53F0")]
		public static CLMethodBinding<CustomLogicPhysicsBuiltin> __CreateMethodBinding__ComputePenetration()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsBuiltin.c (CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$__CreateMethodBinding__ComputePenetration): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicPhysicsBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicPhysicsBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546ed8 == false) {
				Il2CppMethodInitialized_07546ed8 = true;
				uVar1 = (typeof(CustomLogicPhysicsBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicPhysicsBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicPhysicsBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__12_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicPhysicsBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__12_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicPhysicsBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicPhysicsBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicPhysicsBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__ComputePenetration_b__12);
				pCVar2 = typeof(CustomLogicPhysicsBuiltin.Bindings.c).static_fields;
				pCVar2.__9__12_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicPhysicsBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}

		[Token(Token = "0x6003623")]
		[Address(RVA = "0x59F5530", Offset = "0x59F4530", VA = "0x59F5530")]
		public static CLMethodBinding<CustomLogicPhysicsBuiltin> __CreateMethodBinding__AreCollidersOverlapping()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsBuiltin.c (CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$__CreateMethodBinding__AreCollidersOverlapping): 2 lines keep C-only constructs
			uint uVar1;
			object @object;
			CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_StaticFields pCVar2;
			Func<CustomLogicPhysicsBuiltin, @object[], @object> __this;
			CLMethodBinding<CustomLogicPhysicsBuiltin> __this_00;

			if (Il2CppMethodInitialized_07546ed9 == false) {
				Il2CppMethodInitialized_07546ed9 = true;
				uVar1 = (typeof(CustomLogicPhysicsBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(CustomLogicPhysicsBuiltin.Bindings.c)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pCVar2 = typeof(CustomLogicPhysicsBuiltin.Bindings.c).static_fields;
				__this = pCVar2.__9__13_0;
			}
			else {
				pCVar2 = (typeof(CustomLogicPhysicsBuiltin.Bindings.c)).static_fields;
				__this = pCVar2.__9__13_0;
			}
			if (__this == null) {
				if (((typeof(CustomLogicPhysicsBuiltin.Bindings.c))._2). cctor_finished_or_no_cctor == 0) {
					pCVar2 = typeof(CustomLogicPhysicsBuiltin.Bindings.c).static_fields;
				}
				@object = (object)pCVar2.__9;
				__this = new Func<CustomLogicPhysicsBuiltin, @object[], @object>(@object, (intptr_t) MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__AreCollidersOverlapping);
				pCVar2 = typeof(CustomLogicPhysicsBuiltin.Bindings.c).static_fields;
				pCVar2.__9__13_0 = __this;
			}
			__this_00 = new CLMethodBinding<CustomLogicPhysicsBuiltin>((System_Func_T__object____object__o)__this);
			return __this_00;
		}
	}

	[Token(Token = "0x170009C5")]
	public override string ClassName
	{
		[Token(Token = "0x6003612")]
		[Address(RVA = "0x59F4060", Offset = "0x59F3060", VA = "0x59F4060", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsBuiltin.c (CustomLogic.CustomLogicPhysicsBuiltin$$get_ClassName): clean
			return "Physics";
		}
	}

	[Token(Token = "0x170009C6")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6003613")]
		[Address(RVA = "0x59F4090", Offset = "0x59F3090", VA = "0x59F4090", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsBuiltin.c (CustomLogic.CustomLogicPhysicsBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x170009C7")]
	public override bool IsStatic
	{
		[Token(Token = "0x6003614")]
		[Address(RVA = "0x59F40A0", Offset = "0x59F30A0", VA = "0x59F40A0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsBuiltin.c (CustomLogic.CustomLogicPhysicsBuiltin$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x170009C8")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6003615")]
		[Address(RVA = "0x59F40B0", Offset = "0x59F30B0", VA = "0x59F40B0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsBuiltin.c (CustomLogic.CustomLogicPhysicsBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6003605")]
	[Address(RVA = "0x59F1180", Offset = "0x59F0180", VA = "0x59F1180")]
	public CustomLogicPhysicsBuiltin()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsBuiltin.c (CustomLogic.CustomLogicPhysicsBuiltin$$.ctor): clean
		uint uVar1;

		if (Il2CppMethodInitialized_07546ebe == false) {
			Il2CppMethodInitialized_07546ebe = true;
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

	[Token(Token = "0x6003606")]
	[Address(RVA = "0x59F11F0", Offset = "0x59F01F0", VA = "0x59F11F0")]
	public static int GetPhysicsLayerMask(CustomLogicListBuiltin layers)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsBuiltin.c (CustomLogic.CustomLogicPhysicsBuiltin$$GetPhysicsLayerMask): 7 lines keep C-only constructs
		List<@object> source;
		object @object;
		LayerMask UVar1;
		int iVar2;
		ulong in_RAX;
		CustomLogic_CustomLogicPhysicsBuiltin___c_StaticFields pCVar3;
		Func<@object, int> __this;
		System_Collections_Generic_IEnumerable_TResult__o source_00;
		Int32[] layers_00;
		uint uStack_24;

		uStack_24 = (undefined4)((ulong)in_RAX >> 0x20);
		if (layers == null) {
			throw new NullReferenceException();
		}
		source = layers.List;
		if ((typeof(CustomLogicPhysicsBuiltin.c)._2).cctor_finished_or_no_cctor == 0) {
			pCVar3 = typeof(CustomLogicPhysicsBuiltin.c).static_fields;
			__this = pCVar3.__9__1_0;
		}
		else {
			pCVar3 = typeof(CustomLogicPhysicsBuiltin.c).static_fields;
			__this = pCVar3.__9__1_0;
		}
		if (__this == null) {
			if (((typeof(CustomLogicPhysicsBuiltin.c))._2).cctor_finished_or_no_cctor == 0) {
				pCVar3 = typeof(CustomLogicPhysicsBuiltin.c).static_fields;
			}
			@object = (object)pCVar3.__9;
			__this = new Func<@object, int>(@object, (intptr_t)MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_c_GetPhysicsLayerMask_b__1_0);
			pCVar3 = typeof(CustomLogicPhysicsBuiltin.c).static_fields;
			pCVar3.__9__1_0 = __this;
		}
		source_00 = Enumerable.Select<@object, int>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__TResult__o)__this);
		layers_00 = Enumerable.ToArray<int>((System_Collections_Generic_IEnumerable_TSource__o)source_00);
		UVar1 = PhysicsLayer.GetMask(layers_00);
		_local_28 = CONCAT44(uStack_24, UVar1.m_Mask);
		return iVar2;
	}

	[Token(Token = "0x6003607")]
	[Address(RVA = "0x59F1370", Offset = "0x59F0370", VA = "0x59F1370")]
	public static CustomLogicLineCastHitResultBuiltin LineCast(CustomLogicVector3Builtin start, CustomLogicVector3Builtin end, string collideWith)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsBuiltin.c (CustomLogic.CustomLogicPhysicsBuiltin$$LineCast): 27 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		byte bVar3;
		bool bVar4;
		int iVar5;
		Collider pUVar6;
		BuiltinClassInstance pCVar7;
		CustomLogicLineCastHitResultBuiltin __this;
		CustomLogicVector3Builtin pCVar8;
		Object[] parameters;
		object pIVar9;
		CustomLogicColliderBuiltin __this_00;
		BuiltinClassInstance pCVar10;
		float fVar11;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		Vector3 UVar12;
		Vector3 value;
		Vector3 value_00;
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
	label_05af170f: ;
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
				__this = new CustomLogicLineCastHitResultBuiltin();
				bVar3 = (typeof(CustomLogicCharacterBuiltin)._2).typeHierarchyDepth;
				pCVar10 = null;
				if ((bVar3 <= (pCVar7.klass._2).typeHierarchyDepth) &&(pCVar10 = null,(pCVar7.klass._2).typeHierarchy[(ulong)bVar3 - 1] ==typeof(CustomLogicCharacterBuiltin))) {
					pCVar10 = pCVar7;
				}
				if (__this != null) {
					bVar4 = false;
					__this.IsCharacter = pCVar10 != null;
					bVar3 = (typeof(CustomLogicMapObjectBuiltin)._2).typeHierarchyDepth;
					if (bVar3 <= (pCVar7.klass._2).typeHierarchyDepth) {
						bVar4 = (pCVar7.klass._2).typeHierarchy[(ulong)bVar3 - 1] ==typeof(CustomLogicMapObjectBuiltin);
					}
					__this._IsMapObject_k__BackingField = bVar4;
					UVar12 = local_68.point;
					value.z = UVar12.z;
					local_78._8_4_ = extraout_XMM0_Dc;
					local_78._0_8_ = UVar12._0_8_;
					local_78._12_4_ = extraout_XMM0_Dd;
					value.x = (float)local_78._0_4_;
					value.y = (float)local_78._4_4_;
					pCVar8 = new CustomLogicVector3Builtin(value);
					__this._Point_k__BackingField = pCVar8;
					UVar12 = local_68.normal;
					value_00.z = UVar12.z;
					local_78._8_4_ = extraout_XMM0_Dc_00;
					local_78._0_8_ = UVar12._0_8_;
					local_78._12_4_ = extraout_XMM0_Dd_00;
					value_00.x = (float)local_78._0_4_;
					value_00.y = (float)local_78._4_4_;
					pCVar8 = new CustomLogicVector3Builtin(value_00);
					__this._Normal_k__BackingField = pCVar8;
					fVar11 = local_68.distance;
					__this._Distance_k__BackingField = fVar11;
					__this._Collider_k__BackingField = pCVar7;
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
						__this_00 = new CustomLogicColliderBuiltin(parameters);
						__this._ColliderInfo_k__BackingField = __this_00;
						return __this;
					}
				}
				goto label_05af170f;
			}
		}
		return null;
	}

	[Token(Token = "0x6003608")]
	[Address(RVA = "0x59F1730", Offset = "0x59F0730", VA = "0x59F1730")]
	public static CustomLogicLineCastHitResultBuiltin LineCastWithMask(CustomLogicVector3Builtin start, CustomLogicVector3Builtin end, int mask)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsBuiltin.c (CustomLogic.CustomLogicPhysicsBuiltin$$LineCastWithMask): 11 lines keep C-only constructs
		ulong uVar1;
		byte bVar2;
		Vector3 start_00;
		bool bVar3;
		Collider pUVar4;
		BuiltinClassInstance pCVar5;
		CustomLogicLineCastHitResultBuiltin __this;
		CustomLogicVector3Builtin pCVar6;
		Object[] parameters;
		object pIVar7;
		CustomLogicColliderBuiltin __this_00;
		bool bVar8;
		float fVar9;
		Vector3 UVar10;
		RaycastHit UStack_68;
		ulong uStack_38;

		UStack_68.m_UV.x = 0.0;
		UStack_68.m_UV.y = 0.0;
		UStack_68.m_Collider.m_Data = (EntityId)0x0;
		UStack_68.m_Normal.y = 0.0;
		UStack_68.m_Normal.z = 0.0;
		UStack_68.m_FaceID = 0;
		UStack_68.m_Distance = 0.0;
		UStack_68.m_Point.x = 0.0;
		UStack_68.m_Point.y = 0.0;
		UStack_68.m_Point.z = 0.0;
		UStack_68.m_Normal.x = 0.0;
		if ((start == null) ||(end == null)) {
	label_05af1a3a: ;
			throw new NullReferenceException();
		}
		start_00 = start.Value;
		uVar1._0_4_ = end.Value.x;
		uVar1._4_4_ = end.Value.y;
		fVar9 = end.Value.z;
		if ((typeof(Physics)._2).cctor_finished_or_no_cctor == 0) {
			uStack_38 = uVar1;
			uVar1._0_4_ = (undefined4)uStack_38;
			uVar1._4_4_ = uStack_38._4_4_;
		}
		UVar10.y = (float)uVar1._4_4_;
		UVar10.x = (float)(undefined4)uVar1;
		UVar10.z = fVar9;
		bVar3 = Physics.Linecast((Vector3)start_00, UVar10, ref UStack_68, mask);
		if (bVar3) {
			pUVar4 = UStack_68.collider;
			pCVar5 = CustomLogicCollisionHandler.GetBuiltin(pUVar4);
			if (pCVar5 != null) {
				__this = new CustomLogicLineCastHitResultBuiltin();
				if (__this != null) {
					bVar2 = (typeof(CustomLogicCharacterBuiltin)._2).typeHierarchyDepth;
					if ((pCVar5.klass._2).typeHierarchyDepth < bVar2) {
						bVar3 = false;
					}
					else {
						bVar3 = (pCVar5.klass._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(CustomLogicCharacterBuiltin);
					}
					bVar8 = false;
					__this.IsCharacter = bVar3;
					bVar2 = (typeof(CustomLogicMapObjectBuiltin)._2).typeHierarchyDepth;
					if (bVar2 <= (pCVar5.klass._2).typeHierarchyDepth) {
						bVar8 = (pCVar5.klass._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(CustomLogicMapObjectBuiltin);
					}
					__this._IsMapObject_k__BackingField = bVar8;
					UVar10 = UStack_68.point;
					pCVar6 = new CustomLogicVector3Builtin(UVar10);
					__this._Point_k__BackingField = pCVar6;
					UVar10 = UStack_68.normal;
					pCVar6 = new CustomLogicVector3Builtin(UVar10);
					__this._Normal_k__BackingField = pCVar6;
					fVar9 = UStack_68.distance;
					__this._Distance_k__BackingField = fVar9;
					parameters = (Object[])new object[1];
					pUVar4 = UStack_68.collider;
					if (parameters != null) {
						if ((pUVar4 != null) &&(pIVar7 = il2cpp_vm_Object_IsInst((object)pUVar4, (((parameters.obj).klass)._1).element_class), pIVar7 == null)) {
							pIVar7 = new ArrayTypeMismatchException();
							throw pIVar7;
						}
						if ((int)parameters.Length == 0) {
							throw new IndexOutOfRangeException();
						}
						parameters[0] = (object)pUVar4;
						__this_00 = new CustomLogicColliderBuiltin(parameters);
						__this._Collider_k__BackingField = (BuiltinClassInstance)__this_00;
						return __this;
					}
				}
				goto label_05af1a3a;
			}
		}
		return null;
	}

	[Token(Token = "0x6003609")]
	[Address(RVA = "0x59F1A60", Offset = "0x59F0A60", VA = "0x59F1A60")]
	public static CustomLogicListBuiltin LineCastAll(CustomLogicVector3Builtin start, CustomLogicVector3Builtin end, string collideWith)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsBuiltin.c (CustomLogic.CustomLogicPhysicsBuiltin$$LineCastAll): 37 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		byte bVar6;
		uint uVar7;
		Vector2 UVar8;
		uint uVar9;
		uint uVar10;
		uint uVar11;
		uint uVar12;
		byte[] auVar13 = new byte[16];
		int iVar15;
		UnityEngine_Vector3_StaticFields pUVar16;
		RaycastHit[] pUVar17;
		CustomLogicListBuiltin __this;
		ulong uVar18;
		Collider pUVar19;
		BuiltinClassInstance pCVar20;
		CustomLogicLineCastHitResultBuiltin __this_00;
		CustomLogicVector3Builtin pCVar21;
		Object[] pSVar22;
		object pIVar23;
		CustomLogicColliderBuiltin __this_01;
		int iVar24;
		ulong uVar25;
		RaycastHit pUVar26;
		BuiltinClassInstance pCVar27;
		float fVar28;
		uint uVar29;
		uint extraout_XMM0_Db;
		byte[] auVar30 = new byte[16];
		float fVar31;
		float fVar32;
		Vector3 UVar33;
		Vector3 value;
		Vector3 value_00;
		Vector3 direction;
		LayerMask[] aUStack_b0 = new LayerMask[2];
		float fStack_a8;
		float fStack_a4;
		float fStack_a0;
		float fStack_9c;
		ulong uStack_90;
		RaycastHit[] pUStack_88;
		byte[] auStack_80 = new byte[12];
		float fStack_74;
		ulong uStack_70;
		RaycastHit UStack_68;

		aUStack_b0[0].m_Mask = (LayerMask)0;
		UStack_68.m_UV.x = 0.0;
		UStack_68.m_UV.y = 0.0;
		UStack_68.m_Collider.m_Data = (EntityId)0;
		UStack_68.m_Normal.y = 0.0;
		UStack_68.m_Normal.z = 0.0;
		UStack_68.m_FaceID = 0;
		UStack_68.m_Distance = 0.0;
		UStack_68.m_Point.x = 0.0;
		UStack_68.m_Point.y = 0.0;
		UStack_68.m_Point.z = 0.0;
		UStack_68.m_Normal.x = 0.0;
		if ((start == null) ||(end == null)) goto label_05af21b5;
		unique0x0000d400 = *(List<object>*)&start.Value;
		uStack_70._0_4_ = 0.0;
		uStack_70._4_4_ = 0.0;
		uStack_90 = CONCAT44(uStack_90._4_4_, start.Value.z);
		uVar2 = end.Value.x;
		uVar4 = end.Value.y;
		fStack_a0 = 0.0;
		fStack_9c = 0.0;
		fVar31 = end.Value.z;
		fStack_a8 = (float)uVar2;
		fStack_a4 = (float)uVar4;
		iVar15 = MapLoader.GetColliderLayer(collideWith);
		if (Il2CppMethodInitialized_0753e72d == false) {
			Il2CppMethodInitialized_0753e72d = true;
			auStack_80._0_4_ = 0.0;
			auStack_80._4_4_ = 0.0;
		}
		else {
			auStack_80._0_4_ = 0.0;
			auStack_80._4_4_ = 0.0;
		}
		auStack_80._0_4_ = 0.0;
		auStack_80._4_4_ = 0.0;
		if (Il2CppMethodInitialized_0753e729 == false) {
			auStack_80._0_4_ = 0.0;
			auStack_80._4_4_ = 0.0;
			Il2CppMethodInitialized_0753e729 = true;
		}
		fStack_a8 = fStack_a8 - (float)auStack_80._8_4_;
		fStack_a4 = fStack_a4 - fStack_74;
		fStack_a0 = fStack_a0 - (float)uStack_70;
		fStack_9c = fStack_9c - uStack_70._4_4_;
		fVar31 = fVar31 - (float)uStack_90;
		fVar32 = fVar31 * fVar31 + fStack_a4 * fStack_a4 + fStack_a8 * fStack_a8;
		if (fVar32 < 0.0) {
			fVar28 = sqrtf(fVar32);
			uVar29 = extraout_XMM0_Db;
			if (fVar28 <= 1e-05) goto label_05af1c31;
	label_05af1c6c: ;
			fVar31 = fVar31 / fVar28;
			auVar13._4_4_ = fStack_a4;
			auVar13._0_4_ = fStack_a8;
			auVar13._8_4_ = fStack_a0;
			auVar13._12_4_ = fStack_9c;
			auVar30._4_4_ = fVar28;
			auVar30._0_4_ = fVar28;
			auVar30._8_4_ = uVar29;
			auVar30._12_4_ = uVar29;
			auVar30 = divps(auVar13, auVar30);
			auStack_80._0_4_ = auVar30._0_4_;
			auStack_80._4_4_ = auVar30._4_4_;
			pUVar16 = (UnityEngine_Vector3_StaticFields)auStack_80;
		}
		else {
			uVar29 = 0;
			fVar28 = SQRT(fVar32);
			if (1e-05 < fVar28) goto label_05af1c6c;
	label_05af1c31: ;
			pUVar16 = typeof(Vector3).static_fields;
			fVar31 = (pUVar16.zeroVector).z;
		}
		uVar3 = (pUVar16.zeroVector).x;
		uVar5 = (pUVar16.zeroVector).y;
		fStack_a0 = 0.0;
		fStack_9c = 0.0;
		fStack_a8 = (float)uVar3;
		fStack_a4 = (float)uVar5;
		if (Il2CppMethodInitialized_0753e729 == false) {
			Il2CppMethodInitialized_0753e729 = true;
			if ((typeof(Math)._2).cctor_finished_or_no_cctor != 0) goto label_05af1cae;
	label_05af1d3d: ;
			if (0.0 <= fVar32) goto label_05af1cba;
	label_05af1d54: ;
			fVar32 = sqrtf(fVar32);
		}
		else {
			if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) goto label_05af1d3d;
	label_05af1cae: ;
			if (fVar32 < 0.0) goto label_05af1d54;
	label_05af1cba: ;
			fVar32 = SQRT(fVar32);
		}
		aUStack_b0[0] = PhysicsLayer.CopyMask(iVar15);
		iVar15 = aUStack_b0.value;
		direction.y = fStack_a4;
		direction.x = fStack_a8;
		UVar33.z = (float)uStack_90;
		UVar33._0_8_ = stack0xffffffffffffff88;
		direction.z = fVar31;
		pUVar17 = Physics.RaycastAll(UVar33, direction, fVar32, iVar15);
		__this = new CustomLogicListBuiltin();
		if (pUVar17 != null) {
			iVar24 = (int)pUVar17.Length;
			uVar18 = pUVar17.Length & 0xffffffff;
			if (__this == null) {
				if (0 < iVar24) {
					pUVar26 = pUVar17.m_Items;
					uVar25 = 0;
					do {
						if (uVar18 <= uVar25) goto label_05af21ba;
						UStack_68.m_Point.x = pUVar26.m_Point.x;
						UStack_68.m_Point.y = pUVar26.m_Point.y;
						UStack_68._8_8_ = *(ulong)&pUVar26.m_Point.z;
						UStack_68.m_Normal.y = pUVar26.m_Normal.y;
						UStack_68.m_Normal.z = pUVar26.m_Normal.z;
						uVar11 = pUVar26.m_FaceID;
						uVar12 = pUVar26.m_Distance;
						UVar8 = pUVar26.m_UV;
						UStack_68.m_Collider.m_Data =(EntityId)pUVar26.m_Collider.m_Data;
						UStack_68.m_UV.x = UVar8.x;
						UStack_68.m_UV.y = UVar8.y;
						UStack_68.m_FaceID = uVar11;
						UStack_68.m_Distance = (float)uVar12;
						pUVar19 = UStack_68.collider;
						pCVar20 = CustomLogicCollisionHandler.GetBuiltin(pUVar19);
						if (pCVar20 != null) goto label_05af21b5;
						uVar25 = uVar25 + 1;
						uVar7 = (uint)pUVar17.Length;
						uVar18 = (ulong)uVar7;
						pUVar26 = pUVar26 + 1;
					} while ((long)uVar25 < (long)(int)uVar7);
				}
			}
			else if (0 < iVar24) {
				pUVar26 = pUVar17.m_Items;
				uVar25 = 0;
				pUStack_88 = pUVar17;
				do {
					if (uVar18 <= uVar25) {
	label_05af21ba: ;
						throw new IndexOutOfRangeException();
					}
					UStack_68.m_Point.x = pUVar26.m_Point.x;
					UStack_68.m_Point.y = pUVar26.m_Point.y;
					UStack_68._8_8_ = *(ulong)&pUVar26.m_Point.z;
					UStack_68.m_Normal.y = pUVar26.m_Normal.y;
					UStack_68.m_Normal.z = pUVar26.m_Normal.z;
					uVar9 = pUVar26.m_FaceID;
					uVar10 = pUVar26.m_Distance;
					UVar8 = pUVar26.m_UV;
					UStack_68.m_Collider.m_Data =(EntityId)pUVar26.m_Collider.m_Data;
					UStack_68.m_UV.x = UVar8.x;
					UStack_68.m_UV.y = UVar8.y;
					UStack_68.m_FaceID = uVar9;
					UStack_68.m_Distance = (float)uVar10;
					pUVar19 = UStack_68.collider;
					pCVar20 = CustomLogicCollisionHandler.GetBuiltin(pUVar19);
					if (pCVar20 != null) {
						__this_00 = new CustomLogicLineCastHitResultBuiltin();
						bVar6 = (typeof(CustomLogicCharacterBuiltin)._2).typeHierarchyDepth;
						pCVar27 = null;
						if ((bVar6 <= (pCVar20.klass._2).typeHierarchyDepth) &&(pCVar27 = null,(pCVar20.klass._2).typeHierarchy[(ulong)bVar6 - 1] ==typeof(CustomLogicCharacterBuiltin))) {
							pCVar27 = pCVar20;
						}
						if (__this_00 == null) goto label_05af21b5;
						uStack_90 = uVar25;
						__this_00.IsCharacter = pCVar27 != null;
						bVar6 = (typeof(CustomLogicMapObjectBuiltin)._2).typeHierarchyDepth;
						pCVar27 = null;
						if ((bVar6 <= (pCVar20.klass._2).typeHierarchyDepth) &&(pCVar27 = pCVar20,(pCVar20.klass._2).typeHierarchy[(ulong)bVar6 - 1] !=typeof(CustomLogicMapObjectBuiltin))) {
							pCVar27 = null;
						}
						__this_00._IsMapObject_k__BackingField = pCVar27 != null;
						UVar33 = UStack_68.point;
						fStack_a8 = UVar33.z;
						value.z = fStack_a8;
						value.x = UVar33.x;
						value.y = UVar33.y;
						pCVar21 = new CustomLogicVector3Builtin(value);
						__this_00._Point_k__BackingField = pCVar21;
						UVar33 = UStack_68.normal;
						fStack_a8 = UVar33.z;
						value_00.z = fStack_a8;
						value_00.x = UVar33.x;
						value_00.y = UVar33.y;
						pCVar21 = new CustomLogicVector3Builtin(value_00);
						__this_00._Normal_k__BackingField = pCVar21;
						fVar31 = UStack_68.distance;
						__this_00._Distance_k__BackingField = fVar31;
						__this_00._Collider_k__BackingField = pCVar20;
						pSVar22 = (Object[])new object[1];
						pUVar19 = UStack_68.collider;
						if (pSVar22 == null) goto label_05af21b5;
						if ((pUVar19 != null) &&(pIVar23 = il2cpp_vm_Object_IsInst((object)pUVar19, (((pSVar22.obj).klass)._1).element_class), pIVar23 == null)) {
							pIVar23 = new ArrayTypeMismatchException();
							throw pIVar23;
						}
						if ((int)pSVar22.Length == 0) goto label_05af21ba;
						pSVar22[0] = (object)pUVar19;
						__this_01 = new CustomLogicColliderBuiltin(pSVar22);
						__this_00._ColliderInfo_k__BackingField = __this_01;
						uVar25 = uStack_90;
						if (stack0xffffffffffffff88 == null) goto label_05af21b5;
						piVar1 = &stack0xffffffffffffff88._version;
						*piVar1 = *piVar1 + 1;
						pSVar22 = stack0xffffffffffffff88._items;
						if (pSVar22 == null) goto label_05af21b5;
						uVar7 = stack0xffffffffffffff88._size;
						if (uVar7 < (uint)pSVar22.Length) {
							stack0xffffffffffffff88._size = uVar7 + 1;
							pSVar22[(int)uVar7] = (object)__this_00;
						}
						else {
							stack0xffffffffffffff88.AddWithResize((object)__this_00);
						}
						pUVar17 = pUStack_88;
					}
					uVar25 = uVar25 + 1;
					uVar7 = (uint)pUVar17.Length;
					uVar18 = (ulong)uVar7;
					pUVar26 = pUVar26 + 1;
				} while ((long)uVar25 < (long)(int)uVar7);
			}
			return __this;
		}
	label_05af21b5: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600360A")]
	[Address(RVA = "0x59F21D0", Offset = "0x59F11D0", VA = "0x59F21D0")]
	public static object SphereCast(CustomLogicVector3Builtin start, CustomLogicVector3Builtin end, float radius, string collideWith)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsBuiltin.c (CustomLogic.CustomLogicPhysicsBuiltin$$SphereCast): 30 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		byte[] auVar6 = new byte[16];
		bool bVar7;
		int iVar8;
		UnityEngine_Vector3_StaticFields pUVar9;
		Collider other;
		BuiltinClassInstance pCVar10;
		float fVar11;
		uint uVar12;
		uint extraout_XMM0_Db;
		byte[] auVar13 = new byte[16];
		float fVar14;
		float fVar15;
		Vector3 origin;
		Vector3 direction;
		LayerMask[] aUStack_98 = new LayerMask[2];
		float fStack_90;
		float fStack_8c;
		float fStack_88;
		float fStack_84;
		float fStack_80;
		float fStack_7c;
		Vector3 UStack_70;
		float fStack_64;
		ulong uStack_60;
		byte[] auStack_58 = new byte[56];

		fStack_8c = radius;
		auStack_58._32_4_ = 0.0;
		auStack_58._36_4_ = 0.0;
		auStack_58._40_4_ = 0.0;
		auStack_58._16_4_ = 0.0;
		auStack_58._20_4_ = 0.0;
		auStack_58._24_4_ = 0.0;
		auStack_58._28_4_ = 0.0;
		auStack_58._0_4_ = 0.0;
		auStack_58._4_4_ = 0.0;
		auStack_58._8_4_ = 0.0;
		auStack_58._12_4_ = 0.0;
		aUStack_98[0].m_Mask = (LayerMask)0;
		if ((start == null) ||(end == null)) {
			throw new NullReferenceException();
		}
		UStack_70.z = start.Value.x;
		fStack_64 = start.Value.y;
		uStack_60._0_4_ = 0.0;
		uStack_60._4_4_ = 0.0;
		fStack_90 = start.Value.z;
		uVar1 = end.Value.x;
		uVar3 = end.Value.y;
		fStack_80 = 0.0;
		fStack_7c = 0.0;
		fVar14 = end.Value.z;
		fStack_88 = (float)uVar1;
		fStack_84 = (float)uVar3;
		iVar8 = MapLoader.GetColliderLayer(collideWith);
		if (Il2CppMethodInitialized_0753e72d == false) {
			Il2CppMethodInitialized_0753e72d = true;
			UStack_70.x = 0.0;
			UStack_70.y = 0.0;
		}
		else {
			UStack_70.x = 0.0;
			UStack_70.y = 0.0;
		}
		UStack_70.x = 0.0;
		UStack_70.y = 0.0;
		if (Il2CppMethodInitialized_0753e729 == false) {
			UStack_70.x = 0.0;
			UStack_70.y = 0.0;
			Il2CppMethodInitialized_0753e729 = true;
		}
		fStack_88 = fStack_88 - UStack_70.z;
		fStack_84 = fStack_84 - fStack_64;
		fStack_80 = fStack_80 - (float)uStack_60;
		fStack_7c = fStack_7c - uStack_60._4_4_;
		fVar14 = fVar14 - fStack_90;
		fVar15 = fVar14 * fVar14 + fStack_84 * fStack_84 + fStack_88 * fStack_88;
		if (fVar15 < 0.0) {
			fVar11 = sqrtf(fVar15);
			uVar12 = extraout_XMM0_Db;
		}
		else {
			uVar12 = 0;
			fVar11 = SQRT(fVar15);
		}
		if (1e-05 < fVar11) {
			fVar14 = fVar14 / fVar11;
			auVar6._4_4_ = fStack_84;
			auVar6._0_4_ = fStack_88;
			auVar6._8_4_ = fStack_80;
			auVar6._12_4_ = fStack_7c;
			auVar13._4_4_ = fVar11;
			auVar13._0_4_ = fVar11;
			auVar13._8_4_ = uVar12;
			auVar13._12_4_ = uVar12;
			auVar13 = divps(auVar6, auVar13);
			UStack_70.x = auVar13._0_4_;
			UStack_70.y = auVar13._4_4_;
			pUVar9 = (UnityEngine_Vector3_StaticFields)&UStack_70;
		}
		else {
			pUVar9 = typeof(Vector3).static_fields;
			fVar14 = (pUVar9.zeroVector).z;
		}
		uVar2 = (pUVar9.zeroVector).x;
		uVar4 = (pUVar9.zeroVector).y;
		fStack_80 = 0.0;
		fStack_7c = 0.0;
		fStack_88 = (float)uVar2;
		fStack_84 = (float)uVar4;
		if (Il2CppMethodInitialized_0753e729 == false) {
			Il2CppMethodInitialized_0753e729 = true;
			uVar5 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar5 = ((typeof(Math))._2).cctor_finished_or_no_cctor;
		}
		if (uVar5 == 0) {
		}
		if (fVar15 < 0.0) {
			fVar15 = sqrtf(fVar15);
		}
		else {
			fVar15 = SQRT(fVar15);
		}
		aUStack_98[0] = PhysicsLayer.CopyMask(iVar8);
		iVar8 = aUStack_98.value;
		pCVar10 = null;
		direction.y = fStack_84;
		direction.x = fStack_88;
		origin.z = fStack_90;
		origin.x = UStack_70.z;
		origin.y = fStack_64;
		direction.z = fVar14;
		bVar7 = Physics.SphereCast(origin, fStack_8c, direction, (RaycastHit)auStack_58, fVar15, iVar8);
		if (bVar7) {
			other = auStack_58.collider;
			pCVar10 = CustomLogicCollisionHandler.GetBuiltin(other);
		}
		return (object)pCVar10;
	}

	[Token(Token = "0x600360B")]
	[Address(RVA = "0x59F2520", Offset = "0x59F1520", VA = "0x59F2520")]
	public static object SphereCastWithMask(CustomLogicVector3Builtin start, CustomLogicVector3Builtin end, float radius, int mask)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsBuiltin.c (CustomLogic.CustomLogicPhysicsBuiltin$$SphereCastWithMask): 31 lines keep C-only constructs
		Vector3 pUVar1;
		float fVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		byte[] auVar6 = new byte[16];
		uint uVar7;
		uint uVar8;
		bool bVar9;
		UnityEngine_Vector3_StaticFields pUVar10;
		Collider other;
		BuiltinClassInstance pCVar11;
		float fVar12;
		uint uVar13;
		uint extraout_XMM0_Db;
		byte[] auVar14 = new byte[16];
		float fVar15;
		float fVar16;
		Vector3 origin;
		Vector3 direction;
		Vector3 UStack_60;
		float fStack_54;
		ulong uStack_50;
		byte[] auStack_48 = new byte[48];

		auStack_48._32_4_ = 0.0;
		auStack_48._36_4_ = 0.0;
		auStack_48._40_4_ = 0.0;
		auStack_48._16_4_ = 0.0;
		auStack_48._20_4_ = 0.0;
		auStack_48._24_4_ = 0.0;
		auStack_48._28_4_ = 0.0;
		auStack_48._0_4_ = 0.0;
		auStack_48._4_4_ = 0.0;
		auStack_48._8_4_ = 0.0;
		auStack_48._12_4_ = 0.0;
		if ((start == null) ||(end == null)) {
			throw new NullReferenceException();
		}
		UStack_60.z = start.Value.x;
		fStack_54 = start.Value.y;
		uStack_50._0_4_ = 0.0;
		uStack_50._4_4_ = 0.0;
		fVar2 = start.Value.z;
		pUVar1 = &end.Value;
		fVar15 = pUVar1.x;
		fVar12 = end.Value.y;
		uVar7 = pUVar1.x;
		uVar8 = pUVar1.y;
		fVar16 = end.Value.z;
		if (Il2CppMethodInitialized_0753e72d == false) {
			Il2CppMethodInitialized_0753e72d = true;
			UStack_60.x = 0.0;
			UStack_60.y = 0.0;
			fVar15 = (float)uVar7;
			fVar12 = (float)uVar8;
		}
		else {
			UStack_60.x = 0.0;
			UStack_60.y = 0.0;
		}
		UStack_60.x = 0.0;
		UStack_60.y = 0.0;
		if (Il2CppMethodInitialized_0753e729 == false) {
			UStack_60.x = 0.0;
			UStack_60.y = 0.0;
			Il2CppMethodInitialized_0753e729 = true;
		}
		auVar14._0_4_ = fVar15 - UStack_60.z;
		auVar14._4_4_ = fVar12 - fStack_54;
		auVar14._8_4_ = 0.0 - (float)uStack_50;
		auVar14._12_4_ = 0.0 - uStack_50._4_4_;
		fVar16 = fVar16 - fVar2;
		fVar15 = fVar16 * fVar16 + auVar14._4_4_ * auVar14._4_4_ + auVar14._0_4_ * auVar14._0_4_;
		if (fVar15 < 0.0) {
			fVar12 = sqrtf(fVar15);
			uVar13 = extraout_XMM0_Db;
		}
		else {
			uVar13 = 0;
			fVar12 = SQRT(fVar15);
		}
		if (fVar12 <= 1e-05) {
			pUVar10 = *(UnityEngine_Vector3_StaticFields*)((long)typeof(Vector3) + 0xb8);
			fVar16 = (pUVar10.zeroVector).z;
		}
		else {
			fVar16 = fVar16 / fVar12;
			auVar6._4_4_ = fVar12;
			auVar6._0_4_ = fVar12;
			auVar6._8_4_ = uVar13;
			auVar6._12_4_ = uVar13;
			auVar14 = divps(auVar14, auVar6);
			UStack_60.x = auVar14._0_4_;
			UStack_60.y = auVar14._4_4_;
			pUVar10 = (UnityEngine_Vector3_StaticFields)&UStack_60;
		}
		uVar3 = (pUVar10.zeroVector).x;
		uVar4 = (pUVar10.zeroVector).y;
		direction.y = (float)uVar4;
		direction.x = (float)uVar3;
		if (Il2CppMethodInitialized_0753e729 == false) {
			Il2CppMethodInitialized_0753e729 = true;
			uVar5 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar5 = *(uint)((long)typeof(Math) + 0xe4);
		}
		if (uVar5 == 0) {
		}
		if (fVar15 < 0.0) {
			fVar15 = sqrtf(fVar15);
			uVar5 = (typeof(Physics)._2).cctor_finished_or_no_cctor;
		}
		else {
			fVar15 = SQRT(fVar15);
			uVar5 = ((typeof(Physics))._2).cctor_finished_or_no_cctor;
		}
		if (uVar5 == 0) {
		}
		pCVar11 = null;
		origin.z = fVar2;
		origin.x = UStack_60.z;
		origin.y = fStack_54;
		direction.z = fVar16;
		bVar9 = Physics.SphereCast(origin, radius, direction, (RaycastHit)auStack_48, fVar15, mask);
		if (bVar9) {
			other = auStack_48.collider;
			pCVar11 = CustomLogicCollisionHandler.GetBuiltin(other);
		}
		return (object)pCVar11;
	}

	[Token(Token = "0x600360C")]
	[Address(RVA = "0x59F2830", Offset = "0x59F1830", VA = "0x59F2830")]
	public static CustomLogicListBuiltin SphereCastAll(CustomLogicVector3Builtin start, CustomLogicVector3Builtin end, float radius, string collideWith)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsBuiltin.c (CustomLogic.CustomLogicPhysicsBuiltin$$SphereCastAll): 39 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		byte bVar6;
		uint uVar7;
		Vector2 UVar8;
		uint uVar9;
		uint uVar10;
		uint uVar11;
		uint uVar12;
		byte[] auVar13 = new byte[16];
		int iVar15;
		UnityEngine_Vector3_StaticFields pUVar16;
		RaycastHit[] pUVar17;
		CustomLogicListBuiltin __this;
		ulong uVar18;
		Collider pUVar19;
		BuiltinClassInstance pCVar20;
		CustomLogicLineCastHitResultBuiltin __this_00;
		CustomLogicVector3Builtin pCVar21;
		Object[] pSVar22;
		object pIVar23;
		CustomLogicColliderBuiltin __this_01;
		int iVar24;
		ulong uVar25;
		RaycastHit pUVar26;
		BuiltinClassInstance pCVar27;
		float fVar28;
		uint uVar29;
		uint extraout_XMM0_Db;
		byte[] auVar30 = new byte[16];
		float fVar31;
		float fVar32;
		Vector3 UVar33;
		Vector3 value;
		Vector3 value_00;
		Vector3 direction;
		LayerMask[] aUStack_b0 = new LayerMask[2];
		float fStack_a8;
		float fStack_a4;
		float fStack_a0;
		float fStack_9c;
		RaycastHit[] pUStack_90;
		ulong uStack_88;
		byte[] auStack_80 = new byte[12];
		float fStack_74;
		ulong uStack_70;
		RaycastHit UStack_68;

		pUStack_90 = (RaycastHit[])CONCAT44(pUStack_90._4_4_, radius);
		aUStack_b0[0].m_Mask = (LayerMask)0;
		UStack_68.m_UV.x = 0.0;
		UStack_68.m_UV.y = 0.0;
		UStack_68.m_Collider.m_Data = (EntityId)0;
		UStack_68.m_Normal.y = 0.0;
		UStack_68.m_Normal.z = 0.0;
		UStack_68.m_FaceID = 0;
		UStack_68.m_Distance = 0.0;
		UStack_68.m_Point.x = 0.0;
		UStack_68.m_Point.y = 0.0;
		UStack_68.m_Point.z = 0.0;
		UStack_68.m_Normal.x = 0.0;
		if ((start == null) ||(end == null)) goto label_05af2f95;
		unique0x0000d400 = *(List<object>*)&start.Value;
		uStack_70._0_4_ = 0.0;
		uStack_70._4_4_ = 0.0;
		uStack_88 = CONCAT44(uStack_88._4_4_, start.Value.z);
		uVar2 = end.Value.x;
		uVar4 = end.Value.y;
		fStack_a0 = 0.0;
		fStack_9c = 0.0;
		fVar31 = end.Value.z;
		fStack_a8 = (float)uVar2;
		fStack_a4 = (float)uVar4;
		iVar15 = MapLoader.GetColliderLayer(collideWith);
		if (Il2CppMethodInitialized_0753e72d == false) {
			Il2CppMethodInitialized_0753e72d = true;
			auStack_80._0_4_ = 0.0;
			auStack_80._4_4_ = 0.0;
		}
		else {
			auStack_80._0_4_ = 0.0;
			auStack_80._4_4_ = 0.0;
		}
		auStack_80._0_4_ = 0.0;
		auStack_80._4_4_ = 0.0;
		if (Il2CppMethodInitialized_0753e729 == false) {
			auStack_80._0_4_ = 0.0;
			auStack_80._4_4_ = 0.0;
			Il2CppMethodInitialized_0753e729 = true;
		}
		fStack_a8 = fStack_a8 - (float)auStack_80._8_4_;
		fStack_a4 = fStack_a4 - fStack_74;
		fStack_a0 = fStack_a0 - (float)uStack_70;
		fStack_9c = fStack_9c - uStack_70._4_4_;
		fVar31 = fVar31 - (float)uStack_88;
		fVar32 = fVar31 * fVar31 + fStack_a4 * fStack_a4 + fStack_a8 * fStack_a8;
		if (fVar32 < 0.0) {
			fVar28 = sqrtf(fVar32);
			uVar29 = extraout_XMM0_Db;
			if (fVar28 <= 1e-05) goto label_05af2a07;
	label_05af2a42: ;
			fVar31 = fVar31 / fVar28;
			auVar13._4_4_ = fStack_a4;
			auVar13._0_4_ = fStack_a8;
			auVar13._8_4_ = fStack_a0;
			auVar13._12_4_ = fStack_9c;
			auVar30._4_4_ = fVar28;
			auVar30._0_4_ = fVar28;
			auVar30._8_4_ = uVar29;
			auVar30._12_4_ = uVar29;
			auVar30 = divps(auVar13, auVar30);
			auStack_80._0_4_ = auVar30._0_4_;
			auStack_80._4_4_ = auVar30._4_4_;
			pUVar16 = (UnityEngine_Vector3_StaticFields)auStack_80;
		}
		else {
			uVar29 = 0;
			fVar28 = SQRT(fVar32);
			if (1e-05 < fVar28) goto label_05af2a42;
	label_05af2a07: ;
			pUVar16 = typeof(Vector3).static_fields;
			fVar31 = (pUVar16.zeroVector).z;
		}
		uVar3 = (pUVar16.zeroVector).x;
		uVar5 = (pUVar16.zeroVector).y;
		fStack_a0 = 0.0;
		fStack_9c = 0.0;
		fStack_a8 = (float)uVar3;
		fStack_a4 = (float)uVar5;
		if (Il2CppMethodInitialized_0753e729 == false) {
			Il2CppMethodInitialized_0753e729 = true;
			if ((typeof(Math)._2).cctor_finished_or_no_cctor != 0) goto label_05af2a84;
	label_05af2b13: ;
			if (0.0 <= fVar32) goto label_05af2a90;
	label_05af2b2a: ;
			fVar32 = sqrtf(fVar32);
		}
		else {
			if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) goto label_05af2b13;
	label_05af2a84: ;
			if (fVar32 < 0.0) goto label_05af2b2a;
	label_05af2a90: ;
			fVar32 = SQRT(fVar32);
		}
		aUStack_b0[0] = PhysicsLayer.CopyMask(iVar15);
		iVar15 = aUStack_b0.value;
		direction.y = fStack_a4;
		direction.x = fStack_a8;
		UVar33.z = (float)uStack_88;
		UVar33._0_8_ = stack0xffffffffffffff88;
		direction.z = fVar31;
		pUVar17 = Physics.SphereCastAll(UVar33, pUStack_90._0_4_, direction, fVar32, iVar15);
		__this = new CustomLogicListBuiltin();
		if (pUVar17 != null) {
			iVar24 = (int)pUVar17.Length;
			uVar18 = pUVar17.Length & 0xffffffff;
			if (__this == null) {
				if (0 < iVar24) {
					pUVar26 = pUVar17.m_Items;
					uVar25 = 0;
					do {
						if (uVar18 <= uVar25) goto label_05af2f9a;
						UStack_68.m_Point.x = pUVar26.m_Point.x;
						UStack_68.m_Point.y = pUVar26.m_Point.y;
						UStack_68._8_8_ = *(ulong)&pUVar26.m_Point.z;
						UStack_68.m_Normal.y = pUVar26.m_Normal.y;
						UStack_68.m_Normal.z = pUVar26.m_Normal.z;
						uVar11 = pUVar26.m_FaceID;
						uVar12 = pUVar26.m_Distance;
						UVar8 = pUVar26.m_UV;
						UStack_68.m_Collider.m_Data =(EntityId)pUVar26.m_Collider.m_Data;
						UStack_68.m_UV.x = UVar8.x;
						UStack_68.m_UV.y = UVar8.y;
						UStack_68.m_FaceID = uVar11;
						UStack_68.m_Distance = (float)uVar12;
						pUVar19 = UStack_68.collider;
						pCVar20 = CustomLogicCollisionHandler.GetBuiltin(pUVar19);
						if (pCVar20 != null) goto label_05af2f95;
						uVar25 = uVar25 + 1;
						uVar7 = (uint)pUVar17.Length;
						uVar18 = (ulong)uVar7;
						pUVar26 = pUVar26 + 1;
					} while ((long)uVar25 < (long)(int)uVar7);
				}
			}
			else if (0 < iVar24) {
				pUVar26 = pUVar17.m_Items;
				uVar25 = 0;
				pUStack_90 = pUVar17;
				do {
					if (uVar18 <= uVar25) {
	label_05af2f9a: ;
						throw new IndexOutOfRangeException();
					}
					UStack_68.m_Point.x = pUVar26.m_Point.x;
					UStack_68.m_Point.y = pUVar26.m_Point.y;
					UStack_68._8_8_ = *(ulong)&pUVar26.m_Point.z;
					UStack_68.m_Normal.y = pUVar26.m_Normal.y;
					UStack_68.m_Normal.z = pUVar26.m_Normal.z;
					uVar9 = pUVar26.m_FaceID;
					uVar10 = pUVar26.m_Distance;
					UVar8 = pUVar26.m_UV;
					UStack_68.m_Collider.m_Data =(EntityId)pUVar26.m_Collider.m_Data;
					UStack_68.m_UV.x = UVar8.x;
					UStack_68.m_UV.y = UVar8.y;
					UStack_68.m_FaceID = uVar9;
					UStack_68.m_Distance = (float)uVar10;
					pUVar19 = UStack_68.collider;
					pCVar20 = CustomLogicCollisionHandler.GetBuiltin(pUVar19);
					if (pCVar20 != null) {
						__this_00 = new CustomLogicLineCastHitResultBuiltin();
						bVar6 = (typeof(CustomLogicCharacterBuiltin)._2).typeHierarchyDepth;
						pCVar27 = null;
						if ((bVar6 <= (pCVar20.klass._2).typeHierarchyDepth) &&(pCVar27 = null,(pCVar20.klass._2).typeHierarchy[(ulong)bVar6 - 1] ==typeof(CustomLogicCharacterBuiltin))) {
							pCVar27 = pCVar20;
						}
						if (__this_00 == null) goto label_05af2f95;
						uStack_88 = uVar25;
						__this_00.IsCharacter = pCVar27 != null;
						bVar6 = (typeof(CustomLogicMapObjectBuiltin)._2).typeHierarchyDepth;
						pCVar27 = null;
						if ((bVar6 <= (pCVar20.klass._2).typeHierarchyDepth) &&(pCVar27 = pCVar20,(pCVar20.klass._2).typeHierarchy[(ulong)bVar6 - 1] !=typeof(CustomLogicMapObjectBuiltin))) {
							pCVar27 = null;
						}
						__this_00._IsMapObject_k__BackingField = pCVar27 != null;
						UVar33 = UStack_68.point;
						fStack_a8 = UVar33.z;
						value.z = fStack_a8;
						value.x = UVar33.x;
						value.y = UVar33.y;
						pCVar21 = new CustomLogicVector3Builtin(value);
						__this_00._Point_k__BackingField = pCVar21;
						UVar33 = UStack_68.normal;
						fStack_a8 = UVar33.z;
						value_00.z = fStack_a8;
						value_00.x = UVar33.x;
						value_00.y = UVar33.y;
						pCVar21 = new CustomLogicVector3Builtin(value_00);
						__this_00._Normal_k__BackingField = pCVar21;
						fVar31 = UStack_68.distance;
						__this_00._Distance_k__BackingField = fVar31;
						__this_00._Collider_k__BackingField = pCVar20;
						pSVar22 = (Object[])new object[1];
						pUVar19 = UStack_68.collider;
						if (pSVar22 == null) goto label_05af2f95;
						if ((pUVar19 != null) &&(pIVar23 = il2cpp_vm_Object_IsInst((object)pUVar19, (((pSVar22.obj).klass)._1).element_class), pIVar23 == null)) {
							pIVar23 = new ArrayTypeMismatchException();
							throw pIVar23;
						}
						if ((int)pSVar22.Length == 0) goto label_05af2f9a;
						pSVar22[0] = (object)pUVar19;
						__this_01 = new CustomLogicColliderBuiltin(pSVar22);
						__this_00._ColliderInfo_k__BackingField = __this_01;
						uVar25 = uStack_88;
						if (stack0xffffffffffffff88 == null) goto label_05af2f95;
						piVar1 = &stack0xffffffffffffff88._version;
						*piVar1 = *piVar1 + 1;
						pSVar22 = stack0xffffffffffffff88._items;
						if (pSVar22 == null) goto label_05af2f95;
						uVar7 = stack0xffffffffffffff88._size;
						if (uVar7 < (uint)pSVar22.Length) {
							stack0xffffffffffffff88._size = uVar7 + 1;
							pSVar22[(int)uVar7] = (object)__this_00;
						}
						else {
							stack0xffffffffffffff88.AddWithResize((object)__this_00);
						}
						pUVar17 = pUStack_90;
					}
					uVar25 = uVar25 + 1;
					uVar7 = (uint)pUVar17.Length;
					uVar18 = (ulong)uVar7;
					pUVar26 = pUVar26 + 1;
				} while ((long)uVar25 < (long)(int)uVar7);
			}
			return __this;
		}
	label_05af2f95: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600360D")]
	[Address(RVA = "0x59F2FB0", Offset = "0x59F1FB0", VA = "0x59F2FB0")]
	public static object BoxCast(CustomLogicVector3Builtin start, CustomLogicVector3Builtin end, CustomLogicVector3Builtin dimensions, CustomLogicQuaternionBuiltin orientation, string collideWith)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsBuiltin.c (CustomLogic.CustomLogicPhysicsBuiltin$$BoxCast): 36 lines keep C-only constructs
		float fVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		byte[] auVar7 = new byte[16];
		bool bVar8;
		int iVar9;
		UnityEngine_Vector3_StaticFields pUVar10;
		Collider other;
		BuiltinClassInstance pCVar11;
		float fVar12;
		uint uVar13;
		uint extraout_XMM0_Db;
		byte[] auVar14 = new byte[16];
		float fVar15;
		float fVar16;
		Vector3 center;
		Vector3 halfExtents;
		Vector3 direction;
		Quaternion orientation_00;
		LayerMask UStack_c0;
		float fStack_bc;
		float fStack_b8;
		float fStack_b4;
		float fStack_b0;
		float fStack_ac;
		ulong uStack_a8;
		ulong uStack_a0;
		Vector3 UStack_90;
		float fStack_84;
		ulong uStack_80;
		byte[] auStack_78 = new byte[24];
		byte[] auStack_60 = new byte[8];
		RaycastHit UStack_58;

		UStack_58.m_UV.x = 0.0;
		UStack_58.m_UV.y = 0.0;
		UStack_58.m_Collider.m_Data = (EntityId)0x0;
		UStack_58.m_Normal.y = 0.0;
		UStack_58.m_Normal.z = 0.0;
		UStack_58.m_FaceID = 0;
		UStack_58.m_Distance = 0.0;
		UStack_58.m_Point.x = 0.0;
		UStack_58.m_Point.y = 0.0;
		UStack_58.m_Point.z = 0.0;
		UStack_58.m_Normal.x = 0.0;
		UStack_c0.m_Mask = (LayerMask)0;
		if ((start == null) ||(end == null)) goto label_05af338c;
		UStack_90.z = start.Value.x;
		fStack_84 = start.Value.y;
		uStack_80._0_4_ = 0.0;
		uStack_80._4_4_ = 0.0;
		fStack_bc = start.Value.z;
		uVar2 = end.Value.x;
		uVar4 = end.Value.y;
		fStack_b0 = 0.0;
		fStack_ac = 0.0;
		fVar15 = end.Value.z;
		fStack_b8 = (float)uVar2;
		fStack_b4 = (float)uVar4;
		iVar9 = MapLoader.GetColliderLayer(collideWith);
		if (dimensions == null) goto label_05af338c;
		uStack_a8._0_4_ = dimensions.Value.x;
		uStack_a8._4_4_ = dimensions.Value.y;
		uStack_a0 = 0;
		fVar1 = dimensions.Value.z;
		if (Il2CppMethodInitialized_0753e72d == false) {
			Il2CppMethodInitialized_0753e72d = true;
			UStack_90.x = 0.0;
			UStack_90.y = 0.0;
		}
		else {
			UStack_90.x = 0.0;
			UStack_90.y = 0.0;
		}
		UStack_90.x = 0.0;
		UStack_90.y = 0.0;
		if (Il2CppMethodInitialized_0753e729 == false) {
			UStack_90.x = 0.0;
			UStack_90.y = 0.0;
			Il2CppMethodInitialized_0753e729 = true;
		}
		fStack_b8 = fStack_b8 - UStack_90.z;
		fStack_b4 = fStack_b4 - fStack_84;
		fStack_b0 = fStack_b0 - (float)uStack_80;
		fStack_ac = fStack_ac - uStack_80._4_4_;
		fVar15 = fVar15 - fStack_bc;
		fVar16 = fVar15 * fVar15 + fStack_b4 * fStack_b4 + fStack_b8 * fStack_b8;
		if (fVar16 < 0.0) {
			fVar12 = sqrtf(fVar16);
			uVar13 = extraout_XMM0_Db;
			if (fVar12 <= 1e-05) goto label_05af3146;
	label_05af3181: ;
			fVar15 = fVar15 / fVar12;
			auVar7._4_4_ = fStack_b4;
			auVar7._0_4_ = fStack_b8;
			auVar7._8_4_ = fStack_b0;
			auVar7._12_4_ = fStack_ac;
			auVar14._4_4_ = fVar12;
			auVar14._0_4_ = fVar12;
			auVar14._8_4_ = uVar13;
			auVar14._12_4_ = uVar13;
			auVar14 = divps(auVar7, auVar14);
			UStack_90.x = auVar14._0_4_;
			UStack_90.y = auVar14._4_4_;
			pUVar10 = (UnityEngine_Vector3_StaticFields)&UStack_90;
		}
		else {
			uVar13 = 0;
			fVar12 = SQRT(fVar16);
			if (1e-05 < fVar12) goto label_05af3181;
	label_05af3146: ;
			pUVar10 = typeof(Vector3).static_fields;
			fVar15 = (pUVar10.zeroVector).z;
		}
		if (orientation != null) {
			auStack_78._0_4_ = (pUVar10.zeroVector).x;
			auStack_78._4_4_ = (pUVar10.zeroVector).y;
			auStack_78._8_4_ = 0.0;
			auStack_78._12_4_ = 0.0;
			uVar3 = orientation.Value.x;
			uVar5 = orientation.Value.y;
			fStack_b0 = 0.0;
			fStack_ac = 0.0;
			auStack_78._16_4_ = orientation.Value.z;
			auStack_78._20_4_ = orientation.Value.w;
			auStack_60._0_4_ = 0.0;
			auStack_60._4_4_ = 0.0;
			fStack_b8 = (float)uVar3;
			fStack_b4 = (float)uVar5;
			if (Il2CppMethodInitialized_0753e729 == false) {
				Il2CppMethodInitialized_0753e729 = true;
				uVar6 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar6 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			if (uVar6 == 0) {
			}
			if (fVar16 < 0.0) {
				fVar16 = sqrtf(fVar16);
			}
			else {
				fVar16 = SQRT(fVar16);
			}
			uStack_a8 = CONCAT44(uStack_a8._4_4_ * 0.5, (float)uStack_a8 * 0.5);
			uStack_a0 = CONCAT44(uStack_a0._4_4_ * 0.0, (float)uStack_a0 * 0.0);
			UStack_c0 = PhysicsLayer.CopyMask(iVar9);
			iVar9 = UStack_c0.value;
			pCVar11 = null;
			orientation_00.y = fStack_b4;
			orientation_00.x = fStack_b8;
			center.z = fStack_bc;
			center.x = UStack_90.z;
			center.y = fStack_84;
			halfExtents.z = fVar1 * 0.5;
			halfExtents.x = (float)uStack_a8;
			halfExtents.y = uStack_a8._4_4_;
			direction.z = fVar15;
			direction.x = (float)auStack_78._0_4_;
			direction.y = (float)auStack_78._4_4_;
			orientation_00.z = (float)auStack_78._16_4_;
			orientation_00.w = (float)auStack_78._20_4_;
			bVar8 = Physics.BoxCast(center, halfExtents, direction, ref UStack_58, orientation_00, fVar16, iVar9);
			if (bVar8) {
				other = UStack_58.collider;
				pCVar11 = CustomLogicCollisionHandler.GetBuiltin(other);
			}
			return (object)pCVar11;
		}
	label_05af338c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600360E")]
	[Address(RVA = "0x59F33A0", Offset = "0x59F23A0", VA = "0x59F33A0")]
	public static CustomLogicListBuiltin BoxCastAll(CustomLogicVector3Builtin start, CustomLogicVector3Builtin end, CustomLogicVector3Builtin dimensions, CustomLogicQuaternionBuiltin orientation, string collideWith)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsBuiltin.c (CustomLogic.CustomLogicPhysicsBuiltin$$BoxCastAll): 50 lines keep C-only constructs
		int piVar1;
		float fVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		byte bVar7;
		uint uVar8;
		Vector2 UVar9;
		List<object> __this;
		uint uVar10;
		uint uVar11;
		uint uVar12;
		uint uVar13;
		byte[] auVar14 = new byte[16];
		int iVar16;
		UnityEngine_Vector3_StaticFields pUVar17;
		RaycastHit[] pUVar18;
		CustomLogicListBuiltin __this_00;
		ulong uVar19;
		Collider pUVar20;
		BuiltinClassInstance pCVar21;
		CustomLogicLineCastHitResultBuiltin __this_01;
		CustomLogicVector3Builtin pCVar22;
		Object[] pSVar23;
		object pIVar24;
		CustomLogicColliderBuiltin __this_02;
		int iVar25;
		ulong uVar26;
		RaycastHit pUVar27;
		BuiltinClassInstance pCVar28;
		float fVar29;
		float fVar30;
		uint uVar31;
		uint extraout_XMM0_Db;
		byte[] auVar32 = new byte[16];
		float fVar33;
		float fVar34;
		Vector3 UVar35;
		Vector3 value;
		Vector3 value_00;
		Vector3 halfExtents;
		Vector3 direction;
		Quaternion orientation_00;
		LayerMask[] aUStack_d0 = new LayerMask[2];
		ulong uStack_c8;
		ulong uStack_c0;
		float fStack_b8;
		float fStack_b4;
		float fStack_b0;
		float fStack_ac;
		ulong uStack_a8;
		ulong uStack_a0;
		byte[] auStack_90 = new byte[8];
		RaycastHit UStack_88;
		float fStack_58;
		float fStack_54;
		ulong uStack_50;
		byte[] auStack_48 = new byte[24];

		aUStack_d0[0].m_Mask = (LayerMask)0;
		UStack_88.m_UV.x = 0.0;
		UStack_88.m_UV.y = 0.0;
		UStack_88.m_Collider.m_Data = (EntityId)0;
		UStack_88.m_Normal.y = 0.0;
		UStack_88.m_Normal.z = 0.0;
		UStack_88.m_FaceID = 0;
		UStack_88.m_Distance = 0.0;
		UStack_88.m_Point.x = 0.0;
		UStack_88.m_Point.y = 0.0;
		UStack_88.m_Point.z = 0.0;
		UStack_88.m_Normal.x = 0.0;
		if ((start == null) ||(end == null)) goto label_05af3ba8;
		uStack_a8 = *(CustomLogicListBuiltin*)&start.Value;
		uStack_a0 = 0;
		fVar30 = start.Value.z;
		uVar3 = end.Value.x;
		uVar5 = end.Value.y;
		fStack_b0 = 0.0;
		fStack_ac = 0.0;
		fVar33 = end.Value.z;
		fStack_b8 = (float)uVar3;
		fStack_b4 = (float)uVar5;
		iVar16 = MapLoader.GetColliderLayer(collideWith);
		if (dimensions == null) goto label_05af3ba8;
		uStack_c8._0_4_ = dimensions.Value.x;
		uStack_c8._4_4_ = dimensions.Value.y;
		uStack_c0 = 0;
		fVar2 = dimensions.Value.z;
		if (Il2CppMethodInitialized_0753e72d == false) {
			Il2CppMethodInitialized_0753e72d = true;
			auStack_90._0_4_ = 0.0;
			auStack_90._4_4_ = 0.0;
		}
		else {
			auStack_90._0_4_ = 0.0;
			auStack_90._4_4_ = 0.0;
		}
		auStack_90._0_4_ = 0.0;
		auStack_90._4_4_ = 0.0;
		if (Il2CppMethodInitialized_0753e729 == false) {
			auStack_90._0_4_ = 0.0;
			auStack_90._4_4_ = 0.0;
			Il2CppMethodInitialized_0753e729 = true;
		}
		fStack_b8 = fStack_b8 - (float)uStack_a8;
		fStack_b4 = fStack_b4 - uStack_a8._4_4_;
		fStack_b0 = fStack_b0 - (float)uStack_a0;
		fStack_ac = fStack_ac - uStack_a0._4_4_;
		fVar33 = fVar33 - fVar30;
		fVar34 = fVar33 * fVar33 + fStack_b4 * fStack_b4 + fStack_b8 * fStack_b8;
		if (fVar34 < 0.0) {
			fVar29 = sqrtf(fVar34);
			uVar31 = extraout_XMM0_Db;
			if (1e-05 < fVar29) goto label_05af35d7;
	label_05af359c: ;
			pUVar17 = typeof(Vector3).static_fields;
			fVar33 = (pUVar17.zeroVector).z;
		}
		else {
			uVar31 = 0;
			fVar29 = SQRT(fVar34);
			if (fVar29 <= 1e-05) goto label_05af359c;
	label_05af35d7: ;
			fVar33 = fVar33 / fVar29;
			auVar14._4_4_ = fStack_b4;
			auVar14._0_4_ = fStack_b8;
			auVar14._8_4_ = fStack_b0;
			auVar14._12_4_ = fStack_ac;
			auVar32._4_4_ = fVar29;
			auVar32._0_4_ = fVar29;
			auVar32._8_4_ = uVar31;
			auVar32._12_4_ = uVar31;
			auVar32 = divps(auVar14, auVar32);
			auStack_90._0_4_ = auVar32._0_4_;
			auStack_90._4_4_ = auVar32._4_4_;
			pUVar17 = (UnityEngine_Vector3_StaticFields)auStack_90;
		}
		if (orientation == null) goto label_05af3ba8;
		fStack_58 = (pUVar17.zeroVector).x;
		fStack_54 = (pUVar17.zeroVector).y;
		uStack_50._0_4_ = 0.0;
		uStack_50._4_4_ = 0.0;
		uVar4 = orientation.Value.x;
		uVar6 = orientation.Value.y;
		fStack_b0 = 0.0;
		fStack_ac = 0.0;
		auStack_48._0_4_ = orientation.Value.z;
		auStack_48._4_4_ = orientation.Value.w;
		auStack_48._8_4_ = 0.0;
		auStack_48._12_4_ = 0.0;
		fStack_b8 = (float)uVar4;
		fStack_b4 = (float)uVar6;
		if (Il2CppMethodInitialized_0753e729 == false) {
			Il2CppMethodInitialized_0753e729 = true;
			if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) goto label_05af36cb;
	label_05af363d: ;
			if (0.0 <= fVar34) goto label_05af3649;
	label_05af36e2: ;
			fVar34 = sqrtf(fVar34);
		}
		else {
			if ((typeof(Math)._2).cctor_finished_or_no_cctor != 0) goto label_05af363d;
	label_05af36cb: ;
			if (fVar34 < 0.0) goto label_05af36e2;
	label_05af3649: ;
			fVar34 = SQRT(fVar34);
		}
		uStack_c8 = CONCAT44(uStack_c8._4_4_ * 0.5, (float)uStack_c8 * 0.5);
		uStack_c0 = CONCAT44(uStack_c0._4_4_ * 0.0, (float)uStack_c0 * 0.0);
		aUStack_d0[0] = PhysicsLayer.CopyMask(iVar16);
		iVar16 = aUStack_d0.value;
		orientation_00.y = fStack_b4;
		orientation_00.x = fStack_b8;
		UVar35.z = fVar30;
		UVar35._0_8_ = uStack_a8;
		halfExtents.z = fVar2 * 0.5;
		halfExtents.x = (float)uStack_c8;
		halfExtents.y = uStack_c8._4_4_;
		direction.z = fVar33;
		direction.x = fStack_58;
		direction.y = fStack_54;
		orientation_00.z = (float)auStack_48._0_4_;
		orientation_00.w = (float)auStack_48._4_4_;
		pUVar18 = Physics.BoxCastAll(UVar35, halfExtents, direction, orientation_00, fVar34, iVar16);
		__this_00 = new CustomLogicListBuiltin();
		if (pUVar18 != null) {
			iVar25 = (int)pUVar18.Length;
			uVar19 = pUVar18.Length & 0xffffffff;
			uStack_a8 = __this_00;
			if (__this_00 == null) {
				if (0 < iVar25) {
					pUVar27 = pUVar18.m_Items;
					uVar26 = 0;
					do {
						if (uVar19 <= uVar26) goto label_05af3bad;
						UStack_88.m_Point.x = pUVar27.m_Point.x;
						UStack_88.m_Point.y = pUVar27.m_Point.y;
						UStack_88._8_8_ = *(ulong)&pUVar27.m_Point.z;
						UStack_88.m_Normal.y = pUVar27.m_Normal.y;
						UStack_88.m_Normal.z = pUVar27.m_Normal.z;
						uVar12 = pUVar27.m_FaceID;
						uVar13 = pUVar27.m_Distance;
						UVar9 = pUVar27.m_UV;
						UStack_88.m_Collider.m_Data =(EntityId)pUVar27.m_Collider.m_Data;
						UStack_88.m_UV.x = UVar9.x;
						UStack_88.m_UV.y = UVar9.y;
						UStack_88.m_FaceID = uVar12;
						UStack_88.m_Distance = (float)uVar13;
						pUVar20 = UStack_88.collider;
						pCVar21 = CustomLogicCollisionHandler.GetBuiltin(pUVar20);
						if (pCVar21 != null) goto label_05af3ba8;
						uVar26 = uVar26 + 1;
						uVar8 = (uint)pUVar18.Length;
						uVar19 = (ulong)uVar8;
						pUVar27 = pUVar27 + 1;
					} while ((long)uVar26 < (long)(int)uVar8);
				}
			}
			else if (0 < iVar25) {
				pUVar27 = pUVar18.m_Items;
				uVar26 = 0;
				do {
					if (uVar19 <= uVar26) {
	label_05af3bad: ;
						throw new IndexOutOfRangeException();
					}
					UStack_88.m_Point.x = pUVar27.m_Point.x;
					UStack_88.m_Point.y = pUVar27.m_Point.y;
					UStack_88._8_8_ = *(ulong)&pUVar27.m_Point.z;
					UStack_88.m_Normal.y = pUVar27.m_Normal.y;
					UStack_88.m_Normal.z = pUVar27.m_Normal.z;
					uVar10 = pUVar27.m_FaceID;
					uVar11 = pUVar27.m_Distance;
					UVar9 = pUVar27.m_UV;
					UStack_88.m_Collider.m_Data =(EntityId)pUVar27.m_Collider.m_Data;
					UStack_88.m_UV.x = UVar9.x;
					UStack_88.m_UV.y = UVar9.y;
					UStack_88.m_FaceID = uVar10;
					UStack_88.m_Distance = (float)uVar11;
					pUVar20 = UStack_88.collider;
					pCVar21 = CustomLogicCollisionHandler.GetBuiltin(pUVar20);
					if (pCVar21 != null) {
						__this = uStack_a8.List;
						__this_01 = new CustomLogicLineCastHitResultBuiltin();
						bVar7 = (typeof(CustomLogicCharacterBuiltin)._2).typeHierarchyDepth;
						pCVar28 = null;
						if ((bVar7 <= (pCVar21.klass._2).typeHierarchyDepth) &&(pCVar28 = null,(pCVar21.klass._2).typeHierarchy[(ulong)bVar7 - 1] ==typeof(CustomLogicCharacterBuiltin))) {
							pCVar28 = pCVar21;
						}
						if (__this_01 == null) goto label_05af3ba8;
						fStack_b8 = (float)uVar26;
						fStack_b4 = (float)(uVar26 >> 0x20);
						__this_01.IsCharacter = pCVar28 != null;
						bVar7 = (typeof(CustomLogicMapObjectBuiltin)._2).typeHierarchyDepth;
						pCVar28 = null;
						if ((bVar7 <= (pCVar21.klass._2).typeHierarchyDepth) &&(pCVar28 = pCVar21,(pCVar21.klass._2).typeHierarchy[(ulong)bVar7 - 1] !=typeof(CustomLogicMapObjectBuiltin))) {
							pCVar28 = null;
						}
						__this_01._IsMapObject_k__BackingField = pCVar28 != null;
						UVar35 = UStack_88.point;
						uStack_c8._0_4_ = UVar35.z;
						value.z = (float)uStack_c8;
						value.x = UVar35.x;
						value.y = UVar35.y;
						pCVar22 = new CustomLogicVector3Builtin(value);
						__this_01._Point_k__BackingField = pCVar22;
						UVar35 = UStack_88.normal;
						uStack_c8 = CONCAT44(uStack_c8._4_4_, UVar35.z);
						value_00.z = (float)uStack_c8;
						value_00.x = UVar35.x;
						value_00.y = UVar35.y;
						pCVar22 = new CustomLogicVector3Builtin(value_00);
						__this_01._Normal_k__BackingField = pCVar22;
						fVar30 = UStack_88.distance;
						__this_01._Distance_k__BackingField = fVar30;
						__this_01._Collider_k__BackingField = pCVar21;
						pSVar23 = (Object[])new object[1];
						pUVar20 = UStack_88.collider;
						if (pSVar23 == null) goto label_05af3ba8;
						if ((pUVar20 != null) &&(pIVar24 = il2cpp_vm_Object_IsInst((object)pUVar20, (((pSVar23.obj).klass)._1).element_class), pIVar24 == null)) {
							pIVar24 = new ArrayTypeMismatchException();
							throw pIVar24;
						}
						if ((int)pSVar23.Length == 0) goto label_05af3bad;
						pSVar23[0] = (object)pUVar20;
						__this_02 = new CustomLogicColliderBuiltin(pSVar23);
						__this_01._ColliderInfo_k__BackingField = __this_02;
						if (__this == null) goto label_05af3ba8;
						piVar1 = &__this._version;
						*piVar1 = *piVar1 + 1;
						pSVar23 = __this._items;
						if (pSVar23 == null) goto label_05af3ba8;
						uVar8 = __this._size;
						uVar26 = CONCAT44(fStack_b4, fStack_b8);
						if (uVar8 < (uint)pSVar23.Length) {
							__this._size = uVar8 + 1;
							pSVar23[(int)uVar8] = (object)__this_01;
						}
						else {
							__this.AddWithResize((object)__this_01);
						}
					}
					uVar26 = uVar26 + 1;
					uVar8 = (uint)pUVar18.Length;
					uVar19 = (ulong)uVar8;
					pUVar27 = pUVar27 + 1;
				} while ((long)uVar26 < (long)(int)uVar8);
			}
			return uStack_a8;
		}
	label_05af3ba8: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600360F")]
	[Address(RVA = "0x59F3BD0", Offset = "0x59F2BD0", VA = "0x59F3BD0")]
	public static CustomLogicVector3Builtin ClosestPoint(CustomLogicVector3Builtin point, CustomLogicColliderBuiltin collider, CustomLogicVector3Builtin position, CustomLogicQuaternionBuiltin rotation)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsBuiltin.c (CustomLogic.CustomLogicPhysicsBuiltin$$ClosestPoint): clean
		Collider collider_00;
		Vector3 position_00;
		Quaternion rotation_00;
		Vector3 point_00;
		CustomLogicVector3Builtin __this;
		Vector3 value;

		if ((((point == null) ||(collider == null)) ||(position == null)) ||(rotation == null)) {
			throw new NullReferenceException();
		}
		point_00 = point.Value;
		collider_00 = collider.collider;
		position_00 = position.Value;
		rotation_00 = rotation.Value;
		value = Physics.ClosestPoint((Vector3)point_00, collider_00, (Vector3)position_00, (Quaternion)rotation_00);
		__this = new CustomLogicVector3Builtin(value);
		return __this;
	}

	[Token(Token = "0x6003610")]
	[Address(RVA = "0x59F3D10", Offset = "0x59F2D10", VA = "0x59F3D10")]
	public static CustomLogicVector3Builtin ComputePenetration(CustomLogicColliderBuiltin colliderA, CustomLogicVector3Builtin positionA, CustomLogicQuaternionBuiltin rotationA, CustomLogicColliderBuiltin colliderB, CustomLogicVector3Builtin positionB, CustomLogicQuaternionBuiltin rotationB)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsBuiltin.c (CustomLogic.CustomLogicPhysicsBuiltin$$ComputePenetration): 44 lines keep C-only constructs
		ulong uVar1;
		ulong uVar2;
		ulong uVar3;
		ulong uVar4;
		ulong uVar5;
		ulong uVar6;
		Collider colliderA_00;
		Collider colliderB_00;
		bool bVar7;
		CustomLogicVector3Builtin __this;
		float fVar8;
		float fVar9;
		Quaternion rotationA_00;
		Vector3 positionA_00;
		Vector3 value;
		Vector3 positionB_00;
		Quaternion rotationB_00;
		float local_c0;
		float local_bc;
		Vector3 local_b8;
		byte[] local_a8 = new byte[16];
		ulong local_98;
		ulong uStack_90;
		ulong local_88;
		ulong local_78;
		ulong local_68;
		ulong local_58;
		ulong local_48;

		local_b8.z = 0.0;
		local_b8.x = 0.0;
		local_b8.y = 0.0;
		local_c0 = 0.0;
		if ((((colliderA == null) ||(positionA == null)) ||(rotationA == null)) ||(((colliderB == null ||(positionB == null)) ||(rotationB == null)))) {
			throw new NullReferenceException();
		}
		colliderA_00 = colliderA.collider;
		uVar1._0_4_ = positionA.Value.x;
		uVar1._4_4_ = positionA.Value.y;
		fVar8 = positionA.Value.z;
		uVar2._0_4_ = rotationA.Value.x;
		uVar2._4_4_ = rotationA.Value.y;
		uVar3._0_4_ = rotationA.Value.z;
		uVar3._4_4_ = rotationA.Value.w;
		colliderB_00 = colliderB.collider;
		uVar4._0_4_ = positionB.Value.x;
		uVar4._4_4_ = positionB.Value.y;
		fVar9 = positionB.Value.z;
		uVar5._0_4_ = rotationB.Value.x;
		uVar5._4_4_ = rotationB.Value.y;
		uVar6._0_4_ = rotationB.Value.z;
		uVar6._4_4_ = rotationB.Value.w;
		if ((typeof(Physics)._2).cctor_finished_or_no_cctor == 0) {
			local_a8._0_4_ = fVar8;
			local_bc = fVar9;
			local_98 = uVar1;
			local_88 = uVar6;
			local_78 = uVar5;
			local_68 = uVar4;
			local_58 = uVar3;
			local_48 = uVar2;
			uVar1._0_4_ = (undefined4)local_98;
			uVar1._4_4_ = local_98._4_4_;
			fVar8 = (float)local_a8._0_4_;
			uVar2._0_4_ = (undefined4)local_48;
			uVar2._4_4_ = local_48._4_4_;
			uVar3._0_4_ = (undefined4)local_58;
			uVar3._4_4_ = local_58._4_4_;
			uVar4._0_4_ = (undefined4)local_68;
			uVar4._4_4_ = local_68._4_4_;
			fVar9 = local_bc;
			uVar5._0_4_ = (undefined4)local_78;
			uVar5._4_4_ = local_78._4_4_;
			uVar6._0_4_ = (undefined4)local_88;
			uVar6._4_4_ = local_88._4_4_;
		}
		rotationA_00.y = (float)uVar2._4_4_;
		rotationA_00.x = (float)(undefined4)uVar2;
		rotationA_00.w = (float)uVar3._4_4_;
		rotationA_00.z = (float)(undefined4)uVar3;
		positionA_00.y = (float)uVar1._4_4_;
		positionA_00.x = (float)(undefined4)uVar1;
		positionA_00.z = fVar8;
		positionB_00.y = (float)uVar4._4_4_;
		positionB_00.x = (float)(undefined4)uVar4;
		positionB_00.z = fVar9;
		rotationB_00.y = (float)uVar5._4_4_;
		rotationB_00.x = (float)(undefined4)uVar5;
		rotationB_00.w = (float)uVar6._4_4_;
		rotationB_00.z = (float)(undefined4)uVar6;
		bVar7 = Physics.ComputePenetration(colliderA_00, positionA_00, rotationA_00, colliderB_00, positionB_00, rotationB_00, ref local_b8, ref local_c0);
		if (bVar7) {
			local_98 = CONCAT44(local_c0 * local_b8.y, local_c0 * local_b8.x);
			uStack_90 = CONCAT44(local_c0 * 0.0, local_c0 * 0.0);
			local_a8 = ZEXT416((uint)(local_c0 * local_b8.z));
			value.z = (float)local_a8._0_4_;
			value.x = (float)(undefined4)local_98;
			value.y = (float)local_98._4_4_;
			__this = new CustomLogicVector3Builtin(value);
		}
		else {
			__this = CustomLogicVector3Builtin.Zero;
		}
		return __this;
	}

	[Token(Token = "0x6003611")]
	[Address(RVA = "0x59F3EF0", Offset = "0x59F2EF0", VA = "0x59F3EF0")]
	public static bool AreCollidersOverlapping(CustomLogicColliderBuiltin colliderA, CustomLogicVector3Builtin positionA, CustomLogicQuaternionBuiltin rotationA, CustomLogicColliderBuiltin colliderB, CustomLogicVector3Builtin positionB, CustomLogicQuaternionBuiltin rotationB)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicPhysicsBuiltin.c (CustomLogic.CustomLogicPhysicsBuiltin$$AreCollidersOverlapping): 36 lines keep C-only constructs
		float fVar1;
		float fVar2;
		ulong uVar3;
		ulong uVar4;
		ulong uVar5;
		ulong uVar6;
		ulong uVar7;
		ulong uVar8;
		Collider colliderA_00;
		Collider colliderB_00;
		bool bVar9;
		Quaternion rotationA_00;
		Vector3 positionA_00;
		Quaternion rotationB_00;
		Vector3 positionB_00;
		float local_ac;
		Vector3 local_a8;
		ulong local_98;
		ulong local_88;
		ulong local_78;
		ulong local_68;
		ulong local_58;
		ulong local_48;

		local_a8.z = 0.0;
		local_a8.x = 0.0;
		local_a8.y = 0.0;
		local_ac = 0.0;
		if ((((colliderA == null) ||(positionA == null)) ||(rotationA == null)) ||(((colliderB == null ||(positionB == null)) ||(rotationB == null)))) {
			throw new NullReferenceException();
		}
		colliderA_00 = colliderA.collider;
		uVar3._0_4_ = positionA.Value.x;
		uVar3._4_4_ = positionA.Value.y;
		fVar1 = positionA.Value.z;
		uVar4._0_4_ = rotationA.Value.x;
		uVar4._4_4_ = rotationA.Value.y;
		uVar5._0_4_ = rotationA.Value.z;
		uVar5._4_4_ = rotationA.Value.w;
		colliderB_00 = colliderB.collider;
		uVar6._0_4_ = positionB.Value.x;
		uVar6._4_4_ = positionB.Value.y;
		fVar2 = positionB.Value.z;
		uVar7._0_4_ = rotationB.Value.x;
		uVar7._4_4_ = rotationB.Value.y;
		uVar8._0_4_ = rotationB.Value.z;
		uVar8._4_4_ = rotationB.Value.w;
		if ((typeof(Physics)._2).cctor_finished_or_no_cctor == 0) {
			local_98 = uVar8;
			local_88 = uVar7;
			local_78 = uVar6;
			local_68 = uVar5;
			local_58 = uVar4;
			local_48 = uVar3;
			uVar3._0_4_ = (undefined4)local_48;
			uVar3._4_4_ = local_48._4_4_;
			uVar4._0_4_ = (undefined4)local_58;
			uVar4._4_4_ = local_58._4_4_;
			uVar5._0_4_ = (undefined4)local_68;
			uVar5._4_4_ = local_68._4_4_;
			uVar6._0_4_ = (undefined4)local_78;
			uVar6._4_4_ = local_78._4_4_;
			uVar7._0_4_ = (undefined4)local_88;
			uVar7._4_4_ = local_88._4_4_;
			uVar8._0_4_ = (undefined4)local_98;
			uVar8._4_4_ = local_98._4_4_;
		}
		rotationA_00.y = (float)uVar4._4_4_;
		rotationA_00.x = (float)(undefined4)uVar4;
		rotationA_00.w = (float)uVar5._4_4_;
		rotationA_00.z = (float)(undefined4)uVar5;
		positionA_00.y = (float)uVar3._4_4_;
		positionA_00.x = (float)(undefined4)uVar3;
		positionA_00.z = fVar1;
		rotationB_00.y = (float)uVar7._4_4_;
		rotationB_00.x = (float)(undefined4)uVar7;
		rotationB_00.w = (float)uVar8._4_4_;
		rotationB_00.z = (float)(undefined4)uVar8;
		positionB_00.y = (float)uVar6._4_4_;
		positionB_00.x = (float)(undefined4)uVar6;
		positionB_00.z = fVar2;
		bVar9 = Physics.ComputePenetration(colliderA_00, positionA_00, rotationA_00, colliderB_00, positionB_00, rotationB_00, ref local_a8, ref local_ac);
		return bVar9;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicPhysicsBuiltin.c.

	// CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"GetPhysicsLayerMask");
		__this.Add((Il2CppObject *)"LineCast");
		__this.Add((Il2CppObject *)"LineCastWithMask");
		__this.Add((Il2CppObject *)"LineCastAll");
		__this.Add((Il2CppObject *)"SphereCast");
		__this.Add((Il2CppObject *)"SphereCastWithMask");
		__this.Add((Il2CppObject *)"SphereCastAll");
		__this.Add((Il2CppObject *)"BoxCast");
		__this.Add((Il2CppObject *)"BoxCastAll");
		__this.Add((Il2CppObject *)"ClosestPoint");
		__this.Add((Il2CppObject *)"ComputePenetration");
		__this.Add((Il2CppObject *)"AreCollidersOverlapping");
		CustomLogicPhysicsBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$.cctor: 1 lines keep C-only constructs
	private static void Bindings_c__cctor()
	{
		object __this;

		__this = (object)il2cpp_codegen_object_new(typeof(CustomLogicPhysicsBuiltin.Bindings.c)) ;
		__this = new Object();
		CustomLogicPhysicsBuiltin.Bindings.c.__9 =(CustomLogicPhysicsBuiltin.Bindings.c)__this;
		return;
	}

	// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$.ctor: clean
	private void Bindings_c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetPhysicsLayerMask>b__2_0: clean
	private object Bindings_c____CreateMethodBinding__GetPhysicsLayerMask_b__2_0(CustomLogicPhysicsBuiltin __c, Object[] __a)
	{
		CustomLogicListBuiltin layers;
		object pIVar1;
		int local_c;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		pIVar1 = __a[0];
		layers = CustomLogicEvaluator.ConvertTo<CustomLogicListBuiltin>(pIVar1);
		local_c = CustomLogicPhysicsBuiltin.GetPhysicsLayerMask(layers);
		pIVar1 = (object)local_c;
		return pIVar1;
	}

	// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$<__CreateMethodBinding__LineCast>b__3_0: clean
	private object Bindings_c____CreateMethodBinding__LineCast_b__3_0(CustomLogicPhysicsBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicVector3Builtin start;
		CustomLogicVector3Builtin end;
		String collideWith;
		CustomLogicLineCastHitResultBuiltin pCVar1;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			start = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				end = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[1]);
				if (2 < (uint)__a.Length) {
					collideWith = CustomLogicEvaluator.ConvertTo<string>(__a[2]);
					pCVar1 = CustomLogicPhysicsBuiltin.LineCast(start, end, collideWith);
					return (object)pCVar1;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$<__CreateMethodBinding__LineCastWithMask>b__4_0: clean
	private object Bindings_c____CreateMethodBinding__LineCastWithMask_b__4_0(CustomLogicPhysicsBuiltin __c, Object[] __a)
	{
		object obj;
		int mask;
		CustomLogicVector3Builtin start;
		CustomLogicVector3Builtin end;
		CustomLogicLineCastHitResultBuiltin pCVar1;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			start = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				end = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[1]);
				if (2 < (uint)__a.Length) {
					mask = CustomLogicEvaluator.ConvertTo<int>(__a[2]);
					pCVar1 = CustomLogicPhysicsBuiltin.LineCastWithMask(start, end, mask);
					return (object)pCVar1;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$<__CreateMethodBinding__LineCastAll>b__5_0: clean
	private object Bindings_c____CreateMethodBinding__LineCastAll_b__5_0(CustomLogicPhysicsBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicVector3Builtin start;
		CustomLogicVector3Builtin end;
		String collideWith;
		CustomLogicListBuiltin pCVar1;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			start = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				end = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[1]);
				if (2 < (uint)__a.Length) {
					collideWith = CustomLogicEvaluator.ConvertTo<string>(__a[2]);
					pCVar1 = CustomLogicPhysicsBuiltin.LineCastAll(start, end, collideWith);
					return (object)pCVar1;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$<__CreateMethodBinding__SphereCast>b__6_0: clean
	private object Bindings_c____CreateMethodBinding__SphereCast_b__6_0(CustomLogicPhysicsBuiltin __c, Object[] __a)
	{
		CustomLogicVector3Builtin start;
		CustomLogicVector3Builtin end;
		String collideWith;
		object pIVar1;
		float radius;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			start = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(pIVar1) ;
			if ((__a.Length & 0xfffffffe) != 0) {
				end = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[1]);
				if (2 < (uint)__a.Length) {
					radius = CustomLogicEvaluator.ConvertTo<float>(__a[2]) ;
					if ((__a.Length & 0xfffffffc) != 0) {
						collideWith = CustomLogicEvaluator.ConvertTo<string>(__a[3]);
						pIVar1 = CustomLogicPhysicsBuiltin.SphereCast(start, end, radius, collideWith);
						return pIVar1;
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$<__CreateMethodBinding__SphereCastWithMask>b__7_0: clean
	private object Bindings_c____CreateMethodBinding__SphereCastWithMask_b__7_0(CustomLogicPhysicsBuiltin __c, Object[] __a)
	{
		int mask;
		CustomLogicVector3Builtin start;
		CustomLogicVector3Builtin end;
		object pIVar1;
		float radius;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			start = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(pIVar1) ;
			if ((__a.Length & 0xfffffffe) != 0) {
				end = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[1]);
				if (2 < (uint)__a.Length) {
					radius = CustomLogicEvaluator.ConvertTo<float>(__a[2]) ;
					if ((__a.Length & 0xfffffffc) != 0) {
						mask = CustomLogicEvaluator.ConvertTo<int>(__a[3]);
						pIVar1 = CustomLogicPhysicsBuiltin.SphereCastWithMask(start, end, radius, mask);
						return pIVar1;
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$<__CreateMethodBinding__SphereCastAll>b__8_0: clean
	private object Bindings_c____CreateMethodBinding__SphereCastAll_b__8_0(CustomLogicPhysicsBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicVector3Builtin start;
		CustomLogicVector3Builtin end;
		String collideWith;
		CustomLogicListBuiltin pCVar1;
		float radius;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			start = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				end = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[1]);
				if (2 < (uint)__a.Length) {
					radius = CustomLogicEvaluator.ConvertTo<float>(__a[2]) ;
					if ((__a.Length & 0xfffffffc) != 0) {
						collideWith = CustomLogicEvaluator.ConvertTo<string>(__a[3]);
						pCVar1 = CustomLogicPhysicsBuiltin.SphereCastAll(start, end, radius, collideWith);
						return (object)pCVar1;
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$<__CreateMethodBinding__BoxCast>b__9_0: clean
	private object Bindings_c____CreateMethodBinding__BoxCast_b__9_0(CustomLogicPhysicsBuiltin __c, Object[] __a)
	{
		CustomLogicVector3Builtin start;
		CustomLogicVector3Builtin end;
		CustomLogicVector3Builtin dimensions;
		CustomLogicQuaternionBuiltin orientation;
		String collideWith;
		object pIVar1;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			start = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(pIVar1) ;
			if ((__a.Length & 0xfffffffe) != 0) {
				end = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[1]);
				if (2 < (uint)__a.Length) {
					dimensions = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[2]);
					if ((__a.Length & 0xfffffffc) != 0) {
						orientation = CustomLogicEvaluator.ConvertTo<CustomLogicQuaternionBuiltin>(__a[3]);
						if (4 < (uint)__a.Length) {
							collideWith = CustomLogicEvaluator.ConvertTo<string>(__a[4]);
							pIVar1 = CustomLogicPhysicsBuiltin.BoxCast(start, end, dimensions, orientation, collideWith);
							return pIVar1;
						}
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$<__CreateMethodBinding__BoxCastAll>b__10_0: clean
	private object Bindings_c____CreateMethodBinding__BoxCastAll_b__10_0(CustomLogicPhysicsBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicVector3Builtin start;
		CustomLogicVector3Builtin end;
		CustomLogicVector3Builtin dimensions;
		CustomLogicQuaternionBuiltin orientation;
		String collideWith;
		CustomLogicListBuiltin pCVar1;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			start = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				end = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[1]);
				if (2 < (uint)__a.Length) {
					dimensions = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[2]);
					if ((__a.Length & 0xfffffffc) != 0) {
						orientation = CustomLogicEvaluator.ConvertTo<CustomLogicQuaternionBuiltin>(__a[3]);
						if (4 < (uint)__a.Length) {
							collideWith = CustomLogicEvaluator.ConvertTo<string>(__a[4]);
							pCVar1 = CustomLogicPhysicsBuiltin.BoxCastAll(start, end, dimensions, orientation, collideWith);
							return (object)pCVar1;
						}
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$<__CreateMethodBinding__ClosestPoint>b__11_0: clean
	private object Bindings_c____CreateMethodBinding__ClosestPoint_b__11_0(CustomLogicPhysicsBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicVector3Builtin pCVar1;
		CustomLogicColliderBuiltin collider;
		CustomLogicVector3Builtin position;
		CustomLogicQuaternionBuiltin rotation;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				collider = CustomLogicEvaluator.ConvertTo<CustomLogicColliderBuiltin>(__a[1]);
				if (2 < (uint)__a.Length) {
					position = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[2]) ;
					if ((__a.Length & 0xfffffffc) != 0) {
						rotation = CustomLogicEvaluator.ConvertTo<CustomLogicQuaternionBuiltin>(__a[3]);
						pCVar1 = CustomLogicPhysicsBuiltin.ClosestPoint(pCVar1, collider, position, rotation);
						return (object)pCVar1;
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$<__CreateMethodBinding__ComputePenetration>b__12_0: clean
	private object Bindings_c____CreateMethodBinding__ComputePenetration_b__12_0(CustomLogicPhysicsBuiltin __c, Object[] __a)
	{
		object obj;
		CustomLogicColliderBuiltin colliderA;
		CustomLogicVector3Builtin pCVar1;
		CustomLogicQuaternionBuiltin rotationA;
		CustomLogicColliderBuiltin colliderB;
		CustomLogicVector3Builtin positionB;
		CustomLogicQuaternionBuiltin rotationB;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			obj = __a[0];
			colliderA = CustomLogicEvaluator.ConvertTo<CustomLogicColliderBuiltin>(obj);
			if ((__a.Length & 0xfffffffe) != 0) {
				pCVar1 = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[1]);
				if (2 < (uint)__a.Length) {
					rotationA = CustomLogicEvaluator.ConvertTo<CustomLogicQuaternionBuiltin>(__a[2]);
					if ((__a.Length & 0xfffffffc) != 0) {
						colliderB = CustomLogicEvaluator.ConvertTo<CustomLogicColliderBuiltin>(__a[3]);
						if (4 < (uint)__a.Length) {
							positionB = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[4]);
							if (5 < (uint)__a.Length) {
								rotationB = CustomLogicEvaluator.ConvertTo<CustomLogicQuaternionBuiltin>(__a[5]);
								pCVar1 = CustomLogicPhysicsBuiltin.ComputePenetration(colliderA, pCVar1, rotationA, colliderB, positionB, rotationB);
								return (object)pCVar1;
							}
						}
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$<__CreateMethodBinding__AreCollidersOverlapping>b__13_0: clean
	private object Bindings_c____CreateMethodBinding__AreCollidersOverlapping_b__13_0(CustomLogicPhysicsBuiltin __c, Object[] __a)
	{
		CustomLogicColliderBuiltin colliderA;
		CustomLogicVector3Builtin positionA;
		CustomLogicQuaternionBuiltin rotationA;
		CustomLogicColliderBuiltin colliderB;
		CustomLogicVector3Builtin positionB;
		CustomLogicQuaternionBuiltin rotationB;
		object pIVar1;
		byte uStack_31;

		if (__a == null) {
			throw new NullReferenceException();
		}
		if ((int)__a.Length != 0) {
			pIVar1 = __a[0];
			colliderA = CustomLogicEvaluator.ConvertTo<CustomLogicColliderBuiltin>(pIVar1);
			if ((__a.Length & 0xfffffffe) != 0) {
				positionA = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[1]);
				if (2 < (uint)__a.Length) {
					rotationA = CustomLogicEvaluator.ConvertTo<CustomLogicQuaternionBuiltin>(__a[2]);
					if ((__a.Length & 0xfffffffc) != 0) {
						colliderB = CustomLogicEvaluator.ConvertTo<CustomLogicColliderBuiltin>(__a[3]);
						if (4 < (uint)__a.Length) {
							positionB = CustomLogicEvaluator.ConvertTo<CustomLogicVector3Builtin>(__a[4]);
							if (5 < (uint)__a.Length) {
								rotationB = CustomLogicEvaluator.ConvertTo<CustomLogicQuaternionBuiltin>(__a[5]);
								uStack_31 = CustomLogicPhysicsBuiltin.AreCollidersOverlapping(colliderA, positionA, rotationA, colliderB, positionB, rotationB);
								pIVar1 = (object)uStack_31;
								return pIVar1;
							}
						}
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// CustomLogic.CustomLogicPhysicsBuiltin.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new CustomLogicPhysicsBuiltin.c();
		CustomLogicPhysicsBuiltin.c.__9 =(CustomLogicPhysicsBuiltin.c)__this;
		return;
	}

	// CustomLogic.CustomLogicPhysicsBuiltin.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicPhysicsBuiltin.<>c$$<GetPhysicsLayerMask>b__1_0: 1 lines keep C-only constructs
	private int c__GetPhysicsLayerMask_b__1_0(object v)
	{
		int piVar1;

		if (v == null) {
			throw new NullReferenceException();
		}
		if ((v.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) {
			throw new InvalidCastException();
		}
		return *piVar1;
	}
}
